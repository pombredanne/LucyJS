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


#ifndef H_CLOWNFISH_TESTHARNESS_TESTFORMATTER
#define H_CLOWNFISH_TESTHARNESS_TESTFORMATTER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "cfish_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_TESTFORMATTER
extern uint32_t cfish_TestFormatter_IVARS_OFFSET;
typedef struct cfish_TestFormatterIVARS cfish_TestFormatterIVARS;
static CFISH_INLINE cfish_TestFormatterIVARS*
cfish_TestFormatter_IVARS(cfish_TestFormatter *self) {
   char *ptr = (char*)self + cfish_TestFormatter_IVARS_OFFSET;
   return (cfish_TestFormatterIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatterIVARS cfish_TestFormatterIVARS
  #define TestFormatter_IVARS cfish_TestFormatter_IVARS
#endif

struct cfish_TestFormatter {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
};

#endif /* C_CFISH_TESTFORMATTER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_TestFormatter*
cfish_TestFormatter_init(cfish_TestFormatter* self);

CFISH_VISIBLE void
cfish_TestFormatter_test_result(cfish_TestFormatter* self, bool pass, uint32_t test_num, const char* fmt, ...);

CFISH_VISIBLE void
cfish_TestFormatter_test_comment(cfish_TestFormatter* self, const char* fmt, ...);

CFISH_VISIBLE void
cfish_TestFormatter_batch_comment(cfish_TestFormatter* self, const char* fmt, ...);

void
CFISH_TestFormatter_Batch_Prologue_IMP(cfish_TestFormatter* self, cfish_TestBatch* batch, uint32_t num_planned);

void
CFISH_TestFormatter_VTest_Result_IMP(cfish_TestFormatter* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

void
CFISH_TestFormatter_VTest_Skip_IMP(cfish_TestFormatter* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

void
CFISH_TestFormatter_VTest_Comment_IMP(cfish_TestFormatter* self, const char* fmt, va_list args);

void
CFISH_TestFormatter_VBatch_Comment_IMP(cfish_TestFormatter* self, const char* fmt, va_list args);

void
CFISH_TestFormatter_Summary_IMP(cfish_TestFormatter* self, cfish_TestSuiteRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_TestFormatter_To_Host_t)(cfish_TestFormatter* self, void* vcache);

typedef cfish_Obj*
(*CFISH_TestFormatter_Clone_t)(cfish_TestFormatter* self);

typedef bool
(*CFISH_TestFormatter_Equals_t)(cfish_TestFormatter* self, cfish_Obj* other);

typedef int32_t
(*CFISH_TestFormatter_Compare_To_t)(cfish_TestFormatter* self, cfish_Obj* other);

typedef void
(*CFISH_TestFormatter_Destroy_t)(cfish_TestFormatter* self);

typedef cfish_String*
(*CFISH_TestFormatter_To_String_t)(cfish_TestFormatter* self);

typedef void
(*CFISH_TestFormatter_Batch_Prologue_t)(cfish_TestFormatter* self, cfish_TestBatch* batch, uint32_t num_planned);

typedef void
(*CFISH_TestFormatter_VTest_Result_t)(cfish_TestFormatter* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatter_VTest_Skip_t)(cfish_TestFormatter* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatter_VTest_Comment_t)(cfish_TestFormatter* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatter_VBatch_Comment_t)(cfish_TestFormatter* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatter_Summary_t)(cfish_TestFormatter* self, cfish_TestSuiteRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_TestFormatter_get_class(cfish_TestFormatter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_TestFormatter_get_class_name(cfish_TestFormatter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_TestFormatter_is_a(cfish_TestFormatter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_TestFormatter_To_Host(cfish_TestFormatter* self, void* vcache) {
    const CFISH_TestFormatter_To_Host_t method = (CFISH_TestFormatter_To_Host_t)cfish_obj_method(self, CFISH_TestFormatter_To_Host_OFFSET);
    return method(self, vcache);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_TestFormatter_Clone(cfish_TestFormatter* self) {
    const CFISH_TestFormatter_Clone_t method = (CFISH_TestFormatter_Clone_t)cfish_obj_method(self, CFISH_TestFormatter_Clone_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_TestFormatter_Equals(cfish_TestFormatter* self, cfish_Obj* other) {
    const CFISH_TestFormatter_Equals_t method = (CFISH_TestFormatter_Equals_t)cfish_obj_method(self, CFISH_TestFormatter_Equals_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_TestFormatter_Compare_To(cfish_TestFormatter* self, cfish_Obj* other) {
    const CFISH_TestFormatter_Compare_To_t method = (CFISH_TestFormatter_Compare_To_t)cfish_obj_method(self, CFISH_TestFormatter_Compare_To_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_Destroy(cfish_TestFormatter* self) {
    const CFISH_TestFormatter_Destroy_t method = (CFISH_TestFormatter_Destroy_t)cfish_obj_method(self, CFISH_TestFormatter_Destroy_OFFSET);
    method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_TestFormatter_To_String(cfish_TestFormatter* self) {
    const CFISH_TestFormatter_To_String_t method = (CFISH_TestFormatter_To_String_t)cfish_obj_method(self, CFISH_TestFormatter_To_String_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Batch_Prologue_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_Batch_Prologue(cfish_TestFormatter* self, cfish_TestBatch* batch, uint32_t num_planned) {
    const CFISH_TestFormatter_Batch_Prologue_t method = (CFISH_TestFormatter_Batch_Prologue_t)cfish_obj_method(self, CFISH_TestFormatter_Batch_Prologue_OFFSET);
    method(self, batch, num_planned);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_VTest_Result_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_VTest_Result(cfish_TestFormatter* self, bool pass, uint32_t test_num, const char* fmt, va_list args) {
    const CFISH_TestFormatter_VTest_Result_t method = (CFISH_TestFormatter_VTest_Result_t)cfish_obj_method(self, CFISH_TestFormatter_VTest_Result_OFFSET);
    method(self, pass, test_num, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_VTest_Skip_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_VTest_Skip(cfish_TestFormatter* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args) {
    const CFISH_TestFormatter_VTest_Skip_t method = (CFISH_TestFormatter_VTest_Skip_t)cfish_obj_method(self, CFISH_TestFormatter_VTest_Skip_OFFSET);
    method(self, test_num, num_skipped, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_VTest_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_VTest_Comment(cfish_TestFormatter* self, const char* fmt, va_list args) {
    const CFISH_TestFormatter_VTest_Comment_t method = (CFISH_TestFormatter_VTest_Comment_t)cfish_obj_method(self, CFISH_TestFormatter_VTest_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_VBatch_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_VBatch_Comment(cfish_TestFormatter* self, const char* fmt, va_list args) {
    const CFISH_TestFormatter_VBatch_Comment_t method = (CFISH_TestFormatter_VBatch_Comment_t)cfish_obj_method(self, CFISH_TestFormatter_VBatch_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatter_Summary_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatter_Summary(cfish_TestFormatter* self, cfish_TestSuiteRunner* runner) {
    const CFISH_TestFormatter_Summary_t method = (CFISH_TestFormatter_Summary_t)cfish_obj_method(self, CFISH_TestFormatter_Summary_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Cfish_TestFormatter_Batch_Prologue_OVERRIDE NULL
#define Cfish_TestFormatter_VTest_Result_OVERRIDE NULL
#define Cfish_TestFormatter_VTest_Skip_OVERRIDE NULL
#define Cfish_TestFormatter_VTest_Comment_OVERRIDE NULL
#define Cfish_TestFormatter_VBatch_Comment_OVERRIDE NULL
#define Cfish_TestFormatter_Summary_OVERRIDE NULL
#else
void
Cfish_TestFormatter_Batch_Prologue_OVERRIDE(cfish_TestFormatter* self, cfish_TestBatch* batch, uint32_t num_planned);
void
Cfish_TestFormatter_VTest_Result_OVERRIDE(cfish_TestFormatter* self, bool pass, uint32_t test_num, const char* fmt, va_list args);
void
Cfish_TestFormatter_VTest_Skip_OVERRIDE(cfish_TestFormatter* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);
void
Cfish_TestFormatter_VTest_Comment_OVERRIDE(cfish_TestFormatter* self, const char* fmt, va_list args);
void
Cfish_TestFormatter_VBatch_Comment_OVERRIDE(cfish_TestFormatter* self, const char* fmt, va_list args);
void
Cfish_TestFormatter_Summary_OVERRIDE(cfish_TestFormatter* self, cfish_TestSuiteRunner* runner);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatter cfish_TestFormatter
  #define TESTFORMATTER CFISH_TESTFORMATTER
  #define TestFormatter_init cfish_TestFormatter_init
  #define TestFormatter_test_result cfish_TestFormatter_test_result
  #define TestFormatter_test_comment cfish_TestFormatter_test_comment
  #define TestFormatter_batch_comment cfish_TestFormatter_batch_comment
  #define TestFormatter_get_class cfish_TestFormatter_get_class
  #define TestFormatter_get_class_name cfish_TestFormatter_get_class_name
  #define TestFormatter_is_a cfish_TestFormatter_is_a
  #define TestFormatter_Batch_Prologue_IMP CFISH_TestFormatter_Batch_Prologue_IMP
  #define TestFormatter_VTest_Result_IMP CFISH_TestFormatter_VTest_Result_IMP
  #define TestFormatter_VTest_Skip_IMP CFISH_TestFormatter_VTest_Skip_IMP
  #define TestFormatter_VTest_Comment_IMP CFISH_TestFormatter_VTest_Comment_IMP
  #define TestFormatter_VBatch_Comment_IMP CFISH_TestFormatter_VBatch_Comment_IMP
  #define TestFormatter_Summary_IMP CFISH_TestFormatter_Summary_IMP
  #define TestFormatter_To_Host CFISH_TestFormatter_To_Host
  #define TestFormatter_To_Host_t CFISH_TestFormatter_To_Host_t
  #define TestFormatter_Clone CFISH_TestFormatter_Clone
  #define TestFormatter_Clone_t CFISH_TestFormatter_Clone_t
  #define TestFormatter_Equals CFISH_TestFormatter_Equals
  #define TestFormatter_Equals_t CFISH_TestFormatter_Equals_t
  #define TestFormatter_Compare_To CFISH_TestFormatter_Compare_To
  #define TestFormatter_Compare_To_t CFISH_TestFormatter_Compare_To_t
  #define TestFormatter_Destroy CFISH_TestFormatter_Destroy
  #define TestFormatter_Destroy_t CFISH_TestFormatter_Destroy_t
  #define TestFormatter_To_String CFISH_TestFormatter_To_String
  #define TestFormatter_To_String_t CFISH_TestFormatter_To_String_t
  #define TestFormatter_Batch_Prologue CFISH_TestFormatter_Batch_Prologue
  #define TestFormatter_Batch_Prologue_t CFISH_TestFormatter_Batch_Prologue_t
  #define TestFormatter_VTest_Result CFISH_TestFormatter_VTest_Result
  #define TestFormatter_VTest_Result_t CFISH_TestFormatter_VTest_Result_t
  #define TestFormatter_VTest_Skip CFISH_TestFormatter_VTest_Skip
  #define TestFormatter_VTest_Skip_t CFISH_TestFormatter_VTest_Skip_t
  #define TestFormatter_VTest_Comment CFISH_TestFormatter_VTest_Comment
  #define TestFormatter_VTest_Comment_t CFISH_TestFormatter_VTest_Comment_t
  #define TestFormatter_VBatch_Comment CFISH_TestFormatter_VBatch_Comment
  #define TestFormatter_VBatch_Comment_t CFISH_TestFormatter_VBatch_Comment_t
  #define TestFormatter_Summary CFISH_TestFormatter_Summary
  #define TestFormatter_Summary_t CFISH_TestFormatter_Summary_t
#endif /* CFISH_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestFormatter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_TESTFORMATTERCF
extern uint32_t cfish_TestFormatterCF_IVARS_OFFSET;
typedef struct cfish_TestFormatterCFIVARS cfish_TestFormatterCFIVARS;
static CFISH_INLINE cfish_TestFormatterCFIVARS*
cfish_TestFormatterCF_IVARS(cfish_TestFormatterCF *self) {
   char *ptr = (char*)self + cfish_TestFormatterCF_IVARS_OFFSET;
   return (cfish_TestFormatterCFIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatterCFIVARS cfish_TestFormatterCFIVARS
  #define TestFormatterCF_IVARS cfish_TestFormatterCF_IVARS
#endif

struct cfish_TestFormatterCF {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
};

#endif /* C_CFISH_TESTFORMATTERCF */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_TestFormatterCF*
cfish_TestFormatterCF_new(void);

CFISH_VISIBLE cfish_TestFormatterCF*
cfish_TestFormatterCF_init(cfish_TestFormatterCF* self);

void
CFISH_TestFormatterCF_Batch_Prologue_IMP(cfish_TestFormatterCF* self, cfish_TestBatch* batch, uint32_t num_planned);

void
CFISH_TestFormatterCF_VTest_Result_IMP(cfish_TestFormatterCF* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

void
CFISH_TestFormatterCF_VTest_Skip_IMP(cfish_TestFormatterCF* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

void
CFISH_TestFormatterCF_VTest_Comment_IMP(cfish_TestFormatterCF* self, const char* fmt, va_list args);

void
CFISH_TestFormatterCF_VBatch_Comment_IMP(cfish_TestFormatterCF* self, const char* fmt, va_list args);

void
CFISH_TestFormatterCF_Summary_IMP(cfish_TestFormatterCF* self, cfish_TestSuiteRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_TestFormatterCF_To_Host_t)(cfish_TestFormatterCF* self, void* vcache);

typedef cfish_Obj*
(*CFISH_TestFormatterCF_Clone_t)(cfish_TestFormatterCF* self);

typedef bool
(*CFISH_TestFormatterCF_Equals_t)(cfish_TestFormatterCF* self, cfish_Obj* other);

typedef int32_t
(*CFISH_TestFormatterCF_Compare_To_t)(cfish_TestFormatterCF* self, cfish_Obj* other);

typedef void
(*CFISH_TestFormatterCF_Destroy_t)(cfish_TestFormatterCF* self);

typedef cfish_String*
(*CFISH_TestFormatterCF_To_String_t)(cfish_TestFormatterCF* self);

typedef void
(*CFISH_TestFormatterCF_Batch_Prologue_t)(cfish_TestFormatterCF* self, cfish_TestBatch* batch, uint32_t num_planned);

typedef void
(*CFISH_TestFormatterCF_VTest_Result_t)(cfish_TestFormatterCF* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterCF_VTest_Skip_t)(cfish_TestFormatterCF* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterCF_VTest_Comment_t)(cfish_TestFormatterCF* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterCF_VBatch_Comment_t)(cfish_TestFormatterCF* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterCF_Summary_t)(cfish_TestFormatterCF* self, cfish_TestSuiteRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_TestFormatterCF_get_class(cfish_TestFormatterCF *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_TestFormatterCF_get_class_name(cfish_TestFormatterCF *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_TestFormatterCF_is_a(cfish_TestFormatterCF *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_TestFormatterCF_To_Host(cfish_TestFormatterCF* self, void* vcache) {
    const CFISH_TestFormatterCF_To_Host_t method = (CFISH_TestFormatterCF_To_Host_t)cfish_obj_method(self, CFISH_TestFormatterCF_To_Host_OFFSET);
    return method(self, vcache);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_TestFormatterCF_Clone(cfish_TestFormatterCF* self) {
    const CFISH_TestFormatterCF_Clone_t method = (CFISH_TestFormatterCF_Clone_t)cfish_obj_method(self, CFISH_TestFormatterCF_Clone_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_TestFormatterCF_Equals(cfish_TestFormatterCF* self, cfish_Obj* other) {
    const CFISH_TestFormatterCF_Equals_t method = (CFISH_TestFormatterCF_Equals_t)cfish_obj_method(self, CFISH_TestFormatterCF_Equals_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_TestFormatterCF_Compare_To(cfish_TestFormatterCF* self, cfish_Obj* other) {
    const CFISH_TestFormatterCF_Compare_To_t method = (CFISH_TestFormatterCF_Compare_To_t)cfish_obj_method(self, CFISH_TestFormatterCF_Compare_To_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_Destroy(cfish_TestFormatterCF* self) {
    const CFISH_TestFormatterCF_Destroy_t method = (CFISH_TestFormatterCF_Destroy_t)cfish_obj_method(self, CFISH_TestFormatterCF_Destroy_OFFSET);
    method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_TestFormatterCF_To_String(cfish_TestFormatterCF* self) {
    const CFISH_TestFormatterCF_To_String_t method = (CFISH_TestFormatterCF_To_String_t)cfish_obj_method(self, CFISH_TestFormatterCF_To_String_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Batch_Prologue_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_Batch_Prologue(cfish_TestFormatterCF* self, cfish_TestBatch* batch, uint32_t num_planned) {
    const CFISH_TestFormatterCF_Batch_Prologue_t method = (CFISH_TestFormatterCF_Batch_Prologue_t)cfish_obj_method(self, CFISH_TestFormatterCF_Batch_Prologue_OFFSET);
    method(self, batch, num_planned);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_VTest_Result_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_VTest_Result(cfish_TestFormatterCF* self, bool pass, uint32_t test_num, const char* fmt, va_list args) {
    const CFISH_TestFormatterCF_VTest_Result_t method = (CFISH_TestFormatterCF_VTest_Result_t)cfish_obj_method(self, CFISH_TestFormatterCF_VTest_Result_OFFSET);
    method(self, pass, test_num, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_VTest_Skip_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_VTest_Skip(cfish_TestFormatterCF* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args) {
    const CFISH_TestFormatterCF_VTest_Skip_t method = (CFISH_TestFormatterCF_VTest_Skip_t)cfish_obj_method(self, CFISH_TestFormatterCF_VTest_Skip_OFFSET);
    method(self, test_num, num_skipped, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_VTest_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_VTest_Comment(cfish_TestFormatterCF* self, const char* fmt, va_list args) {
    const CFISH_TestFormatterCF_VTest_Comment_t method = (CFISH_TestFormatterCF_VTest_Comment_t)cfish_obj_method(self, CFISH_TestFormatterCF_VTest_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_VBatch_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_VBatch_Comment(cfish_TestFormatterCF* self, const char* fmt, va_list args) {
    const CFISH_TestFormatterCF_VBatch_Comment_t method = (CFISH_TestFormatterCF_VBatch_Comment_t)cfish_obj_method(self, CFISH_TestFormatterCF_VBatch_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterCF_Summary_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterCF_Summary(cfish_TestFormatterCF* self, cfish_TestSuiteRunner* runner) {
    const CFISH_TestFormatterCF_Summary_t method = (CFISH_TestFormatterCF_Summary_t)cfish_obj_method(self, CFISH_TestFormatterCF_Summary_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatterCF cfish_TestFormatterCF
  #define TESTFORMATTERCF CFISH_TESTFORMATTERCF
  #define TestFormatterCF_new cfish_TestFormatterCF_new
  #define TestFormatterCF_init cfish_TestFormatterCF_init
  #define TestFormatterCF_get_class cfish_TestFormatterCF_get_class
  #define TestFormatterCF_get_class_name cfish_TestFormatterCF_get_class_name
  #define TestFormatterCF_is_a cfish_TestFormatterCF_is_a
  #define TestFormatterCF_Batch_Prologue_IMP CFISH_TestFormatterCF_Batch_Prologue_IMP
  #define TestFormatterCF_VTest_Result_IMP CFISH_TestFormatterCF_VTest_Result_IMP
  #define TestFormatterCF_VTest_Skip_IMP CFISH_TestFormatterCF_VTest_Skip_IMP
  #define TestFormatterCF_VTest_Comment_IMP CFISH_TestFormatterCF_VTest_Comment_IMP
  #define TestFormatterCF_VBatch_Comment_IMP CFISH_TestFormatterCF_VBatch_Comment_IMP
  #define TestFormatterCF_Summary_IMP CFISH_TestFormatterCF_Summary_IMP
  #define TestFormatterCF_To_Host CFISH_TestFormatterCF_To_Host
  #define TestFormatterCF_To_Host_t CFISH_TestFormatterCF_To_Host_t
  #define TestFormatterCF_Clone CFISH_TestFormatterCF_Clone
  #define TestFormatterCF_Clone_t CFISH_TestFormatterCF_Clone_t
  #define TestFormatterCF_Equals CFISH_TestFormatterCF_Equals
  #define TestFormatterCF_Equals_t CFISH_TestFormatterCF_Equals_t
  #define TestFormatterCF_Compare_To CFISH_TestFormatterCF_Compare_To
  #define TestFormatterCF_Compare_To_t CFISH_TestFormatterCF_Compare_To_t
  #define TestFormatterCF_Destroy CFISH_TestFormatterCF_Destroy
  #define TestFormatterCF_Destroy_t CFISH_TestFormatterCF_Destroy_t
  #define TestFormatterCF_To_String CFISH_TestFormatterCF_To_String
  #define TestFormatterCF_To_String_t CFISH_TestFormatterCF_To_String_t
  #define TestFormatterCF_Batch_Prologue CFISH_TestFormatterCF_Batch_Prologue
  #define TestFormatterCF_Batch_Prologue_t CFISH_TestFormatterCF_Batch_Prologue_t
  #define TestFormatterCF_VTest_Result CFISH_TestFormatterCF_VTest_Result
  #define TestFormatterCF_VTest_Result_t CFISH_TestFormatterCF_VTest_Result_t
  #define TestFormatterCF_VTest_Skip CFISH_TestFormatterCF_VTest_Skip
  #define TestFormatterCF_VTest_Skip_t CFISH_TestFormatterCF_VTest_Skip_t
  #define TestFormatterCF_VTest_Comment CFISH_TestFormatterCF_VTest_Comment
  #define TestFormatterCF_VTest_Comment_t CFISH_TestFormatterCF_VTest_Comment_t
  #define TestFormatterCF_VBatch_Comment CFISH_TestFormatterCF_VBatch_Comment
  #define TestFormatterCF_VBatch_Comment_t CFISH_TestFormatterCF_VBatch_Comment_t
  #define TestFormatterCF_Summary CFISH_TestFormatterCF_Summary
  #define TestFormatterCF_Summary_t CFISH_TestFormatterCF_Summary_t
#endif /* CFISH_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestFormatter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_CFISH_TESTFORMATTERTAP
extern uint32_t cfish_TestFormatterTAP_IVARS_OFFSET;
typedef struct cfish_TestFormatterTAPIVARS cfish_TestFormatterTAPIVARS;
static CFISH_INLINE cfish_TestFormatterTAPIVARS*
cfish_TestFormatterTAP_IVARS(cfish_TestFormatterTAP *self) {
   char *ptr = (char*)self + cfish_TestFormatterTAP_IVARS_OFFSET;
   return (cfish_TestFormatterTAPIVARS*)ptr;
}
#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatterTAPIVARS cfish_TestFormatterTAPIVARS
  #define TestFormatterTAP_IVARS cfish_TestFormatterTAP_IVARS
#endif

struct cfish_TestFormatterTAP {
    CFISH_OBJ_HEAD
    cfish_Class* klass;
};

#endif /* C_CFISH_TESTFORMATTERTAP */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

CFISH_VISIBLE cfish_TestFormatterTAP*
cfish_TestFormatterTAP_new(void);

CFISH_VISIBLE cfish_TestFormatterTAP*
cfish_TestFormatterTAP_init(cfish_TestFormatterTAP* self);

void
CFISH_TestFormatterTAP_Batch_Prologue_IMP(cfish_TestFormatterTAP* self, cfish_TestBatch* batch, uint32_t num_planned);

void
CFISH_TestFormatterTAP_VTest_Result_IMP(cfish_TestFormatterTAP* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

void
CFISH_TestFormatterTAP_VTest_Skip_IMP(cfish_TestFormatterTAP* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

void
CFISH_TestFormatterTAP_VTest_Comment_IMP(cfish_TestFormatterTAP* self, const char* fmt, va_list args);

void
CFISH_TestFormatterTAP_VBatch_Comment_IMP(cfish_TestFormatterTAP* self, const char* fmt, va_list args);

void
CFISH_TestFormatterTAP_Summary_IMP(cfish_TestFormatterTAP* self, cfish_TestSuiteRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*CFISH_TestFormatterTAP_To_Host_t)(cfish_TestFormatterTAP* self, void* vcache);

typedef cfish_Obj*
(*CFISH_TestFormatterTAP_Clone_t)(cfish_TestFormatterTAP* self);

typedef bool
(*CFISH_TestFormatterTAP_Equals_t)(cfish_TestFormatterTAP* self, cfish_Obj* other);

typedef int32_t
(*CFISH_TestFormatterTAP_Compare_To_t)(cfish_TestFormatterTAP* self, cfish_Obj* other);

typedef void
(*CFISH_TestFormatterTAP_Destroy_t)(cfish_TestFormatterTAP* self);

typedef cfish_String*
(*CFISH_TestFormatterTAP_To_String_t)(cfish_TestFormatterTAP* self);

typedef void
(*CFISH_TestFormatterTAP_Batch_Prologue_t)(cfish_TestFormatterTAP* self, cfish_TestBatch* batch, uint32_t num_planned);

typedef void
(*CFISH_TestFormatterTAP_VTest_Result_t)(cfish_TestFormatterTAP* self, bool pass, uint32_t test_num, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterTAP_VTest_Skip_t)(cfish_TestFormatterTAP* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterTAP_VTest_Comment_t)(cfish_TestFormatterTAP* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterTAP_VBatch_Comment_t)(cfish_TestFormatterTAP* self, const char* fmt, va_list args);

typedef void
(*CFISH_TestFormatterTAP_Summary_t)(cfish_TestFormatterTAP* self, cfish_TestSuiteRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
cfish_TestFormatterTAP_get_class(cfish_TestFormatterTAP *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
cfish_TestFormatterTAP_get_class_name(cfish_TestFormatterTAP *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
cfish_TestFormatterTAP_is_a(cfish_TestFormatterTAP *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_To_Host_OFFSET;
static CFISH_INLINE void*
CFISH_TestFormatterTAP_To_Host(cfish_TestFormatterTAP* self, void* vcache) {
    const CFISH_TestFormatterTAP_To_Host_t method = (CFISH_TestFormatterTAP_To_Host_t)cfish_obj_method(self, CFISH_TestFormatterTAP_To_Host_OFFSET);
    return method(self, vcache);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
CFISH_TestFormatterTAP_Clone(cfish_TestFormatterTAP* self) {
    const CFISH_TestFormatterTAP_Clone_t method = (CFISH_TestFormatterTAP_Clone_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Clone_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Equals_OFFSET;
static CFISH_INLINE bool
CFISH_TestFormatterTAP_Equals(cfish_TestFormatterTAP* self, cfish_Obj* other) {
    const CFISH_TestFormatterTAP_Equals_t method = (CFISH_TestFormatterTAP_Equals_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Equals_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Compare_To_OFFSET;
static CFISH_INLINE int32_t
CFISH_TestFormatterTAP_Compare_To(cfish_TestFormatterTAP* self, cfish_Obj* other) {
    const CFISH_TestFormatterTAP_Compare_To_t method = (CFISH_TestFormatterTAP_Compare_To_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Compare_To_OFFSET);
    return method(self, other);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Destroy_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_Destroy(cfish_TestFormatterTAP* self) {
    const CFISH_TestFormatterTAP_Destroy_t method = (CFISH_TestFormatterTAP_Destroy_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Destroy_OFFSET);
    method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_To_String_OFFSET;
static CFISH_INLINE cfish_String*
CFISH_TestFormatterTAP_To_String(cfish_TestFormatterTAP* self) {
    const CFISH_TestFormatterTAP_To_String_t method = (CFISH_TestFormatterTAP_To_String_t)cfish_obj_method(self, CFISH_TestFormatterTAP_To_String_OFFSET);
    return method(self);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Batch_Prologue_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_Batch_Prologue(cfish_TestFormatterTAP* self, cfish_TestBatch* batch, uint32_t num_planned) {
    const CFISH_TestFormatterTAP_Batch_Prologue_t method = (CFISH_TestFormatterTAP_Batch_Prologue_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Batch_Prologue_OFFSET);
    method(self, batch, num_planned);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_VTest_Result_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_VTest_Result(cfish_TestFormatterTAP* self, bool pass, uint32_t test_num, const char* fmt, va_list args) {
    const CFISH_TestFormatterTAP_VTest_Result_t method = (CFISH_TestFormatterTAP_VTest_Result_t)cfish_obj_method(self, CFISH_TestFormatterTAP_VTest_Result_OFFSET);
    method(self, pass, test_num, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_VTest_Skip_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_VTest_Skip(cfish_TestFormatterTAP* self, uint32_t test_num, uint32_t num_skipped, const char* fmt, va_list args) {
    const CFISH_TestFormatterTAP_VTest_Skip_t method = (CFISH_TestFormatterTAP_VTest_Skip_t)cfish_obj_method(self, CFISH_TestFormatterTAP_VTest_Skip_OFFSET);
    method(self, test_num, num_skipped, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_VTest_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_VTest_Comment(cfish_TestFormatterTAP* self, const char* fmt, va_list args) {
    const CFISH_TestFormatterTAP_VTest_Comment_t method = (CFISH_TestFormatterTAP_VTest_Comment_t)cfish_obj_method(self, CFISH_TestFormatterTAP_VTest_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_VBatch_Comment_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_VBatch_Comment(cfish_TestFormatterTAP* self, const char* fmt, va_list args) {
    const CFISH_TestFormatterTAP_VBatch_Comment_t method = (CFISH_TestFormatterTAP_VBatch_Comment_t)cfish_obj_method(self, CFISH_TestFormatterTAP_VBatch_Comment_OFFSET);
    method(self, fmt, args);
}

extern CFISH_VISIBLE uint32_t CFISH_TestFormatterTAP_Summary_OFFSET;
static CFISH_INLINE void
CFISH_TestFormatterTAP_Summary(cfish_TestFormatterTAP* self, cfish_TestSuiteRunner* runner) {
    const CFISH_TestFormatterTAP_Summary_t method = (CFISH_TestFormatterTAP_Summary_t)cfish_obj_method(self, CFISH_TestFormatterTAP_Summary_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef CFISH_USE_SHORT_NAMES
  #define TestFormatterTAP cfish_TestFormatterTAP
  #define TESTFORMATTERTAP CFISH_TESTFORMATTERTAP
  #define TestFormatterTAP_new cfish_TestFormatterTAP_new
  #define TestFormatterTAP_init cfish_TestFormatterTAP_init
  #define TestFormatterTAP_get_class cfish_TestFormatterTAP_get_class
  #define TestFormatterTAP_get_class_name cfish_TestFormatterTAP_get_class_name
  #define TestFormatterTAP_is_a cfish_TestFormatterTAP_is_a
  #define TestFormatterTAP_Batch_Prologue_IMP CFISH_TestFormatterTAP_Batch_Prologue_IMP
  #define TestFormatterTAP_VTest_Result_IMP CFISH_TestFormatterTAP_VTest_Result_IMP
  #define TestFormatterTAP_VTest_Skip_IMP CFISH_TestFormatterTAP_VTest_Skip_IMP
  #define TestFormatterTAP_VTest_Comment_IMP CFISH_TestFormatterTAP_VTest_Comment_IMP
  #define TestFormatterTAP_VBatch_Comment_IMP CFISH_TestFormatterTAP_VBatch_Comment_IMP
  #define TestFormatterTAP_Summary_IMP CFISH_TestFormatterTAP_Summary_IMP
  #define TestFormatterTAP_To_Host CFISH_TestFormatterTAP_To_Host
  #define TestFormatterTAP_To_Host_t CFISH_TestFormatterTAP_To_Host_t
  #define TestFormatterTAP_Clone CFISH_TestFormatterTAP_Clone
  #define TestFormatterTAP_Clone_t CFISH_TestFormatterTAP_Clone_t
  #define TestFormatterTAP_Equals CFISH_TestFormatterTAP_Equals
  #define TestFormatterTAP_Equals_t CFISH_TestFormatterTAP_Equals_t
  #define TestFormatterTAP_Compare_To CFISH_TestFormatterTAP_Compare_To
  #define TestFormatterTAP_Compare_To_t CFISH_TestFormatterTAP_Compare_To_t
  #define TestFormatterTAP_Destroy CFISH_TestFormatterTAP_Destroy
  #define TestFormatterTAP_Destroy_t CFISH_TestFormatterTAP_Destroy_t
  #define TestFormatterTAP_To_String CFISH_TestFormatterTAP_To_String
  #define TestFormatterTAP_To_String_t CFISH_TestFormatterTAP_To_String_t
  #define TestFormatterTAP_Batch_Prologue CFISH_TestFormatterTAP_Batch_Prologue
  #define TestFormatterTAP_Batch_Prologue_t CFISH_TestFormatterTAP_Batch_Prologue_t
  #define TestFormatterTAP_VTest_Result CFISH_TestFormatterTAP_VTest_Result
  #define TestFormatterTAP_VTest_Result_t CFISH_TestFormatterTAP_VTest_Result_t
  #define TestFormatterTAP_VTest_Skip CFISH_TestFormatterTAP_VTest_Skip
  #define TestFormatterTAP_VTest_Skip_t CFISH_TestFormatterTAP_VTest_Skip_t
  #define TestFormatterTAP_VTest_Comment CFISH_TestFormatterTAP_VTest_Comment
  #define TestFormatterTAP_VTest_Comment_t CFISH_TestFormatterTAP_VTest_Comment_t
  #define TestFormatterTAP_VBatch_Comment CFISH_TestFormatterTAP_VBatch_Comment
  #define TestFormatterTAP_VBatch_Comment_t CFISH_TestFormatterTAP_VBatch_Comment_t
  #define TestFormatterTAP_Summary CFISH_TestFormatterTAP_Summary
  #define TestFormatterTAP_Summary_t CFISH_TestFormatterTAP_Summary_t
#endif /* CFISH_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_CLOWNFISH_TESTHARNESS_TESTFORMATTER */




