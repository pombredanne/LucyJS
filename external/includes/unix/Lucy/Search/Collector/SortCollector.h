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


#ifndef H_LUCY_SEARCH_COLLECTOR_SORTCOLLECTOR
#define H_LUCY_SEARCH_COLLECTOR_SORTCOLLECTOR 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Collector.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SORTCOLLECTOR
extern uint32_t lucy_SortColl_IVARS_OFFSET;
typedef struct lucy_SortCollectorIVARS lucy_SortCollectorIVARS;
static CFISH_INLINE lucy_SortCollectorIVARS*
lucy_SortColl_IVARS(lucy_SortCollector *self) {
   char *ptr = (char*)self + lucy_SortColl_IVARS_OFFSET;
   return (lucy_SortCollectorIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SortCollectorIVARS lucy_SortCollectorIVARS
  #define SortColl_IVARS lucy_SortColl_IVARS
#endif

struct lucy_SortCollectorIVARS {
    lucy_SegReader* reader;
    lucy_Matcher* matcher;
    int32_t base;
    uint32_t wanted;
    uint32_t total_hits;
    lucy_HitQueue* hit_q;
    lucy_MatchDoc* bumped;
    cfish_Vector* rules;
    lucy_SortCache** sort_caches;
    const void** ord_arrays;
    uint8_t* actions;
    uint8_t* auto_actions;
    uint8_t* derived_actions;
    uint32_t num_rules;
    uint32_t num_actions;
    float bubble_score;
    uint32_t bubble_doc;
    uint32_t seg_doc_max;
    bool need_score;
    bool need_values;
};

#endif /* C_LUCY_SORTCOLLECTOR */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_SortCollector*
lucy_SortColl_new(lucy_Schema* schema, lucy_SortSpec* sort_spec, uint32_t wanted);

LUCY_VISIBLE lucy_SortCollector*
lucy_SortColl_init(lucy_SortCollector* self, lucy_Schema* schema, lucy_SortSpec* sort_spec, uint32_t wanted);

void
LUCY_SortColl_Collect_IMP(lucy_SortCollector* self, int32_t doc_id);

cfish_Vector*
LUCY_SortColl_Pop_Match_Docs_IMP(lucy_SortCollector* self);

uint32_t
LUCY_SortColl_Get_Total_Hits_IMP(lucy_SortCollector* self);

void
LUCY_SortColl_Set_Reader_IMP(lucy_SortCollector* self, lucy_SegReader* reader);

bool
LUCY_SortColl_Need_Score_IMP(lucy_SortCollector* self);

void
LUCY_SortColl_Destroy_IMP(lucy_SortCollector* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_SortColl_To_Host_t)(lucy_SortCollector* self, void* vcache);

typedef cfish_Obj*
(*LUCY_SortColl_Clone_t)(lucy_SortCollector* self);

typedef bool
(*LUCY_SortColl_Equals_t)(lucy_SortCollector* self, cfish_Obj* other);

typedef int32_t
(*LUCY_SortColl_Compare_To_t)(lucy_SortCollector* self, cfish_Obj* other);

typedef void
(*LUCY_SortColl_Destroy_t)(lucy_SortCollector* self);

typedef cfish_String*
(*LUCY_SortColl_To_String_t)(lucy_SortCollector* self);

typedef void
(*LUCY_SortColl_Collect_t)(lucy_SortCollector* self, int32_t doc_id);

typedef void
(*LUCY_SortColl_Set_Reader_t)(lucy_SortCollector* self, lucy_SegReader* reader);

typedef void
(*LUCY_SortColl_Set_Base_t)(lucy_SortCollector* self, int32_t base);

typedef bool
(*LUCY_SortColl_Need_Score_t)(lucy_SortCollector* self);

typedef void
(*LUCY_SortColl_Set_Matcher_t)(lucy_SortCollector* self, lucy_Matcher* matcher);

typedef cfish_Vector*
(*LUCY_SortColl_Pop_Match_Docs_t)(lucy_SortCollector* self);

typedef uint32_t
(*LUCY_SortColl_Get_Total_Hits_t)(lucy_SortCollector* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_SortColl_get_class(lucy_SortCollector *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_SortColl_get_class_name(lucy_SortCollector *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_SortColl_is_a(lucy_SortCollector *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_SortColl_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_SortColl_To_Host(lucy_SortCollector* self, void* vcache) {
    const LUCY_SortColl_To_Host_t method = (LUCY_SortColl_To_Host_t)cfish_obj_method(self, LUCY_SortColl_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_SortColl_Clone(lucy_SortCollector* self) {
    const LUCY_SortColl_Clone_t method = (LUCY_SortColl_Clone_t)cfish_obj_method(self, LUCY_SortColl_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_SortColl_Equals(lucy_SortCollector* self, cfish_Obj* other) {
    const LUCY_SortColl_Equals_t method = (LUCY_SortColl_Equals_t)cfish_obj_method(self, LUCY_SortColl_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_SortColl_Compare_To(lucy_SortCollector* self, cfish_Obj* other) {
    const LUCY_SortColl_Compare_To_t method = (LUCY_SortColl_Compare_To_t)cfish_obj_method(self, LUCY_SortColl_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_SortColl_Destroy(lucy_SortCollector* self) {
    const LUCY_SortColl_Destroy_t method = (LUCY_SortColl_Destroy_t)cfish_obj_method(self, LUCY_SortColl_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_SortColl_To_String(lucy_SortCollector* self) {
    const LUCY_SortColl_To_String_t method = (LUCY_SortColl_To_String_t)cfish_obj_method(self, LUCY_SortColl_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Collect_OFFSET;
static CFISH_INLINE void
LUCY_SortColl_Collect(lucy_SortCollector* self, int32_t doc_id) {
    const LUCY_SortColl_Collect_t method = (LUCY_SortColl_Collect_t)cfish_obj_method(self, LUCY_SortColl_Collect_OFFSET);
    method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Set_Reader_OFFSET;
static CFISH_INLINE void
LUCY_SortColl_Set_Reader(lucy_SortCollector* self, lucy_SegReader* reader) {
    const LUCY_SortColl_Set_Reader_t method = (LUCY_SortColl_Set_Reader_t)cfish_obj_method(self, LUCY_SortColl_Set_Reader_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Set_Base_OFFSET;
static CFISH_INLINE void
LUCY_SortColl_Set_Base(lucy_SortCollector* self, int32_t base) {
    const LUCY_SortColl_Set_Base_t method = (LUCY_SortColl_Set_Base_t)cfish_obj_method(self, LUCY_SortColl_Set_Base_OFFSET);
    method(self, base);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Need_Score_OFFSET;
static CFISH_INLINE bool
LUCY_SortColl_Need_Score(lucy_SortCollector* self) {
    const LUCY_SortColl_Need_Score_t method = (LUCY_SortColl_Need_Score_t)cfish_obj_method(self, LUCY_SortColl_Need_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Set_Matcher_OFFSET;
static CFISH_INLINE void
LUCY_SortColl_Set_Matcher(lucy_SortCollector* self, lucy_Matcher* matcher) {
    const LUCY_SortColl_Set_Matcher_t method = (LUCY_SortColl_Set_Matcher_t)cfish_obj_method(self, LUCY_SortColl_Set_Matcher_OFFSET);
    method(self, matcher);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Pop_Match_Docs_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_SortColl_Pop_Match_Docs(lucy_SortCollector* self) {
    const LUCY_SortColl_Pop_Match_Docs_t method = (LUCY_SortColl_Pop_Match_Docs_t)cfish_obj_method(self, LUCY_SortColl_Pop_Match_Docs_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_SortColl_Get_Total_Hits_OFFSET;
static CFISH_INLINE uint32_t
LUCY_SortColl_Get_Total_Hits(lucy_SortCollector* self) {
    const LUCY_SortColl_Get_Total_Hits_t method = (LUCY_SortColl_Get_Total_Hits_t)cfish_obj_method(self, LUCY_SortColl_Get_Total_Hits_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_SortColl_Pop_Match_Docs_OVERRIDE NULL
#define Lucy_SortColl_Get_Total_Hits_OVERRIDE NULL
#else
cfish_Vector*
Lucy_SortColl_Pop_Match_Docs_OVERRIDE(lucy_SortCollector* self);
uint32_t
Lucy_SortColl_Get_Total_Hits_OVERRIDE(lucy_SortCollector* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define SortCollector lucy_SortCollector
  #define SORTCOLLECTOR LUCY_SORTCOLLECTOR
  #define SortColl_new lucy_SortColl_new
  #define SortColl_init lucy_SortColl_init
  #define SortColl_get_class lucy_SortColl_get_class
  #define SortColl_get_class_name lucy_SortColl_get_class_name
  #define SortColl_is_a lucy_SortColl_is_a
  #define SortColl_Collect_IMP LUCY_SortColl_Collect_IMP
  #define SortColl_Pop_Match_Docs_IMP LUCY_SortColl_Pop_Match_Docs_IMP
  #define SortColl_Get_Total_Hits_IMP LUCY_SortColl_Get_Total_Hits_IMP
  #define SortColl_Set_Reader_IMP LUCY_SortColl_Set_Reader_IMP
  #define SortColl_Need_Score_IMP LUCY_SortColl_Need_Score_IMP
  #define SortColl_Destroy_IMP LUCY_SortColl_Destroy_IMP
  #define SortColl_To_Host LUCY_SortColl_To_Host
  #define SortColl_To_Host_t LUCY_SortColl_To_Host_t
  #define SortColl_Clone LUCY_SortColl_Clone
  #define SortColl_Clone_t LUCY_SortColl_Clone_t
  #define SortColl_Equals LUCY_SortColl_Equals
  #define SortColl_Equals_t LUCY_SortColl_Equals_t
  #define SortColl_Compare_To LUCY_SortColl_Compare_To
  #define SortColl_Compare_To_t LUCY_SortColl_Compare_To_t
  #define SortColl_Destroy LUCY_SortColl_Destroy
  #define SortColl_Destroy_t LUCY_SortColl_Destroy_t
  #define SortColl_To_String LUCY_SortColl_To_String
  #define SortColl_To_String_t LUCY_SortColl_To_String_t
  #define SortColl_Collect LUCY_SortColl_Collect
  #define SortColl_Collect_t LUCY_SortColl_Collect_t
  #define SortColl_Set_Reader LUCY_SortColl_Set_Reader
  #define SortColl_Set_Reader_t LUCY_SortColl_Set_Reader_t
  #define SortColl_Set_Base LUCY_SortColl_Set_Base
  #define SortColl_Set_Base_t LUCY_SortColl_Set_Base_t
  #define SortColl_Need_Score LUCY_SortColl_Need_Score
  #define SortColl_Need_Score_t LUCY_SortColl_Need_Score_t
  #define SortColl_Set_Matcher LUCY_SortColl_Set_Matcher
  #define SortColl_Set_Matcher_t LUCY_SortColl_Set_Matcher_t
  #define SortColl_Pop_Match_Docs LUCY_SortColl_Pop_Match_Docs
  #define SortColl_Pop_Match_Docs_t LUCY_SortColl_Pop_Match_Docs_t
  #define SortColl_Get_Total_Hits LUCY_SortColl_Get_Total_Hits
  #define SortColl_Get_Total_Hits_t LUCY_SortColl_Get_Total_Hits_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_COLLECTOR_SORTCOLLECTOR */




