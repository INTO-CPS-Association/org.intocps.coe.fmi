/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_intocps_fmi_jnifmuapi_NativeFmu */

#ifndef _Included_org_intocps_fmi_jnifmuapi_NativeFmu
#define _Included_org_intocps_fmi_jnifmuapi_NativeFmu
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    nGetTypesPlatform
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_intocps_fmi_jnifmuapi_NativeFmu_nGetTypesPlatform(JNIEnv *, jobject,
                                                           jlong);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    nGetVersion
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_intocps_fmi_jnifmuapi_NativeFmu_nGetVersion(JNIEnv *, jobject, jlong);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    ninstantiate
 * Signature:
 * (JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLorg/intocps/fmi/jnifmuapi/NativeFmu/ICallback;)J
 */
JNIEXPORT jlong JNICALL Java_org_intocps_fmi_jnifmuapi_NativeFmu_ninstantiate(
    JNIEnv *, jobject, jlong, jstring, jstring, jstring, jboolean, jboolean,
    jobject);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    nLoadLibrary
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_intocps_fmi_jnifmuapi_NativeFmu_nLoadLibrary(
    JNIEnv *, jobject, jstring);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    nUnLoad
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_org_intocps_fmi_jnifmuapi_NativeFmu_nUnLoad(JNIEnv *, jobject, jlong);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    callbackTest
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_intocps_fmi_jnifmuapi_NativeFmu_callbackTest(
    JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    throwExceptionTest
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_intocps_fmi_jnifmuapi_NativeFmu_throwExceptionTest(JNIEnv *, jobject);

/*
 * Class:     org_intocps_fmi_jnifmuapi_NativeFmu
 * Method:    getJniApiVersion
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL
Java_org_intocps_fmi_jnifmuapi_NativeFmu_getJniApiVersion(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
