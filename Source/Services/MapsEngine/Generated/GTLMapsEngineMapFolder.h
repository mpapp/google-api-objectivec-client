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
//  GTLMapsEngineMapFolder.h
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
//   GTLMapsEngineMapFolder (0 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineMapItem;

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineMapFolder
//

@interface GTLMapsEngineMapFolder : GTLObject
<<<<<<< HEAD
@property (retain) NSArray *contents;  // of GTLMapsEngineMapItem
=======
@property (nonatomic, retain) NSArray *contents;  // of GTLMapsEngineMapItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An array of four numbers (west, south, east, north) which defines the
// rectangular bounding box of the default viewport. The numbers represent
// latitude and longitude in decimal degrees.
<<<<<<< HEAD
@property (retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)

// The expandability setting of this MapFolder. If true, the folder can be
// expanded.
@property (retain) NSNumber *expandable;  // boolValue

// A user defined alias for this MapFolder, specific to this Map.
@property (copy) NSString *key;

// The name of this MapFolder.
@property (copy) NSString *name;

// Identifies this object as a MapFolder.
@property (copy) NSString *type;

// The visibility setting of this MapFolder. One of "defaultOn" or "defaultOff".
@property (copy) NSString *visibility;
=======
@property (nonatomic, retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)

// The expandability setting of this MapFolder. If true, the folder can be
// expanded.
@property (nonatomic, retain) NSNumber *expandable;  // boolValue

// A user defined alias for this MapFolder, specific to this Map.
@property (nonatomic, copy) NSString *key;

// The name of this MapFolder.
@property (nonatomic, copy) NSString *name;

// Identifies this object as a MapFolder.
@property (nonatomic, copy) NSString *type;

// The visibility setting of this MapFolder. One of "defaultOn" or "defaultOff".
@property (nonatomic, copy) NSString *visibility;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
