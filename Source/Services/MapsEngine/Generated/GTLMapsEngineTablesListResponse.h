<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2015 Google Inc.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLMapsEngineTablesListResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Maps Engine API (mapsengine/v1)
// Description:
//   The Google Maps Engine API allows developers to store and query geospatial
//   vector and raster data.
// Documentation:
//   https://developers.google.com/maps-engine/
// Classes:
//   GTLMapsEngineTablesListResponse (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineTable;

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineTablesListResponse
//

<<<<<<< HEAD
// The response returned by a call to tables.List.
=======
// The response returned by a call to tables.List. Note: The list response does
// not include all the fields available in a table. Refer to the table resource
// description for details of the fields that are not included. You'll need to
// send a get request to retrieve the additional fields for each table.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@interface GTLMapsEngineTablesListResponse : GTLObject

// Next page token.
<<<<<<< HEAD
@property (copy) NSString *nextPageToken;  // GTLBase64 can encode/decode (probably web-safe format)

// Resources returned.
@property (retain) NSArray *tables;  // of GTLMapsEngineTable
=======
@property (nonatomic, copy) NSString *nextPageToken;  // GTLBase64 can encode/decode (probably web-safe format)

// Resources returned.
@property (nonatomic, retain) NSArray *tables;  // of GTLMapsEngineTable
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
