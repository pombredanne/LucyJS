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


#ifndef H_LUCY_STORE_INSTREAM
#define H_LUCY_STORE_INSTREAM 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_INSTREAM
extern uint32_t lucy_InStream_IVARS_OFFSET;
typedef struct lucy_InStreamIVARS lucy_InStreamIVARS;
static CFISH_INLINE lucy_InStreamIVARS*
lucy_InStream_IVARS(lucy_InStream *self) {
   char *ptr = (char*)self + lucy_InStream_IVARS_OFFSET;
   return (lucy_InStreamIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define InStreamIVARS lucy_InStreamIVARS
  #define InStream_IVARS lucy_InStream_IVARS
#endif

struct lucy_InStreamIVARS {
    int64_t offset;
    int64_t len;
    const char* buf;
    const char* limit;
    cfish_String* filename;
    lucy_FileHandle* file_handle;
    lucy_FileWindow* window;
};

#endif /* C_LUCY_INSTREAM */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_InStream*
lucy_InStream_open(cfish_Obj* file);

LUCY_VISIBLE lucy_InStream*
lucy_InStream_do_open(lucy_InStream* self, cfish_Obj* file);

lucy_InStream*
LUCY_InStream_Reopen_IMP(lucy_InStream* self, cfish_String* filename, int64_t offset, int64_t len);

lucy_InStream*
LUCY_InStream_Clone_IMP(lucy_InStream* self);

void
LUCY_InStream_Close_IMP(lucy_InStream* self);

void
LUCY_InStream_Destroy_IMP(lucy_InStream* self);

void
LUCY_InStream_Seek_IMP(lucy_InStream* self, int64_t target);

int64_t
LUCY_InStream_Tell_IMP(lucy_InStream* self);

int64_t
LUCY_InStream_Length_IMP(lucy_InStream* self);

void
LUCY_InStream_Refill_IMP(lucy_InStream* self);

void
LUCY_InStream_Fill_IMP(lucy_InStream* self, int64_t amount);

const char*
LUCY_InStream_Buf_IMP(lucy_InStream* self, size_t request);

void
LUCY_InStream_Advance_Buf_IMP(lucy_InStream* self, const char* buf);

void
LUCY_InStream_Read_Bytes_IMP(lucy_InStream* self, char* buf, size_t len);

int8_t
LUCY_InStream_Read_I8_IMP(lucy_InStream* self);

uint8_t
LUCY_InStream_Read_U8_IMP(lucy_InStream* self);

int32_t
LUCY_InStream_Read_I32_IMP(lucy_InStream* self);

uint32_t
LUCY_InStream_Read_U32_IMP(lucy_InStream* self);

int64_t
LUCY_InStream_Read_I64_IMP(lucy_InStream* self);

uint64_t
LUCY_InStream_Read_U64_IMP(lucy_InStream* self);

float
LUCY_InStream_Read_F32_IMP(lucy_InStream* self);

double
LUCY_InStream_Read_F64_IMP(lucy_InStream* self);

int32_t
LUCY_InStream_Read_CI32_IMP(lucy_InStream* self);

uint32_t
LUCY_InStream_Read_CU32_IMP(lucy_InStream* self);

int64_t
LUCY_InStream_Read_CI64_IMP(lucy_InStream* self);

uint64_t
LUCY_InStream_Read_CU64_IMP(lucy_InStream* self);

int
LUCY_InStream_Read_Raw_C64_IMP(lucy_InStream* self, char* buf);

cfish_String*
LUCY_InStream_Get_Filename_IMP(lucy_InStream* self);

lucy_FileWindow*
LUCY_InStream_Get_Window_IMP(lucy_InStream* self);

lucy_FileHandle*
LUCY_InStream_Get_Handle_IMP(lucy_InStream* self);

int64_t
LUCY_InStream_Bytes_In_Buf_IMP(lucy_InStream* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_InStream_To_Host_t)(lucy_InStream* self, void* vcache);

typedef lucy_InStream*
(*LUCY_InStream_Clone_t)(lucy_InStream* self);

typedef bool
(*LUCY_InStream_Equals_t)(lucy_InStream* self, cfish_Obj* other);

typedef int32_t
(*LUCY_InStream_Compare_To_t)(lucy_InStream* self, cfish_Obj* other);

typedef void
(*LUCY_InStream_Destroy_t)(lucy_InStream* self);

typedef cfish_String*
(*LUCY_InStream_To_String_t)(lucy_InStream* self);

typedef lucy_InStream*
(*LUCY_InStream_Reopen_t)(lucy_InStream* self, cfish_String* filename, int64_t offset, int64_t len);

typedef void
(*LUCY_InStream_Close_t)(lucy_InStream* self);

typedef void
(*LUCY_InStream_Seek_t)(lucy_InStream* self, int64_t target);

typedef int64_t
(*LUCY_InStream_Tell_t)(lucy_InStream* self);

typedef int64_t
(*LUCY_InStream_Length_t)(lucy_InStream* self);

typedef void
(*LUCY_InStream_Refill_t)(lucy_InStream* self);

typedef void
(*LUCY_InStream_Fill_t)(lucy_InStream* self, int64_t amount);

typedef const char*
(*LUCY_InStream_Buf_t)(lucy_InStream* self, size_t request);

typedef void
(*LUCY_InStream_Advance_Buf_t)(lucy_InStream* self, const char* buf);

typedef void
(*LUCY_InStream_Read_Bytes_t)(lucy_InStream* self, char* buf, size_t len);

typedef int8_t
(*LUCY_InStream_Read_I8_t)(lucy_InStream* self);

typedef uint8_t
(*LUCY_InStream_Read_U8_t)(lucy_InStream* self);

typedef int32_t
(*LUCY_InStream_Read_I32_t)(lucy_InStream* self);

typedef uint32_t
(*LUCY_InStream_Read_U32_t)(lucy_InStream* self);

typedef int64_t
(*LUCY_InStream_Read_I64_t)(lucy_InStream* self);

typedef uint64_t
(*LUCY_InStream_Read_U64_t)(lucy_InStream* self);

typedef float
(*LUCY_InStream_Read_F32_t)(lucy_InStream* self);

typedef double
(*LUCY_InStream_Read_F64_t)(lucy_InStream* self);

typedef int32_t
(*LUCY_InStream_Read_CI32_t)(lucy_InStream* self);

typedef uint32_t
(*LUCY_InStream_Read_CU32_t)(lucy_InStream* self);

typedef int64_t
(*LUCY_InStream_Read_CI64_t)(lucy_InStream* self);

typedef uint64_t
(*LUCY_InStream_Read_CU64_t)(lucy_InStream* self);

typedef int
(*LUCY_InStream_Read_Raw_C64_t)(lucy_InStream* self, char* buf);

typedef cfish_String*
(*LUCY_InStream_Get_Filename_t)(lucy_InStream* self);

typedef lucy_FileWindow*
(*LUCY_InStream_Get_Window_t)(lucy_InStream* self);

typedef lucy_FileHandle*
(*LUCY_InStream_Get_Handle_t)(lucy_InStream* self);

typedef int64_t
(*LUCY_InStream_Bytes_In_Buf_t)(lucy_InStream* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_InStream_get_class(lucy_InStream *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_InStream_get_class_name(lucy_InStream *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_InStream_is_a(lucy_InStream *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_InStream_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_InStream_To_Host(lucy_InStream* self, void* vcache) {
    const LUCY_InStream_To_Host_t method = (LUCY_InStream_To_Host_t)cfish_obj_method(self, LUCY_InStream_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Clone_OFFSET;
static CFISH_INLINE lucy_InStream*
LUCY_InStream_Clone(lucy_InStream* self) {
    const LUCY_InStream_Clone_t method = (LUCY_InStream_Clone_t)cfish_obj_method(self, LUCY_InStream_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_InStream_Equals(lucy_InStream* self, cfish_Obj* other) {
    const LUCY_InStream_Equals_t method = (LUCY_InStream_Equals_t)cfish_obj_method(self, LUCY_InStream_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_InStream_Compare_To(lucy_InStream* self, cfish_Obj* other) {
    const LUCY_InStream_Compare_To_t method = (LUCY_InStream_Compare_To_t)cfish_obj_method(self, LUCY_InStream_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Destroy(lucy_InStream* self) {
    const LUCY_InStream_Destroy_t method = (LUCY_InStream_Destroy_t)cfish_obj_method(self, LUCY_InStream_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_InStream_To_String(lucy_InStream* self) {
    const LUCY_InStream_To_String_t method = (LUCY_InStream_To_String_t)cfish_obj_method(self, LUCY_InStream_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Reopen_OFFSET;
static CFISH_INLINE lucy_InStream*
LUCY_InStream_Reopen(lucy_InStream* self, cfish_String* filename, int64_t offset, int64_t len) {
    const LUCY_InStream_Reopen_t method = (LUCY_InStream_Reopen_t)cfish_obj_method(self, LUCY_InStream_Reopen_OFFSET);
    return method(self, filename, offset, len);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Close_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Close(lucy_InStream* self) {
    const LUCY_InStream_Close_t method = (LUCY_InStream_Close_t)cfish_obj_method(self, LUCY_InStream_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Seek_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Seek(lucy_InStream* self, int64_t target) {
#ifdef CFP_LUCY
    LUCY_InStream_Seek_IMP(self, target);
#else
    const LUCY_InStream_Seek_t method = (LUCY_InStream_Seek_t)cfish_obj_method(self, LUCY_InStream_Seek_OFFSET);
    method(self, target);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Tell_OFFSET;
static CFISH_INLINE int64_t
LUCY_InStream_Tell(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Tell_IMP(self);
#else
    const LUCY_InStream_Tell_t method = (LUCY_InStream_Tell_t)cfish_obj_method(self, LUCY_InStream_Tell_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Length_OFFSET;
static CFISH_INLINE int64_t
LUCY_InStream_Length(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Length_IMP(self);
#else
    const LUCY_InStream_Length_t method = (LUCY_InStream_Length_t)cfish_obj_method(self, LUCY_InStream_Length_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Refill_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Refill(lucy_InStream* self) {
    const LUCY_InStream_Refill_t method = (LUCY_InStream_Refill_t)cfish_obj_method(self, LUCY_InStream_Refill_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Fill_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Fill(lucy_InStream* self, int64_t amount) {
    const LUCY_InStream_Fill_t method = (LUCY_InStream_Fill_t)cfish_obj_method(self, LUCY_InStream_Fill_OFFSET);
    method(self, amount);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Buf_OFFSET;
static CFISH_INLINE const char*
LUCY_InStream_Buf(lucy_InStream* self, size_t request) {
#ifdef CFP_LUCY
    return LUCY_InStream_Buf_IMP(self, request);
#else
    const LUCY_InStream_Buf_t method = (LUCY_InStream_Buf_t)cfish_obj_method(self, LUCY_InStream_Buf_OFFSET);
    return method(self, request);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Advance_Buf_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Advance_Buf(lucy_InStream* self, const char* buf) {
#ifdef CFP_LUCY
    LUCY_InStream_Advance_Buf_IMP(self, buf);
#else
    const LUCY_InStream_Advance_Buf_t method = (LUCY_InStream_Advance_Buf_t)cfish_obj_method(self, LUCY_InStream_Advance_Buf_OFFSET);
    method(self, buf);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_Bytes_OFFSET;
static CFISH_INLINE void
LUCY_InStream_Read_Bytes(lucy_InStream* self, char* buf, size_t len) {
#ifdef CFP_LUCY
    LUCY_InStream_Read_Bytes_IMP(self, buf, len);
#else
    const LUCY_InStream_Read_Bytes_t method = (LUCY_InStream_Read_Bytes_t)cfish_obj_method(self, LUCY_InStream_Read_Bytes_OFFSET);
    method(self, buf, len);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_I8_OFFSET;
static CFISH_INLINE int8_t
LUCY_InStream_Read_I8(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_I8_IMP(self);
#else
    const LUCY_InStream_Read_I8_t method = (LUCY_InStream_Read_I8_t)cfish_obj_method(self, LUCY_InStream_Read_I8_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_U8_OFFSET;
static CFISH_INLINE uint8_t
LUCY_InStream_Read_U8(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_U8_IMP(self);
#else
    const LUCY_InStream_Read_U8_t method = (LUCY_InStream_Read_U8_t)cfish_obj_method(self, LUCY_InStream_Read_U8_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_I32_OFFSET;
static CFISH_INLINE int32_t
LUCY_InStream_Read_I32(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_I32_IMP(self);
#else
    const LUCY_InStream_Read_I32_t method = (LUCY_InStream_Read_I32_t)cfish_obj_method(self, LUCY_InStream_Read_I32_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_U32_OFFSET;
static CFISH_INLINE uint32_t
LUCY_InStream_Read_U32(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_U32_IMP(self);
#else
    const LUCY_InStream_Read_U32_t method = (LUCY_InStream_Read_U32_t)cfish_obj_method(self, LUCY_InStream_Read_U32_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_I64_OFFSET;
static CFISH_INLINE int64_t
LUCY_InStream_Read_I64(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_I64_IMP(self);
#else
    const LUCY_InStream_Read_I64_t method = (LUCY_InStream_Read_I64_t)cfish_obj_method(self, LUCY_InStream_Read_I64_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_U64_OFFSET;
static CFISH_INLINE uint64_t
LUCY_InStream_Read_U64(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_U64_IMP(self);
#else
    const LUCY_InStream_Read_U64_t method = (LUCY_InStream_Read_U64_t)cfish_obj_method(self, LUCY_InStream_Read_U64_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_F32_OFFSET;
static CFISH_INLINE float
LUCY_InStream_Read_F32(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_F32_IMP(self);
#else
    const LUCY_InStream_Read_F32_t method = (LUCY_InStream_Read_F32_t)cfish_obj_method(self, LUCY_InStream_Read_F32_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_F64_OFFSET;
static CFISH_INLINE double
LUCY_InStream_Read_F64(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_F64_IMP(self);
#else
    const LUCY_InStream_Read_F64_t method = (LUCY_InStream_Read_F64_t)cfish_obj_method(self, LUCY_InStream_Read_F64_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_CI32_OFFSET;
static CFISH_INLINE int32_t
LUCY_InStream_Read_CI32(lucy_InStream* self) {
    const LUCY_InStream_Read_CI32_t method = (LUCY_InStream_Read_CI32_t)cfish_obj_method(self, LUCY_InStream_Read_CI32_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_CU32_OFFSET;
static CFISH_INLINE uint32_t
LUCY_InStream_Read_CU32(lucy_InStream* self) {
    const LUCY_InStream_Read_CU32_t method = (LUCY_InStream_Read_CU32_t)cfish_obj_method(self, LUCY_InStream_Read_CU32_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_CI64_OFFSET;
static CFISH_INLINE int64_t
LUCY_InStream_Read_CI64(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_CI64_IMP(self);
#else
    const LUCY_InStream_Read_CI64_t method = (LUCY_InStream_Read_CI64_t)cfish_obj_method(self, LUCY_InStream_Read_CI64_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_CU64_OFFSET;
static CFISH_INLINE uint64_t
LUCY_InStream_Read_CU64(lucy_InStream* self) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_CU64_IMP(self);
#else
    const LUCY_InStream_Read_CU64_t method = (LUCY_InStream_Read_CU64_t)cfish_obj_method(self, LUCY_InStream_Read_CU64_OFFSET);
    return method(self);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Read_Raw_C64_OFFSET;
static CFISH_INLINE int
LUCY_InStream_Read_Raw_C64(lucy_InStream* self, char* buf) {
#ifdef CFP_LUCY
    return LUCY_InStream_Read_Raw_C64_IMP(self, buf);
#else
    const LUCY_InStream_Read_Raw_C64_t method = (LUCY_InStream_Read_Raw_C64_t)cfish_obj_method(self, LUCY_InStream_Read_Raw_C64_OFFSET);
    return method(self, buf);
#endif
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Get_Filename_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_InStream_Get_Filename(lucy_InStream* self) {
    const LUCY_InStream_Get_Filename_t method = (LUCY_InStream_Get_Filename_t)cfish_obj_method(self, LUCY_InStream_Get_Filename_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Get_Window_OFFSET;
static CFISH_INLINE lucy_FileWindow*
LUCY_InStream_Get_Window(lucy_InStream* self) {
    const LUCY_InStream_Get_Window_t method = (LUCY_InStream_Get_Window_t)cfish_obj_method(self, LUCY_InStream_Get_Window_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Get_Handle_OFFSET;
static CFISH_INLINE lucy_FileHandle*
LUCY_InStream_Get_Handle(lucy_InStream* self) {
    const LUCY_InStream_Get_Handle_t method = (LUCY_InStream_Get_Handle_t)cfish_obj_method(self, LUCY_InStream_Get_Handle_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_InStream_Bytes_In_Buf_OFFSET;
static CFISH_INLINE int64_t
LUCY_InStream_Bytes_In_Buf(lucy_InStream* self) {
    const LUCY_InStream_Bytes_In_Buf_t method = (LUCY_InStream_Bytes_In_Buf_t)cfish_obj_method(self, LUCY_InStream_Bytes_In_Buf_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_InStream_Reopen_OVERRIDE NULL
#define Lucy_InStream_Close_OVERRIDE NULL
#define Lucy_InStream_Refill_OVERRIDE NULL
#define Lucy_InStream_Fill_OVERRIDE NULL
#define Lucy_InStream_Read_CI32_OVERRIDE NULL
#define Lucy_InStream_Read_CU32_OVERRIDE NULL
#define Lucy_InStream_Get_Filename_OVERRIDE NULL
#define Lucy_InStream_Get_Window_OVERRIDE NULL
#define Lucy_InStream_Get_Handle_OVERRIDE NULL
#define Lucy_InStream_Bytes_In_Buf_OVERRIDE NULL
#else
lucy_InStream*
Lucy_InStream_Reopen_OVERRIDE(lucy_InStream* self, cfish_String* filename, int64_t offset, int64_t len);
void
Lucy_InStream_Close_OVERRIDE(lucy_InStream* self);
void
Lucy_InStream_Refill_OVERRIDE(lucy_InStream* self);
void
Lucy_InStream_Fill_OVERRIDE(lucy_InStream* self, int64_t amount);
int32_t
Lucy_InStream_Read_CI32_OVERRIDE(lucy_InStream* self);
uint32_t
Lucy_InStream_Read_CU32_OVERRIDE(lucy_InStream* self);
cfish_String*
Lucy_InStream_Get_Filename_OVERRIDE(lucy_InStream* self);
lucy_FileWindow*
Lucy_InStream_Get_Window_OVERRIDE(lucy_InStream* self);
lucy_FileHandle*
Lucy_InStream_Get_Handle_OVERRIDE(lucy_InStream* self);
int64_t
Lucy_InStream_Bytes_In_Buf_OVERRIDE(lucy_InStream* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define InStream lucy_InStream
  #define INSTREAM LUCY_INSTREAM
  #define InStream_open lucy_InStream_open
  #define InStream_do_open lucy_InStream_do_open
  #define InStream_get_class lucy_InStream_get_class
  #define InStream_get_class_name lucy_InStream_get_class_name
  #define InStream_is_a lucy_InStream_is_a
  #define InStream_Reopen_IMP LUCY_InStream_Reopen_IMP
  #define InStream_Clone_IMP LUCY_InStream_Clone_IMP
  #define InStream_Close_IMP LUCY_InStream_Close_IMP
  #define InStream_Destroy_IMP LUCY_InStream_Destroy_IMP
  #define InStream_Seek_IMP LUCY_InStream_Seek_IMP
  #define InStream_Tell_IMP LUCY_InStream_Tell_IMP
  #define InStream_Length_IMP LUCY_InStream_Length_IMP
  #define InStream_Refill_IMP LUCY_InStream_Refill_IMP
  #define InStream_Fill_IMP LUCY_InStream_Fill_IMP
  #define InStream_Buf_IMP LUCY_InStream_Buf_IMP
  #define InStream_Advance_Buf_IMP LUCY_InStream_Advance_Buf_IMP
  #define InStream_Read_Bytes_IMP LUCY_InStream_Read_Bytes_IMP
  #define InStream_Read_I8_IMP LUCY_InStream_Read_I8_IMP
  #define InStream_Read_U8_IMP LUCY_InStream_Read_U8_IMP
  #define InStream_Read_I32_IMP LUCY_InStream_Read_I32_IMP
  #define InStream_Read_U32_IMP LUCY_InStream_Read_U32_IMP
  #define InStream_Read_I64_IMP LUCY_InStream_Read_I64_IMP
  #define InStream_Read_U64_IMP LUCY_InStream_Read_U64_IMP
  #define InStream_Read_F32_IMP LUCY_InStream_Read_F32_IMP
  #define InStream_Read_F64_IMP LUCY_InStream_Read_F64_IMP
  #define InStream_Read_CI32_IMP LUCY_InStream_Read_CI32_IMP
  #define InStream_Read_CU32_IMP LUCY_InStream_Read_CU32_IMP
  #define InStream_Read_CI64_IMP LUCY_InStream_Read_CI64_IMP
  #define InStream_Read_CU64_IMP LUCY_InStream_Read_CU64_IMP
  #define InStream_Read_Raw_C64_IMP LUCY_InStream_Read_Raw_C64_IMP
  #define InStream_Get_Filename_IMP LUCY_InStream_Get_Filename_IMP
  #define InStream_Get_Window_IMP LUCY_InStream_Get_Window_IMP
  #define InStream_Get_Handle_IMP LUCY_InStream_Get_Handle_IMP
  #define InStream_Bytes_In_Buf_IMP LUCY_InStream_Bytes_In_Buf_IMP
  #define InStream_To_Host LUCY_InStream_To_Host
  #define InStream_To_Host_t LUCY_InStream_To_Host_t
  #define InStream_Clone LUCY_InStream_Clone
  #define InStream_Clone_t LUCY_InStream_Clone_t
  #define InStream_Equals LUCY_InStream_Equals
  #define InStream_Equals_t LUCY_InStream_Equals_t
  #define InStream_Compare_To LUCY_InStream_Compare_To
  #define InStream_Compare_To_t LUCY_InStream_Compare_To_t
  #define InStream_Destroy LUCY_InStream_Destroy
  #define InStream_Destroy_t LUCY_InStream_Destroy_t
  #define InStream_To_String LUCY_InStream_To_String
  #define InStream_To_String_t LUCY_InStream_To_String_t
  #define InStream_Reopen LUCY_InStream_Reopen
  #define InStream_Reopen_t LUCY_InStream_Reopen_t
  #define InStream_Close LUCY_InStream_Close
  #define InStream_Close_t LUCY_InStream_Close_t
  #define InStream_Seek LUCY_InStream_Seek
  #define InStream_Seek_t LUCY_InStream_Seek_t
  #define InStream_Tell LUCY_InStream_Tell
  #define InStream_Tell_t LUCY_InStream_Tell_t
  #define InStream_Length LUCY_InStream_Length
  #define InStream_Length_t LUCY_InStream_Length_t
  #define InStream_Refill LUCY_InStream_Refill
  #define InStream_Refill_t LUCY_InStream_Refill_t
  #define InStream_Fill LUCY_InStream_Fill
  #define InStream_Fill_t LUCY_InStream_Fill_t
  #define InStream_Buf LUCY_InStream_Buf
  #define InStream_Buf_t LUCY_InStream_Buf_t
  #define InStream_Advance_Buf LUCY_InStream_Advance_Buf
  #define InStream_Advance_Buf_t LUCY_InStream_Advance_Buf_t
  #define InStream_Read_Bytes LUCY_InStream_Read_Bytes
  #define InStream_Read_Bytes_t LUCY_InStream_Read_Bytes_t
  #define InStream_Read_I8 LUCY_InStream_Read_I8
  #define InStream_Read_I8_t LUCY_InStream_Read_I8_t
  #define InStream_Read_U8 LUCY_InStream_Read_U8
  #define InStream_Read_U8_t LUCY_InStream_Read_U8_t
  #define InStream_Read_I32 LUCY_InStream_Read_I32
  #define InStream_Read_I32_t LUCY_InStream_Read_I32_t
  #define InStream_Read_U32 LUCY_InStream_Read_U32
  #define InStream_Read_U32_t LUCY_InStream_Read_U32_t
  #define InStream_Read_I64 LUCY_InStream_Read_I64
  #define InStream_Read_I64_t LUCY_InStream_Read_I64_t
  #define InStream_Read_U64 LUCY_InStream_Read_U64
  #define InStream_Read_U64_t LUCY_InStream_Read_U64_t
  #define InStream_Read_F32 LUCY_InStream_Read_F32
  #define InStream_Read_F32_t LUCY_InStream_Read_F32_t
  #define InStream_Read_F64 LUCY_InStream_Read_F64
  #define InStream_Read_F64_t LUCY_InStream_Read_F64_t
  #define InStream_Read_CI32 LUCY_InStream_Read_CI32
  #define InStream_Read_CI32_t LUCY_InStream_Read_CI32_t
  #define InStream_Read_CU32 LUCY_InStream_Read_CU32
  #define InStream_Read_CU32_t LUCY_InStream_Read_CU32_t
  #define InStream_Read_CI64 LUCY_InStream_Read_CI64
  #define InStream_Read_CI64_t LUCY_InStream_Read_CI64_t
  #define InStream_Read_CU64 LUCY_InStream_Read_CU64
  #define InStream_Read_CU64_t LUCY_InStream_Read_CU64_t
  #define InStream_Read_Raw_C64 LUCY_InStream_Read_Raw_C64
  #define InStream_Read_Raw_C64_t LUCY_InStream_Read_Raw_C64_t
  #define InStream_Get_Filename LUCY_InStream_Get_Filename
  #define InStream_Get_Filename_t LUCY_InStream_Get_Filename_t
  #define InStream_Get_Window LUCY_InStream_Get_Window
  #define InStream_Get_Window_t LUCY_InStream_Get_Window_t
  #define InStream_Get_Handle LUCY_InStream_Get_Handle
  #define InStream_Get_Handle_t LUCY_InStream_Get_Handle_t
  #define InStream_Bytes_In_Buf LUCY_InStream_Bytes_In_Buf
  #define InStream_Bytes_In_Buf_t LUCY_InStream_Bytes_In_Buf_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_INSTREAM */




