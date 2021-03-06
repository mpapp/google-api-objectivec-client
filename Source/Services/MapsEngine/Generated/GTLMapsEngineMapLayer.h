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
//  GTLMapsEngineMapLayer.h
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
//   GTLMapsEngineMapLayer (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineMapLayer
//

@interface GTLMapsEngineMapLayer : GTLObject

// An array of four numbers (west, south, east, north) which defines the
// rectangular bounding box of the default viewport. The numbers represent
// latitude and longitude in decimal degrees.
<<<<<<< HEAD
@property (retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)
=======
@property (nonatomic, retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID of this MapLayer. This ID can be used to request more details about
// the layer.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// A user defined alias for this MapLayer, specific to this Map.
@property (copy) NSString *key;

// The name of this MapLayer.
@property (copy) NSString *name;

// Identifies this object as a MapLayer.
@property (copy) NSString *type;

// The visibility setting of this MapLayer. One of "defaultOn" or "defaultOff".
@property (copy) NSString *visibility;
=======
@property (nonatomic, copy) NSString *identifier;

// A user defined alias for this MapLayer, specific to this Map.
@property (nonatomic, copy) NSString *key;

// The name of this MapLayer.
@property (nonatomic, copy) NSString *name;

// Identifies this object as a MapLayer.
@property (nonatomic, copy) NSString *type;

// The visibility setting of this MapLayer. One of "defaultOn" or "defaultOff".
@property (nonatomic, copy) NSString *visibility;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
