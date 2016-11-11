#include<jni.h>
#include<stdio.h>
#include"Prompt.h"
JNIEXPORT jstring JNICALL Java_Prompt_getLine
  (JNIEnv *env, jclass clazz, jstring prompt){
	char buf[128];
	const jbyte *str;
	str = (*env)->GetStringUTFChars(env,prompt,NULL);
	if(NULL ==str){
		return NULL;
	}
	printf("%s",str);
	(*env)->ReleaseStringUTFChars(env,prompt,str);
	printf("\n");
	scanf("%s",buf);
	return (*env)->NewStringUTF(env,buf);
  }