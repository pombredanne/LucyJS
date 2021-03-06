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


#ifndef H_LUCY_SEARCH_HITS
#define H_LUCY_SEARCH_HITS 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_HITS
extern uint32_t lucy_Hits_IVARS_OFFSET;
typedef struct lucy_HitsIVARS lucy_HitsIVARS;
static CFISH_INLINE lucy_HitsIVARS*
lucy_Hits_IVARS(lucy_Hits *self) {
   char *ptr = (char*)self + lucy_Hits_IVARS_OFFSET;
   return (lucy_HitsIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define HitsIVARS lucy_HitsIVARS
  #define Hits_IVARS lucy_Hits_IVARS
#endif

struct lucy_HitsIVARS {
    lucy_Searcher* searcher;
    lucy_TopDocs* top_docs;
    cfish_Vector* match_docs;
    uint32_t offset;
};

#endif /* C_LUCY_HITS */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Hits*
lucy_Hits_new(lucy_Searcher* searcher, lucy_TopDocs* top_docs, uint32_t offset);

LUCY_VISIBLE lucy_Hits*
lucy_Hits_init(lucy_Hits* self, lucy_Searcher* searcher, lucy_TopDocs* top_docs, uint32_t offset);

lucy_HitDoc*
LUCY_Hits_Next_IMP(lucy_Hits* self);

uint32_t
LUCY_Hits_Total_Hits_IMP(lucy_Hits* self);

void
LUCY_Hits_Destroy_IMP(lucy_Hits* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Hits_To_Host_t)(lucy_Hits* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Hits_Clone_t)(lucy_Hits* self);

typedef bool
(*LUCY_Hits_Equals_t)(lucy_Hits* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Hits_Compare_To_t)(lucy_Hits* self, cfish_Obj* other);

typedef void
(*LUCY_Hits_Destroy_t)(lucy_Hits* self);

typedef cfish_String*
(*LUCY_Hits_To_String_t)(lucy_Hits* self);

typedef lucy_HitDoc*
(*LUCY_Hits_Next_t)(lucy_Hits* self);

typedef uint32_t
(*LUCY_Hits_Total_Hits_t)(lucy_Hits* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Hits_get_class(lucy_Hits *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Hits_get_class_name(lucy_Hits *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Hits_is_a(lucy_Hits *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Hits_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Hits_To_Host(lucy_Hits* self, void* vcache) {
    const LUCY_Hits_To_Host_t method = (LUCY_Hits_To_Host_t)cfish_obj_method(self, LUCY_Hits_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Hits_Clone(lucy_Hits* self) {
    const LUCY_Hits_Clone_t method = (LUCY_Hits_Clone_t)cfish_obj_method(self, LUCY_Hits_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Hits_Equals(lucy_Hits* self, cfish_Obj* other) {
    const LUCY_Hits_Equals_t method = (LUCY_Hits_Equals_t)cfish_obj_method(self, LUCY_Hits_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Hits_Compare_To(lucy_Hits* self, cfish_Obj* other) {
    const LUCY_Hits_Compare_To_t method = (LUCY_Hits_Compare_To_t)cfish_obj_method(self, LUCY_Hits_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Hits_Destroy(lucy_Hits* self) {
    const LUCY_Hits_Destroy_t method = (LUCY_Hits_Destroy_t)cfish_obj_method(self, LUCY_Hits_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Hits_To_String(lucy_Hits* self) {
    const LUCY_Hits_To_String_t method = (LUCY_Hits_To_String_t)cfish_obj_method(self, LUCY_Hits_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Next_OFFSET;
static CFISH_INLINE lucy_HitDoc*
LUCY_Hits_Next(lucy_Hits* self) {
    const LUCY_Hits_Next_t method = (LUCY_Hits_Next_t)cfish_obj_method(self, LUCY_Hits_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Hits_Total_Hits_OFFSET;
static CFISH_INLINE uint32_t
LUCY_Hits_Total_Hits(lucy_Hits* self) {
    const LUCY_Hits_Total_Hits_t method = (LUCY_Hits_Total_Hits_t)cfish_obj_method(self, LUCY_Hits_Total_Hits_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Hits_Next_OVERRIDE NULL
#define Lucy_Hits_Total_Hits_OVERRIDE NULL
#else
lucy_HitDoc*
Lucy_Hits_Next_OVERRIDE(lucy_Hits* self);
uint32_t
Lucy_Hits_Total_Hits_OVERRIDE(lucy_Hits* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Hits lucy_Hits
  #define HITS LUCY_HITS
  #define Hits_new lucy_Hits_new
  #define Hits_init lucy_Hits_init
  #define Hits_get_class lucy_Hits_get_class
  #define Hits_get_class_name lucy_Hits_get_class_name
  #define Hits_is_a lucy_Hits_is_a
  #define Hits_Next_IMP LUCY_Hits_Next_IMP
  #define Hits_Total_Hits_IMP LUCY_Hits_Total_Hits_IMP
  #define Hits_Destroy_IMP LUCY_Hits_Destroy_IMP
  #define Hits_To_Host LUCY_Hits_To_Host
  #define Hits_To_Host_t LUCY_Hits_To_Host_t
  #define Hits_Clone LUCY_Hits_Clone
  #define Hits_Clone_t LUCY_Hits_Clone_t
  #define Hits_Equals LUCY_Hits_Equals
  #define Hits_Equals_t LUCY_Hits_Equals_t
  #define Hits_Compare_To LUCY_Hits_Compare_To
  #define Hits_Compare_To_t LUCY_Hits_Compare_To_t
  #define Hits_Destroy LUCY_Hits_Destroy
  #define Hits_Destroy_t LUCY_Hits_Destroy_t
  #define Hits_To_String LUCY_Hits_To_String
  #define Hits_To_String_t LUCY_Hits_To_String_t
  #define Hits_Next LUCY_Hits_Next
  #define Hits_Next_t LUCY_Hits_Next_t
  #define Hits_Total_Hits LUCY_Hits_Total_Hits
  #define Hits_Total_Hits_t LUCY_Hits_Total_Hits_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_HITS */




