#include <jni.h>
#include <string>



extern "C"{


#include <libavcodec/avcodec.h>
}


extern "C"
JNIEXPORT void JNICALL
Java_kc_com_ffmpegplayer_FfmpegPlayer_prepare(JNIEnv *env, jobject instance, jstring datasouce_) {
    const char *datasouce = env->GetStringUTFChars( datasouce_, 0);

    // TODO

    env->ReleaseStringUTFChars(datasouce_, datasouce);
}


