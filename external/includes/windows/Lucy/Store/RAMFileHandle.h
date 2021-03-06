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


#ifndef H_LUCY_STORE_RAMFILEHANDLE
#define H_LUCY_STORE_RAMFILEHANDLE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy\Store\FileHandle.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_RAMFILEHANDLE
extern uint32_t lucy_RAMFH_IVARS_OFFSET;
typedef struct lucy_RAMFileHandleIVARS lucy_RAMFileHandleIVARS;
static CFISH_INLINE lucy_RAMFileHandleIVARS*
lucy_RAMFH_IVARS(lucy_RAMFileHandle *self) {
   char *ptr = (char*)self + lucy_RAMFH_IVARS_OFFSET;
   return (lucy_RAMFileHandleIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define RAMFileHandleIVARS lucy_RAMFileHandleIVARS
  #define RAMFH_IVARS lucy_RAMFH_IVARS
#endif

struct lucy_RAMFileHandleIVARS {
    cfish_String* path;
    uint32_t flags;
    lucy_RAMFile* ram_file;
    cfish_ByteBuf* contents;
    int64_t len;
};

#endif /* C_LUCY_RAMFILEHANDLE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_RAMFileHandle*
lucy_RAMFH_open(cfish_String* path, uint32_t flags, lucy_RAMFile* file);

LUCY_VISIBLE lucy_RAMFileHandle*
lucy_RAMFH_do_open(lucy_RAMFileHandle* self, cfish_String* path, uint32_t flags, lucy_RAMFile* file);

lucy_RAMFile*
LUCY_RAMFH_Get_File_IMP(lucy_RAMFileHandle* self);

bool
LUCY_RAMFH_Grow_IMP(lucy_RAMFileHandle* self, int64_t len);

void
LUCY_RAMFH_Destroy_IMP(lucy_RAMFileHandle* self);

bool
LUCY_RAMFH_Window_IMP(lucy_RAMFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len);

bool
LUCY_RAMFH_Release_Window_IMP(lucy_RAMFileHandle* self, lucy_FileWindow* window);

bool
LUCY_RAMFH_Read_IMP(lucy_RAMFileHandle* self, char* dest, int64_t offset, size_t len);

bool
LUCY_RAMFH_Write_IMP(lucy_RAMFileHandle* self, const void* data, size_t len);

int64_t
LUCY_RAMFH_Length_IMP(lucy_RAMFileHandle* self);

bool
LUCY_RAMFH_Close_IMP(lucy_RAMFileHandle* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_RAMFH_To_Host_t)(lucy_RAMFileHandle* self, void* vcache);

typedef cfish_Obj*
(*LUCY_RAMFH_Clone_t)(lucy_RAMFileHandle* self);

typedef bool
(*LUCY_RAMFH_Equals_t)(lucy_RAMFileHandle* self, cfish_Obj* other);

typedef int32_t
(*LUCY_RAMFH_Compare_To_t)(lucy_RAMFileHandle* self, cfish_Obj* other);

typedef void
(*LUCY_RAMFH_Destroy_t)(lucy_RAMFileHandle* self);

typedef cfish_String*
(*LUCY_RAMFH_To_String_t)(lucy_RAMFileHandle* self);

typedef bool
(*LUCY_RAMFH_Window_t)(lucy_RAMFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len);

typedef bool
(*LUCY_RAMFH_Release_Window_t)(lucy_RAMFileHandle* self, lucy_FileWindow* window);

typedef bool
(*LUCY_RAMFH_Read_t)(lucy_RAMFileHandle* self, char* dest, int64_t offset, size_t len);

typedef bool
(*LUCY_RAMFH_Write_t)(lucy_RAMFileHandle* self, const void* data, size_t len);

typedef int64_t
(*LUCY_RAMFH_Length_t)(lucy_RAMFileHandle* self);

typedef bool
(*LUCY_RAMFH_Grow_t)(lucy_RAMFileHandle* self, int64_t len);

typedef bool
(*LUCY_RAMFH_Close_t)(lucy_RAMFileHandle* self);

typedef void
(*LUCY_RAMFH_Set_Path_t)(lucy_RAMFileHandle* self, cfish_String* path);

typedef cfish_String*
(*LUCY_RAMFH_Get_Path_t)(lucy_RAMFileHandle* self);

typedef lucy_RAMFile*
(*LUCY_RAMFH_Get_File_t)(lucy_RAMFileHandle* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_RAMFH_get_class(lucy_RAMFileHandle *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_RAMFH_get_class_name(lucy_RAMFileHandle *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_RAMFH_is_a(lucy_RAMFileHandle *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_RAMFH_To_Host(lucy_RAMFileHandle* self, void* vcache) {
    const LUCY_RAMFH_To_Host_t method = (LUCY_RAMFH_To_Host_t)cfish_obj_method(self, LUCY_RAMFH_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_RAMFH_Clone(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Clone_t method = (LUCY_RAMFH_Clone_t)cfish_obj_method(self, LUCY_RAMFH_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Equals(lucy_RAMFileHandle* self, cfish_Obj* other) {
    const LUCY_RAMFH_Equals_t method = (LUCY_RAMFH_Equals_t)cfish_obj_method(self, LUCY_RAMFH_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_RAMFH_Compare_To(lucy_RAMFileHandle* self, cfish_Obj* other) {
    const LUCY_RAMFH_Compare_To_t method = (LUCY_RAMFH_Compare_To_t)cfish_obj_method(self, LUCY_RAMFH_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_RAMFH_Destroy(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Destroy_t method = (LUCY_RAMFH_Destroy_t)cfish_obj_method(self, LUCY_RAMFH_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_RAMFH_To_String(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_To_String_t method = (LUCY_RAMFH_To_String_t)cfish_obj_method(self, LUCY_RAMFH_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Window_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Window(lucy_RAMFileHandle* self, lucy_FileWindow* window, int64_t offset, int64_t len) {
    const LUCY_RAMFH_Window_t method = (LUCY_RAMFH_Window_t)cfish_obj_method(self, LUCY_RAMFH_Window_OFFSET);
    return method(self, window, offset, len);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Release_Window_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Release_Window(lucy_RAMFileHandle* self, lucy_FileWindow* window) {
    const LUCY_RAMFH_Release_Window_t method = (LUCY_RAMFH_Release_Window_t)cfish_obj_method(self, LUCY_RAMFH_Release_Window_OFFSET);
    return method(self, window);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Read_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Read(lucy_RAMFileHandle* self, char* dest, int64_t offset, size_t len) {
    const LUCY_RAMFH_Read_t method = (LUCY_RAMFH_Read_t)cfish_obj_method(self, LUCY_RAMFH_Read_OFFSET);
    return method(self, dest, offset, len);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Write_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Write(lucy_RAMFileHandle* self, const void* data, size_t len) {
    const LUCY_RAMFH_Write_t method = (LUCY_RAMFH_Write_t)cfish_obj_method(self, LUCY_RAMFH_Write_OFFSET);
    return method(self, data, len);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Length_OFFSET;
static CFISH_INLINE int64_t
LUCY_RAMFH_Length(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Length_t method = (LUCY_RAMFH_Length_t)cfish_obj_method(self, LUCY_RAMFH_Length_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Grow_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Grow(lucy_RAMFileHandle* self, int64_t len) {
    const LUCY_RAMFH_Grow_t method = (LUCY_RAMFH_Grow_t)cfish_obj_method(self, LUCY_RAMFH_Grow_OFFSET);
    return method(self, len);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Close_OFFSET;
static CFISH_INLINE bool
LUCY_RAMFH_Close(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Close_t method = (LUCY_RAMFH_Close_t)cfish_obj_method(self, LUCY_RAMFH_Close_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Set_Path_OFFSET;
static CFISH_INLINE void
LUCY_RAMFH_Set_Path(lucy_RAMFileHandle* self, cfish_String* path) {
    const LUCY_RAMFH_Set_Path_t method = (LUCY_RAMFH_Set_Path_t)cfish_obj_method(self, LUCY_RAMFH_Set_Path_OFFSET);
    method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Get_Path_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_RAMFH_Get_Path(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Get_Path_t method = (LUCY_RAMFH_Get_Path_t)cfish_obj_method(self, LUCY_RAMFH_Get_Path_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_RAMFH_Get_File_OFFSET;
static CFISH_INLINE lucy_RAMFile*
LUCY_RAMFH_Get_File(lucy_RAMFileHandle* self) {
    const LUCY_RAMFH_Get_File_t method = (LUCY_RAMFH_Get_File_t)cfish_obj_method(self, LUCY_RAMFH_Get_File_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_RAMFH_Get_File_OVERRIDE NULL
#else
lucy_RAMFile*
Lucy_RAMFH_Get_File_OVERRIDE(lucy_RAMFileHandle* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define RAMFileHandle lucy_RAMFileHandle
  #define RAMFILEHANDLE LUCY_RAMFILEHANDLE
  #define RAMFH_open lucy_RAMFH_open
  #define RAMFH_do_open lucy_RAMFH_do_open
  #define RAMFH_get_class lucy_RAMFH_get_class
  #define RAMFH_get_class_name lucy_RAMFH_get_class_name
  #define RAMFH_is_a lucy_RAMFH_is_a
  #define RAMFH_Get_File_IMP LUCY_RAMFH_Get_File_IMP
  #define RAMFH_Grow_IMP LUCY_RAMFH_Grow_IMP
  #define RAMFH_Destroy_IMP LUCY_RAMFH_Destroy_IMP
  #define RAMFH_Window_IMP LUCY_RAMFH_Window_IMP
  #define RAMFH_Release_Window_IMP LUCY_RAMFH_Release_Window_IMP
  #define RAMFH_Read_IMP LUCY_RAMFH_Read_IMP
  #define RAMFH_Write_IMP LUCY_RAMFH_Write_IMP
  #define RAMFH_Length_IMP LUCY_RAMFH_Length_IMP
  #define RAMFH_Close_IMP LUCY_RAMFH_Close_IMP
  #define RAMFH_To_Host LUCY_RAMFH_To_Host
  #define RAMFH_To_Host_t LUCY_RAMFH_To_Host_t
  #define RAMFH_Clone LUCY_RAMFH_Clone
  #define RAMFH_Clone_t LUCY_RAMFH_Clone_t
  #define RAMFH_Equals LUCY_RAMFH_Equals
  #define RAMFH_Equals_t LUCY_RAMFH_Equals_t
  #define RAMFH_Compare_To LUCY_RAMFH_Compare_To
  #define RAMFH_Compare_To_t LUCY_RAMFH_Compare_To_t
  #define RAMFH_Destroy LUCY_RAMFH_Destroy
  #define RAMFH_Destroy_t LUCY_RAMFH_Destroy_t
  #define RAMFH_To_String LUCY_RAMFH_To_String
  #define RAMFH_To_String_t LUCY_RAMFH_To_String_t
  #define RAMFH_Window LUCY_RAMFH_Window
  #define RAMFH_Window_t LUCY_RAMFH_Window_t
  #define RAMFH_Release_Window LUCY_RAMFH_Release_Window
  #define RAMFH_Release_Window_t LUCY_RAMFH_Release_Window_t
  #define RAMFH_Read LUCY_RAMFH_Read
  #define RAMFH_Read_t LUCY_RAMFH_Read_t
  #define RAMFH_Write LUCY_RAMFH_Write
  #define RAMFH_Write_t LUCY_RAMFH_Write_t
  #define RAMFH_Length LUCY_RAMFH_Length
  #define RAMFH_Length_t LUCY_RAMFH_Length_t
  #define RAMFH_Grow LUCY_RAMFH_Grow
  #define RAMFH_Grow_t LUCY_RAMFH_Grow_t
  #define RAMFH_Close LUCY_RAMFH_Close
  #define RAMFH_Close_t LUCY_RAMFH_Close_t
  #define RAMFH_Set_Path LUCY_RAMFH_Set_Path
  #define RAMFH_Set_Path_t LUCY_RAMFH_Set_Path_t
  #define RAMFH_Get_Path LUCY_RAMFH_Get_Path
  #define RAMFH_Get_Path_t LUCY_RAMFH_Get_Path_t
  #define RAMFH_Get_File LUCY_RAMFH_Get_File
  #define RAMFH_Get_File_t LUCY_RAMFH_Get_File_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_RAMFILEHANDLE */




