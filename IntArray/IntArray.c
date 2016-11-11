#include<stdio.h>
#include<jni.h>
#include "IntArray.h"

JNIEXPORT jint JNICALL Java_IntArray_sumArray
  (JNIEnv *env, jclass clazz, jintArray arr){
	  jint buf[10];
	  jint i,sum =0;
	  (*env)->GetIntArrayRegion(env,arr,0,10,buf);
	   for(i=0;i<10;i++){
		   sum += i;
	   }
	   return sum;
  }