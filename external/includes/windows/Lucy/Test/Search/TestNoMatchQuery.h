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


#ifndef H_LUCY_TEST_SEARCH_TESTNOMATCHQUERY
#define H_LUCY_TEST_SEARCH_TESTNOMATCHQUERY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTNOMATCHQUERY
extern uint32_t testlucy_TestNoMatchQuery_IVARS_OFFSET;
typedef struct testlucy_TestNoMatchQueryIVARS testlucy_TestNoMatchQueryIVARS;
static CFISH_INLINE testlucy_TestNoMatchQueryIVARS*
testlucy_TestNoMatchQuery_IVARS(testlucy_TestNoMatchQuery *self) {
   char *ptr = (char*)self + testlucy_TestNoMatchQuery_IVARS_OFFSET;
   return (testlucy_TestNoMatchQueryIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestNoMatchQueryIVARS testlucy_TestNoMatchQueryIVARS
  #define TestNoMatchQuery_IVARS testlucy_TestNoMatchQuery_IVARS
#endif


#endif /* C_TESTLUCY_TESTNOMATCHQUERY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestNoMatchQuery*
testlucy_TestNoMatchQuery_new(void);

void
TESTLUCY_TestNoMatchQuery_Run_IMP(testlucy_TestNoMatchQuery* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestNoMatchQuery_To_Host_t)(testlucy_TestNoMatchQuery* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestNoMatchQuery_Clone_t)(testlucy_TestNoMatchQuery* self);

typedef bool
(*TESTLUCY_TestNoMatchQuery_Equals_t)(testlucy_TestNoMatchQuery* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestNoMatchQuery_Compare_To_t)(testlucy_TestNoMatchQuery* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestNoMatchQuery_Destroy_t)(testlucy_TestNoMatchQuery* self);

typedef cfish_String*
(*TESTLUCY_TestNoMatchQuery_To_String_t)(testlucy_TestNoMatchQuery* self);

typedef void
(*TESTLUCY_TestNoMatchQuery_Run_t)(testlucy_TestNoMatchQuery* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestNoMatchQuery_get_class(testlucy_TestNoMatchQuery *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestNoMatchQuery_get_class_name(testlucy_TestNoMatchQuery *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestNoMatchQuery_is_a(testlucy_TestNoMatchQuery *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestNoMatchQuery_To_Host(testlucy_TestNoMatchQuery* self, void* vcache) {
    const TESTLUCY_TestNoMatchQuery_To_Host_t method = (TESTLUCY_TestNoMatchQuery_To_Host_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestNoMatchQuery_Clone(testlucy_TestNoMatchQuery* self) {
    const TESTLUCY_TestNoMatchQuery_Clone_t method = (TESTLUCY_TestNoMatchQuery_Clone_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestNoMatchQuery_Equals(testlucy_TestNoMatchQuery* self, cfish_Obj* other) {
    const TESTLUCY_TestNoMatchQuery_Equals_t method = (TESTLUCY_TestNoMatchQuery_Equals_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestNoMatchQuery_Compare_To(testlucy_TestNoMatchQuery* self, cfish_Obj* other) {
    const TESTLUCY_TestNoMatchQuery_Compare_To_t method = (TESTLUCY_TestNoMatchQuery_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNoMatchQuery_Destroy(testlucy_TestNoMatchQuery* self) {
    const TESTLUCY_TestNoMatchQuery_Destroy_t method = (TESTLUCY_TestNoMatchQuery_Destroy_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestNoMatchQuery_To_String(testlucy_TestNoMatchQuery* self) {
    const TESTLUCY_TestNoMatchQuery_To_String_t method = (TESTLUCY_TestNoMatchQuery_To_String_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNoMatchQuery_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNoMatchQuery_Run(testlucy_TestNoMatchQuery* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestNoMatchQuery_Run_t method = (TESTLUCY_TestNoMatchQuery_Run_t)cfish_obj_method(self, TESTLUCY_TestNoMatchQuery_Run_OFFSET);
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
  #define TestNoMatchQuery testlucy_TestNoMatchQuery
  #define TESTNOMATCHQUERY TESTLUCY_TESTNOMATCHQUERY
  #define TestNoMatchQuery_new testlucy_TestNoMatchQuery_new
  #define TestNoMatchQuery_get_class testlucy_TestNoMatchQuery_get_class
  #define TestNoMatchQuery_get_class_name testlucy_TestNoMatchQuery_get_class_name
  #define TestNoMatchQuery_is_a testlucy_TestNoMatchQuery_is_a
  #define TestNoMatchQuery_Run_IMP TESTLUCY_TestNoMatchQuery_Run_IMP
  #define TestNoMatchQuery_To_Host TESTLUCY_TestNoMatchQuery_To_Host
  #define TestNoMatchQuery_To_Host_t TESTLUCY_TestNoMatchQuery_To_Host_t
  #define TestNoMatchQuery_Clone TESTLUCY_TestNoMatchQuery_Clone
  #define TestNoMatchQuery_Clone_t TESTLUCY_TestNoMatchQuery_Clone_t
  #define TestNoMatchQuery_Equals TESTLUCY_TestNoMatchQuery_Equals
  #define TestNoMatchQuery_Equals_t TESTLUCY_TestNoMatchQuery_Equals_t
  #define TestNoMatchQuery_Compare_To TESTLUCY_TestNoMatchQuery_Compare_To
  #define TestNoMatchQuery_Compare_To_t TESTLUCY_TestNoMatchQuery_Compare_To_t
  #define TestNoMatchQuery_Destroy TESTLUCY_TestNoMatchQuery_Destroy
  #define TestNoMatchQuery_Destroy_t TESTLUCY_TestNoMatchQuery_Destroy_t
  #define TestNoMatchQuery_To_String TESTLUCY_TestNoMatchQuery_To_String
  #define TestNoMatchQuery_To_String_t TESTLUCY_TestNoMatchQuery_To_String_t
  #define TestNoMatchQuery_Run TESTLUCY_TestNoMatchQuery_Run
  #define TestNoMatchQuery_Run_t TESTLUCY_TestNoMatchQuery_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_SEARCH_TESTNOMATCHQUERY */




