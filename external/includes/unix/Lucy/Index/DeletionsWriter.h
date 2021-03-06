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


#ifndef H_LUCY_INDEX_DELETIONSWRITER
#define H_LUCY_INDEX_DELETIONSWRITER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DataWriter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_DELETIONSWRITER
extern uint32_t lucy_DelWriter_IVARS_OFFSET;
typedef struct lucy_DeletionsWriterIVARS lucy_DeletionsWriterIVARS;
static CFISH_INLINE lucy_DeletionsWriterIVARS*
lucy_DelWriter_IVARS(lucy_DeletionsWriter *self) {
   char *ptr = (char*)self + lucy_DelWriter_IVARS_OFFSET;
   return (lucy_DeletionsWriterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define DeletionsWriterIVARS lucy_DeletionsWriterIVARS
  #define DelWriter_IVARS lucy_DelWriter_IVARS
#endif

struct lucy_DeletionsWriterIVARS {
    lucy_Snapshot* snapshot;
    lucy_Segment* segment;
    lucy_PolyReader* polyreader;
    lucy_Schema* schema;
    lucy_Folder* folder;
};

#endif /* C_LUCY_DELETIONSWRITER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_DeletionsWriter*
lucy_DelWriter_init(lucy_DeletionsWriter* self, lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

void
LUCY_DelWriter_Delete_By_Term_IMP(lucy_DeletionsWriter* self, cfish_String* field, cfish_Obj* term);

void
LUCY_DelWriter_Delete_By_Query_IMP(lucy_DeletionsWriter* self, lucy_Query* query);

void
LUCY_DelWriter_Delete_By_Doc_ID_IMP(lucy_DeletionsWriter* self, int32_t doc_id);

bool
LUCY_DelWriter_Updated_IMP(lucy_DeletionsWriter* self);

lucy_I32Array*
LUCY_DelWriter_Generate_Doc_Map_IMP(lucy_DeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset);

lucy_Matcher*
LUCY_DelWriter_Seg_Deletions_IMP(lucy_DeletionsWriter* self, lucy_SegReader* seg_reader);

int32_t
LUCY_DelWriter_Seg_Del_Count_IMP(lucy_DeletionsWriter* self, cfish_String* seg_name);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_DelWriter_To_Host_t)(lucy_DeletionsWriter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_DelWriter_Clone_t)(lucy_DeletionsWriter* self);

typedef bool
(*LUCY_DelWriter_Equals_t)(lucy_DeletionsWriter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_DelWriter_Compare_To_t)(lucy_DeletionsWriter* self, cfish_Obj* other);

typedef void
(*LUCY_DelWriter_Destroy_t)(lucy_DeletionsWriter* self);

typedef cfish_String*
(*LUCY_DelWriter_To_String_t)(lucy_DeletionsWriter* self);

typedef void
(*LUCY_DelWriter_Add_Inverted_Doc_t)(lucy_DeletionsWriter* self, lucy_Inverter* inverter, int32_t doc_id);

typedef void
(*LUCY_DelWriter_Add_Segment_t)(lucy_DeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_DelWriter_Delete_Segment_t)(lucy_DeletionsWriter* self, lucy_SegReader* reader);

typedef void
(*LUCY_DelWriter_Merge_Segment_t)(lucy_DeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_DelWriter_Finish_t)(lucy_DeletionsWriter* self);

typedef cfish_Hash*
(*LUCY_DelWriter_Metadata_t)(lucy_DeletionsWriter* self);

typedef int32_t
(*LUCY_DelWriter_Format_t)(lucy_DeletionsWriter* self);

typedef lucy_Snapshot*
(*LUCY_DelWriter_Get_Snapshot_t)(lucy_DeletionsWriter* self);

typedef lucy_Segment*
(*LUCY_DelWriter_Get_Segment_t)(lucy_DeletionsWriter* self);

typedef lucy_PolyReader*
(*LUCY_DelWriter_Get_PolyReader_t)(lucy_DeletionsWriter* self);

typedef lucy_Schema*
(*LUCY_DelWriter_Get_Schema_t)(lucy_DeletionsWriter* self);

typedef lucy_Folder*
(*LUCY_DelWriter_Get_Folder_t)(lucy_DeletionsWriter* self);

typedef void
(*LUCY_DelWriter_Delete_By_Term_t)(lucy_DeletionsWriter* self, cfish_String* field, cfish_Obj* term);

typedef void
(*LUCY_DelWriter_Delete_By_Query_t)(lucy_DeletionsWriter* self, lucy_Query* query);

typedef void
(*LUCY_DelWriter_Delete_By_Doc_ID_t)(lucy_DeletionsWriter* self, int32_t doc_id);

typedef bool
(*LUCY_DelWriter_Updated_t)(lucy_DeletionsWriter* self);

typedef lucy_I32Array*
(*LUCY_DelWriter_Generate_Doc_Map_t)(lucy_DeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset);

typedef lucy_Matcher*
(*LUCY_DelWriter_Seg_Deletions_t)(lucy_DeletionsWriter* self, lucy_SegReader* seg_reader);

typedef int32_t
(*LUCY_DelWriter_Seg_Del_Count_t)(lucy_DeletionsWriter* self, cfish_String* seg_name);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_DelWriter_get_class(lucy_DeletionsWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_DelWriter_get_class_name(lucy_DeletionsWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_DelWriter_is_a(lucy_DeletionsWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_DelWriter_To_Host(lucy_DeletionsWriter* self, void* vcache) {
    const LUCY_DelWriter_To_Host_t method = (LUCY_DelWriter_To_Host_t)cfish_obj_method(self, LUCY_DelWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_DelWriter_Clone(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Clone_t method = (LUCY_DelWriter_Clone_t)cfish_obj_method(self, LUCY_DelWriter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_DelWriter_Equals(lucy_DeletionsWriter* self, cfish_Obj* other) {
    const LUCY_DelWriter_Equals_t method = (LUCY_DelWriter_Equals_t)cfish_obj_method(self, LUCY_DelWriter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_DelWriter_Compare_To(lucy_DeletionsWriter* self, cfish_Obj* other) {
    const LUCY_DelWriter_Compare_To_t method = (LUCY_DelWriter_Compare_To_t)cfish_obj_method(self, LUCY_DelWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Destroy(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Destroy_t method = (LUCY_DelWriter_Destroy_t)cfish_obj_method(self, LUCY_DelWriter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DelWriter_To_String(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_To_String_t method = (LUCY_DelWriter_To_String_t)cfish_obj_method(self, LUCY_DelWriter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Add_Inverted_Doc_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Add_Inverted_Doc(lucy_DeletionsWriter* self, lucy_Inverter* inverter, int32_t doc_id) {
    const LUCY_DelWriter_Add_Inverted_Doc_t method = (LUCY_DelWriter_Add_Inverted_Doc_t)cfish_obj_method(self, LUCY_DelWriter_Add_Inverted_Doc_OFFSET);
    method(self, inverter, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Add_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Add_Segment(lucy_DeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_DelWriter_Add_Segment_t method = (LUCY_DelWriter_Add_Segment_t)cfish_obj_method(self, LUCY_DelWriter_Add_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Delete_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Delete_Segment(lucy_DeletionsWriter* self, lucy_SegReader* reader) {
    const LUCY_DelWriter_Delete_Segment_t method = (LUCY_DelWriter_Delete_Segment_t)cfish_obj_method(self, LUCY_DelWriter_Delete_Segment_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Merge_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Merge_Segment(lucy_DeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_DelWriter_Merge_Segment_t method = (LUCY_DelWriter_Merge_Segment_t)cfish_obj_method(self, LUCY_DelWriter_Merge_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Finish_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Finish(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Finish_t method = (LUCY_DelWriter_Finish_t)cfish_obj_method(self, LUCY_DelWriter_Finish_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Metadata_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_DelWriter_Metadata(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Metadata_t method = (LUCY_DelWriter_Metadata_t)cfish_obj_method(self, LUCY_DelWriter_Metadata_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Format_OFFSET;
static CFISH_INLINE int32_t
LUCY_DelWriter_Format(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Format_t method = (LUCY_DelWriter_Format_t)cfish_obj_method(self, LUCY_DelWriter_Format_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_DelWriter_Get_Snapshot(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Get_Snapshot_t method = (LUCY_DelWriter_Get_Snapshot_t)cfish_obj_method(self, LUCY_DelWriter_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_DelWriter_Get_Segment(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Get_Segment_t method = (LUCY_DelWriter_Get_Segment_t)cfish_obj_method(self, LUCY_DelWriter_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Get_PolyReader_OFFSET;
static CFISH_INLINE lucy_PolyReader*
LUCY_DelWriter_Get_PolyReader(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Get_PolyReader_t method = (LUCY_DelWriter_Get_PolyReader_t)cfish_obj_method(self, LUCY_DelWriter_Get_PolyReader_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_DelWriter_Get_Schema(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Get_Schema_t method = (LUCY_DelWriter_Get_Schema_t)cfish_obj_method(self, LUCY_DelWriter_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_DelWriter_Get_Folder(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Get_Folder_t method = (LUCY_DelWriter_Get_Folder_t)cfish_obj_method(self, LUCY_DelWriter_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Delete_By_Term_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Delete_By_Term(lucy_DeletionsWriter* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_DelWriter_Delete_By_Term_t method = (LUCY_DelWriter_Delete_By_Term_t)cfish_obj_method(self, LUCY_DelWriter_Delete_By_Term_OFFSET);
    method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Delete_By_Query_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Delete_By_Query(lucy_DeletionsWriter* self, lucy_Query* query) {
    const LUCY_DelWriter_Delete_By_Query_t method = (LUCY_DelWriter_Delete_By_Query_t)cfish_obj_method(self, LUCY_DelWriter_Delete_By_Query_OFFSET);
    method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Delete_By_Doc_ID_OFFSET;
static CFISH_INLINE void
LUCY_DelWriter_Delete_By_Doc_ID(lucy_DeletionsWriter* self, int32_t doc_id) {
    const LUCY_DelWriter_Delete_By_Doc_ID_t method = (LUCY_DelWriter_Delete_By_Doc_ID_t)cfish_obj_method(self, LUCY_DelWriter_Delete_By_Doc_ID_OFFSET);
    method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Updated_OFFSET;
static CFISH_INLINE bool
LUCY_DelWriter_Updated(lucy_DeletionsWriter* self) {
    const LUCY_DelWriter_Updated_t method = (LUCY_DelWriter_Updated_t)cfish_obj_method(self, LUCY_DelWriter_Updated_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Generate_Doc_Map_OFFSET;
static CFISH_INLINE lucy_I32Array*
LUCY_DelWriter_Generate_Doc_Map(lucy_DeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset) {
    const LUCY_DelWriter_Generate_Doc_Map_t method = (LUCY_DelWriter_Generate_Doc_Map_t)cfish_obj_method(self, LUCY_DelWriter_Generate_Doc_Map_OFFSET);
    return method(self, deletions, doc_max, offset);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Seg_Deletions_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_DelWriter_Seg_Deletions(lucy_DeletionsWriter* self, lucy_SegReader* seg_reader) {
    const LUCY_DelWriter_Seg_Deletions_t method = (LUCY_DelWriter_Seg_Deletions_t)cfish_obj_method(self, LUCY_DelWriter_Seg_Deletions_OFFSET);
    return method(self, seg_reader);
}

extern LUCY_VISIBLE uint32_t LUCY_DelWriter_Seg_Del_Count_OFFSET;
static CFISH_INLINE int32_t
LUCY_DelWriter_Seg_Del_Count(lucy_DeletionsWriter* self, cfish_String* seg_name) {
    const LUCY_DelWriter_Seg_Del_Count_t method = (LUCY_DelWriter_Seg_Del_Count_t)cfish_obj_method(self, LUCY_DelWriter_Seg_Del_Count_OFFSET);
    return method(self, seg_name);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_DelWriter_Delete_By_Term_OVERRIDE NULL
#define Lucy_DelWriter_Delete_By_Query_OVERRIDE NULL
#define Lucy_DelWriter_Delete_By_Doc_ID_OVERRIDE NULL
#define Lucy_DelWriter_Updated_OVERRIDE NULL
#define Lucy_DelWriter_Generate_Doc_Map_OVERRIDE NULL
#define Lucy_DelWriter_Seg_Deletions_OVERRIDE NULL
#define Lucy_DelWriter_Seg_Del_Count_OVERRIDE NULL
#else
void
Lucy_DelWriter_Delete_By_Term_OVERRIDE(lucy_DeletionsWriter* self, cfish_String* field, cfish_Obj* term);
void
Lucy_DelWriter_Delete_By_Query_OVERRIDE(lucy_DeletionsWriter* self, lucy_Query* query);
void
Lucy_DelWriter_Delete_By_Doc_ID_OVERRIDE(lucy_DeletionsWriter* self, int32_t doc_id);
bool
Lucy_DelWriter_Updated_OVERRIDE(lucy_DeletionsWriter* self);
lucy_I32Array*
Lucy_DelWriter_Generate_Doc_Map_OVERRIDE(lucy_DeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset);
lucy_Matcher*
Lucy_DelWriter_Seg_Deletions_OVERRIDE(lucy_DeletionsWriter* self, lucy_SegReader* seg_reader);
int32_t
Lucy_DelWriter_Seg_Del_Count_OVERRIDE(lucy_DeletionsWriter* self, cfish_String* seg_name);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define DeletionsWriter lucy_DeletionsWriter
  #define DELETIONSWRITER LUCY_DELETIONSWRITER
  #define DelWriter_init lucy_DelWriter_init
  #define DelWriter_get_class lucy_DelWriter_get_class
  #define DelWriter_get_class_name lucy_DelWriter_get_class_name
  #define DelWriter_is_a lucy_DelWriter_is_a
  #define DelWriter_Delete_By_Term_IMP LUCY_DelWriter_Delete_By_Term_IMP
  #define DelWriter_Delete_By_Query_IMP LUCY_DelWriter_Delete_By_Query_IMP
  #define DelWriter_Delete_By_Doc_ID_IMP LUCY_DelWriter_Delete_By_Doc_ID_IMP
  #define DelWriter_Updated_IMP LUCY_DelWriter_Updated_IMP
  #define DelWriter_Generate_Doc_Map_IMP LUCY_DelWriter_Generate_Doc_Map_IMP
  #define DelWriter_Seg_Deletions_IMP LUCY_DelWriter_Seg_Deletions_IMP
  #define DelWriter_Seg_Del_Count_IMP LUCY_DelWriter_Seg_Del_Count_IMP
  #define DelWriter_To_Host LUCY_DelWriter_To_Host
  #define DelWriter_To_Host_t LUCY_DelWriter_To_Host_t
  #define DelWriter_Clone LUCY_DelWriter_Clone
  #define DelWriter_Clone_t LUCY_DelWriter_Clone_t
  #define DelWriter_Equals LUCY_DelWriter_Equals
  #define DelWriter_Equals_t LUCY_DelWriter_Equals_t
  #define DelWriter_Compare_To LUCY_DelWriter_Compare_To
  #define DelWriter_Compare_To_t LUCY_DelWriter_Compare_To_t
  #define DelWriter_Destroy LUCY_DelWriter_Destroy
  #define DelWriter_Destroy_t LUCY_DelWriter_Destroy_t
  #define DelWriter_To_String LUCY_DelWriter_To_String
  #define DelWriter_To_String_t LUCY_DelWriter_To_String_t
  #define DelWriter_Add_Inverted_Doc LUCY_DelWriter_Add_Inverted_Doc
  #define DelWriter_Add_Inverted_Doc_t LUCY_DelWriter_Add_Inverted_Doc_t
  #define DelWriter_Add_Segment LUCY_DelWriter_Add_Segment
  #define DelWriter_Add_Segment_t LUCY_DelWriter_Add_Segment_t
  #define DelWriter_Delete_Segment LUCY_DelWriter_Delete_Segment
  #define DelWriter_Delete_Segment_t LUCY_DelWriter_Delete_Segment_t
  #define DelWriter_Merge_Segment LUCY_DelWriter_Merge_Segment
  #define DelWriter_Merge_Segment_t LUCY_DelWriter_Merge_Segment_t
  #define DelWriter_Finish LUCY_DelWriter_Finish
  #define DelWriter_Finish_t LUCY_DelWriter_Finish_t
  #define DelWriter_Metadata LUCY_DelWriter_Metadata
  #define DelWriter_Metadata_t LUCY_DelWriter_Metadata_t
  #define DelWriter_Format LUCY_DelWriter_Format
  #define DelWriter_Format_t LUCY_DelWriter_Format_t
  #define DelWriter_Get_Snapshot LUCY_DelWriter_Get_Snapshot
  #define DelWriter_Get_Snapshot_t LUCY_DelWriter_Get_Snapshot_t
  #define DelWriter_Get_Segment LUCY_DelWriter_Get_Segment
  #define DelWriter_Get_Segment_t LUCY_DelWriter_Get_Segment_t
  #define DelWriter_Get_PolyReader LUCY_DelWriter_Get_PolyReader
  #define DelWriter_Get_PolyReader_t LUCY_DelWriter_Get_PolyReader_t
  #define DelWriter_Get_Schema LUCY_DelWriter_Get_Schema
  #define DelWriter_Get_Schema_t LUCY_DelWriter_Get_Schema_t
  #define DelWriter_Get_Folder LUCY_DelWriter_Get_Folder
  #define DelWriter_Get_Folder_t LUCY_DelWriter_Get_Folder_t
  #define DelWriter_Delete_By_Term LUCY_DelWriter_Delete_By_Term
  #define DelWriter_Delete_By_Term_t LUCY_DelWriter_Delete_By_Term_t
  #define DelWriter_Delete_By_Query LUCY_DelWriter_Delete_By_Query
  #define DelWriter_Delete_By_Query_t LUCY_DelWriter_Delete_By_Query_t
  #define DelWriter_Delete_By_Doc_ID LUCY_DelWriter_Delete_By_Doc_ID
  #define DelWriter_Delete_By_Doc_ID_t LUCY_DelWriter_Delete_By_Doc_ID_t
  #define DelWriter_Updated LUCY_DelWriter_Updated
  #define DelWriter_Updated_t LUCY_DelWriter_Updated_t
  #define DelWriter_Generate_Doc_Map LUCY_DelWriter_Generate_Doc_Map
  #define DelWriter_Generate_Doc_Map_t LUCY_DelWriter_Generate_Doc_Map_t
  #define DelWriter_Seg_Deletions LUCY_DelWriter_Seg_Deletions
  #define DelWriter_Seg_Deletions_t LUCY_DelWriter_Seg_Deletions_t
  #define DelWriter_Seg_Del_Count LUCY_DelWriter_Seg_Del_Count
  #define DelWriter_Seg_Del_Count_t LUCY_DelWriter_Seg_Del_Count_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Index/DeletionsWriter.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_DEFAULTDELETIONSWRITER
extern uint32_t lucy_DefDelWriter_IVARS_OFFSET;
typedef struct lucy_DefaultDeletionsWriterIVARS lucy_DefaultDeletionsWriterIVARS;
static CFISH_INLINE lucy_DefaultDeletionsWriterIVARS*
lucy_DefDelWriter_IVARS(lucy_DefaultDeletionsWriter *self) {
   char *ptr = (char*)self + lucy_DefDelWriter_IVARS_OFFSET;
   return (lucy_DefaultDeletionsWriterIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultDeletionsWriterIVARS lucy_DefaultDeletionsWriterIVARS
  #define DefDelWriter_IVARS lucy_DefDelWriter_IVARS
#endif

struct lucy_DefaultDeletionsWriterIVARS {
    lucy_Snapshot* snapshot;
    lucy_Segment* segment;
    lucy_PolyReader* polyreader;
    lucy_Schema* schema;
    lucy_Folder* folder;
    cfish_Vector* seg_readers;
    cfish_Hash* name_to_tick;
    lucy_I32Array* seg_starts;
    cfish_Vector* bit_vecs;
    bool* updated;
    lucy_IndexSearcher* searcher;
};

#endif /* C_LUCY_DEFAULTDELETIONSWRITER */

/* Declare this class's inert variables.
 */

extern LUCY_VISIBLE int32_t lucy_DefDelWriter_current_file_format;


/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_DefaultDeletionsWriter*
lucy_DefDelWriter_new(lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

LUCY_VISIBLE lucy_DefaultDeletionsWriter*
lucy_DefDelWriter_init(lucy_DefaultDeletionsWriter* self, lucy_Schema* schema, lucy_Snapshot* snapshot, lucy_Segment* segment, lucy_PolyReader* polyreader);

void
LUCY_DefDelWriter_Delete_By_Term_IMP(lucy_DefaultDeletionsWriter* self, cfish_String* field, cfish_Obj* term);

void
LUCY_DefDelWriter_Delete_By_Query_IMP(lucy_DefaultDeletionsWriter* self, lucy_Query* query);

void
LUCY_DefDelWriter_Delete_By_Doc_ID_IMP(lucy_DefaultDeletionsWriter* self, int32_t doc_id);

bool
LUCY_DefDelWriter_Updated_IMP(lucy_DefaultDeletionsWriter* self);

lucy_Matcher*
LUCY_DefDelWriter_Seg_Deletions_IMP(lucy_DefaultDeletionsWriter* self, lucy_SegReader* seg_reader);

int32_t
LUCY_DefDelWriter_Seg_Del_Count_IMP(lucy_DefaultDeletionsWriter* self, cfish_String* seg_name);

void
LUCY_DefDelWriter_Add_Segment_IMP(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

void
LUCY_DefDelWriter_Merge_Segment_IMP(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

void
LUCY_DefDelWriter_Finish_IMP(lucy_DefaultDeletionsWriter* self);

int32_t
LUCY_DefDelWriter_Format_IMP(lucy_DefaultDeletionsWriter* self);

cfish_Hash*
LUCY_DefDelWriter_Metadata_IMP(lucy_DefaultDeletionsWriter* self);

void
LUCY_DefDelWriter_Destroy_IMP(lucy_DefaultDeletionsWriter* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_DefDelWriter_To_Host_t)(lucy_DefaultDeletionsWriter* self, void* vcache);

typedef cfish_Obj*
(*LUCY_DefDelWriter_Clone_t)(lucy_DefaultDeletionsWriter* self);

typedef bool
(*LUCY_DefDelWriter_Equals_t)(lucy_DefaultDeletionsWriter* self, cfish_Obj* other);

typedef int32_t
(*LUCY_DefDelWriter_Compare_To_t)(lucy_DefaultDeletionsWriter* self, cfish_Obj* other);

typedef void
(*LUCY_DefDelWriter_Destroy_t)(lucy_DefaultDeletionsWriter* self);

typedef cfish_String*
(*LUCY_DefDelWriter_To_String_t)(lucy_DefaultDeletionsWriter* self);

typedef void
(*LUCY_DefDelWriter_Add_Inverted_Doc_t)(lucy_DefaultDeletionsWriter* self, lucy_Inverter* inverter, int32_t doc_id);

typedef void
(*LUCY_DefDelWriter_Add_Segment_t)(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_DefDelWriter_Delete_Segment_t)(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader);

typedef void
(*LUCY_DefDelWriter_Merge_Segment_t)(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map);

typedef void
(*LUCY_DefDelWriter_Finish_t)(lucy_DefaultDeletionsWriter* self);

typedef cfish_Hash*
(*LUCY_DefDelWriter_Metadata_t)(lucy_DefaultDeletionsWriter* self);

typedef int32_t
(*LUCY_DefDelWriter_Format_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_Snapshot*
(*LUCY_DefDelWriter_Get_Snapshot_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_Segment*
(*LUCY_DefDelWriter_Get_Segment_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_PolyReader*
(*LUCY_DefDelWriter_Get_PolyReader_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_Schema*
(*LUCY_DefDelWriter_Get_Schema_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_Folder*
(*LUCY_DefDelWriter_Get_Folder_t)(lucy_DefaultDeletionsWriter* self);

typedef void
(*LUCY_DefDelWriter_Delete_By_Term_t)(lucy_DefaultDeletionsWriter* self, cfish_String* field, cfish_Obj* term);

typedef void
(*LUCY_DefDelWriter_Delete_By_Query_t)(lucy_DefaultDeletionsWriter* self, lucy_Query* query);

typedef void
(*LUCY_DefDelWriter_Delete_By_Doc_ID_t)(lucy_DefaultDeletionsWriter* self, int32_t doc_id);

typedef bool
(*LUCY_DefDelWriter_Updated_t)(lucy_DefaultDeletionsWriter* self);

typedef lucy_I32Array*
(*LUCY_DefDelWriter_Generate_Doc_Map_t)(lucy_DefaultDeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset);

typedef lucy_Matcher*
(*LUCY_DefDelWriter_Seg_Deletions_t)(lucy_DefaultDeletionsWriter* self, lucy_SegReader* seg_reader);

typedef int32_t
(*LUCY_DefDelWriter_Seg_Del_Count_t)(lucy_DefaultDeletionsWriter* self, cfish_String* seg_name);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_DefDelWriter_get_class(lucy_DefaultDeletionsWriter *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_DefDelWriter_get_class_name(lucy_DefaultDeletionsWriter *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_DefDelWriter_is_a(lucy_DefaultDeletionsWriter *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_DefDelWriter_To_Host(lucy_DefaultDeletionsWriter* self, void* vcache) {
    const LUCY_DefDelWriter_To_Host_t method = (LUCY_DefDelWriter_To_Host_t)cfish_obj_method(self, LUCY_DefDelWriter_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_DefDelWriter_Clone(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Clone_t method = (LUCY_DefDelWriter_Clone_t)cfish_obj_method(self, LUCY_DefDelWriter_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_DefDelWriter_Equals(lucy_DefaultDeletionsWriter* self, cfish_Obj* other) {
    const LUCY_DefDelWriter_Equals_t method = (LUCY_DefDelWriter_Equals_t)cfish_obj_method(self, LUCY_DefDelWriter_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefDelWriter_Compare_To(lucy_DefaultDeletionsWriter* self, cfish_Obj* other) {
    const LUCY_DefDelWriter_Compare_To_t method = (LUCY_DefDelWriter_Compare_To_t)cfish_obj_method(self, LUCY_DefDelWriter_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Destroy(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Destroy_t method = (LUCY_DefDelWriter_Destroy_t)cfish_obj_method(self, LUCY_DefDelWriter_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_DefDelWriter_To_String(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_To_String_t method = (LUCY_DefDelWriter_To_String_t)cfish_obj_method(self, LUCY_DefDelWriter_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Add_Inverted_Doc_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Add_Inverted_Doc(lucy_DefaultDeletionsWriter* self, lucy_Inverter* inverter, int32_t doc_id) {
    const LUCY_DefDelWriter_Add_Inverted_Doc_t method = (LUCY_DefDelWriter_Add_Inverted_Doc_t)cfish_obj_method(self, LUCY_DefDelWriter_Add_Inverted_Doc_OFFSET);
    method(self, inverter, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Add_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Add_Segment(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_DefDelWriter_Add_Segment_t method = (LUCY_DefDelWriter_Add_Segment_t)cfish_obj_method(self, LUCY_DefDelWriter_Add_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Delete_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Delete_Segment(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader) {
    const LUCY_DefDelWriter_Delete_Segment_t method = (LUCY_DefDelWriter_Delete_Segment_t)cfish_obj_method(self, LUCY_DefDelWriter_Delete_Segment_OFFSET);
    method(self, reader);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Merge_Segment_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Merge_Segment(lucy_DefaultDeletionsWriter* self, lucy_SegReader* reader, lucy_I32Array* doc_map) {
    const LUCY_DefDelWriter_Merge_Segment_t method = (LUCY_DefDelWriter_Merge_Segment_t)cfish_obj_method(self, LUCY_DefDelWriter_Merge_Segment_OFFSET);
    method(self, reader, doc_map);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Finish_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Finish(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Finish_t method = (LUCY_DefDelWriter_Finish_t)cfish_obj_method(self, LUCY_DefDelWriter_Finish_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Metadata_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_DefDelWriter_Metadata(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Metadata_t method = (LUCY_DefDelWriter_Metadata_t)cfish_obj_method(self, LUCY_DefDelWriter_Metadata_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Format_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefDelWriter_Format(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Format_t method = (LUCY_DefDelWriter_Format_t)cfish_obj_method(self, LUCY_DefDelWriter_Format_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Get_Snapshot_OFFSET;
static CFISH_INLINE lucy_Snapshot*
LUCY_DefDelWriter_Get_Snapshot(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Get_Snapshot_t method = (LUCY_DefDelWriter_Get_Snapshot_t)cfish_obj_method(self, LUCY_DefDelWriter_Get_Snapshot_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Get_Segment_OFFSET;
static CFISH_INLINE lucy_Segment*
LUCY_DefDelWriter_Get_Segment(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Get_Segment_t method = (LUCY_DefDelWriter_Get_Segment_t)cfish_obj_method(self, LUCY_DefDelWriter_Get_Segment_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Get_PolyReader_OFFSET;
static CFISH_INLINE lucy_PolyReader*
LUCY_DefDelWriter_Get_PolyReader(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Get_PolyReader_t method = (LUCY_DefDelWriter_Get_PolyReader_t)cfish_obj_method(self, LUCY_DefDelWriter_Get_PolyReader_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_DefDelWriter_Get_Schema(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Get_Schema_t method = (LUCY_DefDelWriter_Get_Schema_t)cfish_obj_method(self, LUCY_DefDelWriter_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Get_Folder_OFFSET;
static CFISH_INLINE lucy_Folder*
LUCY_DefDelWriter_Get_Folder(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Get_Folder_t method = (LUCY_DefDelWriter_Get_Folder_t)cfish_obj_method(self, LUCY_DefDelWriter_Get_Folder_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Delete_By_Term_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Delete_By_Term(lucy_DefaultDeletionsWriter* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_DefDelWriter_Delete_By_Term_t method = (LUCY_DefDelWriter_Delete_By_Term_t)cfish_obj_method(self, LUCY_DefDelWriter_Delete_By_Term_OFFSET);
    method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Delete_By_Query_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Delete_By_Query(lucy_DefaultDeletionsWriter* self, lucy_Query* query) {
    const LUCY_DefDelWriter_Delete_By_Query_t method = (LUCY_DefDelWriter_Delete_By_Query_t)cfish_obj_method(self, LUCY_DefDelWriter_Delete_By_Query_OFFSET);
    method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Delete_By_Doc_ID_OFFSET;
static CFISH_INLINE void
LUCY_DefDelWriter_Delete_By_Doc_ID(lucy_DefaultDeletionsWriter* self, int32_t doc_id) {
    const LUCY_DefDelWriter_Delete_By_Doc_ID_t method = (LUCY_DefDelWriter_Delete_By_Doc_ID_t)cfish_obj_method(self, LUCY_DefDelWriter_Delete_By_Doc_ID_OFFSET);
    method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Updated_OFFSET;
static CFISH_INLINE bool
LUCY_DefDelWriter_Updated(lucy_DefaultDeletionsWriter* self) {
    const LUCY_DefDelWriter_Updated_t method = (LUCY_DefDelWriter_Updated_t)cfish_obj_method(self, LUCY_DefDelWriter_Updated_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Generate_Doc_Map_OFFSET;
static CFISH_INLINE lucy_I32Array*
LUCY_DefDelWriter_Generate_Doc_Map(lucy_DefaultDeletionsWriter* self, lucy_Matcher* deletions, int32_t doc_max, int32_t offset) {
    const LUCY_DefDelWriter_Generate_Doc_Map_t method = (LUCY_DefDelWriter_Generate_Doc_Map_t)cfish_obj_method(self, LUCY_DefDelWriter_Generate_Doc_Map_OFFSET);
    return method(self, deletions, doc_max, offset);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Seg_Deletions_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_DefDelWriter_Seg_Deletions(lucy_DefaultDeletionsWriter* self, lucy_SegReader* seg_reader) {
    const LUCY_DefDelWriter_Seg_Deletions_t method = (LUCY_DefDelWriter_Seg_Deletions_t)cfish_obj_method(self, LUCY_DefDelWriter_Seg_Deletions_OFFSET);
    return method(self, seg_reader);
}

extern LUCY_VISIBLE uint32_t LUCY_DefDelWriter_Seg_Del_Count_OFFSET;
static CFISH_INLINE int32_t
LUCY_DefDelWriter_Seg_Del_Count(lucy_DefaultDeletionsWriter* self, cfish_String* seg_name) {
    const LUCY_DefDelWriter_Seg_Del_Count_t method = (LUCY_DefDelWriter_Seg_Del_Count_t)cfish_obj_method(self, LUCY_DefDelWriter_Seg_Del_Count_OFFSET);
    return method(self, seg_name);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define DefaultDeletionsWriter lucy_DefaultDeletionsWriter
  #define DEFAULTDELETIONSWRITER LUCY_DEFAULTDELETIONSWRITER
  #define DefDelWriter_new lucy_DefDelWriter_new
  #define DefDelWriter_init lucy_DefDelWriter_init
  #define DefDelWriter_current_file_format lucy_DefDelWriter_current_file_format
  #define DefDelWriter_get_class lucy_DefDelWriter_get_class
  #define DefDelWriter_get_class_name lucy_DefDelWriter_get_class_name
  #define DefDelWriter_is_a lucy_DefDelWriter_is_a
  #define DefDelWriter_Delete_By_Term_IMP LUCY_DefDelWriter_Delete_By_Term_IMP
  #define DefDelWriter_Delete_By_Query_IMP LUCY_DefDelWriter_Delete_By_Query_IMP
  #define DefDelWriter_Delete_By_Doc_ID_IMP LUCY_DefDelWriter_Delete_By_Doc_ID_IMP
  #define DefDelWriter_Updated_IMP LUCY_DefDelWriter_Updated_IMP
  #define DefDelWriter_Seg_Deletions_IMP LUCY_DefDelWriter_Seg_Deletions_IMP
  #define DefDelWriter_Seg_Del_Count_IMP LUCY_DefDelWriter_Seg_Del_Count_IMP
  #define DefDelWriter_Add_Segment_IMP LUCY_DefDelWriter_Add_Segment_IMP
  #define DefDelWriter_Merge_Segment_IMP LUCY_DefDelWriter_Merge_Segment_IMP
  #define DefDelWriter_Finish_IMP LUCY_DefDelWriter_Finish_IMP
  #define DefDelWriter_Format_IMP LUCY_DefDelWriter_Format_IMP
  #define DefDelWriter_Metadata_IMP LUCY_DefDelWriter_Metadata_IMP
  #define DefDelWriter_Destroy_IMP LUCY_DefDelWriter_Destroy_IMP
  #define DefDelWriter_To_Host LUCY_DefDelWriter_To_Host
  #define DefDelWriter_To_Host_t LUCY_DefDelWriter_To_Host_t
  #define DefDelWriter_Clone LUCY_DefDelWriter_Clone
  #define DefDelWriter_Clone_t LUCY_DefDelWriter_Clone_t
  #define DefDelWriter_Equals LUCY_DefDelWriter_Equals
  #define DefDelWriter_Equals_t LUCY_DefDelWriter_Equals_t
  #define DefDelWriter_Compare_To LUCY_DefDelWriter_Compare_To
  #define DefDelWriter_Compare_To_t LUCY_DefDelWriter_Compare_To_t
  #define DefDelWriter_Destroy LUCY_DefDelWriter_Destroy
  #define DefDelWriter_Destroy_t LUCY_DefDelWriter_Destroy_t
  #define DefDelWriter_To_String LUCY_DefDelWriter_To_String
  #define DefDelWriter_To_String_t LUCY_DefDelWriter_To_String_t
  #define DefDelWriter_Add_Inverted_Doc LUCY_DefDelWriter_Add_Inverted_Doc
  #define DefDelWriter_Add_Inverted_Doc_t LUCY_DefDelWriter_Add_Inverted_Doc_t
  #define DefDelWriter_Add_Segment LUCY_DefDelWriter_Add_Segment
  #define DefDelWriter_Add_Segment_t LUCY_DefDelWriter_Add_Segment_t
  #define DefDelWriter_Delete_Segment LUCY_DefDelWriter_Delete_Segment
  #define DefDelWriter_Delete_Segment_t LUCY_DefDelWriter_Delete_Segment_t
  #define DefDelWriter_Merge_Segment LUCY_DefDelWriter_Merge_Segment
  #define DefDelWriter_Merge_Segment_t LUCY_DefDelWriter_Merge_Segment_t
  #define DefDelWriter_Finish LUCY_DefDelWriter_Finish
  #define DefDelWriter_Finish_t LUCY_DefDelWriter_Finish_t
  #define DefDelWriter_Metadata LUCY_DefDelWriter_Metadata
  #define DefDelWriter_Metadata_t LUCY_DefDelWriter_Metadata_t
  #define DefDelWriter_Format LUCY_DefDelWriter_Format
  #define DefDelWriter_Format_t LUCY_DefDelWriter_Format_t
  #define DefDelWriter_Get_Snapshot LUCY_DefDelWriter_Get_Snapshot
  #define DefDelWriter_Get_Snapshot_t LUCY_DefDelWriter_Get_Snapshot_t
  #define DefDelWriter_Get_Segment LUCY_DefDelWriter_Get_Segment
  #define DefDelWriter_Get_Segment_t LUCY_DefDelWriter_Get_Segment_t
  #define DefDelWriter_Get_PolyReader LUCY_DefDelWriter_Get_PolyReader
  #define DefDelWriter_Get_PolyReader_t LUCY_DefDelWriter_Get_PolyReader_t
  #define DefDelWriter_Get_Schema LUCY_DefDelWriter_Get_Schema
  #define DefDelWriter_Get_Schema_t LUCY_DefDelWriter_Get_Schema_t
  #define DefDelWriter_Get_Folder LUCY_DefDelWriter_Get_Folder
  #define DefDelWriter_Get_Folder_t LUCY_DefDelWriter_Get_Folder_t
  #define DefDelWriter_Delete_By_Term LUCY_DefDelWriter_Delete_By_Term
  #define DefDelWriter_Delete_By_Term_t LUCY_DefDelWriter_Delete_By_Term_t
  #define DefDelWriter_Delete_By_Query LUCY_DefDelWriter_Delete_By_Query
  #define DefDelWriter_Delete_By_Query_t LUCY_DefDelWriter_Delete_By_Query_t
  #define DefDelWriter_Delete_By_Doc_ID LUCY_DefDelWriter_Delete_By_Doc_ID
  #define DefDelWriter_Delete_By_Doc_ID_t LUCY_DefDelWriter_Delete_By_Doc_ID_t
  #define DefDelWriter_Updated LUCY_DefDelWriter_Updated
  #define DefDelWriter_Updated_t LUCY_DefDelWriter_Updated_t
  #define DefDelWriter_Generate_Doc_Map LUCY_DefDelWriter_Generate_Doc_Map
  #define DefDelWriter_Generate_Doc_Map_t LUCY_DefDelWriter_Generate_Doc_Map_t
  #define DefDelWriter_Seg_Deletions LUCY_DefDelWriter_Seg_Deletions
  #define DefDelWriter_Seg_Deletions_t LUCY_DefDelWriter_Seg_Deletions_t
  #define DefDelWriter_Seg_Del_Count LUCY_DefDelWriter_Seg_Del_Count
  #define DefDelWriter_Seg_Del_Count_t LUCY_DefDelWriter_Seg_Del_Count_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_INDEX_DELETIONSWRITER */




