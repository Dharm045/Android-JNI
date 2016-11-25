#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_dharam_hello_1jni1_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    // TODO
    return (*env)->NewStringUTF(env, "Hello From Jni");
}