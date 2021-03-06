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


#ifndef H_LUCY_UTIL_INDEXFILENAMES
#define H_LUCY_UTIL_INDEXFILENAMES 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Declare this class's inert variables.
 */



/* Declare this class's inert functions.
 */

LUCY_VISIBLE uint64_t
lucy_IxFileNames_extract_gen(cfish_String* name);

LUCY_VISIBLE cfish_String*
lucy_IxFileNames_latest_snapshot(lucy_Folder* folder);

LUCY_VISIBLE cfish_String*
lucy_IxFileNames_local_part(cfish_String* path);



/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define IxFileNames_extract_gen lucy_IxFileNames_extract_gen
  #define IxFileNames_latest_snapshot lucy_IxFileNames_latest_snapshot
  #define IxFileNames_local_part lucy_IxFileNames_local_part
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_UTIL_INDEXFILENAMES */




