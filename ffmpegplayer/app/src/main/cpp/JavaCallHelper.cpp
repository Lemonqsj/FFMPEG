//
// Created by shangji.qi on 2019/2/26.
//

#include "JavaCallHelper.h"


JavaCallHelper::JavaCallHelper(JavaVM *javaVM, JNIEnv *env, jobject instance) {
    this->javaVM=javaVM;
    this->env=env;
    this->instance=env->NewGlobalRef(instance);


    jclass clazz=env->GetObjectClass(instance);
    this->errorMethodId=env->GetMethodID(clazz,"onError","(I)V");


}

JavaCallHelper::~JavaCallHelper() {

    env->DeleteGlobalRef(instance);
}


void JavaCallHelper::onError(int threadId, int errCode) {

    if (threadId==THREAD_MAIN){
        env->CallVoidMethod(instance,errorMethodId,errCode);
    } else if (threadId==THREAD_CHILD){
        JNIEnv *jniEnv;
        javaVM->AttachCurrentThread(&jniEnv,0);
        jniEnv->CallVoidMethod(instance,errorMethodId,errCode);

        javaVM->DetachCurrentThread();
    }
}