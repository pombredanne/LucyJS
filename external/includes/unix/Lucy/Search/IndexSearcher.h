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


#ifndef H_LUCY_SEARCH_INDEXSEARCHER
#define H_LUCY_SEARCH_INDEXSEARCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Searcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_INDEXSEARCHER
extern uint32_t lucy_IxSearcher_IVARS_OFFSET;
typedef struct lucy_IndexSearcherIVARS lucy_IndexSearcherIVARS;
static CFISH_INLINE lucy_IndexSearcherIVARS*
lucy_IxSearcher_IVARS(lucy_IndexSearcher *self) {
   char *ptr = (char*)self + lucy_IxSearcher_IVARS_OFFSET;
   return (lucy_IndexSearcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define IndexSearcherIVARS lucy_IndexSearcherIVARS
  #define IxSearcher_IVARS lucy_IxSearcher_IVARS
#endif

struct lucy_IndexSearcherIVARS {
    lucy_Schema* schema;
    lucy_QueryParser* qparser;
    lucy_IndexReader* reader;
    lucy_DocReader* doc_reader;
    lucy_HighlightReader* hl_reader;
    cfish_Vector* seg_readers;
    lucy_I32Array* seg_starts;
};

#endif /* C_LUCY_INDEXSEARCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_IndexSearcher*
lucy_IxSearcher_new(cfish_Obj* index);

LUCY_VISIBLE lucy_IndexSearcher*
lucy_IxSearcher_init(lucy_IndexSearcher* self, cfish_Obj* index);

void
LUCY_IxSearcher_Destroy_IMP(lucy_IndexSearcher* self);

int32_t
LUCY_IxSearcher_Doc_Max_IMP(lucy_IndexSearcher* self);

uint32_t
LUCY_IxSearcher_Doc_Freq_IMP(lucy_IndexSearcher* self, cfish_String* field, cfish_Obj* term);

void
LUCY_IxSearcher_Collect_IMP(lucy_IndexSearcher* self, lucy_Query* query, lucy_Collector* collector);

lucy_TopDocs*
LUCY_IxSearcher_Top_Docs_IMP(lucy_IndexSearcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec);

lucy_HitDoc*
LUCY_IxSearcher_Fetch_Doc_IMP(lucy_IndexSearcher* self, int32_t doc_id);

lucy_DocVector*
LUCY_IxSearcher_Fetch_Doc_Vec_IMP(lucy_IndexSearcher* self, int32_t doc_id);

lucy_IndexReader*
LUCY_IxSearcher_Get_Reader_IMP(lucy_IndexSearcher* self);

void
LUCY_IxSearcher_Close_IMP(lucy_IndexSearcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_IxSearcher_To_Host_t)(lucy_IndexSearcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_IxSearcher_Clone_t)(lucy_IndexSearcher* self);

typedef bool
(*LUCY_IxSearcher_Equals_t)(lucy_IndexSearcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_IxSearcher_Compare_To_t)(lucy_IndexSearcher* self, cfish_Obj* other);

typedef void
(*LUCY_IxSearcher_Destroy_t)(lucy_IndexSearcher* self);

typedef cfish_String*
(*LUCY_IxSearcher_To_String_t)(lucy_IndexSearcher* self);

typedef int32_t
(*LUCY_IxSearcher_Doc_Max_t)(lucy_IndexSearcher* self);

typedef uint32_t
(*LUCY_IxSearcher_Doc_Freq_t)(lucy_IndexSearcher* self, cfish_String* field, cfish_Obj* term);

typedef lucy_Query*
(*LUCY_IxSearcher_Glean_Query_t)(lucy_IndexSearcher* self, cfish_Obj* query);

typedef lucy_Hits*
(*LUCY_IxSearcher_Hits_t)(lucy_IndexSearcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec);

typedef void
(*LUCY_IxSearcher_Collect_t)(lucy_IndexSearcher* self, lucy_Query* query, lucy_Collector* collector);

typedef lucy_TopDocs*
(*LUCY_IxSearcher_Top_Docs_t)(lucy_IndexSearcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec);

typedef lucy_HitDoc*
(*LUCY_IxSearcher_Fetch_Doc_t)(lucy_IndexSearcher* self, int32_t doc_id);

typedef lucy_DocVector*
(*LUCY_IxSearcher_Fetch_Doc_Vec_t)(lucy_IndexSearcher* self, int32_t doc_id);

typedef lucy_Schema*
(*LUCY_IxSearcher_Get_Schema_t)(lucy_IndexSearcher* self);

typedef void
(*LUCY_IxSearcher_Close_t)(lucy_IndexSearcher* self);

typedef lucy_IndexReader*
(*LUCY_IxSearcher_Get_Reader_t)(lucy_IndexSearcher* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_IxSearcher_get_class(lucy_IndexSearcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_IxSearcher_get_class_name(lucy_IndexSearcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_IxSearcher_is_a(lucy_IndexSearcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_IxSearcher_To_Host(lucy_IndexSearcher* self, void* vcache) {
    const LUCY_IxSearcher_To_Host_t method = (LUCY_IxSearcher_To_Host_t)cfish_obj_method(self, LUCY_IxSearcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_IxSearcher_Clone(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Clone_t method = (LUCY_IxSearcher_Clone_t)cfish_obj_method(self, LUCY_IxSearcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_IxSearcher_Equals(lucy_IndexSearcher* self, cfish_Obj* other) {
    const LUCY_IxSearcher_Equals_t method = (LUCY_IxSearcher_Equals_t)cfish_obj_method(self, LUCY_IxSearcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxSearcher_Compare_To(lucy_IndexSearcher* self, cfish_Obj* other) {
    const LUCY_IxSearcher_Compare_To_t method = (LUCY_IxSearcher_Compare_To_t)cfish_obj_method(self, LUCY_IxSearcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_IxSearcher_Destroy(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Destroy_t method = (LUCY_IxSearcher_Destroy_t)cfish_obj_method(self, LUCY_IxSearcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_IxSearcher_To_String(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_To_String_t method = (LUCY_IxSearcher_To_String_t)cfish_obj_method(self, LUCY_IxSearcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Doc_Max_OFFSET;
static CFISH_INLINE int32_t
LUCY_IxSearcher_Doc_Max(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Doc_Max_t method = (LUCY_IxSearcher_Doc_Max_t)cfish_obj_method(self, LUCY_IxSearcher_Doc_Max_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Doc_Freq_OFFSET;
static CFISH_INLINE uint32_t
LUCY_IxSearcher_Doc_Freq(lucy_IndexSearcher* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_IxSearcher_Doc_Freq_t method = (LUCY_IxSearcher_Doc_Freq_t)cfish_obj_method(self, LUCY_IxSearcher_Doc_Freq_OFFSET);
    return method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Glean_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_IxSearcher_Glean_Query(lucy_IndexSearcher* self, cfish_Obj* query) {
    const LUCY_IxSearcher_Glean_Query_t method = (LUCY_IxSearcher_Glean_Query_t)cfish_obj_method(self, LUCY_IxSearcher_Glean_Query_OFFSET);
    return method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Hits_OFFSET;
static CFISH_INLINE lucy_Hits*
LUCY_IxSearcher_Hits(lucy_IndexSearcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec) {
    const LUCY_IxSearcher_Hits_t method = (LUCY_IxSearcher_Hits_t)cfish_obj_method(self, LUCY_IxSearcher_Hits_OFFSET);
    return method(self, query, offset, num_wanted, sort_spec);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_IxSearcher_Collect(lucy_IndexSearcher* self, lucy_Query* query, lucy_Collector* collector) {
    const LUCY_IxSearcher_Collect_t method = (LUCY_IxSearcher_Collect_t)cfish_obj_method(self, LUCY_IxSearcher_Collect_OFFSET);
    method(self, query, collector);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Top_Docs_OFFSET;
static CFISH_INLINE lucy_TopDocs*
LUCY_IxSearcher_Top_Docs(lucy_IndexSearcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec) {
    const LUCY_IxSearcher_Top_Docs_t method = (LUCY_IxSearcher_Top_Docs_t)cfish_obj_method(self, LUCY_IxSearcher_Top_Docs_OFFSET);
    return method(self, query, num_wanted, sort_spec);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Fetch_Doc_OFFSET;
static CFISH_INLINE lucy_HitDoc*
LUCY_IxSearcher_Fetch_Doc(lucy_IndexSearcher* self, int32_t doc_id) {
    const LUCY_IxSearcher_Fetch_Doc_t method = (LUCY_IxSearcher_Fetch_Doc_t)cfish_obj_method(self, LUCY_IxSearcher_Fetch_Doc_OFFSET);
    return method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Fetch_Doc_Vec_OFFSET;
static CFISH_INLINE lucy_DocVector*
LUCY_IxSearcher_Fetch_Doc_Vec(lucy_IndexSearcher* self, int32_t doc_id) {
    const LUCY_IxSearcher_Fetch_Doc_Vec_t method = (LUCY_IxSearcher_Fetch_Doc_Vec_t)cfish_obj_method(self, LUCY_IxSearcher_Fetch_Doc_Vec_OFFSET);
    return method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_IxSearcher_Get_Schema(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Get_Schema_t method = (LUCY_IxSearcher_Get_Schema_t)cfish_obj_method(self, LUCY_IxSearcher_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Close_OFFSET;
static CFISH_INLINE void
LUCY_IxSearcher_Close(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Close_t method = (LUCY_IxSearcher_Close_t)cfish_obj_method(self, LUCY_IxSearcher_Close_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_IxSearcher_Get_Reader_OFFSET;
static CFISH_INLINE lucy_IndexReader*
LUCY_IxSearcher_Get_Reader(lucy_IndexSearcher* self) {
    const LUCY_IxSearcher_Get_Reader_t method = (LUCY_IxSearcher_Get_Reader_t)cfish_obj_method(self, LUCY_IxSearcher_Get_Reader_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_IxSearcher_Get_Reader_OVERRIDE NULL
#else
lucy_IndexReader*
Lucy_IxSearcher_Get_Reader_OVERRIDE(lucy_IndexSearcher* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define IndexSearcher lucy_IndexSearcher
  #define INDEXSEARCHER LUCY_INDEXSEARCHER
  #define IxSearcher_new lucy_IxSearcher_new
  #define IxSearcher_init lucy_IxSearcher_init
  #define IxSearcher_get_class lucy_IxSearcher_get_class
  #define IxSearcher_get_class_name lucy_IxSearcher_get_class_name
  #define IxSearcher_is_a lucy_IxSearcher_is_a
  #define IxSearcher_Destroy_IMP LUCY_IxSearcher_Destroy_IMP
  #define IxSearcher_Doc_Max_IMP LUCY_IxSearcher_Doc_Max_IMP
  #define IxSearcher_Doc_Freq_IMP LUCY_IxSearcher_Doc_Freq_IMP
  #define IxSearcher_Collect_IMP LUCY_IxSearcher_Collect_IMP
  #define IxSearcher_Top_Docs_IMP LUCY_IxSearcher_Top_Docs_IMP
  #define IxSearcher_Fetch_Doc_IMP LUCY_IxSearcher_Fetch_Doc_IMP
  #define IxSearcher_Fetch_Doc_Vec_IMP LUCY_IxSearcher_Fetch_Doc_Vec_IMP
  #define IxSearcher_Get_Reader_IMP LUCY_IxSearcher_Get_Reader_IMP
  #define IxSearcher_Close_IMP LUCY_IxSearcher_Close_IMP
  #define IxSearcher_To_Host LUCY_IxSearcher_To_Host
  #define IxSearcher_To_Host_t LUCY_IxSearcher_To_Host_t
  #define IxSearcher_Clone LUCY_IxSearcher_Clone
  #define IxSearcher_Clone_t LUCY_IxSearcher_Clone_t
  #define IxSearcher_Equals LUCY_IxSearcher_Equals
  #define IxSearcher_Equals_t LUCY_IxSearcher_Equals_t
  #define IxSearcher_Compare_To LUCY_IxSearcher_Compare_To
  #define IxSearcher_Compare_To_t LUCY_IxSearcher_Compare_To_t
  #define IxSearcher_Destroy LUCY_IxSearcher_Destroy
  #define IxSearcher_Destroy_t LUCY_IxSearcher_Destroy_t
  #define IxSearcher_To_String LUCY_IxSearcher_To_String
  #define IxSearcher_To_String_t LUCY_IxSearcher_To_String_t
  #define IxSearcher_Doc_Max LUCY_IxSearcher_Doc_Max
  #define IxSearcher_Doc_Max_t LUCY_IxSearcher_Doc_Max_t
  #define IxSearcher_Doc_Freq LUCY_IxSearcher_Doc_Freq
  #define IxSearcher_Doc_Freq_t LUCY_IxSearcher_Doc_Freq_t
  #define IxSearcher_Glean_Query LUCY_IxSearcher_Glean_Query
  #define IxSearcher_Glean_Query_t LUCY_IxSearcher_Glean_Query_t
  #define IxSearcher_Hits LUCY_IxSearcher_Hits
  #define IxSearcher_Hits_t LUCY_IxSearcher_Hits_t
  #define IxSearcher_Collect LUCY_IxSearcher_Collect
  #define IxSearcher_Collect_t LUCY_IxSearcher_Collect_t
  #define IxSearcher_Top_Docs LUCY_IxSearcher_Top_Docs
  #define IxSearcher_Top_Docs_t LUCY_IxSearcher_Top_Docs_t
  #define IxSearcher_Fetch_Doc LUCY_IxSearcher_Fetch_Doc
  #define IxSearcher_Fetch_Doc_t LUCY_IxSearcher_Fetch_Doc_t
  #define IxSearcher_Fetch_Doc_Vec LUCY_IxSearcher_Fetch_Doc_Vec
  #define IxSearcher_Fetch_Doc_Vec_t LUCY_IxSearcher_Fetch_Doc_Vec_t
  #define IxSearcher_Get_Schema LUCY_IxSearcher_Get_Schema
  #define IxSearcher_Get_Schema_t LUCY_IxSearcher_Get_Schema_t
  #define IxSearcher_Close LUCY_IxSearcher_Close
  #define IxSearcher_Close_t LUCY_IxSearcher_Close_t
  #define IxSearcher_Get_Reader LUCY_IxSearcher_Get_Reader
  #define IxSearcher_Get_Reader_t LUCY_IxSearcher_Get_Reader_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_INDEXSEARCHER */




