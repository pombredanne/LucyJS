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


#ifndef H_LUCY_TEST_SEARCH_TESTSORTSPEC
#define H_LUCY_TEST_SEARCH_TESTSORTSPEC 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSORTSPEC
extern uint32_t testlucy_TestSortSpec_IVARS_OFFSET;
typedef struct testlucy_TestSortSpecIVARS testlucy_TestSortSpecIVARS;
static CFISH_INLINE testlucy_TestSortSpecIVARS*
testlucy_TestSortSpec_IVARS(testlucy_TestSortSpec *self) {
   char *ptr = (char*)self + testlucy_TestSortSpec_IVARS_OFFSET;
   return (testlucy_TestSortSpecIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSortSpecIVARS testlucy_TestSortSpecIVARS
  #define TestSortSpec_IVARS testlucy_TestSortSpec_IVARS
#endif


#endif /* C_TESTLUCY_TESTSORTSPEC */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestSortSpec*
testlucy_TestSortSpec_new(void);

void
TESTLUCY_TestSortSpec_Run_IMP(testlucy_TestSortSpec* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestSortSpec_To_Host_t)(testlucy_TestSortSpec* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestSortSpec_Clone_t)(testlucy_TestSortSpec* self);

typedef bool
(*TESTLUCY_TestSortSpec_Equals_t)(testlucy_TestSortSpec* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestSortSpec_Compare_To_t)(testlucy_TestSortSpec* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestSortSpec_Destroy_t)(testlucy_TestSortSpec* self);

typedef cfish_String*
(*TESTLUCY_TestSortSpec_To_String_t)(testlucy_TestSortSpec* self);

typedef void
(*TESTLUCY_TestSortSpec_Run_t)(testlucy_TestSortSpec* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestSortSpec_get_class(testlucy_TestSortSpec *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestSortSpec_get_class_name(testlucy_TestSortSpec *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestSortSpec_is_a(testlucy_TestSortSpec *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestSortSpec_To_Host(testlucy_TestSortSpec* self, void* vcache) {
    const TESTLUCY_TestSortSpec_To_Host_t method = (TESTLUCY_TestSortSpec_To_Host_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestSortSpec_Clone(testlucy_TestSortSpec* self) {
    const TESTLUCY_TestSortSpec_Clone_t method = (TESTLUCY_TestSortSpec_Clone_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestSortSpec_Equals(testlucy_TestSortSpec* self, cfish_Obj* other) {
    const TESTLUCY_TestSortSpec_Equals_t method = (TESTLUCY_TestSortSpec_Equals_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestSortSpec_Compare_To(testlucy_TestSortSpec* self, cfish_Obj* other) {
    const TESTLUCY_TestSortSpec_Compare_To_t method = (TESTLUCY_TestSortSpec_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSortSpec_Destroy(testlucy_TestSortSpec* self) {
    const TESTLUCY_TestSortSpec_Destroy_t method = (TESTLUCY_TestSortSpec_Destroy_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestSortSpec_To_String(testlucy_TestSortSpec* self) {
    const TESTLUCY_TestSortSpec_To_String_t method = (TESTLUCY_TestSortSpec_To_String_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortSpec_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSortSpec_Run(testlucy_TestSortSpec* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestSortSpec_Run_t method = (TESTLUCY_TestSortSpec_Run_t)cfish_obj_method(self, TESTLUCY_TestSortSpec_Run_OFFSET);
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
  #define TestSortSpec testlucy_TestSortSpec
  #define TESTSORTSPEC TESTLUCY_TESTSORTSPEC
  #define TestSortSpec_new testlucy_TestSortSpec_new
  #define TestSortSpec_get_class testlucy_TestSortSpec_get_class
  #define TestSortSpec_get_class_name testlucy_TestSortSpec_get_class_name
  #define TestSortSpec_is_a testlucy_TestSortSpec_is_a
  #define TestSortSpec_Run_IMP TESTLUCY_TestSortSpec_Run_IMP
  #define TestSortSpec_To_Host TESTLUCY_TestSortSpec_To_Host
  #define TestSortSpec_To_Host_t TESTLUCY_TestSortSpec_To_Host_t
  #define TestSortSpec_Clone TESTLUCY_TestSortSpec_Clone
  #define TestSortSpec_Clone_t TESTLUCY_TestSortSpec_Clone_t
  #define TestSortSpec_Equals TESTLUCY_TestSortSpec_Equals
  #define TestSortSpec_Equals_t TESTLUCY_TestSortSpec_Equals_t
  #define TestSortSpec_Compare_To TESTLUCY_TestSortSpec_Compare_To
  #define TestSortSpec_Compare_To_t TESTLUCY_TestSortSpec_Compare_To_t
  #define TestSortSpec_Destroy TESTLUCY_TestSortSpec_Destroy
  #define TestSortSpec_Destroy_t TESTLUCY_TestSortSpec_Destroy_t
  #define TestSortSpec_To_String TESTLUCY_TestSortSpec_To_String
  #define TestSortSpec_To_String_t TESTLUCY_TestSortSpec_To_String_t
  #define TestSortSpec_Run TESTLUCY_TestSortSpec_Run
  #define TestSortSpec_Run_t TESTLUCY_TestSortSpec_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy\Plan\NumericType.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTREVERSETYPE
extern uint32_t testlucy_TestReverseType_IVARS_OFFSET;
typedef struct testlucy_TestReverseTypeIVARS testlucy_TestReverseTypeIVARS;
static CFISH_INLINE testlucy_TestReverseTypeIVARS*
testlucy_TestReverseType_IVARS(testlucy_TestReverseType *self) {
   char *ptr = (char*)self + testlucy_TestReverseType_IVARS_OFFSET;
   return (testlucy_TestReverseTypeIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestReverseTypeIVARS testlucy_TestReverseTypeIVARS
  #define TestReverseType_IVARS testlucy_TestReverseType_IVARS
#endif


#endif /* C_TESTLUCY_TESTREVERSETYPE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestReverseType*
testlucy_TestReverseType_new(void);

TESTLUCY_VISIBLE testlucy_TestReverseType*
testlucy_TestReverseType_init(testlucy_TestReverseType* self);

TESTLUCY_VISIBLE testlucy_TestReverseType*
testlucy_TestReverseType_init2(testlucy_TestReverseType* self, float boost, bool indexed, bool stored, bool sortable);

int32_t
TESTLUCY_TestReverseType_Compare_Values_IMP(testlucy_TestReverseType* self, cfish_Obj* a, cfish_Obj* b);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestReverseType_To_Host_t)(testlucy_TestReverseType* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestReverseType_Clone_t)(testlucy_TestReverseType* self);

typedef bool
(*TESTLUCY_TestReverseType_Equals_t)(testlucy_TestReverseType* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestReverseType_Compare_To_t)(testlucy_TestReverseType* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestReverseType_Destroy_t)(testlucy_TestReverseType* self);

typedef cfish_String*
(*TESTLUCY_TestReverseType_To_String_t)(testlucy_TestReverseType* self);

typedef void
(*TESTLUCY_TestReverseType_Set_Boost_t)(testlucy_TestReverseType* self, float boost);

typedef float
(*TESTLUCY_TestReverseType_Get_Boost_t)(testlucy_TestReverseType* self);

typedef void
(*TESTLUCY_TestReverseType_Set_Indexed_t)(testlucy_TestReverseType* self, bool indexed);

typedef bool
(*TESTLUCY_TestReverseType_Indexed_t)(testlucy_TestReverseType* self);

typedef void
(*TESTLUCY_TestReverseType_Set_Stored_t)(testlucy_TestReverseType* self, bool stored);

typedef bool
(*TESTLUCY_TestReverseType_Stored_t)(testlucy_TestReverseType* self);

typedef void
(*TESTLUCY_TestReverseType_Set_Sortable_t)(testlucy_TestReverseType* self, bool sortable);

typedef bool
(*TESTLUCY_TestReverseType_Sortable_t)(testlucy_TestReverseType* self);

typedef bool
(*TESTLUCY_TestReverseType_Binary_t)(testlucy_TestReverseType* self);

typedef int32_t
(*TESTLUCY_TestReverseType_Compare_Values_t)(testlucy_TestReverseType* self, cfish_Obj* a, cfish_Obj* b);

typedef lucy_TermStepper*
(*TESTLUCY_TestReverseType_Make_Term_Stepper_t)(testlucy_TestReverseType* self);

typedef int8_t
(*TESTLUCY_TestReverseType_Primitive_ID_t)(testlucy_TestReverseType* self);

typedef cfish_Hash*
(*TESTLUCY_TestReverseType_Dump_For_Schema_t)(testlucy_TestReverseType* self);

typedef cfish_Hash*
(*TESTLUCY_TestReverseType_Dump_t)(testlucy_TestReverseType* self);

typedef lucy_NumericType*
(*TESTLUCY_TestReverseType_Load_t)(testlucy_TestReverseType* self, cfish_Obj* dump);

typedef cfish_String*
(*TESTLUCY_TestReverseType_Specifier_t)(testlucy_TestReverseType* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestReverseType_get_class(testlucy_TestReverseType *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestReverseType_get_class_name(testlucy_TestReverseType *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestReverseType_is_a(testlucy_TestReverseType *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestReverseType_To_Host(testlucy_TestReverseType* self, void* vcache) {
    const TESTLUCY_TestReverseType_To_Host_t method = (TESTLUCY_TestReverseType_To_Host_t)cfish_obj_method(self, TESTLUCY_TestReverseType_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestReverseType_Clone(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Clone_t method = (TESTLUCY_TestReverseType_Clone_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestReverseType_Equals(testlucy_TestReverseType* self, cfish_Obj* other) {
    const TESTLUCY_TestReverseType_Equals_t method = (TESTLUCY_TestReverseType_Equals_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestReverseType_Compare_To(testlucy_TestReverseType* self, cfish_Obj* other) {
    const TESTLUCY_TestReverseType_Compare_To_t method = (TESTLUCY_TestReverseType_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestReverseType_Destroy(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Destroy_t method = (TESTLUCY_TestReverseType_Destroy_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestReverseType_To_String(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_To_String_t method = (TESTLUCY_TestReverseType_To_String_t)cfish_obj_method(self, TESTLUCY_TestReverseType_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Set_Boost_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestReverseType_Set_Boost(testlucy_TestReverseType* self, float boost) {
    const TESTLUCY_TestReverseType_Set_Boost_t method = (TESTLUCY_TestReverseType_Set_Boost_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Set_Boost_OFFSET);
    method(self, boost);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Get_Boost_OFFSET;
static CFISH_INLINE float
TESTLUCY_TestReverseType_Get_Boost(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Get_Boost_t method = (TESTLUCY_TestReverseType_Get_Boost_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Get_Boost_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Set_Indexed_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestReverseType_Set_Indexed(testlucy_TestReverseType* self, bool indexed) {
    const TESTLUCY_TestReverseType_Set_Indexed_t method = (TESTLUCY_TestReverseType_Set_Indexed_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Set_Indexed_OFFSET);
    method(self, indexed);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Indexed_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestReverseType_Indexed(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Indexed_t method = (TESTLUCY_TestReverseType_Indexed_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Indexed_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Set_Stored_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestReverseType_Set_Stored(testlucy_TestReverseType* self, bool stored) {
    const TESTLUCY_TestReverseType_Set_Stored_t method = (TESTLUCY_TestReverseType_Set_Stored_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Set_Stored_OFFSET);
    method(self, stored);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Stored_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestReverseType_Stored(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Stored_t method = (TESTLUCY_TestReverseType_Stored_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Stored_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Set_Sortable_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestReverseType_Set_Sortable(testlucy_TestReverseType* self, bool sortable) {
    const TESTLUCY_TestReverseType_Set_Sortable_t method = (TESTLUCY_TestReverseType_Set_Sortable_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Set_Sortable_OFFSET);
    method(self, sortable);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Sortable_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestReverseType_Sortable(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Sortable_t method = (TESTLUCY_TestReverseType_Sortable_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Sortable_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Binary_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestReverseType_Binary(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Binary_t method = (TESTLUCY_TestReverseType_Binary_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Binary_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Compare_Values_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestReverseType_Compare_Values(testlucy_TestReverseType* self, cfish_Obj* a, cfish_Obj* b) {
    const TESTLUCY_TestReverseType_Compare_Values_t method = (TESTLUCY_TestReverseType_Compare_Values_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Compare_Values_OFFSET);
    return method(self, a, b);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Make_Term_Stepper_OFFSET;
static CFISH_INLINE lucy_TermStepper*
TESTLUCY_TestReverseType_Make_Term_Stepper(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Make_Term_Stepper_t method = (TESTLUCY_TestReverseType_Make_Term_Stepper_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Make_Term_Stepper_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Primitive_ID_OFFSET;
static CFISH_INLINE int8_t
TESTLUCY_TestReverseType_Primitive_ID(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Primitive_ID_t method = (TESTLUCY_TestReverseType_Primitive_ID_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Primitive_ID_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Dump_For_Schema_OFFSET;
static CFISH_INLINE cfish_Hash*
TESTLUCY_TestReverseType_Dump_For_Schema(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Dump_For_Schema_t method = (TESTLUCY_TestReverseType_Dump_For_Schema_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Dump_For_Schema_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Dump_OFFSET;
static CFISH_INLINE cfish_Hash*
TESTLUCY_TestReverseType_Dump(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Dump_t method = (TESTLUCY_TestReverseType_Dump_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Dump_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Load_OFFSET;
static CFISH_INLINE lucy_NumericType*
TESTLUCY_TestReverseType_Load(testlucy_TestReverseType* self, cfish_Obj* dump) {
    const TESTLUCY_TestReverseType_Load_t method = (TESTLUCY_TestReverseType_Load_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Load_OFFSET);
    return method(self, dump);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestReverseType_Specifier_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestReverseType_Specifier(testlucy_TestReverseType* self) {
    const TESTLUCY_TestReverseType_Specifier_t method = (TESTLUCY_TestReverseType_Specifier_t)cfish_obj_method(self, TESTLUCY_TestReverseType_Specifier_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestReverseType testlucy_TestReverseType
  #define TESTREVERSETYPE TESTLUCY_TESTREVERSETYPE
  #define TestReverseType_new testlucy_TestReverseType_new
  #define TestReverseType_init testlucy_TestReverseType_init
  #define TestReverseType_init2 testlucy_TestReverseType_init2
  #define TestReverseType_get_class testlucy_TestReverseType_get_class
  #define TestReverseType_get_class_name testlucy_TestReverseType_get_class_name
  #define TestReverseType_is_a testlucy_TestReverseType_is_a
  #define TestReverseType_Compare_Values_IMP TESTLUCY_TestReverseType_Compare_Values_IMP
  #define TestReverseType_To_Host TESTLUCY_TestReverseType_To_Host
  #define TestReverseType_To_Host_t TESTLUCY_TestReverseType_To_Host_t
  #define TestReverseType_Clone TESTLUCY_TestReverseType_Clone
  #define TestReverseType_Clone_t TESTLUCY_TestReverseType_Clone_t
  #define TestReverseType_Equals TESTLUCY_TestReverseType_Equals
  #define TestReverseType_Equals_t TESTLUCY_TestReverseType_Equals_t
  #define TestReverseType_Compare_To TESTLUCY_TestReverseType_Compare_To
  #define TestReverseType_Compare_To_t TESTLUCY_TestReverseType_Compare_To_t
  #define TestReverseType_Destroy TESTLUCY_TestReverseType_Destroy
  #define TestReverseType_Destroy_t TESTLUCY_TestReverseType_Destroy_t
  #define TestReverseType_To_String TESTLUCY_TestReverseType_To_String
  #define TestReverseType_To_String_t TESTLUCY_TestReverseType_To_String_t
  #define TestReverseType_Set_Boost TESTLUCY_TestReverseType_Set_Boost
  #define TestReverseType_Set_Boost_t TESTLUCY_TestReverseType_Set_Boost_t
  #define TestReverseType_Get_Boost TESTLUCY_TestReverseType_Get_Boost
  #define TestReverseType_Get_Boost_t TESTLUCY_TestReverseType_Get_Boost_t
  #define TestReverseType_Set_Indexed TESTLUCY_TestReverseType_Set_Indexed
  #define TestReverseType_Set_Indexed_t TESTLUCY_TestReverseType_Set_Indexed_t
  #define TestReverseType_Indexed TESTLUCY_TestReverseType_Indexed
  #define TestReverseType_Indexed_t TESTLUCY_TestReverseType_Indexed_t
  #define TestReverseType_Set_Stored TESTLUCY_TestReverseType_Set_Stored
  #define TestReverseType_Set_Stored_t TESTLUCY_TestReverseType_Set_Stored_t
  #define TestReverseType_Stored TESTLUCY_TestReverseType_Stored
  #define TestReverseType_Stored_t TESTLUCY_TestReverseType_Stored_t
  #define TestReverseType_Set_Sortable TESTLUCY_TestReverseType_Set_Sortable
  #define TestReverseType_Set_Sortable_t TESTLUCY_TestReverseType_Set_Sortable_t
  #define TestReverseType_Sortable TESTLUCY_TestReverseType_Sortable
  #define TestReverseType_Sortable_t TESTLUCY_TestReverseType_Sortable_t
  #define TestReverseType_Binary TESTLUCY_TestReverseType_Binary
  #define TestReverseType_Binary_t TESTLUCY_TestReverseType_Binary_t
  #define TestReverseType_Compare_Values TESTLUCY_TestReverseType_Compare_Values
  #define TestReverseType_Compare_Values_t TESTLUCY_TestReverseType_Compare_Values_t
  #define TestReverseType_Make_Term_Stepper TESTLUCY_TestReverseType_Make_Term_Stepper
  #define TestReverseType_Make_Term_Stepper_t TESTLUCY_TestReverseType_Make_Term_Stepper_t
  #define TestReverseType_Primitive_ID TESTLUCY_TestReverseType_Primitive_ID
  #define TestReverseType_Primitive_ID_t TESTLUCY_TestReverseType_Primitive_ID_t
  #define TestReverseType_Dump_For_Schema TESTLUCY_TestReverseType_Dump_For_Schema
  #define TestReverseType_Dump_For_Schema_t TESTLUCY_TestReverseType_Dump_For_Schema_t
  #define TestReverseType_Dump TESTLUCY_TestReverseType_Dump
  #define TestReverseType_Dump_t TESTLUCY_TestReverseType_Dump_t
  #define TestReverseType_Load TESTLUCY_TestReverseType_Load
  #define TestReverseType_Load_t TESTLUCY_TestReverseType_Load_t
  #define TestReverseType_Specifier TESTLUCY_TestReverseType_Specifier
  #define TestReverseType_Specifier_t TESTLUCY_TestReverseType_Specifier_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_SEARCH_TESTSORTSPEC */




