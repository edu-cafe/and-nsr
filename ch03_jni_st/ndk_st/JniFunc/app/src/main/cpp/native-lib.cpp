#include <jni.h>
#include <string>
#include <android/log.h>

extern "C"

#define	LOG_TAG 	"SOO"
#define	LOGI(...)	__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

/*
 * Class:     com_soo_jnifunc_MainActivity
 * Method:    createJniObject
 * Signature: ()Lcom/soo/jnifunc/JniTest;
 */
JNIEXPORT jobject JNICALL Java_com_soo_jnifunc_MainActivity_createJniObject
        (JNIEnv *env, jclass clazz)
{
	
............


}
