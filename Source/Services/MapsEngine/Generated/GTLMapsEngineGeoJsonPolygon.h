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
//  GTLMapsEngineGeoJsonPolygon.h
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
//   GTLMapsEngineGeoJsonPolygon (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineGeoJsonPolygon
//

@interface GTLMapsEngineGeoJsonPolygon : GTLObject

<<<<<<< HEAD
// An array of LinearRings, each of which is an array of four or more
// GeoJsonPositions. The first and last coordinates in each LinearRing must be
// the same. For polygons with multiple rings, the first LinearRing is the
// external ring, with subsequent rings being interior rings (i.e. hole). All
// LinearRings must contain GeoJsonPositions in counter-clockwise order.
@property (retain) NSArray *coordinates;  // of NSArray of NSArray of NSNumber (doubleValue)

// Identifies this object as a GeoJsonPolygon.
@property (copy) NSString *type;
=======
// An array of LinearRings. A LinearRing is a GeoJsonLineString which is closed
// (that is, the first and last GeoJsonPositions are equal), and which contains
// at least four GeoJsonPositions. For polygons with multiple rings, the first
// LinearRing is the exterior ring, and any subsequent rings are interior rings
// (that is, holes).
@property (nonatomic, retain) NSArray *coordinates;  // of NSArray of NSArray of NSNumber (doubleValue)

// Identifies this object as a GeoJsonPolygon.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
