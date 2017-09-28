/*
 * ***********************************************
 * 
 * !!!! DO NOT EDIT !!!!
 * 
 * This file was auto-generated by cfc.
 * 
 * ***********************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTEMMER
#define H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTEMMER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSNOWBALLSTEMMER
extern uint32_t testlucy_TestSnowStemmer_IVARS_OFFSET;
typedef struct testlucy_TestSnowballStemmerIVARS testlucy_TestSnowballStemmerIVARS;
static CFISH_INLINE testlucy_TestSnowballStemmerIVARS*
testlucy_TestSnowStemmer_IVARS(testlucy_TestSnowballStemmer *self) {
   char *ptr = (char*)self + testlucy_TestSnowStemmer_IVARS_OFFSET;
   return (testlucy_TestSnowballStemmerIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSnowballStemmerIVARS testlucy_TestSnowballStemmerIVARS
  #define TestSnowStemmer_IVARS testlucy_TestSnowStemmer_IVARS
#endif


#endif /* C_TESTLUCY_TESTSNOWBALLSTEMMER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestSnowballStemmer*
testlucy_TestSnowStemmer_new(void);

void
TESTLUCY_TestSnowStemmer_Run_IMP(testlucy_TestSnowballStemmer* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestSnowStemmer_To_Host_t)(testlucy_TestSnowballStemmer* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestSnowStemmer_Clone_t)(testlucy_TestSnowballStemmer* self);

typedef bool
(*TESTLUCY_TestSnowStemmer_Equals_t)(testlucy_TestSnowballStemmer* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestSnowStemmer_Compare_To_t)(testlucy_TestSnowballStemmer* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestSnowStemmer_Destroy_t)(testlucy_TestSnowballStemmer* self);

typedef cfish_String*
(*TESTLUCY_TestSnowStemmer_To_String_t)(testlucy_TestSnowballStemmer* self);

typedef void
(*TESTLUCY_TestSnowStemmer_Run_t)(testlucy_TestSnowballStemmer* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestSnowStemmer_get_class(testlucy_TestSnowballStemmer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestSnowStemmer_get_class_name(testlucy_TestSnowballStemmer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestSnowStemmer_is_a(testlucy_TestSnowballStemmer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestSnowStemmer_To_Host(testlucy_TestSnowballStemmer* self, void* vcache) {
    const TESTLUCY_TestSnowStemmer_To_Host_t method = (TESTLUCY_TestSnowStemmer_To_Host_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestSnowStemmer_Clone(testlucy_TestSnowballStemmer* self) {
    const TESTLUCY_TestSnowStemmer_Clone_t method = (TESTLUCY_TestSnowStemmer_Clone_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestSnowStemmer_Equals(testlucy_TestSnowballStemmer* self, cfish_Obj* other) {
    const TESTLUCY_TestSnowStemmer_Equals_t method = (TESTLUCY_TestSnowStemmer_Equals_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestSnowStemmer_Compare_To(testlucy_TestSnowballStemmer* self, cfish_Obj* other) {
    const TESTLUCY_TestSnowStemmer_Compare_To_t method = (TESTLUCY_TestSnowStemmer_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSnowStemmer_Destroy(testlucy_TestSnowballStemmer* self) {
    const TESTLUCY_TestSnowStemmer_Destroy_t method = (TESTLUCY_TestSnowStemmer_Destroy_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestSnowStemmer_To_String(testlucy_TestSnowballStemmer* self) {
    const TESTLUCY_TestSnowStemmer_To_String_t method = (TESTLUCY_TestSnowStemmer_To_String_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSnowStemmer_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSnowStemmer_Run(testlucy_TestSnowballStemmer* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestSnowStemmer_Run_t method = (TESTLUCY_TestSnowStemmer_Run_t)cfish_obj_method(self, TESTLUCY_TestSnowStemmer_Run_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSnowballStemmer testlucy_TestSnowballStemmer
  #define TESTSNOWBALLSTEMMER TESTLUCY_TESTSNOWBALLSTEMMER
  #define TestSnowStemmer_new testlucy_TestSnowStemmer_new
  #define TestSnowStemmer_get_class testlucy_TestSnowStemmer_get_class
  #define TestSnowStemmer_get_class_name testlucy_TestSnowStemmer_get_class_name
  #define TestSnowStemmer_is_a testlucy_TestSnowStemmer_is_a
  #define TestSnowStemmer_Run_IMP TESTLUCY_TestSnowStemmer_Run_IMP
  #define TestSnowStemmer_To_Host TESTLUCY_TestSnowStemmer_To_Host
  #define TestSnowStemmer_To_Host_t TESTLUCY_TestSnowStemmer_To_Host_t
  #define TestSnowStemmer_Clone TESTLUCY_TestSnowStemmer_Clone
  #define TestSnowStemmer_Clone_t TESTLUCY_TestSnowStemmer_Clone_t
  #define TestSnowStemmer_Equals TESTLUCY_TestSnowStemmer_Equals
  #define TestSnowStemmer_Equals_t TESTLUCY_TestSnowStemmer_Equals_t
  #define TestSnowStemmer_Compare_To TESTLUCY_TestSnowStemmer_Compare_To
  #define TestSnowStemmer_Compare_To_t TESTLUCY_TestSnowStemmer_Compare_To_t
  #define TestSnowStemmer_Destroy TESTLUCY_TestSnowStemmer_Destroy
  #define TestSnowStemmer_Destroy_t TESTLUCY_TestSnowStemmer_Destroy_t
  #define TestSnowStemmer_To_String TESTLUCY_TestSnowStemmer_To_String
  #define TestSnowStemmer_To_String_t TESTLUCY_TestSnowStemmer_To_String_t
  #define TestSnowStemmer_Run TESTLUCY_TestSnowStemmer_Run
  #define TestSnowStemmer_Run_t TESTLUCY_TestSnowStemmer_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_ANALYSIS_TESTSNOWBALLSTEMMER */



