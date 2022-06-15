
#include <stdint.h>
#include <string>
#include <memory>
#include <jni.h>
#include <iostream>

#include "VBCAM.h"
#ifdef TRACE
#include "verilated_fst_c.h"
#endif
#include "VBCAM__Syms.h"

using namespace std;

class ISignalAccess{
public:
  virtual ~ISignalAccess() {}

  virtual void getAU8(JNIEnv *env, jbyteArray value) {}
  virtual void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {}
  virtual void setAU8(JNIEnv *env, jbyteArray value, int length) {}
  virtual void setAU8_mem(JNIEnv *env, jbyteArray value, int length, size_t index) {}

  virtual uint64_t getU64() = 0;
  virtual uint64_t getU64_mem(size_t index) = 0;
  virtual void setU64(uint64_t value) = 0;
  virtual void setU64_mem(uint64_t value, size_t index) = 0;
};

class  CDataSignalAccess : public ISignalAccess{
public:
    CData *raw;
    CDataSignalAccess(CData *raw) : raw(raw){}
    CDataSignalAccess(CData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  SDataSignalAccess : public ISignalAccess{
public:
    SData *raw;
    SDataSignalAccess(SData *raw) : raw(raw){}
    SDataSignalAccess(SData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  IDataSignalAccess : public ISignalAccess{
public:
    IData *raw;
    IDataSignalAccess(IData *raw) : raw(raw){}
    IDataSignalAccess(IData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  QDataSignalAccess : public ISignalAccess{
public:
    QData *raw;
    QDataSignalAccess(QData *raw) : raw(raw){}
    QDataSignalAccess(QData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};

class  WDataSignalAccess : public ISignalAccess{
public:
    WData *raw;
    uint32_t width;
    uint32_t wordsCount;
    bool sint;

    WDataSignalAccess(WData *raw, uint32_t width, bool sint) : 
      raw(raw), width(width), wordsCount((width+31)/32), sint(sint) {}

    uint64_t getU64_mem(size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      return mem_el[0] + (((uint64_t)mem_el[1]) << 32);
    }

    uint64_t getU64() { return getU64_mem(0); }

    void setU64_mem(uint64_t value, size_t index)  {
      WData *mem_el = &(raw[index*wordsCount]);
      mem_el[0] = value;
      mem_el[1] = value >> 32;
      uint32_t padding = ((value & 0x8000000000000000l) && sint) ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 2;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }

      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setU64(uint64_t value)  {
      setU64_mem(value, 0);
    }
    
    void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      uint32_t byteCount = wordsCount*4;
      uint32_t shift = 32-(width % 32);
      uint32_t backup = mem_el[wordsCount-1];
      uint8_t values[byteCount + !sint];
      if(sint && shift != 32) mem_el[wordsCount-1] = (((int32_t)backup) << shift) >> shift;
      for(uint32_t idx = 0;idx < byteCount;idx++){
        values[idx + !sint] = ((uint8_t*)mem_el)[byteCount-idx-1];
      }
      (env)->SetByteArrayRegion ( value, 0, byteCount + !sint, reinterpret_cast<jbyte*>(values));
      mem_el[wordsCount-1] = backup;
    }
  
    void getAU8(JNIEnv *env, jbyteArray value) {
      getAU8_mem(env, value, 0);
    }

    void setAU8_mem(JNIEnv *env, jbyteArray jvalue, int length, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      jbyte value[length];
      (env)->GetByteArrayRegion( jvalue, 0, length, value);
      uint32_t padding = (value[0] & 0x80 && sint) != 0 ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 0;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }
      uint32_t capedLength = length > 4*wordsCount ? 4*wordsCount : length;
      for(uint32_t idx = 0;idx < capedLength;idx++){
        ((uint8_t*)mem_el)[idx] = value[length-idx-1];
      }
      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setAU8(JNIEnv *env, jbyteArray jvalue, int length) {
      setAU8_mem(env, jvalue, length, 0);
    }
};

class Wrapper_2;
thread_local Wrapper_2 *simHandle2;

#include <chrono>
using namespace std::chrono;

class Wrapper_2{
public:
    uint64_t time;
    high_resolution_clock::time_point lastFlushAt;
    uint32_t timeCheck;
    bool waveEnabled;
    VBCAM top;
    ISignalAccess *signalAccess[42];
    #ifdef TRACE
	  VerilatedFstC tfp;
	  #endif
    string name;

    Wrapper_2(const char * name){
      simHandle2 = this;
      time = 0;
      timeCheck = 0;
      lastFlushAt = high_resolution_clock::now();
      waveEnabled = true;
      signalAccess[0] = new CDataSignalAccess( top.BCAM->STiRAM_symbol0[0] );
      signalAccess[1] = new CDataSignalAccess( top.BCAM->STiRAM_symbol1[0] );
      signalAccess[2] = new CDataSignalAccess( top.BCAM->STiRAM_symbol2[0] );
      signalAccess[3] = new CDataSignalAccess( top.BCAM->STiRAM_symbol3[0] );
      signalAccess[4] = new CDataSignalAccess( top.BCAM->SegRAM_symbol0[0] );
      signalAccess[5] = new CDataSignalAccess( top.BCAM->SegRAM_symbol1[0] );
      signalAccess[6] = new CDataSignalAccess( top.BCAM->SegWr );
      signalAccess[7] = new CDataSignalAccess( top.BCAM->STiWr );
      signalAccess[8] = new CDataSignalAccess( top.BCAM->halfRateMPatt_valid );
      signalAccess[9] = new CDataSignalAccess( top.BCAM->halfRateMPatt_ready );
      signalAccess[10] = new CDataSignalAccess( top.BCAM->halfRateMPatt_payload_mPatt );
      signalAccess[11] = new CDataSignalAccess( top.BCAM->mPattTwoPipe_0 );
      signalAccess[12] = new CDataSignalAccess( top.BCAM->mPattTwoPipe_1 );
      signalAccess[13] = new CDataSignalAccess( top.BCAM->mPattTwoPipe_2 );
      signalAccess[14] = new CDataSignalAccess( top.BCAM->mIndcStream_valid );
      signalAccess[15] = new CDataSignalAccess( top.BCAM->mIndcStream_ready );
      signalAccess[16] = new CDataSignalAccess( top.BCAM->mIndcStream_payload );
      signalAccess[17] = new CDataSignalAccess( top.BCAM->SegAddr );
      signalAccess[18] = new CDataSignalAccess( top.BCAM->rMatch );
      signalAccess[19] = new CDataSignalAccess( top.BCAM->STiWMask );
      signalAccess[20] = new CDataSignalAccess( top.BCAM->RegWMask );
      signalAccess[21] = new CDataSignalAccess( top.BCAM->RDataForWrite );
      signalAccess[22] = new CDataSignalAccess( top.BCAM->PattToRmMuxOutput );
      signalAccess[23] = new CDataSignalAccess( top.BCAM->STiWPatt );
      signalAccess[24] = new CDataSignalAccess( top.BCAM->ocurrIndcResults_0 );
      signalAccess[25] = new CDataSignalAccess( top.BCAM->ocurrIndcResults_1 );
      signalAccess[26] = new CDataSignalAccess( top.BCAM->MaskingControl );
      signalAccess[27] = new CDataSignalAccess( top.BCAM->notErase );
      signalAccess[28] = new CDataSignalAccess( top.io_wStream_valid );
      signalAccess[29] = new CDataSignalAccess( top.io_wStream_ready );
      signalAccess[30] = new CDataSignalAccess( top.io_wStream_payload_wAddr );
      signalAccess[31] = new CDataSignalAccess( top.io_wStream_payload_wPatt );
      signalAccess[32] = new CDataSignalAccess( top.io_wStream_payload_wr );
      signalAccess[33] = new CDataSignalAccess( top.io_mPattStream_valid );
      signalAccess[34] = new CDataSignalAccess( top.io_mPattStream_ready );
      signalAccess[35] = new CDataSignalAccess( top.io_mPattStream_payload_mPatt );
      signalAccess[36] = new CDataSignalAccess( top.io_mAddrStream_valid );
      signalAccess[37] = new CDataSignalAccess( top.io_mAddrStream_ready );
      signalAccess[38] = new CDataSignalAccess( top.io_mAddrStream_payload_mAddr );
      signalAccess[39] = new CDataSignalAccess( top.io_mAddrStream_payload_matchFlag );
      signalAccess[40] = new CDataSignalAccess( top.clk );
      signalAccess[41] = new CDataSignalAccess( top.reset );

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/home/lqx/IdeaProjects/BCAM/./simWorkspace/BCAM_1/") + name + ".fst").c_str());
      #endif
      this->name = name;
    }

    virtual ~Wrapper_2(){
      for(int idx = 0;idx < 42;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      if(waveEnabled) tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
      #ifdef COVERAGE
      VerilatedCov::write((("/home/lqx/IdeaProjects/BCAM/./simWorkspace/BCAM_1/") + name + ".dat").c_str());
      #endif
    }

};

double sc_time_stamp () {
  return simHandle2->time;
}


#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdint.h>

#define API __attribute__((visibility("default")))


JNIEXPORT Wrapper_2 * API JNICALL Java_wrapper_1verilator_VerilatorNative_newHandle_12
  (JNIEnv * env, jobject obj, jstring name, jint seedValue){
    #if defined(_WIN32) && !defined(__CYGWIN__)
    srand(seedValue);
    #else
    srand48(seedValue);
    #endif
    Verilated::randReset(2);
    const char* ch = env->GetStringUTFChars(name, 0);
    Wrapper_2 *handle = new Wrapper_2(ch);
    env->ReleaseStringUTFChars(name, ch);
    return handle;
}

JNIEXPORT jboolean API JNICALL Java_wrapper_1verilator_VerilatorNative_eval_12
  (JNIEnv *, jobject, Wrapper_2 *handle){
   handle->top.eval();
   return Verilated::gotFinish();
}


JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_sleep_12
  (JNIEnv *, jobject, Wrapper_2 *handle, uint64_t cycles){
  #ifdef TRACE
  if(handle->waveEnabled) {
    handle->tfp.dump((vluint64_t)handle->time);
  }
  handle->timeCheck++;
  if(handle->timeCheck > 10000){
    handle->timeCheck = 0;
    high_resolution_clock::time_point timeNow = high_resolution_clock::now();
    duration<double, std::milli> time_span = timeNow - handle->lastFlushAt;
    if(time_span.count() > 1e3){
      handle->lastFlushAt = timeNow;
      handle->tfp.flush();
    }
  }
  #endif
  handle->time += cycles;
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64_12
  (JNIEnv *, jobject, Wrapper_2 *handle, int id){
  return handle->signalAccess[id]->getU64();
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64mem_12
  (JNIEnv *, jobject, Wrapper_2 *handle, int id, uint64_t index){
  return handle->signalAccess[id]->getU64_mem(index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64_12
  (JNIEnv *, jobject, Wrapper_2 *handle, int id, uint64_t value){
  handle->signalAccess[id]->setU64(value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64mem_12
  (JNIEnv *, jobject, Wrapper_2 *handle, int id, uint64_t value, uint64_t index){
  handle->signalAccess[id]->setU64_mem(value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_deleteHandle_12
  (JNIEnv *, jobject, Wrapper_2 * handle){
  delete handle;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8_12
  (JNIEnv * env, jobject obj, Wrapper_2 * handle, jint id, jbyteArray value){
  handle->signalAccess[id]->getAU8(env, value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8mem_12
  (JNIEnv * env, jobject obj, Wrapper_2 * handle, jint id, jbyteArray value, uint64_t index){
  handle->signalAccess[id]->getAU8_mem(env, value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8_12
  (JNIEnv * env, jobject obj, Wrapper_2 * handle, jint id, jbyteArray value, jint length){
  handle->signalAccess[id]->setAU8(env, value, length);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8mem_12
  (JNIEnv * env, jobject obj, Wrapper_2 * handle, jint id, jbyteArray value, jint length, uint64_t index){
  handle->signalAccess[id]->setAU8_mem(env, value, length, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_enableWave_12
  (JNIEnv *, jobject, Wrapper_2 * handle){
  handle->waveEnabled = true;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_disableWave_12
  (JNIEnv *, jobject, Wrapper_2 * handle){
  handle->waveEnabled = false;
}

#ifdef __cplusplus
}
#endif
     