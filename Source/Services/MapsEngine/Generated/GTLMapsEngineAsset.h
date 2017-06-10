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
//  GTLMapsEngineAsset.h
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
<<<<<<< HEAD
//   GTLMapsEngineAsset (0 custom class methods, 11 custom properties)
=======
//   GTLMapsEngineAsset (0 custom class methods, 14 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineAsset
//

// An asset is any Google Maps Engine resource that has a globally unique ID.
// Assets include maps, layers, vector tables, raster collections, and rasters.
// Projects and features are not considered assets.
// More detailed information about an asset can be obtained by querying the
// asset's particular endpoint.

@interface GTLMapsEngineAsset : GTLObject

// A rectangular bounding box which contains all of the data in this asset. The
<<<<<<< HEAD
// numbers represent latitude and longitude in decimal degrees.
@property (retain) NSArray *bbox;  // of NSNumber (doubleValue)

// The creation time of this asset. The value is an RFC 3339-formatted date-time
// value (for example, 1970-01-01T00:00:00Z).
@property (retain) GTLDateTime *creationTime;

// The asset's description.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// The ETag, used to refer to the current version of the asset.
@property (copy) NSString *ETag;

// The asset's globally unique ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The last modified time of this asset. The value is an RFC 3339-formatted
// date-time value (for example, 1970-01-01T00:00:00Z).
@property (retain) GTLDateTime *lastModifiedTime;

// The asset's name.
@property (copy) NSString *name;

// The ID of the project to which the asset belongs.
@property (copy) NSString *projectId;

// The URL to query to retrieve the asset's complete object. The assets endpoint
// only returns high-level information about a resource.
@property (copy) NSString *resource;
=======
// box is expressed as \"west, south, east, north\". The numbers represent
// latitude and longitude in decimal degrees.
@property (nonatomic, retain) NSArray *bbox;  // of NSNumber (doubleValue)

// The creation time of this asset. The value is an RFC 3339-formatted date-time
// value (for example, 1970-01-01T00:00:00Z).
@property (nonatomic, retain) GTLDateTime *creationTime;

// The email address of the creator of this asset. This is only returned on GET
// requests and not LIST requests.
@property (nonatomic, copy) NSString *creatorEmail;

// The asset's description.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// The ETag, used to refer to the current version of the asset.
@property (nonatomic, copy) NSString *ETag;

// The asset's globally unique ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The last modified time of this asset. The value is an RFC 3339-formatted
// date-time value (for example, 1970-01-01T00:00:00Z).
@property (nonatomic, retain) GTLDateTime *lastModifiedTime;

// The email address of the last modifier of this asset. This is only returned
// on GET requests and not LIST requests.
@property (nonatomic, copy) NSString *lastModifierEmail;

// The asset's name.
@property (nonatomic, copy) NSString *name;

// The ID of the project to which the asset belongs.
@property (nonatomic, copy) NSString *projectId;

// The URL to query to retrieve the asset's complete object. The assets endpoint
// only returns high-level information about a resource.
@property (nonatomic, copy) NSString *resource;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An array of text strings, with each string representing a tag. More
// information about tags can be found in the Tagging data article of the Maps
// Engine help center.
<<<<<<< HEAD
@property (retain) NSArray *tags;  // of NSString

// The type of asset. One of raster, rasterCollection, table, map, or layer.
@property (copy) NSString *type;
=======
@property (nonatomic, retain) NSArray *tags;  // of NSString

// The type of asset. One of raster, rasterCollection, table, map, or layer.
@property (nonatomic, copy) NSString *type;

// If true, WRITERs of the asset are able to edit the asset permissions.
@property (nonatomic, retain) NSNumber *writersCanEditPermissions;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
