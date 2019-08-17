#include <jni.h>
#include <string>
#include "../jni/NaviteCode.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    //MyAddFunc(100,100);
    return env->NewStringUTF(hello.c_str());
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_restart_locojoy_untiyc_MainActivity_getString(JNIEnv *env, jclass type) {
    std::string helloworld = "hello world";
    return env->NewStringUTF(helloworld.c_str());
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

    jclass objclass=env->GetObjectClass(clsObj);

    methodId=env->GetMethodID(objclass,"getString","()Ljava/lang/String;");

    jstring jstr=(jstring)env->CallObjectMethod(clsObj,methodId,NULL);

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