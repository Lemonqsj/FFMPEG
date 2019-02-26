//
// Created by shangji.qi on 2019/2/26.
//

#ifndef FFMPEGPLAYER_JAVACALLHELPER_H
#define FFMPEGPLAYER_JAVACALLHELPER_H

#include "macro.h"
#include <jni.h>

class JavaCallHelper {

public:
    JavaCallHelper(JavaVM *javaVM,JNIEnv *env,jobject instance);
    ~JavaCallHelper();

    void onError(int threadId,int errCode);


private:
    JavaVM *javaVM;
    JNIEnv *env;
    jobject instance;
    jmethodID errorMethodId;
};


#endif //FFMPEGPLAYER_JAVACALLHELPER_H
