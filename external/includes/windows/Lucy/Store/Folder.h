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


#ifndef H_LUCY_STORE_FOLDER
#define H_LUCY_STORE_FOLDER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_FOLDER
extern uint32_t lucy_Folder_IVARS_OFFSET;
typedef struct lucy_FolderIVARS lucy_FolderIVARS;
static CFISH_INLINE lucy_FolderIVARS*
lucy_Folder_IVARS(lucy_Folder *self) {
   char *ptr = (char*)self + lucy_Folder_IVARS_OFFSET;
   return (lucy_FolderIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define FolderIVARS lucy_FolderIVARS
  #define Folder_IVARS lucy_Folder_IVARS
#endif

struct lucy_FolderIVARS {
    cfish_String* path;
    cfish_Hash* entries;
};

#endif /* C_LUCY_FOLDER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Folder*
lucy_Folder_init(lucy_Folder* self, cfish_String* path);

void
LUCY_Folder_Destroy_IMP(lucy_Folder* self);

cfish_String*
LUCY_Folder_Get_Path_IMP(lucy_Folder* self);

void
LUCY_Folder_Set_Path_IMP(lucy_Folder* self, cfish_String* path);

lucy_OutStream*
LUCY_Folder_Open_Out_IMP(lucy_Folder* self, cfish_String* path);

lucy_InStream*
LUCY_Folder_Open_In_IMP(lucy_Folder* self, cfish_String* path);

lucy_FileHandle*
LUCY_Folder_Open_FileHandle_IMP(lucy_Folder* self, cfish_String* path, uint32_t flags);

lucy_DirHandle*
LUCY_Folder_Open_Dir_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_MkDir_IMP(lucy_Folder* self, cfish_String* path);

cfish_Vector*
LUCY_Folder_List_IMP(lucy_Folder* self, cfish_String* path);

cfish_Vector*
LUCY_Folder_List_R_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_Exists_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_Is_Directory_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_Delete_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_Delete_Tree_IMP(lucy_Folder* self, cfish_String* path);

bool
LUCY_Folder_Rename_IMP(lucy_Folder* self, cfish_String* from, cfish_String* to);

bool
LUCY_Folder_Hard_Link_IMP(lucy_Folder* self, cfish_String* from, cfish_String* to);

cfish_Blob*
LUCY_Folder_Slurp_File_IMP(lucy_Folder* self, cfish_String* path);

void
LUCY_Folder_Consolidate_IMP(lucy_Folder* self, cfish_String* path);

lucy_Folder*
LUCY_Folder_Enclosing_Folder_IMP(lucy_Folder* self, cfish_String* path);

lucy_Folder*
LUCY_Folder_Find_Folder_IMP(lucy_Folder* self, cfish_String* path);

void
LUCY_Folder_Initialize_IMP(lucy_Folder* self);

bool
LUCY_Folder_Check_IMP(lucy_Folder* self);

void
LUCY_Folder_Close_IMP(lucy_Folder* self);

lucy_FileHandle*
LUCY_Folder_Local_Open_FileHandle_IMP(lucy_Folder* self, cfish_String* name, uint32_t flags);

lucy_InStream*
LUCY_Folder_Local_Open_In_IMP(lucy_Folder* self, cfish_String* name);

lucy_DirHandle*
LUCY_Folder_Local_Open_Dir_IMP(lucy_Folder* self);

bool
LUCY_Folder_Local_MkDir_IMP(lucy_Folder* self, cfish_String* name);

bool
LUCY_Folder_Local_Exists_IMP(lucy_Folder* self, cfish_String* name);

bool
LUCY_Folder_Local_Is_Directory_IMP(lucy_Folder* self, cfish_String* name);

lucy_Folder*
LUCY_Folder_Local_Find_Folder_IMP(lucy_Folder* self, cfish_String* name);

bool
LUCY_Folder_Local_Delete_IMP(lucy_Folder* self, cfish_String* name);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Folder_To_Host_t)(lucy_Folder* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Folder_Clone_t)(lucy_Folder* self);

typedef bool
(*LUCY_Folder_Equals_t)(lucy_Folder* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Folder_Compare_To_t)(lucy_Folder* self, cfish_Obj* other);

typedef void
(*LUCY_Folder_Destroy_t)(lucy_Folder* self);

typedef cfish_String*
(*LUCY_Folder_To_String_t)(lucy_Folder* self);

typedef cfish_String*
(*LUCY_Folder_Get_Path_t)(lucy_Folder* self);

typedef void
(*LUCY_Folder_Set_Path_t)(lucy_Folder* self, cfish_String* path);

typedef lucy_OutStream*
(*LUCY_Folder_Open_Out_t)(lucy_Folder* self, cfish_String* path);

typedef lucy_InStream*
(*LUCY_Folder_Open_In_t)(lucy_Folder* self, cfish_String* path);

typedef lucy_FileHandle*
(*LUCY_Folder_Open_FileHandle_t)(lucy_Folder* self, cfish_String* path, uint32_t flags);

typedef lucy_DirHandle*
(*LUCY_Folder_Open_Dir_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_MkDir_t)(lucy_Folder* self, cfish_String* path);

typedef cfish_Vector*
(*LUCY_Folder_List_t)(lucy_Folder* self, cfish_String* path);

typedef cfish_Vector*
(*LUCY_Folder_List_R_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_Exists_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_Is_Directory_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_Delete_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_Delete_Tree_t)(lucy_Folder* self, cfish_String* path);

typedef bool
(*LUCY_Folder_Rename_t)(lucy_Folder* self, cfish_String* from, cfish_String* to);

typedef bool
(*LUCY_Folder_Hard_Link_t)(lucy_Folder* self, cfish_String* from, cfish_String* to);

typedef cfish_Blob*
(*LUCY_Folder_Slurp_File_t)(lucy_Folder* self, cfish_String* path);

typedef void
(*LUCY_Folder_Consolidate_t)(lucy_Folder* self, cfish_String* path);

typedef lucy_Folder*
(*LUCY_Folder_Enclosing_Folder_t)(lucy_Folder* self, cfish_String* path);

typedef lucy_Folder*
(*LUCY_Folder_Find_Folder_t)(lucy_Folder* self, cfish_String* path);

typedef void
(*LUCY_Folder_Initialize_t)(lucy_Folder* self);

typedef bool
(*LUCY_Folder_Check_t)(lucy_Folder* self);

typedef void
(*LUCY_Folder_Close_t)(lucy_Folder* self);

typedef lucy_FileHandle*
(*LUCY_Folder_Local_Open_FileHandle_t)(lucy_Folder* self, cfish_String* name, uint32_t flags);

typedef lucy_InStream*
(*LUCY_Folder_Local_Open_In_t)(lucy_Folder* self, cfish_String* name);

typedef lucy_DirHandle*
(*LUCY_Folder_Local_Open_Dir_t)(lucy_Folder* self);

typedef bool
(*LUCY_Folder_Local_MkDir_t)(lucy_Folder* self, cfish_String* name);

typedef bool
(*LUCY_Folder_Local_Exists_t)(lucy_Folder* self, cfish_String* name);

typedef bool
(*LUCY_Folder_Local_Is_Directory_t)(lucy_Folder* self, cfish_String* name);

typedef lucy_Folder*
(*LUCY_Folder_Local_Find_Folder_t)(lucy_Folder* self, cfish_String* name);

typedef bool
(*LUCY_Folder_Local_Delete_t)(lucy_Folder* self, cfish_String* name);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Folder_get_class(lucy_Folder *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Folder_get_class_name(lucy_Folder *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Folder_is_a(lucy_Folder *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Folder_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Folder_To_Host(lucy_Folder* self, void* vcache) {
    const LUCY_Folder_To_Host_t method = (LUCY_Folder_To_Host_t)cfish_obj_method(self, LUCY_Folder_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Folder_Clone(lucy_Folder* self) {
    const LUCY_Folder_Clone_t method = (LUCY_Folder_Clone_t)cfish_obj_method(self, LUCY_Folder_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Equals(lucy_Folder* self, cfish_Obj* other) {
    const LUCY_Folder_Equals_t method = (LUCY_Folder_Equals_t)cfish_obj_method(self, LUCY_Folder_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Folder_Compare_To(lucy_Folder* self, cfish_Obj* other) {
    const LUCY_Folder_Compare_To_t method = (LUCY_Folder_Compare_To_t)cfish_obj_method(self, LUCY_Folder_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Folder_Destroy(lucy_Folder* self) {
    const LUCY_Folder_Destroy_t method = (LUCY_Folder_Destroy_t)cfish_obj_method(self, LUCY_Folder_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Folder_To_String(lucy_Folder* self) {
    const LUCY_Folder_To_String_t method = (LUCY_Folder_To_String_t)cfish_obj_method(self, LUCY_Folder_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Get_Path_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Folder_Get_Path(lucy_Folder* self) {
    const LUCY_Folder_Get_Path_t method = (LUCY_Folder_Get_Path_t)cfish_obj_method(self, LUCY_Folder_Get_Path_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Set_Path_OFFSET;
static CFISH_INLINE void
LUCY_Folder_Set_Path(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Set_Path_t method = (LUCY_Folder_Set_Path_t)cfish_obj_method(self, LUCY_Folder_Set_Path_OFFSET);
    method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Open_Out_OFFSET;
static CFISH_INLINE lucy_OutStream*
LUCY_Folder_Open_Out(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Open_Out_t method = (LUCY_Folder_Open_Out_t)cfish_obj_method(self, LUCY_Folder_Open_Out_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Open_In_OFFSET;
static CFISH_INLINE lucy_InStream*
LUCY_Folder_Open_In(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Open_In_t method = (LUCY_Folder_Open_In_t)cfish_obj_method(self, LUCY_Folder_Open_In_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Open_FileHandle_OFFSET;
static CFISH_INLINE lucy_FileHandle*
LUCY_Folder_Open_FileHandle(lucy_Folder* self, cfish_String* path, uint32_t flags) {
    const LUCY_Folder_Open_FileHandle_t method = (LUCY_Folder_Open_FileHandle_t)cfish_obj_method(self, LUCY_Folder_Open_FileHandle_OFFSET);
    return method(self, path, flags);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Open_Dir_OFFSET;
static CFISH_INLINE lucy_DirHandle*
LUCY_Folder_Open_Dir(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Open_Dir_t method = (LUCY_Folder_Open_Dir_t)cfish_obj_method(self, LUCY_Folder_Open_Dir_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_MkDir_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_MkDir(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_MkDir_t method = (LUCY_Folder_MkDir_t)cfish_obj_method(self, LUCY_Folder_MkDir_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_List_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_Folder_List(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_List_t method = (LUCY_Folder_List_t)cfish_obj_method(self, LUCY_Folder_List_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_List_R_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_Folder_List_R(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_List_R_t method = (LUCY_Folder_List_R_t)cfish_obj_method(self, LUCY_Folder_List_R_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Exists_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Exists(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Exists_t method = (LUCY_Folder_Exists_t)cfish_obj_method(self, LUCY_Folder_Exists_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Is_Directory_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Is_Directory(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Is_Directory_t method = (LUCY_Folder_Is_Directory_t)cfish_obj_method(self, LUCY_Folder_Is_Directory_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Delete_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Delete(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Delete_t method = (LUCY_Folder_Delete_t)cfish_obj_method(self, LUCY_Folder_Delete_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Delete_Tree_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Delete_Tree(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Delete_Tree_t method = (LUCY_Folder_Delete_Tree_t)cfish_obj_method(self, LUCY_Folder_Delete_Tree_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Rename_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Rename(lucy_Folder* self, cfish_String* from, cfish_String* to) {
    const LUCY_Folder_Rename_t method = (LUCY_Folder_Rename_t)cfish_obj_method(self, LUCY_Folder_Rename_OFFSET);
    return method(self, from, to);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Hard_Link_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Hard_Link(lucy_Folder* self, cfish_String* from, cfish_String* to) {
    const LUCY_Folder_Hard_Link_t method = (LUCY_Folder_Hard_Link_t)cfish_obj_method(self, LUCY_Folder_Hard_Link_OFFSET);
    return method(self, from, to);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Slurp_File_OFFSET;
static CFISH_INLINE cfish_Blob*
LUCY_Folder_Slurp_File(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Slurp_File_t method = (LUCY_Folder_Slurp_File_t)cfish_obj_method(self, LUCY_Folder_Slurp_File_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Consolidate_OFFSET;
static CFISH_INLINE void
LUCY_Folder_Consolidate(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Consolidate_t method = (LUCY_Folder_Consolidate_t)cfish_obj_method(self, LUCY_Folder_Consolidate_OFFSET);
    method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Enclosing_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_Folder_Enclosing_Folder(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Enclosing_Folder_t method = (LUCY_Folder_Enclosing_Folder_t)cfish_obj_method(self, LUCY_Folder_Enclosing_Folder_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Find_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_Folder_Find_Folder(lucy_Folder* self, cfish_String* path) {
    const LUCY_Folder_Find_Folder_t method = (LUCY_Folder_Find_Folder_t)cfish_obj_method(self, LUCY_Folder_Find_Folder_OFFSET);
    return method(self, path);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Initialize_OFFSET;
static CFISH_INLINE void
LUCY_Folder_Initialize(lucy_Folder* self) {
    const LUCY_Folder_Initialize_t method = (LUCY_Folder_Initialize_t)cfish_obj_method(self, LUCY_Folder_Initialize_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Check_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Check(lucy_Folder* self) {
    const LUCY_Folder_Check_t method = (LUCY_Folder_Check_t)cfish_obj_method(self, LUCY_Folder_Check_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Close_OFFSET;
static CFISH_INLINE void
LUCY_Folder_Close(lucy_Folder* self) {
    const LUCY_Folder_Close_t method = (LUCY_Folder_Close_t)cfish_obj_method(self, LUCY_Folder_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Open_FileHandle_OFFSET;
static CFISH_INLINE lucy_FileHandle*
LUCY_Folder_Local_Open_FileHandle(lucy_Folder* self, cfish_String* name, uint32_t flags) {
    const LUCY_Folder_Local_Open_FileHandle_t method = (LUCY_Folder_Local_Open_FileHandle_t)cfish_obj_method(self, LUCY_Folder_Local_Open_FileHandle_OFFSET);
    return method(self, name, flags);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Open_In_OFFSET;
static CFISH_INLINE lucy_InStream*
LUCY_Folder_Local_Open_In(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_Open_In_t method = (LUCY_Folder_Local_Open_In_t)cfish_obj_method(self, LUCY_Folder_Local_Open_In_OFFSET);
    return method(self, name);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Open_Dir_OFFSET;
static CFISH_INLINE lucy_DirHandle*
LUCY_Folder_Local_Open_Dir(lucy_Folder* self) {
    const LUCY_Folder_Local_Open_Dir_t method = (LUCY_Folder_Local_Open_Dir_t)cfish_obj_method(self, LUCY_Folder_Local_Open_Dir_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_MkDir_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Local_MkDir(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_MkDir_t method = (LUCY_Folder_Local_MkDir_t)cfish_obj_method(self, LUCY_Folder_Local_MkDir_OFFSET);
    return method(self, name);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Exists_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Local_Exists(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_Exists_t method = (LUCY_Folder_Local_Exists_t)cfish_obj_method(self, LUCY_Folder_Local_Exists_OFFSET);
    return method(self, name);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Is_Directory_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Local_Is_Directory(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_Is_Directory_t method = (LUCY_Folder_Local_Is_Directory_t)cfish_obj_method(self, LUCY_Folder_Local_Is_Directory_OFFSET);
    return method(self, name);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Find_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_Folder_Local_Find_Folder(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_Find_Folder_t method = (LUCY_Folder_Local_Find_Folder_t)cfish_obj_method(self, LUCY_Folder_Local_Find_Folder_OFFSET);
    return method(self, name);
}

extern LUCY_VISIBLE uint32_t LUCY_Folder_Local_Delete_OFFSET;
static CFISH_INLINE bool
LUCY_Folder_Local_Delete(lucy_Folder* self, cfish_String* name) {
    const LUCY_Folder_Local_Delete_t method = (LUCY_Folder_Local_Delete_t)cfish_obj_method(self, LUCY_Folder_Local_Delete_OFFSET);
    return method(self, name);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Folder_Get_Path_OVERRIDE NULL
#define Lucy_Folder_Set_Path_OVERRIDE NULL
#define Lucy_Folder_Open_Out_OVERRIDE NULL
#define Lucy_Folder_Open_In_OVERRIDE NULL
#define Lucy_Folder_Open_FileHandle_OVERRIDE NULL
#define Lucy_Folder_Open_Dir_OVERRIDE NULL
#define Lucy_Folder_MkDir_OVERRIDE NULL
#define Lucy_Folder_List_OVERRIDE NULL
#define Lucy_Folder_List_R_OVERRIDE NULL
#define Lucy_Folder_Exists_OVERRIDE NULL
#define Lucy_Folder_Is_Directory_OVERRIDE NULL
#define Lucy_Folder_Delete_OVERRIDE NULL
#define Lucy_Folder_Delete_Tree_OVERRIDE NULL
#define Lucy_Folder_Rename_OVERRIDE NULL
#define Lucy_Folder_Hard_Link_OVERRIDE NULL
#define Lucy_Folder_Slurp_File_OVERRIDE NULL
#define Lucy_Folder_Consolidate_OVERRIDE NULL
#define Lucy_Folder_Enclosing_Folder_OVERRIDE NULL
#define Lucy_Folder_Find_Folder_OVERRIDE NULL
#define Lucy_Folder_Initialize_OVERRIDE NULL
#define Lucy_Folder_Check_OVERRIDE NULL
#define Lucy_Folder_Close_OVERRIDE NULL
#define Lucy_Folder_Local_Open_FileHandle_OVERRIDE NULL
#define Lucy_Folder_Local_Open_In_OVERRIDE NULL
#define Lucy_Folder_Local_Open_Dir_OVERRIDE NULL
#define Lucy_Folder_Local_MkDir_OVERRIDE NULL
#define Lucy_Folder_Local_Exists_OVERRIDE NULL
#define Lucy_Folder_Local_Is_Directory_OVERRIDE NULL
#define Lucy_Folder_Local_Find_Folder_OVERRIDE NULL
#define Lucy_Folder_Local_Delete_OVERRIDE NULL
#else
cfish_String*
Lucy_Folder_Get_Path_OVERRIDE(lucy_Folder* self);
void
Lucy_Folder_Set_Path_OVERRIDE(lucy_Folder* self, cfish_String* path);
lucy_OutStream*
Lucy_Folder_Open_Out_OVERRIDE(lucy_Folder* self, cfish_String* path);
lucy_InStream*
Lucy_Folder_Open_In_OVERRIDE(lucy_Folder* self, cfish_String* path);
lucy_FileHandle*
Lucy_Folder_Open_FileHandle_OVERRIDE(lucy_Folder* self, cfish_String* path, uint32_t flags);
lucy_DirHandle*
Lucy_Folder_Open_Dir_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_MkDir_OVERRIDE(lucy_Folder* self, cfish_String* path);
cfish_Vector*
Lucy_Folder_List_OVERRIDE(lucy_Folder* self, cfish_String* path);
cfish_Vector*
Lucy_Folder_List_R_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_Exists_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_Is_Directory_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_Delete_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_Delete_Tree_OVERRIDE(lucy_Folder* self, cfish_String* path);
bool
Lucy_Folder_Rename_OVERRIDE(lucy_Folder* self, cfish_String* from, cfish_String* to);
bool
Lucy_Folder_Hard_Link_OVERRIDE(lucy_Folder* self, cfish_String* from, cfish_String* to);
cfish_Blob*
Lucy_Folder_Slurp_File_OVERRIDE(lucy_Folder* self, cfish_String* path);
void
Lucy_Folder_Consolidate_OVERRIDE(lucy_Folder* self, cfish_String* path);
lucy_Folder*
Lucy_Folder_Enclosing_Folder_OVERRIDE(lucy_Folder* self, cfish_String* path);
lucy_Folder*
Lucy_Folder_Find_Folder_OVERRIDE(lucy_Folder* self, cfish_String* path);
void
Lucy_Folder_Initialize_OVERRIDE(lucy_Folder* self);
bool
Lucy_Folder_Check_OVERRIDE(lucy_Folder* self);
void
Lucy_Folder_Close_OVERRIDE(lucy_Folder* self);
lucy_FileHandle*
Lucy_Folder_Local_Open_FileHandle_OVERRIDE(lucy_Folder* self, cfish_String* name, uint32_t flags);
lucy_InStream*
Lucy_Folder_Local_Open_In_OVERRIDE(lucy_Folder* self, cfish_String* name);
lucy_DirHandle*
Lucy_Folder_Local_Open_Dir_OVERRIDE(lucy_Folder* self);
bool
Lucy_Folder_Local_MkDir_OVERRIDE(lucy_Folder* self, cfish_String* name);
bool
Lucy_Folder_Local_Exists_OVERRIDE(lucy_Folder* self, cfish_String* name);
bool
Lucy_Folder_Local_Is_Directory_OVERRIDE(lucy_Folder* self, cfish_String* name);
lucy_Folder*
Lucy_Folder_Local_Find_Folder_OVERRIDE(lucy_Folder* self, cfish_String* name);
bool
Lucy_Folder_Local_Delete_OVERRIDE(lucy_Folder* self, cfish_String* name);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Folder lucy_Folder
  #define FOLDER LUCY_FOLDER
  #define Folder_init lucy_Folder_init
  #define Folder_get_class lucy_Folder_get_class
  #define Folder_get_class_name lucy_Folder_get_class_name
  #define Folder_is_a lucy_Folder_is_a
  #define Folder_Destroy_IMP LUCY_Folder_Destroy_IMP
  #define Folder_Get_Path_IMP LUCY_Folder_Get_Path_IMP
  #define Folder_Set_Path_IMP LUCY_Folder_Set_Path_IMP
  #define Folder_Open_Out_IMP LUCY_Folder_Open_Out_IMP
  #define Folder_Open_In_IMP LUCY_Folder_Open_In_IMP
  #define Folder_Open_FileHandle_IMP LUCY_Folder_Open_FileHandle_IMP
  #define Folder_Open_Dir_IMP LUCY_Folder_Open_Dir_IMP
  #define Folder_MkDir_IMP LUCY_Folder_MkDir_IMP
  #define Folder_List_IMP LUCY_Folder_List_IMP
  #define Folder_List_R_IMP LUCY_Folder_List_R_IMP
  #define Folder_Exists_IMP LUCY_Folder_Exists_IMP
  #define Folder_Is_Directory_IMP LUCY_Folder_Is_Directory_IMP
  #define Folder_Delete_IMP LUCY_Folder_Delete_IMP
  #define Folder_Delete_Tree_IMP LUCY_Folder_Delete_Tree_IMP
  #define Folder_Rename_IMP LUCY_Folder_Rename_IMP
  #define Folder_Hard_Link_IMP LUCY_Folder_Hard_Link_IMP
  #define Folder_Slurp_File_IMP LUCY_Folder_Slurp_File_IMP
  #define Folder_Consolidate_IMP LUCY_Folder_Consolidate_IMP
  #define Folder_Enclosing_Folder_IMP LUCY_Folder_Enclosing_Folder_IMP
  #define Folder_Find_Folder_IMP LUCY_Folder_Find_Folder_IMP
  #define Folder_Initialize_IMP LUCY_Folder_Initialize_IMP
  #define Folder_Check_IMP LUCY_Folder_Check_IMP
  #define Folder_Close_IMP LUCY_Folder_Close_IMP
  #define Folder_Local_Open_FileHandle_IMP LUCY_Folder_Local_Open_FileHandle_IMP
  #define Folder_Local_Open_In_IMP LUCY_Folder_Local_Open_In_IMP
  #define Folder_Local_Open_Dir_IMP LUCY_Folder_Local_Open_Dir_IMP
  #define Folder_Local_MkDir_IMP LUCY_Folder_Local_MkDir_IMP
  #define Folder_Local_Exists_IMP LUCY_Folder_Local_Exists_IMP
  #define Folder_Local_Is_Directory_IMP LUCY_Folder_Local_Is_Directory_IMP
  #define Folder_Local_Find_Folder_IMP LUCY_Folder_Local_Find_Folder_IMP
  #define Folder_Local_Delete_IMP LUCY_Folder_Local_Delete_IMP
  #define Folder_To_Host LUCY_Folder_To_Host
  #define Folder_To_Host_t LUCY_Folder_To_Host_t
  #define Folder_Clone LUCY_Folder_Clone
  #define Folder_Clone_t LUCY_Folder_Clone_t
  #define Folder_Equals LUCY_Folder_Equals
  #define Folder_Equals_t LUCY_Folder_Equals_t
  #define Folder_Compare_To LUCY_Folder_Compare_To
  #define Folder_Compare_To_t LUCY_Folder_Compare_To_t
  #define Folder_Destroy LUCY_Folder_Destroy
  #define Folder_Destroy_t LUCY_Folder_Destroy_t
  #define Folder_To_String LUCY_Folder_To_String
  #define Folder_To_String_t LUCY_Folder_To_String_t
  #define Folder_Get_Path LUCY_Folder_Get_Path
  #define Folder_Get_Path_t LUCY_Folder_Get_Path_t
  #define Folder_Set_Path LUCY_Folder_Set_Path
  #define Folder_Set_Path_t LUCY_Folder_Set_Path_t
  #define Folder_Open_Out LUCY_Folder_Open_Out
  #define Folder_Open_Out_t LUCY_Folder_Open_Out_t
  #define Folder_Open_In LUCY_Folder_Open_In
  #define Folder_Open_In_t LUCY_Folder_Open_In_t
  #define Folder_Open_FileHandle LUCY_Folder_Open_FileHandle
  #define Folder_Open_FileHandle_t LUCY_Folder_Open_FileHandle_t
  #define Folder_Open_Dir LUCY_Folder_Open_Dir
  #define Folder_Open_Dir_t LUCY_Folder_Open_Dir_t
  #define Folder_MkDir LUCY_Folder_MkDir
  #define Folder_MkDir_t LUCY_Folder_MkDir_t
  #define Folder_List LUCY_Folder_List
  #define Folder_List_t LUCY_Folder_List_t
  #define Folder_List_R LUCY_Folder_List_R
  #define Folder_List_R_t LUCY_Folder_List_R_t
  #define Folder_Exists LUCY_Folder_Exists
  #define Folder_Exists_t LUCY_Folder_Exists_t
  #define Folder_Is_Directory LUCY_Folder_Is_Directory
  #define Folder_Is_Directory_t LUCY_Folder_Is_Directory_t
  #define Folder_Delete LUCY_Folder_Delete
  #define Folder_Delete_t LUCY_Folder_Delete_t
  #define Folder_Delete_Tree LUCY_Folder_Delete_Tree
  #define Folder_Delete_Tree_t LUCY_Folder_Delete_Tree_t
  #define Folder_Rename LUCY_Folder_Rename
  #define Folder_Rename_t LUCY_Folder_Rename_t
  #define Folder_Hard_Link LUCY_Folder_Hard_Link
  #define Folder_Hard_Link_t LUCY_Folder_Hard_Link_t
  #define Folder_Slurp_File LUCY_Folder_Slurp_File
  #define Folder_Slurp_File_t LUCY_Folder_Slurp_File_t
  #define Folder_Consolidate LUCY_Folder_Consolidate
  #define Folder_Consolidate_t LUCY_Folder_Consolidate_t
  #define Folder_Enclosing_Folder LUCY_Folder_Enclosing_Folder
  #define Folder_Enclosing_Folder_t LUCY_Folder_Enclosing_Folder_t
  #define Folder_Find_Folder LUCY_Folder_Find_Folder
  #define Folder_Find_Folder_t LUCY_Folder_Find_Folder_t
  #define Folder_Initialize LUCY_Folder_Initialize
  #define Folder_Initialize_t LUCY_Folder_Initialize_t
  #define Folder_Check LUCY_Folder_Check
  #define Folder_Check_t LUCY_Folder_Check_t
  #define Folder_Close LUCY_Folder_Close
  #define Folder_Close_t LUCY_Folder_Close_t
  #define Folder_Local_Open_FileHandle LUCY_Folder_Local_Open_FileHandle
  #define Folder_Local_Open_FileHandle_t LUCY_Folder_Local_Open_FileHandle_t
  #define Folder_Local_Open_In LUCY_Folder_Local_Open_In
  #define Folder_Local_Open_In_t LUCY_Folder_Local_Open_In_t
  #define Folder_Local_Open_Dir LUCY_Folder_Local_Open_Dir
  #define Folder_Local_Open_Dir_t LUCY_Folder_Local_Open_Dir_t
  #define Folder_Local_MkDir LUCY_Folder_Local_MkDir
  #define Folder_Local_MkDir_t LUCY_Folder_Local_MkDir_t
  #define Folder_Local_Exists LUCY_Folder_Local_Exists
  #define Folder_Local_Exists_t LUCY_Folder_Local_Exists_t
  #define Folder_Local_Is_Directory LUCY_Folder_Local_Is_Directory
  #define Folder_Local_Is_Directory_t LUCY_Folder_Local_Is_Directory_t
  #define Folder_Local_Find_Folder LUCY_Folder_Local_Find_Folder
  #define Folder_Local_Find_Folder_t LUCY_Folder_Local_Find_Folder_t
  #define Folder_Local_Delete LUCY_Folder_Local_Delete
  #define Folder_Local_Delete_t LUCY_Folder_Local_Delete_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_STORE_FOLDER */




