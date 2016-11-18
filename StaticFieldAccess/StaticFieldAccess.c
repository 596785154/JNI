#include <jni.h>
#include <stdio.h>
#include "StaticFieldAccess.h"

JNIEXPORT void JNICALL Java_StaticFieldAccess_accessField
  (JNIEnv *env, jobject obj){
	  jfieldID fid ;
	  jint si;
	  
	  jclass clazz = (*env)->GetObjectClass(env,obj);
	  printf("In C:\n");
	  
	  fid = (*env)->GetStaticFieldID(env,clazz,"si","I");
	  if(fid == NULL){
		  return;
	  }
	  si = (*env)->GetStaticIntField(env,clazz,fid);
	  printf(" StaticFieldAccess.si = %d\n",si);
	  (*env)->SetStaticIntField(env,clazz,fid,200);
  }