//
// Created by zhangjian on 2019-07-08.
//

#include "com_example_mp3encoder_Mp3Encoder.h"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL Java_com_example_mp3encoder_encode(JNIEnv * env, jobject  obj) {
    LOGI("encoder  encode");
}