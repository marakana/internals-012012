/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_qualcomm_locationservice_QLocationLib */

#ifndef _Included_com_qualcomm_locationservice_QLocationLib
#define _Included_com_qualcomm_locationservice_QLocationLib
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_qualcomm_locationservice_QLocationLib
 * Method:    _getAllProviders
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_qualcomm_locationservice_QLocationLib__1getAllProviders
  (JNIEnv *, jclass);

/*
 * Class:     com_qualcomm_locationservice_QLocationLib
 * Method:    _getLastKnownLocation
 * Signature: (Ljava/lang/String;)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_qualcomm_locationservice_QLocationLib__1getLastKnownLocation
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
