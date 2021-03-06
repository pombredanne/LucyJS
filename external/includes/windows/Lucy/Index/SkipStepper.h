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


#ifndef H_LUCY_INDEX_SKIPSTEPPER
#define H_LUCY_INDEX_SKIPSTEPPER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy\Util\Stepper.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SKIPSTEPPER
extern uint32_t lucy_SkipStepper_IVARS_OFFSET;
typedef struct lucy_SkipStepperIVARS lucy_SkipStepperIVARS;
static CFISH_INLINE lucy_SkipStepperIVARS*
lucy_SkipStepper_IVARS(lucy_SkipStepper *self) {
   char *ptr = (char*)self + lucy_SkipStepper_IVARS_OFFSET;
   return (lucy_SkipStepperIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SkipStepperIVARS lucy_SkipStepperIVARS
  #define SkipStepper_IVARS lucy_SkipStepper_IVARS
#endif

struct lucy_SkipStepperIVARS {
    int32_t doc_id;
    int64_t filepos;
};

#endif /* C_LUCY_SKIPSTEPPER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SkipStepper*
lucy_SkipStepper_new(void);

void
LUCY_SkipStepper_Read_Record_IMP(lucy_SkipStepper* self, lucy_InStream* instream);

void
LUCY_SkipStepper_Write_Record_IMP(lucy_SkipStepper* self, lucy_OutStream* outstream, int32_t last_doc_id, int64_t last_filepos);

void
LUCY_SkipStepper_Set_ID_And_Filepos_IMP(lucy_SkipStepper* self, int32_t doc_id, int64_t filepos);

cfish_String*
LUCY_SkipStepper_To_String_IMP(lucy_SkipStepper* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SkipStepper_To_Host_t)(lucy_SkipStepper* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SkipStepper_Clone_t)(lucy_SkipStepper* self);

typedef bool
(*LUCY_SkipStepper_Equals_t)(lucy_SkipStepper* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SkipStepper_Compare_To_t)(lucy_SkipStepper* self, cfish_Obj* other);

typedef void
(*LUCY_SkipStepper_Destroy_t)(lucy_SkipStepper* self);

typedef cfish_String*
(*LUCY_SkipStepper_To_String_t)(lucy_SkipStepper* self);

typedef void
(*LUCY_SkipStepper_Reset_t)(lucy_SkipStepper* self);

typedef void
(*LUCY_SkipStepper_Write_Key_Frame_t)(lucy_SkipStepper* self, lucy_OutStream* outstream, cfish_Obj* value);

typedef void
(*LUCY_SkipStepper_Write_Delta_t)(lucy_SkipStepper* self, lucy_OutStream* outstream, cfish_Obj* value);

typedef void
(*LUCY_SkipStepper_Read_Key_Frame_t)(lucy_SkipStepper* self, lucy_InStream* instream);

typedef void
(*LUCY_SkipStepper_Read_Delta_t)(lucy_SkipStepper* self, lucy_InStream* instream);

typedef void
(*LUCY_SkipStepper_Read_Record_t)(lucy_SkipStepper* self, lucy_InStream* instream);

typedef void
(*LUCY_SkipStepper_Write_Record_t)(lucy_SkipStepper* self, lucy_OutStream* outstream, int32_t last_doc_id, int64_t last_filepos);

typedef void
(*LUCY_SkipStepper_Set_ID_And_Filepos_t)(lucy_SkipStepper* self, int32_t doc_id, int64_t filepos);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SkipStepper_get_class(lucy_SkipStepper *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SkipStepper_get_class_name(lucy_SkipStepper *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SkipStepper_is_a(lucy_SkipStepper *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SkipStepper_To_Host(lucy_SkipStepper* self, void* vcache) {
    const LUCY_SkipStepper_To_Host_t method = (LUCY_SkipStepper_To_Host_t)cfish_obj_method(self, LUCY_SkipStepper_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SkipStepper_Clone(lucy_SkipStepper* self) {
    const LUCY_SkipStepper_Clone_t method = (LUCY_SkipStepper_Clone_t)cfish_obj_method(self, LUCY_SkipStepper_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SkipStepper_Equals(lucy_SkipStepper* self, cfish_Obj* other) {
    const LUCY_SkipStepper_Equals_t method = (LUCY_SkipStepper_Equals_t)cfish_obj_method(self, LUCY_SkipStepper_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SkipStepper_Compare_To(lucy_SkipStepper* self, cfish_Obj* other) {
    const LUCY_SkipStepper_Compare_To_t method = (LUCY_SkipStepper_Compare_To_t)cfish_obj_method(self, LUCY_SkipStepper_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Destroy(lucy_SkipStepper* self) {
    const LUCY_SkipStepper_Destroy_t method = (LUCY_SkipStepper_Destroy_t)cfish_obj_method(self, LUCY_SkipStepper_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SkipStepper_To_String(lucy_SkipStepper* self) {
    const LUCY_SkipStepper_To_String_t method = (LUCY_SkipStepper_To_String_t)cfish_obj_method(self, LUCY_SkipStepper_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Reset_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Reset(lucy_SkipStepper* self) {
    const LUCY_SkipStepper_Reset_t method = (LUCY_SkipStepper_Reset_t)cfish_obj_method(self, LUCY_SkipStepper_Reset_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Write_Key_Frame_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Write_Key_Frame(lucy_SkipStepper* self, lucy_OutStream* outstream, cfish_Obj* value) {
    const LUCY_SkipStepper_Write_Key_Frame_t method = (LUCY_SkipStepper_Write_Key_Frame_t)cfish_obj_method(self, LUCY_SkipStepper_Write_Key_Frame_OFFSET);
    method(self, outstream, value);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Write_Delta_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Write_Delta(lucy_SkipStepper* self, lucy_OutStream* outstream, cfish_Obj* value) {
    const LUCY_SkipStepper_Write_Delta_t method = (LUCY_SkipStepper_Write_Delta_t)cfish_obj_method(self, LUCY_SkipStepper_Write_Delta_OFFSET);
    method(self, outstream, value);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Read_Key_Frame_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Read_Key_Frame(lucy_SkipStepper* self, lucy_InStream* instream) {
    const LUCY_SkipStepper_Read_Key_Frame_t method = (LUCY_SkipStepper_Read_Key_Frame_t)cfish_obj_method(self, LUCY_SkipStepper_Read_Key_Frame_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Read_Delta_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Read_Delta(lucy_SkipStepper* self, lucy_InStream* instream) {
    const LUCY_SkipStepper_Read_Delta_t method = (LUCY_SkipStepper_Read_Delta_t)cfish_obj_method(self, LUCY_SkipStepper_Read_Delta_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Read_Record_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Read_Record(lucy_SkipStepper* self, lucy_InStream* instream) {
    const LUCY_SkipStepper_Read_Record_t method = (LUCY_SkipStepper_Read_Record_t)cfish_obj_method(self, LUCY_SkipStepper_Read_Record_OFFSET);
    method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Write_Record_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Write_Record(lucy_SkipStepper* self, lucy_OutStream* outstream, int32_t last_doc_id, int64_t last_filepos) {
    const LUCY_SkipStepper_Write_Record_t method = (LUCY_SkipStepper_Write_Record_t)cfish_obj_method(self, LUCY_SkipStepper_Write_Record_OFFSET);
    method(self, outstream, last_doc_id, last_filepos);
}

extern LUCY_VISIBLE uint32_t LUCY_SkipStepper_Set_ID_And_Filepos_OFFSET;
static CFISH_INLINE void
LUCY_SkipStepper_Set_ID_And_Filepos(lucy_SkipStepper* self, int32_t doc_id, int64_t filepos) {
    const LUCY_SkipStepper_Set_ID_And_Filepos_t method = (LUCY_SkipStepper_Set_ID_And_Filepos_t)cfish_obj_method(self, LUCY_SkipStepper_Set_ID_And_Filepos_OFFSET);
    method(self, doc_id, filepos);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_SkipStepper_Write_Record_OVERRIDE NULL
#define Lucy_SkipStepper_Set_ID_And_Filepos_OVERRIDE NULL
#else
void
Lucy_SkipStepper_Write_Record_OVERRIDE(lucy_SkipStepper* self, lucy_OutStream* outstream, int32_t last_doc_id, int64_t last_filepos);
void
Lucy_SkipStepper_Set_ID_And_Filepos_OVERRIDE(lucy_SkipStepper* self, int32_t doc_id, int64_t filepos);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define SkipStepper lucy_SkipStepper
  #define SKIPSTEPPER LUCY_SKIPSTEPPER
  #define SkipStepper_new lucy_SkipStepper_new
  #define SkipStepper_get_class lucy_SkipStepper_get_class
  #define SkipStepper_get_class_name lucy_SkipStepper_get_class_name
  #define SkipStepper_is_a lucy_SkipStepper_is_a
  #define SkipStepper_Read_Record_IMP LUCY_SkipStepper_Read_Record_IMP
  #define SkipStepper_Write_Record_IMP LUCY_SkipStepper_Write_Record_IMP
  #define SkipStepper_Set_ID_And_Filepos_IMP LUCY_SkipStepper_Set_ID_And_Filepos_IMP
  #define SkipStepper_To_String_IMP LUCY_SkipStepper_To_String_IMP
  #define SkipStepper_To_Host LUCY_SkipStepper_To_Host
  #define SkipStepper_To_Host_t LUCY_SkipStepper_To_Host_t
  #define SkipStepper_Clone LUCY_SkipStepper_Clone
  #define SkipStepper_Clone_t LUCY_SkipStepper_Clone_t
  #define SkipStepper_Equals LUCY_SkipStepper_Equals
  #define SkipStepper_Equals_t LUCY_SkipStepper_Equals_t
  #define SkipStepper_Compare_To LUCY_SkipStepper_Compare_To
  #define SkipStepper_Compare_To_t LUCY_SkipStepper_Compare_To_t
  #define SkipStepper_Destroy LUCY_SkipStepper_Destroy
  #define SkipStepper_Destroy_t LUCY_SkipStepper_Destroy_t
  #define SkipStepper_To_String LUCY_SkipStepper_To_String
  #define SkipStepper_To_String_t LUCY_SkipStepper_To_String_t
  #define SkipStepper_Reset LUCY_SkipStepper_Reset
  #define SkipStepper_Reset_t LUCY_SkipStepper_Reset_t
  #define SkipStepper_Write_Key_Frame LUCY_SkipStepper_Write_Key_Frame
  #define SkipStepper_Write_Key_Frame_t LUCY_SkipStepper_Write_Key_Frame_t
  #define SkipStepper_Write_Delta LUCY_SkipStepper_Write_Delta
  #define SkipStepper_Write_Delta_t LUCY_SkipStepper_Write_Delta_t
  #define SkipStepper_Read_Key_Frame LUCY_SkipStepper_Read_Key_Frame
  #define SkipStepper_Read_Key_Frame_t LUCY_SkipStepper_Read_Key_Frame_t
  #define SkipStepper_Read_Delta LUCY_SkipStepper_Read_Delta
  #define SkipStepper_Read_Delta_t LUCY_SkipStepper_Read_Delta_t
  #define SkipStepper_Read_Record LUCY_SkipStepper_Read_Record
  #define SkipStepper_Read_Record_t LUCY_SkipStepper_Read_Record_t
  #define SkipStepper_Write_Record LUCY_SkipStepper_Write_Record
  #define SkipStepper_Write_Record_t LUCY_SkipStepper_Write_Record_t
  #define SkipStepper_Set_ID_And_Filepos LUCY_SkipStepper_Set_ID_And_Filepos
  #define SkipStepper_Set_ID_And_Filepos_t LUCY_SkipStepper_Set_ID_And_Filepos_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_SKIPSTEPPER */




