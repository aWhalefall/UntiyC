#include <jni.h>
#include <string>

#include<android/log.h>
#include <iostream>
//#include "NaviteCode.cpp"
#include "Singleton.cpp"

#define TAG "myDemo-jni" // 这个是自定义的LOG的标识
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型
JavaVM *jvm;
extern "C" JNIEXPORT jstring

JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


// JNI_OnLoad函数实现
JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    __android_log_print(ANDROID_LOG_INFO, "native", "Jni_OnLoad");

    Singleton::()->setJavaJvm(vm);

    return JNI_VERSION_1_4;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_getString(JNIEnv *env, jclass type) {
    jint helloworld = MyAddFunc(1, 2);
    char buf[18];
    sprintf(buf, "%d", helloworld);
    return (*env).NewStringUTF(buf);
}


/**
 *  java 向 c 传递对象
 *  c 调用 java的对象的方法
 */
extern "C"
JNIEXPORT jstring JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_showDialogFromJavaObj(JNIEnv *env, jclass type,
                                                                   jobject clsObj) {
    jmethodID methodId;

    jclass objclass = env->GetObjectClass(clsObj);

    methodId = env->GetMethodID(objclass, "getString", "()Ljava/lang/String;");

    jstring jstr = (jstring) env->CallObjectMethod(clsObj, methodId, NULL);

    return jstr;

}
extern "C"
JNIEXPORT void JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_callMethod1(JNIEnv *env, jobject instance) {

    // TODO
}
extern "C"
JNIEXPORT void JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_callMethod2(JNIEnv *env, jobject instance) {

    // TODO


}
extern "C"
JNIEXPORT void JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_callMethod3(JNIEnv *env, jobject instance) {

    // TODO

}
extern "C"
JNIEXPORT void JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_callMethod4(JNIEnv *env, jobject instance) {

    // TODO

}
extern "C"
JNIEXPORT void JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_callMethod5(JNIEnv *env, jobject instance) {

    // TODO
}
