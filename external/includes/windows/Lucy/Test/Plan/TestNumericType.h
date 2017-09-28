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


#ifndef H_LUCY_TEST_PLAN_TESTNUMERICTYPE
#define H_LUCY_TEST_PLAN_TESTNUMERICTYPE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTNUMERICTYPE
extern uint32_t testlucy_TestNumericType_IVARS_OFFSET;
typedef struct testlucy_TestNumericTypeIVARS testlucy_TestNumericTypeIVARS;
static CFISH_INLINE testlucy_TestNumericTypeIVARS*
testlucy_TestNumericType_IVARS(testlucy_TestNumericType *self) {
   char *ptr = (char*)self + testlucy_TestNumericType_IVARS_OFFSET;
   return (testlucy_TestNumericTypeIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestNumericTypeIVARS testlucy_TestNumericTypeIVARS
  #define TestNumericType_IVARS testlucy_TestNumericType_IVARS
#endif


#endif /* C_TESTLUCY_TESTNUMERICTYPE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestNumericType*
testlucy_TestNumericType_new(void);

void
TESTLUCY_TestNumericType_Run_IMP(testlucy_TestNumericType* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestNumericType_To_Host_t)(testlucy_TestNumericType* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestNumericType_Clone_t)(testlucy_TestNumericType* self);

typedef bool
(*TESTLUCY_TestNumericType_Equals_t)(testlucy_TestNumericType* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestNumericType_Compare_To_t)(testlucy_TestNumericType* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestNumericType_Destroy_t)(testlucy_TestNumericType* self);

typedef cfish_String*
(*TESTLUCY_TestNumericType_To_String_t)(testlucy_TestNumericType* self);

typedef void
(*TESTLUCY_TestNumericType_Run_t)(testlucy_TestNumericType* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestNumericType_get_class(testlucy_TestNumericType *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestNumericType_get_class_name(testlucy_TestNumericType *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestNumericType_is_a(testlucy_TestNumericType *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestNumericType_To_Host(testlucy_TestNumericType* self, void* vcache) {
    const TESTLUCY_TestNumericType_To_Host_t method = (TESTLUCY_TestNumericType_To_Host_t)cfish_obj_method(self, TESTLUCY_TestNumericType_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestNumericType_Clone(testlucy_TestNumericType* self) {
    const TESTLUCY_TestNumericType_Clone_t method = (TESTLUCY_TestNumericType_Clone_t)cfish_obj_method(self, TESTLUCY_TestNumericType_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestNumericType_Equals(testlucy_TestNumericType* self, cfish_Obj* other) {
    const TESTLUCY_TestNumericType_Equals_t method = (TESTLUCY_TestNumericType_Equals_t)cfish_obj_method(self, TESTLUCY_TestNumericType_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestNumericType_Compare_To(testlucy_TestNumericType* self, cfish_Obj* other) {
    const TESTLUCY_TestNumericType_Compare_To_t method = (TESTLUCY_TestNumericType_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestNumericType_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNumericType_Destroy(testlucy_TestNumericType* self) {
    const TESTLUCY_TestNumericType_Destroy_t method = (TESTLUCY_TestNumericType_Destroy_t)cfish_obj_method(self, TESTLUCY_TestNumericType_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestNumericType_To_String(testlucy_TestNumericType* self) {
    const TESTLUCY_TestNumericType_To_String_t method = (TESTLUCY_TestNumericType_To_String_t)cfish_obj_method(self, TESTLUCY_TestNumericType_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestNumericType_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestNumericType_Run(testlucy_TestNumericType* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestNumericType_Run_t method = (TESTLUCY_TestNumericType_Run_t)cfish_obj_method(self, TESTLUCY_TestNumericType_Run_OFFSET);
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
  #define TestNumericType testlucy_TestNumericType
  #define TESTNUMERICTYPE TESTLUCY_TESTNUMERICTYPE
  #define TestNumericType_new testlucy_TestNumericType_new
  #define TestNumericType_get_class testlucy_TestNumericType_get_class
  #define TestNumericType_get_class_name testlucy_TestNumericType_get_class_name
  #define TestNumericType_is_a testlucy_TestNumericType_is_a
  #define TestNumericType_Run_IMP TESTLUCY_TestNumericType_Run_IMP
  #define TestNumericType_To_Host TESTLUCY_TestNumericType_To_Host
  #define TestNumericType_To_Host_t TESTLUCY_TestNumericType_To_Host_t
  #define TestNumericType_Clone TESTLUCY_TestNumericType_Clone
  #define TestNumericType_Clone_t TESTLUCY_TestNumericType_Clone_t
  #define TestNumericType_Equals TESTLUCY_TestNumericType_Equals
  #define TestNumericType_Equals_t TESTLUCY_TestNumericType_Equals_t
  #define TestNumericType_Compare_To TESTLUCY_TestNumericType_Compare_To
  #define TestNumericType_Compare_To_t TESTLUCY_TestNumericType_Compare_To_t
  #define TestNumericType_Destroy TESTLUCY_TestNumericType_Destroy
  #define TestNumericType_Destroy_t TESTLUCY_TestNumericType_Destroy_t
  #define TestNumericType_To_String TESTLUCY_TestNumericType_To_String
  #define TestNumericType_To_String_t TESTLUCY_TestNumericType_To_String_t
  #define TestNumericType_Run TESTLUCY_TestNumericType_Run
  #define TestNumericType_Run_t TESTLUCY_TestNumericType_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_PLAN_TESTNUMERICTYPE */



