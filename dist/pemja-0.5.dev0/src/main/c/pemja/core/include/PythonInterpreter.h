// Copyright 2022 Alibaba Group Holding Limited.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pemja_core_PythonInterpreter */

#ifndef _Included_pemja_core_PythonInterpreter
#define _Included_pemja_core_PythonInterpreter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    init
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_pemja_core_PythonInterpreter_init
  (JNIEnv *, jobject, jint);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    finalize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_finalize
  (JNIEnv *, jobject, jlong);

// ------------------------------ set()/get methods----------------------

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2Z
  (JNIEnv *, jobject, jlong, jstring, jboolean);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2I
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2J
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2D
  (JNIEnv *, jobject, jlong, jstring, jdouble);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    set
 * Signature: (JLjava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_set__JLjava_lang_String_2Ljava_lang_Object_2
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    get
 * Signature: (JLjava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_get
  (JNIEnv *, jobject, jlong, jstring, jclass);


// ------------------------------ invoke() methods----------------------

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeNoArgs
 * Signature: (JLjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeNoArgs
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgBoolean
 * Signature: (JLjava/lang/String;Z)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgBoolean
  (JNIEnv *, jobject, jlong, jstring, jboolean);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgInt
 * Signature: (JLjava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgInt
  (JNIEnv *, jobject, jlong, jstring, jint);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgLong
 * Signature: (JLjava/lang/String;J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgLong
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgDouble
 * Signature: (JLjava/lang/String;D)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgDouble
  (JNIEnv *, jobject, jlong, jstring, jdouble);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgString
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgString
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeOneArgObject
 * Signature: (JLjava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeOneArgObject
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invoke
 * Signature: (JLjava/lang/String;[Ljava/lang/Object;Ljava/util/Map;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invoke
  (JNIEnv *, jobject, jlong, jstring, jobjectArray, jobject);


#define Jcp_BEGIN_INVOKE_METHODS { \
                            const char* objname; \
                            const char* methodname; \
                            objname = JcpString_FromJString(env, jobjname); \
                            methodname = JcpString_FromJString(env, jmethodname); \

#define Jcp_END_INVOKE_METHODS JcpString_Clear(env, jobjname, objname);\
                               JcpString_Clear(env, jmethodname, methodname); \
                    }

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodNoArgs
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodNoArgs
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgBoolean
 * Signature: (JLjava/lang/String;Ljava/lang/String;Z)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgBoolean
  (JNIEnv *, jobject, jlong, jstring, jstring, jboolean);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgInt
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgInt
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgLong
 * Signature: (JLjava/lang/String;Ljava/lang/String;J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgLong
  (JNIEnv *, jobject, jlong, jstring, jstring, jlong);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgDouble
 * Signature: (JLjava/lang/String;Ljava/lang/String;D)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgDouble
  (JNIEnv *, jobject, jlong, jstring, jstring, jdouble);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgString
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgString
  (JNIEnv *, jobject, jlong, jstring, jstring, jstring);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethodOneArgObject
 * Signature: (JLjava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethodOneArgObject
  (JNIEnv *, jobject, jlong, jstring, jstring, jobject);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    invokeMethod
 * Signature: (JLjava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_pemja_core_PythonInterpreter_invokeMethod
  (JNIEnv *, jobject, jlong, jstring, jstring, jobjectArray);

/*
 * Class:     pemja_core_PythonInterpreter
 * Method:    exec
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pemja_core_PythonInterpreter_exec
  (JNIEnv *, jobject, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
