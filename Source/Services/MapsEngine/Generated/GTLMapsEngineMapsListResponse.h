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
//  GTLMapsEngineMapsListResponse.h
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
//   GTLMapsEngineMapsListResponse (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineMap;

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineMapsListResponse
//

// The response returned by a call to maps.List.

@interface GTLMapsEngineMapsListResponse : GTLObject

// Resources returned.
<<<<<<< HEAD
@property (retain) NSArray *maps;  // of GTLMapsEngineMap

// Next page token.
@property (copy) NSString *nextPageToken;  // GTLBase64 can encode/decode (probably web-safe format)
=======
@property (nonatomic, retain) NSArray *maps;  // of GTLMapsEngineMap

// Next page token.
@property (nonatomic, copy) NSString *nextPageToken;  // GTLBase64 can encode/decode (probably web-safe format)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
