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


#ifndef H_LUCY_INDEX_FILEPURGER
#define H_LUCY_INDEX_FILEPURGER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_FILEPURGER
extern uint32_t lucy_FilePurger_IVARS_OFFSET;
typedef struct lucy_FilePurgerIVARS lucy_FilePurgerIVARS;
static CFISH_INLINE lucy_FilePurgerIVARS*
lucy_FilePurger_IVARS(lucy_FilePurger *self) {
   char *ptr = (char*)self + lucy_FilePurger_IVARS_OFFSET;
   return (lucy_FilePurgerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define FilePurgerIVARS lucy_FilePurgerIVARS
  #define FilePurger_IVARS lucy_FilePurger_IVARS
#endif

struct lucy_FilePurgerIVARS {
    lucy_Folder* folder;
    lucy_Snapshot* snapshot;
    lucy_IndexManager* manager;
    cfish_Hash* disallowed;
};

#endif /* C_LUCY_FILEPURGER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_FilePurger*
lucy_FilePurger_new(lucy_Folder* folder, lucy_Snapshot* snapshot, lucy_IndexManager* manager);

LUCY_VISIBLE lucy_FilePurger*
lucy_FilePurger_init(lucy_FilePurger* self, lucy_Folder* folder, lucy_Snapshot* snapshot, lucy_IndexManager* manager);

void
LUCY_FilePurger_Purge_IMP(lucy_FilePurger* self);

void
LUCY_FilePurger_Destroy_IMP(lucy_FilePurger* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_FilePurger_To_Host_t)(lucy_FilePurger* self, void* vcache);

typedef cfish_Obj*
(*LUCY_FilePurger_Clone_t)(lucy_FilePurger* self);

typedef bool
(*LUCY_FilePurger_Equals_t)(lucy_FilePurger* self, cfish_Obj* other);

typedef int32_t
(*LUCY_FilePurger_Compare_To_t)(lucy_FilePurger* self, cfish_Obj* other);

typedef void
(*LUCY_FilePurger_Destroy_t)(lucy_FilePurger* self);

typedef cfish_String*
(*LUCY_FilePurger_To_String_t)(lucy_FilePurger* self);

typedef void
(*LUCY_FilePurger_Purge_t)(lucy_FilePurger* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_FilePurger_get_class(lucy_FilePurger *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_FilePurger_get_class_name(lucy_FilePurger *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_FilePurger_is_a(lucy_FilePurger *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_FilePurger_To_Host(lucy_FilePurger* self, void* vcache) {
    const LUCY_FilePurger_To_Host_t method = (LUCY_FilePurger_To_Host_t)cfish_obj_method(self, LUCY_FilePurger_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_FilePurger_Clone(lucy_FilePurger* self) {
    const LUCY_FilePurger_Clone_t method = (LUCY_FilePurger_Clone_t)cfish_obj_method(self, LUCY_FilePurger_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_FilePurger_Equals(lucy_FilePurger* self, cfish_Obj* other) {
    const LUCY_FilePurger_Equals_t method = (LUCY_FilePurger_Equals_t)cfish_obj_method(self, LUCY_FilePurger_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_FilePurger_Compare_To(lucy_FilePurger* self, cfish_Obj* other) {
    const LUCY_FilePurger_Compare_To_t method = (LUCY_FilePurger_Compare_To_t)cfish_obj_method(self, LUCY_FilePurger_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_FilePurger_Destroy(lucy_FilePurger* self) {
    const LUCY_FilePurger_Destroy_t method = (LUCY_FilePurger_Destroy_t)cfish_obj_method(self, LUCY_FilePurger_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_FilePurger_To_String(lucy_FilePurger* self) {
    const LUCY_FilePurger_To_String_t method = (LUCY_FilePurger_To_String_t)cfish_obj_method(self, LUCY_FilePurger_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_FilePurger_Purge_OFFSET;
static CFISH_INLINE void
LUCY_FilePurger_Purge(lucy_FilePurger* self) {
    const LUCY_FilePurger_Purge_t method = (LUCY_FilePurger_Purge_t)cfish_obj_method(self, LUCY_FilePurger_Purge_OFFSET);
    method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_FilePurger_Purge_OVERRIDE NULL
#else
void
Lucy_FilePurger_Purge_OVERRIDE(lucy_FilePurger* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define FilePurger lucy_FilePurger
  #define FILEPURGER LUCY_FILEPURGER
  #define FilePurger_new lucy_FilePurger_new
  #define FilePurger_init lucy_FilePurger_init
  #define FilePurger_get_class lucy_FilePurger_get_class
  #define FilePurger_get_class_name lucy_FilePurger_get_class_name
  #define FilePurger_is_a lucy_FilePurger_is_a
  #define FilePurger_Purge_IMP LUCY_FilePurger_Purge_IMP
  #define FilePurger_Destroy_IMP LUCY_FilePurger_Destroy_IMP
  #define FilePurger_To_Host LUCY_FilePurger_To_Host
  #define FilePurger_To_Host_t LUCY_FilePurger_To_Host_t
  #define FilePurger_Clone LUCY_FilePurger_Clone
  #define FilePurger_Clone_t LUCY_FilePurger_Clone_t
  #define FilePurger_Equals LUCY_FilePurger_Equals
  #define FilePurger_Equals_t LUCY_FilePurger_Equals_t
  #define FilePurger_Compare_To LUCY_FilePurger_Compare_To
  #define FilePurger_Compare_To_t LUCY_FilePurger_Compare_To_t
  #define FilePurger_Destroy LUCY_FilePurger_Destroy
  #define FilePurger_Destroy_t LUCY_FilePurger_Destroy_t
  #define FilePurger_To_String LUCY_FilePurger_To_String
  #define FilePurger_To_String_t LUCY_FilePurger_To_String_t
  #define FilePurger_Purge LUCY_FilePurger_Purge
  #define FilePurger_Purge_t LUCY_FilePurger_Purge_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_FILEPURGER */



