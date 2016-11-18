#include<stdio.h>
#include<jni.h>
#include "InstanceFieldAccess.h"

JNIEXPORT void JNICALL Java_InstanceFieldAccess_accessField
  (JNIEnv *env, jobject obj){
	  jfieldID fid;
	  jstring jstr;
	  const char *str;
	  
	  jclass clazz = (*env)->GetObjectClass(env,obj);
	  printf("In C:\n");
	  fid = (*env)->GetFieldID(env,clazz,"s","Ljava/lang/String;");
	  
	  if(fid == NULL){
		  return ;
	  }
	  jstr = (*env)->GetObjectField(env,obj,fid);
	  str = (*env)->GetStringUTFChars(env,jstr,NULL);
	  if(str == NULL){
		  return ;
	  }
	  printf(" c.s = \"%s\"\n",str);
	  (*env)->ReleaseStringUTFChars(env,jstr,str);
	  jstr = (*env)->NewStringUTF(env,"123");
	  if(jstr == NULL){
		  return ;
	  }
	  (*env)->SetObjectField(env,obj,fid,jstr);
  }