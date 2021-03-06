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


#ifndef H_CLOWNFISH_TEST_TESTBYTEBUF
#define H_CLOWNFISH_TEST_TESTBYTEBUF 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testcfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTCFISH_TESTBYTEBUF
extern uint32_t testcfish_TestBB_IVARS_OFFSET;
typedef struct testcfish_TestByteBufIVARS testcfish_TestByteBufIVARS;
static CFISH_INLINE testcfish_TestByteBufIVARS*
testcfish_TestBB_IVARS(testcfish_TestByteBuf *self) {
   char *ptr = (char*)self + testcfish_TestBB_IVARS_OFFSET;
   return (testcfish_TestByteBufIVARS*)ptr;
}
#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestByteBufIVARS testcfish_TestByteBufIVARS
  #define TestBB_IVARS testcfish_TestBB_IVARS
#endif


#endif /* C_TESTCFISH_TESTBYTEBUF */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTCFISH_VISIBLE testcfish_TestByteBuf*
testcfish_TestBB_new(void);

void
TESTCFISH_TestBB_Run_IMP(testcfish_TestByteBuf* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTCFISH_TestBB_To_Host_t)(testcfish_TestByteBuf* self, void* vcache);

typedef cfish_Obj*
(*TESTCFISH_TestBB_Clone_t)(testcfish_TestByteBuf* self);

typedef bool
(*TESTCFISH_TestBB_Equals_t)(testcfish_TestByteBuf* self, cfish_Obj* other);

typedef int32_t
(*TESTCFISH_TestBB_Compare_To_t)(testcfish_TestByteBuf* self, cfish_Obj* other);

typedef void
(*TESTCFISH_TestBB_Destroy_t)(testcfish_TestByteBuf* self);

typedef cfish_String*
(*TESTCFISH_TestBB_To_String_t)(testcfish_TestByteBuf* self);

typedef void
(*TESTCFISH_TestBB_Run_t)(testcfish_TestByteBuf* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testcfish_TestBB_get_class(testcfish_TestByteBuf *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testcfish_TestBB_get_class_name(testcfish_TestByteBuf *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testcfish_TestBB_is_a(testcfish_TestByteBuf *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_To_Host_OFFSET;
static CFISH_INLINE void*
TESTCFISH_TestBB_To_Host(testcfish_TestByteBuf* self, void* vcache) {
    const TESTCFISH_TestBB_To_Host_t method = (TESTCFISH_TestBB_To_Host_t)cfish_obj_method(self, TESTCFISH_TestBB_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTCFISH_TestBB_Clone(testcfish_TestByteBuf* self) {
    const TESTCFISH_TestBB_Clone_t method = (TESTCFISH_TestBB_Clone_t)cfish_obj_method(self, TESTCFISH_TestBB_Clone_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_Equals_OFFSET;
static CFISH_INLINE bool
TESTCFISH_TestBB_Equals(testcfish_TestByteBuf* self, cfish_Obj* other) {
    const TESTCFISH_TestBB_Equals_t method = (TESTCFISH_TestBB_Equals_t)cfish_obj_method(self, TESTCFISH_TestBB_Equals_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTCFISH_TestBB_Compare_To(testcfish_TestByteBuf* self, cfish_Obj* other) {
    const TESTCFISH_TestBB_Compare_To_t method = (TESTCFISH_TestBB_Compare_To_t)cfish_obj_method(self, TESTCFISH_TestBB_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_Destroy_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestBB_Destroy(testcfish_TestByteBuf* self) {
    const TESTCFISH_TestBB_Destroy_t method = (TESTCFISH_TestBB_Destroy_t)cfish_obj_method(self, TESTCFISH_TestBB_Destroy_OFFSET);
    method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTCFISH_TestBB_To_String(testcfish_TestByteBuf* self) {
    const TESTCFISH_TestBB_To_String_t method = (TESTCFISH_TestBB_To_String_t)cfish_obj_method(self, TESTCFISH_TestBB_To_String_OFFSET);
    return method(self);
}

extern TESTCFISH_VISIBLE uint32_t TESTCFISH_TestBB_Run_OFFSET;
static CFISH_INLINE void
TESTCFISH_TestBB_Run(testcfish_TestByteBuf* self, cfish_TestBatchRunner* runner) {
    const TESTCFISH_TestBB_Run_t method = (TESTCFISH_TestBB_Run_t)cfish_obj_method(self, TESTCFISH_TestBB_Run_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTCFISH_USE_SHORT_NAMES
  #define TestByteBuf testcfish_TestByteBuf
  #define TESTBYTEBUF TESTCFISH_TESTBYTEBUF
  #define TestBB_new testcfish_TestBB_new
  #define TestBB_get_class testcfish_TestBB_get_class
  #define TestBB_get_class_name testcfish_TestBB_get_class_name
  #define TestBB_is_a testcfish_TestBB_is_a
  #define TestBB_Run_IMP TESTCFISH_TestBB_Run_IMP
  #define TestBB_To_Host TESTCFISH_TestBB_To_Host
  #define TestBB_To_Host_t TESTCFISH_TestBB_To_Host_t
  #define TestBB_Clone TESTCFISH_TestBB_Clone
  #define TestBB_Clone_t TESTCFISH_TestBB_Clone_t
  #define TestBB_Equals TESTCFISH_TestBB_Equals
  #define TestBB_Equals_t TESTCFISH_TestBB_Equals_t
  #define TestBB_Compare_To TESTCFISH_TestBB_Compare_To
  #define TestBB_Compare_To_t TESTCFISH_TestBB_Compare_To_t
  #define TestBB_Destroy TESTCFISH_TestBB_Destroy
  #define TestBB_Destroy_t TESTCFISH_TestBB_Destroy_t
  #define TestBB_To_String TESTCFISH_TestBB_To_String
  #define TestBB_To_String_t TESTCFISH_TestBB_To_String_t
  #define TestBB_Run TESTCFISH_TestBB_Run
  #define TestBB_Run_t TESTCFISH_TestBB_Run_t
#endif /* TESTCFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TEST_TESTBYTEBUF */




