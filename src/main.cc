#include <nan.h>
#include "sample.h"

void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {

  exports->Set(Nan::New("sum").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(Sum)->GetFunction());

  exports->Set(Nan::New("callback").ToLocalChecked(),
               Nan::New<v8::FunctionTemplate>(RunCallback)->GetFunction());
}

NODE_MODULE(addon, Init);
