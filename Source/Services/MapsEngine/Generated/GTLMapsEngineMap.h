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
//  GTLMapsEngineMap.h
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
//   GTLMapsEngineMap (0 custom class methods, 15 custom properties)
=======
//   GTLMapsEngineMap (0 custom class methods, 19 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineMapItem;

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineMap
//

// A Map is a collection of Layers, optionally contained within folders.

@interface GTLMapsEngineMap : GTLObject

// A rectangular bounding box which contains all of the data in this Map. The
<<<<<<< HEAD
// numbers represent latitude and longitude in decimal degrees.
@property (retain) NSArray *bbox;  // of NSNumber (doubleValue)

// The contents of this Map.
@property (retain) NSArray *contents;  // of GTLMapsEngineMapItem

// The creation time of this map. The value is an RFC 3339 formatted date-time
// value (e.g. 1970-01-01T00:00:00Z).
@property (retain) GTLDateTime *creationTime;
=======
// box is expressed as \"west, south, east, north\". The numbers represent
// latitude and longitude in decimal degrees.
@property (nonatomic, retain) NSArray *bbox;  // of NSNumber (doubleValue)

// The contents of this Map.
@property (nonatomic, retain) NSArray *contents;  // of GTLMapsEngineMapItem

// The creation time of this map. The value is an RFC 3339 formatted date-time
// value (e.g. 1970-01-01T00:00:00Z).
@property (nonatomic, retain) GTLDateTime *creationTime;

// The email address of the creator of this map. This is only returned on GET
// requests and not LIST requests.
@property (nonatomic, copy) NSString *creatorEmail;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An array of four numbers (west, south, east, north) which defines the
// rectangular bounding box of the default viewport. The numbers represent
// latitude and longitude in decimal degrees.
<<<<<<< HEAD
@property (retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)

// The description of this Map, supplied by the author.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Deprecated: The name of an access list of the Map Editor type. The user on
// whose behalf the request is being sent must be an editor on that access list.
// Note: Google Maps Engine no longer uses access lists. For backward
// compatibility, the API still accepts access lists for projects that are
// already using access lists. If you created a GME account/project after July
// 14th, 2014, you will not be able to send API requests that include access
// lists. The API does not yet support the new permissions model. When you
// create a map via the API without specifying permissions, the account that
// created the map is the owner and has effective administrator access. Users
// can then use the Maps Engine user interface to adjust the permissions. This
// is a temporary workaround until the API supports the new permissions model.
// Read Add new users and groups in the Google Maps Engine help center for more
// information.
@property (copy) NSString *draftAccessList;

// The ETag, used to refer to the current version of the asset.
@property (copy) NSString *ETag;

// A globally unique ID, used to refer to this Map.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The last modified time of this map. The value is an RFC 3339 formatted
// date-time value (e.g. 1970-01-01T00:00:00Z).
@property (retain) GTLDateTime *lastModifiedTime;

// The name of this Map, supplied by the author.
@property (copy) NSString *name;

// The processing status of this map. Map processing is automatically started
// once a map becomes ready for processing.
@property (copy) NSString *processingStatus;

// The ID of the project that this Map is in.
@property (copy) NSString *projectId;

// Deprecated: The access list to whom view permissions are granted. The value
// must be the name of a Maps Engine access list of the Map Viewer type, and the
// user must be a viewer on that list. Read Share data, layers, and maps in the
// Google Maps Engine help center for more information.
@property (copy) NSString *publishedAccessList;

// Tags of this Map.
@property (retain) NSArray *tags;  // of NSString

// An array containing the available versions of this Map. Currently may only
// contain "published".
@property (retain) NSArray *versions;  // of NSString
=======
@property (nonatomic, retain) NSArray *defaultViewport;  // of NSNumber (doubleValue)

// The description of this Map, supplied by the author.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Deprecated: The name of an access list of the Map Editor type. The user on
// whose behalf the request is being sent must be an editor on that access list.
// Note: Google Maps Engine no longer uses access lists. Instead, each asset has
// its own list of permissions. For backward compatibility, the API still
// accepts access lists for projects that are already using access lists. If you
// created a GME account/project after July 14th, 2014, you will not be able to
// send API requests that include access lists. Note: This is an input field
// only. It is not returned in response to a list or get request.
@property (nonatomic, copy) NSString *draftAccessList;

// The ETag, used to refer to the current version of the asset.
@property (nonatomic, copy) NSString *ETag;

// A globally unique ID, used to refer to this Map.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The last modified time of this map. The value is an RFC 3339 formatted
// date-time value (e.g. 1970-01-01T00:00:00Z).
@property (nonatomic, retain) GTLDateTime *lastModifiedTime;

// The email address of the last modifier of this map. This is only returned on
// GET requests and not LIST requests.
@property (nonatomic, copy) NSString *lastModifierEmail;

// The name of this Map, supplied by the author.
@property (nonatomic, copy) NSString *name;

// The processing status of this map. Map processing is automatically started
// once a map becomes ready for processing.
@property (nonatomic, copy) NSString *processingStatus;

// The ID of the project that this Map is in.
@property (nonatomic, copy) NSString *projectId;

// Deprecated: The access list to whom view permissions are granted. The value
// must be the name of a Maps Engine access list of the Map Viewer type, and the
// user must be a viewer on that list. Note: Google Maps Engine no longer uses
// access lists. Instead, each asset has its own list of permissions. For
// backward compatibility, the API still accepts access lists for projects that
// are already using access lists. If you created a GME account/project after
// July 14th, 2014, you will not be able to send API requests that include
// access lists. This is an input field only. It is not returned in response to
// a list or get request.
@property (nonatomic, copy) NSString *publishedAccessList;

// The publishing status of this map.
@property (nonatomic, copy) NSString *publishingStatus;

// Tags of this Map.
@property (nonatomic, retain) NSArray *tags;  // of NSString

// Deprecated: An array containing the available versions of this Map. Currently
// may only contain "published". The publishingStatus field should be used
// instead.
@property (nonatomic, retain) NSArray *versions;  // of NSString

// If true, WRITERs of the asset are able to edit the asset permissions.
@property (nonatomic, retain) NSNumber *writersCanEditPermissions;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
