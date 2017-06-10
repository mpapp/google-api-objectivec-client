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
//  GTLQueryMapsEngine.h
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
//   GTLQueryMapsEngine (51 custom class methods, 27 custom properties)
=======
//   GTLQueryMapsEngine (77 custom class methods, 32 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLMapsEngineFeature;
<<<<<<< HEAD
@class GTLMapsEngineLayer;
@class GTLMapsEngineMap;
=======
@class GTLMapsEngineIcon;
@class GTLMapsEngineLayer;
@class GTLMapsEngineMap;
@class GTLMapsEnginePermissionsBatchDeleteRequest;
@class GTLMapsEnginePermissionsBatchUpdateRequest;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLMapsEngineRaster;
@class GTLMapsEngineRasterCollection;
@class GTLMapsEngineRasterCollectionsRasterBatchDeleteRequest;
@class GTLMapsEngineRasterCollectionsRastersBatchInsertRequest;
@class GTLMapsEngineTable;

@interface GTLQueryMapsEngine : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (copy) NSString *bbox;
@property (retain) GTLDateTime *createdAfter;
@property (retain) GTLDateTime *createdBefore;
@property (copy) NSString *creatorEmail;
@property (retain) NSArray *features;  // of GTLMapsEngineFeature
@property (copy) NSString *filename;
@property (retain) NSArray *gxIds;  // of NSString
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;
@property (copy) NSString *include;
@property (copy) NSString *intersects;
@property (assign) NSUInteger limit;
@property (assign) NSUInteger maxResults;
@property (retain) GTLDateTime *modifiedAfter;
@property (retain) GTLDateTime *modifiedBefore;
@property (copy) NSString *orderBy;
@property (copy) NSString *pageToken;
@property (retain) NSArray *primaryKeys;  // of NSString
@property (assign) BOOL process;
@property (copy) NSString *projectId;
// "request" has different types for some query methods; see the documentation
// for the right type for each query method.
@property (retain) id request;
@property (copy) NSString *select;
@property (copy) NSString *tableId;
@property (copy) NSString *tags;
@property (copy) NSString *type;
@property (copy) NSString *version;
@property (copy) NSString *where;

#pragma mark -
#pragma mark "assets" methods
=======
@property (nonatomic, copy) NSString *bbox;
@property (nonatomic, retain) GTLDateTime *createdAfter;
@property (nonatomic, retain) GTLDateTime *createdBefore;
@property (nonatomic, copy) NSString *creatorEmail;
@property (nonatomic, retain) NSArray *features;  // of GTLMapsEngineFeature
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, assign) BOOL force;
@property (nonatomic, retain) NSArray *gxIds;  // of NSString
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *include;
@property (nonatomic, copy) NSString *intersects;
@property (nonatomic, assign) NSUInteger limit;
@property (nonatomic, assign) NSUInteger maxResults;
@property (nonatomic, retain) GTLDateTime *modifiedAfter;
@property (nonatomic, retain) GTLDateTime *modifiedBefore;
@property (nonatomic, assign) BOOL normalizeGeometries;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, retain) NSArray *primaryKeys;  // of NSString
@property (nonatomic, assign) BOOL process;
@property (nonatomic, copy) NSString *processingStatus;
@property (nonatomic, copy) NSString *projectId;
// "request" has different types for some query methods; see the documentation
// for the right type for each query method.
@property (nonatomic, retain) id request;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, copy) NSString *search;
@property (nonatomic, copy) NSString *select;
@property (nonatomic, copy) NSString *tableId;
@property (nonatomic, copy) NSString *tags;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *where;

#pragma mark - "assets" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.assets.get
// Return metadata for a particular asset.
//  Required:
//   identifier: The ID of the asset.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineAsset.
<<<<<<< HEAD
+ (id)queryForAssetsGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForAssetsGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.assets.list
// Return all assets readable by the current user.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
<<<<<<< HEAD
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//   type: An asset type restriction. If set, only resources of this type will
//     be returned.
//      kGTLMapsEngineTypeLayer: Return layers.
//      kGTLMapsEngineTypeMap: Return maps.
//      kGTLMapsEngineTypeRasterCollection: Return raster collections.
//      kGTLMapsEngineTypeTable: Return tables.
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//   type: A comma separated list of asset types. Returned assets will have one
//     of the types from the provided list. Supported values are 'map', 'layer',
//     'rasterCollection' and 'table'.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineAssetsListResponse.
<<<<<<< HEAD
+ (id)queryForAssetsList;

#pragma mark -
#pragma mark "assets.parents" methods
=======
+ (instancetype)queryForAssetsList;

#pragma mark - "assets.parents" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.assets.parents.list
// Return all parent ids of the specified asset.
//  Required:
//   identifier: The ID of the asset whose parents will be listed.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineParentsListResponse.
<<<<<<< HEAD
+ (id)queryForAssetsParentsListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "layers" methods
=======
+ (instancetype)queryForAssetsParentsListWithIdentifier:(NSString *)identifier;

#pragma mark - "assets.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.assets.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForAssetsPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "layers" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.layers.cancelProcessing
// Cancel processing on a layer asset.
//  Required:
//   identifier: The ID of the layer.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
<<<<<<< HEAD
+ (id)queryForLayersCancelProcessingWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLayersCancelProcessingWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.create
// Create a layer asset.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineLayer.
//   process: Whether to queue the created layer for processing.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineLayer.
<<<<<<< HEAD
+ (id)queryForLayersCreate;
=======
+ (instancetype)queryForLayersCreate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.delete
// Delete a layer.
//  Required:
//   identifier: The ID of the layer. Only the layer creator or project owner
//     are permitted to delete. If the layer is published, or included in a map,
//     the request will fail. Unpublish the layer, and remove it from all maps
//     prior to deleting.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForLayersDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLayersDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.get
// Return metadata for a particular layer.
//  Required:
//   identifier: The ID of the layer.
//  Optional:
<<<<<<< HEAD
//   version: NSString
=======
//   version: Deprecated: The version parameter indicates which version of the
//     layer should be returned. When version is set to published, the published
//     version of the layer will be returned. Please use the layers.getPublished
//     endpoint instead.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//      kGTLMapsEngineVersionDraft: The draft version.
//      kGTLMapsEngineVersionPublished: The published version.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineLayer.
<<<<<<< HEAD
+ (id)queryForLayersGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLayersGetWithIdentifier:(NSString *)identifier;

// Method: mapsengine.layers.getPublished
// Return the published metadata for a particular layer.
//  Required:
//   identifier: The ID of the layer.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePublishedLayer.
+ (instancetype)queryForLayersGetPublishedWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.list
// Return all layers readable by the current user.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
<<<<<<< HEAD
=======
//   processingStatus: NSString
//      kGTLMapsEngineProcessingStatusComplete: The layer has completed
//        processing.
//      kGTLMapsEngineProcessingStatusFailed: The layer has failed processing.
//      kGTLMapsEngineProcessingStatusNotReady: The layer is not ready for
//        processing.
//      kGTLMapsEngineProcessingStatusProcessing: The layer is processing.
//      kGTLMapsEngineProcessingStatusReady: The layer is ready for processing.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
<<<<<<< HEAD
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineLayersListResponse.
<<<<<<< HEAD
+ (id)queryForLayersList;

#pragma mark -
#pragma mark "layers.parents" methods
=======
+ (instancetype)queryForLayersList;

// Method: mapsengine.layers.listPublished
// Return all published layers readable by the current user.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePublishedLayersListResponse.
+ (instancetype)queryForLayersListPublished;

#pragma mark - "layers.parents" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.layers.parents.list
// Return all parent ids of the specified layer.
//  Required:
//   identifier: The ID of the layer whose parents will be listed.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineParentsListResponse.
<<<<<<< HEAD
+ (id)queryForLayersParentsListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "layers" methods
=======
+ (instancetype)queryForLayersParentsListWithIdentifier:(NSString *)identifier;

#pragma mark - "layers" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.layers.patch
// Mutate a layer asset.
//  Required:
//   identifier: The ID of the layer.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineLayer.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForLayersPatchWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLayersPatchWithIdentifier:(NSString *)identifier;

#pragma mark - "layers.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.layers.permissions.batchDelete
// Remove permission entries from an already existing asset.
//  Required:
//   identifier: The ID of the asset from which permissions will be removed.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchDeleteResponse.
+ (instancetype)queryForLayersPermissionsBatchDeleteWithIdentifier:(NSString *)identifier;

// Method: mapsengine.layers.permissions.batchUpdate
// Add or update permission entries to an already existing asset.
// An asset can hold up to 20 different permission entries. Each batchInsert
// request is atomic.
//  Required:
//   identifier: The ID of the asset to which permissions will be added.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchUpdateRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchUpdateResponse.
+ (instancetype)queryForLayersPermissionsBatchUpdateWithIdentifier:(NSString *)identifier;

// Method: mapsengine.layers.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForLayersPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "layers" methods
// These create a GTLQueryMapsEngine object.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.process
// Process a layer asset.
//  Required:
//   identifier: The ID of the layer.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
<<<<<<< HEAD
+ (id)queryForLayersProcessWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLayersProcessWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.publish
// Publish a layer asset.
//  Required:
//   identifier: The ID of the layer.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
+ (id)queryForLayersPublishWithIdentifier:(NSString *)identifier;
=======
//  Optional:
//   force: If set to true, the API will allow publication of the layer even if
//     it's out of date. If not true, you'll need to reprocess any out-of-date
//     layer before publishing.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
+ (instancetype)queryForLayersPublishWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.layers.unpublish
// Unpublish a layer asset.
//  Required:
//   identifier: The ID of the layer.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
<<<<<<< HEAD
+ (id)queryForLayersUnpublishWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "maps" methods
=======
+ (instancetype)queryForLayersUnpublishWithIdentifier:(NSString *)identifier;

#pragma mark - "maps" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.maps.create
// Create a map asset.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineMap.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineMap.
<<<<<<< HEAD
+ (id)queryForMapsCreate;
=======
+ (instancetype)queryForMapsCreate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.delete
// Delete a map.
//  Required:
//   identifier: The ID of the map. Only the map creator or project owner are
//     permitted to delete. If the map is published the request will fail.
//     Unpublish the map prior to deleting.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForMapsDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForMapsDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.get
// Return metadata for a particular map.
//  Required:
//   identifier: The ID of the map.
//  Optional:
<<<<<<< HEAD
//   version: NSString
=======
//   version: Deprecated: The version parameter indicates which version of the
//     map should be returned. When version is set to published, the published
//     version of the map will be returned. Please use the maps.getPublished
//     endpoint instead.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//      kGTLMapsEngineVersionDraft: The draft version.
//      kGTLMapsEngineVersionPublished: The published version.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineMap.
<<<<<<< HEAD
+ (id)queryForMapsGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForMapsGetWithIdentifier:(NSString *)identifier;

// Method: mapsengine.maps.getPublished
// Return the published metadata for a particular map.
//  Required:
//   identifier: The ID of the map.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePublishedMap.
+ (instancetype)queryForMapsGetPublishedWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.list
// Return all maps readable by the current user.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
<<<<<<< HEAD
=======
//   processingStatus: NSString
//      kGTLMapsEngineProcessingStatusComplete: The map has completed
//        processing.
//      kGTLMapsEngineProcessingStatusFailed: The map has failed processing.
//      kGTLMapsEngineProcessingStatusNotReady: The map is not ready for
//        processing.
//      kGTLMapsEngineProcessingStatusProcessing: The map is processing.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
<<<<<<< HEAD
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineMapsListResponse.
<<<<<<< HEAD
+ (id)queryForMapsList;
=======
+ (instancetype)queryForMapsList;

// Method: mapsengine.maps.listPublished
// Return all published maps readable by the current user.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePublishedMapsListResponse.
+ (instancetype)queryForMapsListPublished;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.patch
// Mutate a map asset.
//  Required:
//   identifier: The ID of the map.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineMap.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForMapsPatchWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForMapsPatchWithIdentifier:(NSString *)identifier;

#pragma mark - "maps.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.maps.permissions.batchDelete
// Remove permission entries from an already existing asset.
//  Required:
//   identifier: The ID of the asset from which permissions will be removed.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchDeleteResponse.
+ (instancetype)queryForMapsPermissionsBatchDeleteWithIdentifier:(NSString *)identifier;

// Method: mapsengine.maps.permissions.batchUpdate
// Add or update permission entries to an already existing asset.
// An asset can hold up to 20 different permission entries. Each batchInsert
// request is atomic.
//  Required:
//   identifier: The ID of the asset to which permissions will be added.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchUpdateRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchUpdateResponse.
+ (instancetype)queryForMapsPermissionsBatchUpdateWithIdentifier:(NSString *)identifier;

// Method: mapsengine.maps.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForMapsPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "maps" methods
// These create a GTLQueryMapsEngine object.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.publish
// Publish a map asset.
//  Required:
//   identifier: The ID of the map.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
+ (id)queryForMapsPublishWithIdentifier:(NSString *)identifier;
=======
//  Optional:
//   force: If set to true, the API will allow publication of the map even if
//     it's out of date. If false, the map must have a processingStatus of
//     complete before publishing.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
+ (instancetype)queryForMapsPublishWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.maps.unpublish
// Unpublish a map asset.
//  Required:
//   identifier: The ID of the map.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePublishResponse.
<<<<<<< HEAD
+ (id)queryForMapsUnpublishWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "projects" methods
=======
+ (instancetype)queryForMapsUnpublishWithIdentifier:(NSString *)identifier;

#pragma mark - "projects.icons" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.projects.icons.create
// Create an icon.
//  Required:
//   projectId: The ID of the project.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineIcon.
//  Upload Parameters:
//   Maximum size: 100KB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineIcon.
+ (instancetype)queryForProjectsIconsCreateWithProjectId:(NSString *)projectId
                                        uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: mapsengine.projects.icons.get
// Return an icon or its associated metadata
//  Required:
//   projectId: The ID of the project.
//   identifier: The ID of the icon.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineIcon.
+ (instancetype)queryForProjectsIconsGetWithProjectId:(NSString *)projectId
                                           identifier:(NSString *)identifier;

// Method: mapsengine.projects.icons.list
// Return all icons in the current project
//  Required:
//   projectId: The ID of the project.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineIconsListResponse.
+ (instancetype)queryForProjectsIconsListWithProjectId:(NSString *)projectId;

#pragma mark - "projects" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.projects.list
// Return all projects readable by the current user.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineProjectsListResponse.
<<<<<<< HEAD
+ (id)queryForProjectsList;

#pragma mark -
#pragma mark "rasterCollections" methods
=======
+ (instancetype)queryForProjectsList;

#pragma mark - "rasterCollections" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasterCollections.cancelProcessing
// Cancel processing on a raster collection asset.
//  Required:
//   identifier: The ID of the raster collection.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsCancelProcessingWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsCancelProcessingWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.create
// Create a raster collection asset.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEngineRasterCollection.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineRasterCollection.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsCreate;
=======
+ (instancetype)queryForRasterCollectionsCreate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.delete
// Delete a raster collection.
//  Required:
//   identifier: The ID of the raster collection. Only the raster collection
//     creator or project owner are permitted to delete. If the rastor
//     collection is included in a layer, the request will fail. Remove the
//     raster collection from all layers prior to deleting.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForRasterCollectionsDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.get
// Return metadata for a particular raster collection.
//  Required:
//   identifier: The ID of the raster collection.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineRasterCollection.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.list
// Return all raster collections readable by the current user.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
<<<<<<< HEAD
=======
//   processingStatus: NSString
//      kGTLMapsEngineProcessingStatusComplete: The raster collection has
//        completed processing.
//      kGTLMapsEngineProcessingStatusFailed: The raster collection has failed
//        processing.
//      kGTLMapsEngineProcessingStatusNotReady: The raster collection is not
//        ready for processing.
//      kGTLMapsEngineProcessingStatusProcessing: The raster collection is
//        processing.
//      kGTLMapsEngineProcessingStatusReady: The raster collection is ready for
//        processing.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
<<<<<<< HEAD
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineRasterCollectionsListResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsList;

#pragma mark -
#pragma mark "rasterCollections.parents" methods
=======
+ (instancetype)queryForRasterCollectionsList;

#pragma mark - "rasterCollections.parents" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasterCollections.parents.list
// Return all parent ids of the specified raster collection.
//  Required:
//   identifier: The ID of the raster collection whose parents will be listed.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineParentsListResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsParentsListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasterCollections" methods
=======
+ (instancetype)queryForRasterCollectionsParentsListWithIdentifier:(NSString *)identifier;

#pragma mark - "rasterCollections" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasterCollections.patch
// Mutate a raster collection asset.
//  Required:
//   identifier: The ID of the raster collection.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEngineRasterCollection.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForRasterCollectionsPatchWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsPatchWithIdentifier:(NSString *)identifier;

#pragma mark - "rasterCollections.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasterCollections.permissions.batchDelete
// Remove permission entries from an already existing asset.
//  Required:
//   identifier: The ID of the asset from which permissions will be removed.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchDeleteResponse.
+ (instancetype)queryForRasterCollectionsPermissionsBatchDeleteWithIdentifier:(NSString *)identifier;

// Method: mapsengine.rasterCollections.permissions.batchUpdate
// Add or update permission entries to an already existing asset.
// An asset can hold up to 20 different permission entries. Each batchInsert
// request is atomic.
//  Required:
//   identifier: The ID of the asset to which permissions will be added.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchUpdateRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchUpdateResponse.
+ (instancetype)queryForRasterCollectionsPermissionsBatchUpdateWithIdentifier:(NSString *)identifier;

// Method: mapsengine.rasterCollections.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForRasterCollectionsPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "rasterCollections" methods
// These create a GTLQueryMapsEngine object.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.process
// Process a raster collection asset.
//  Required:
//   identifier: The ID of the raster collection.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsProcessWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasterCollections.rasters" methods
=======
+ (instancetype)queryForRasterCollectionsProcessWithIdentifier:(NSString *)identifier;

#pragma mark - "rasterCollections.rasters" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasterCollections.rasters.batchDelete
// Remove rasters from an existing raster collection.
// Up to 50 rasters can be included in a single batchDelete request. Each
// batchDelete request is atomic.
//  Required:
//   identifier: The ID of the raster collection to which these rasters belong.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEngineRasterCollectionsRasterBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineRasterCollectionsRastersBatchDeleteResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsRastersBatchDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsRastersBatchDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.rasters.batchInsert
// Add rasters to an existing raster collection. Rasters must be successfully
// processed in order to be added to a raster collection.
// Up to 50 rasters can be included in a single batchInsert request. Each
// batchInsert request is atomic.
//  Required:
//   identifier: The ID of the raster collection to which these rasters belong.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEngineRasterCollectionsRastersBatchInsertRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineRasterCollectionsRastersBatchInsertResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsRastersBatchInsertWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRasterCollectionsRastersBatchInsertWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasterCollections.rasters.list
// Return all rasters within a raster collection.
//  Required:
//   identifier: The ID of the raster collection to which these rasters belong.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
<<<<<<< HEAD
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineRasterCollectionsRastersListResponse.
<<<<<<< HEAD
+ (id)queryForRasterCollectionsRastersListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasters" methods
=======
+ (instancetype)queryForRasterCollectionsRastersListWithIdentifier:(NSString *)identifier;

#pragma mark - "rasters" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.delete
// Delete a raster.
//  Required:
//   identifier: The ID of the raster. Only the raster creator or project owner
//     are permitted to delete. If the raster is included in a layer or mosaic,
//     the request will fail. Remove it from all parents prior to deleting.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForRastersDeleteWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasters.files" methods
=======
+ (instancetype)queryForRastersDeleteWithIdentifier:(NSString *)identifier;

#pragma mark - "rasters.files" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.files.insert
// Upload a file to a raster asset.
//  Required:
//   identifier: The ID of the raster asset.
//   filename: The file name of this uploaded file.
//  Upload Parameters:
//   Maximum size: 10GB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForRastersFilesInsertWithIdentifier:(NSString *)identifier
                                      filename:(NSString *)filename
                              uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark -
#pragma mark "rasters" methods
=======
+ (instancetype)queryForRastersFilesInsertWithIdentifier:(NSString *)identifier
                                                filename:(NSString *)filename
                                        uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark - "rasters" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.get
// Return metadata for a single raster.
//  Required:
//   identifier: The ID of the raster.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineRaster.
<<<<<<< HEAD
+ (id)queryForRastersGetWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasters.parents" methods
=======
+ (instancetype)queryForRastersGetWithIdentifier:(NSString *)identifier;

// Method: mapsengine.rasters.list
// Return all rasters readable by the current user.
//  Required:
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//   processingStatus: NSString
//      kGTLMapsEngineProcessingStatusComplete: The raster has completed
//        processing.
//      kGTLMapsEngineProcessingStatusFailed: The raster has failed processing.
//      kGTLMapsEngineProcessingStatusNotReady: The raster is not ready for
//        processing.
//      kGTLMapsEngineProcessingStatusProcessing: The raster is processing.
//      kGTLMapsEngineProcessingStatusReady: The raster is ready for processing.
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineRastersListResponse.
+ (instancetype)queryForRastersListWithProjectId:(NSString *)projectId;

#pragma mark - "rasters.parents" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.parents.list
// Return all parent ids of the specified rasters.
//  Required:
//   identifier: The ID of the rasters whose parents will be listed.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineParentsListResponse.
<<<<<<< HEAD
+ (id)queryForRastersParentsListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "rasters" methods
=======
+ (instancetype)queryForRastersParentsListWithIdentifier:(NSString *)identifier;

#pragma mark - "rasters" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.patch
// Mutate a raster asset.
//  Required:
//   identifier: The ID of the raster.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineRaster.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForRastersPatchWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForRastersPatchWithIdentifier:(NSString *)identifier;

#pragma mark - "rasters.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.permissions.batchDelete
// Remove permission entries from an already existing asset.
//  Required:
//   identifier: The ID of the asset from which permissions will be removed.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchDeleteResponse.
+ (instancetype)queryForRastersPermissionsBatchDeleteWithIdentifier:(NSString *)identifier;

// Method: mapsengine.rasters.permissions.batchUpdate
// Add or update permission entries to an already existing asset.
// An asset can hold up to 20 different permission entries. Each batchInsert
// request is atomic.
//  Required:
//   identifier: The ID of the asset to which permissions will be added.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchUpdateRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchUpdateResponse.
+ (instancetype)queryForRastersPermissionsBatchUpdateWithIdentifier:(NSString *)identifier;

// Method: mapsengine.rasters.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForRastersPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "rasters" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.rasters.process
// Process a raster asset.
//  Required:
//   identifier: The ID of the raster.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
+ (instancetype)queryForRastersProcessWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.rasters.upload
// Create a skeleton raster asset for upload.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineRaster.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineRaster.
<<<<<<< HEAD
+ (id)queryForRastersUpload;

#pragma mark -
#pragma mark "tables" methods
=======
+ (instancetype)queryForRastersUpload;

#pragma mark - "tables" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.create
// Create a table asset.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineTable.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineTable.
<<<<<<< HEAD
+ (id)queryForTablesCreate;
=======
+ (instancetype)queryForTablesCreate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.delete
// Delete a table.
//  Required:
//   identifier: The ID of the table. Only the table creator or project owner
//     are permitted to delete. If the table is included in a layer, the request
//     will fail. Remove it from all layers prior to deleting.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForTablesDeleteWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "tables.features" methods
=======
+ (instancetype)queryForTablesDeleteWithIdentifier:(NSString *)identifier;

#pragma mark - "tables.features" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.features.batchDelete
// Delete all features matching the given IDs.
//  Required:
//   identifier: The ID of the table that contains the features to be deleted.
//  Optional:
<<<<<<< HEAD
//   gxIds: NSArray
//   primaryKeys: NSArray
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (id)queryForTablesFeaturesBatchDeleteWithIdentifier:(NSString *)identifier;
=======
//   gxIds: NSArray<NSString>
//   primaryKeys: NSArray<NSString>
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (instancetype)queryForTablesFeaturesBatchDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.features.batchInsert
// Append features to an existing table.
// A single batchInsert request can create:
// - Up to 50 features.
// - A combined total of 10 000 vertices.
// Feature limits are documented in the Supported data formats and limits
// article of the Google Maps Engine help center. Note that free and paid
// accounts have different limits.
// For more information about inserting features, read Creating features in the
// Google Maps Engine developer's guide.
//  Required:
//   identifier: The ID of the table to append the features to.
//  Optional:
<<<<<<< HEAD
//   features: NSArray
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (id)queryForTablesFeaturesBatchInsertWithIdentifier:(NSString *)identifier;
=======
//   features: NSArray<GTLMapsEngineFeature>
//   normalizeGeometries: If true, the server will normalize feature geometries.
//     It is assumed that the South Pole is exterior to any polygons given. See
//     here for a list of normalizations. If false, all feature geometries must
//     be given already normalized. The points in all LinearRings must be listed
//     in counter-clockwise order, and LinearRings may not intersect. (Default
//     true)
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (instancetype)queryForTablesFeaturesBatchInsertWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.features.batchPatch
// Update the supplied features.
// A single batchPatch request can update:
// - Up to 50 features.
// - A combined total of 10 000 vertices.
// Feature limits are documented in the Supported data formats and limits
// article of the Google Maps Engine help center. Note that free and paid
// accounts have different limits.
// Feature updates use HTTP PATCH semantics:
// - A supplied value replaces an existing value (if any) in that field.
// - Omitted fields remain unchanged.
// - Complex values in geometries and properties must be replaced as atomic
// units. For example, providing just the coordinates of a geometry is not
// allowed; the complete geometry, including type, must be supplied.
// - Setting a property's value to null deletes that property.
// For more information about updating features, read Updating features in the
// Google Maps Engine developer's guide.
//  Required:
//   identifier: The ID of the table containing the features to be patched.
//  Optional:
<<<<<<< HEAD
//   features: NSArray
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (id)queryForTablesFeaturesBatchPatchWithIdentifier:(NSString *)identifier;
=======
//   features: NSArray<GTLMapsEngineFeature>
//   normalizeGeometries: If true, the server will normalize feature geometries.
//     It is assumed that the South Pole is exterior to any polygons given. See
//     here for a list of normalizations. If false, all feature geometries must
//     be given already normalized. The points in all LinearRings must be listed
//     in counter-clockwise order, and LinearRings may not intersect. (Default
//     true)
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
+ (instancetype)queryForTablesFeaturesBatchPatchWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.features.get
// Return a single feature, given its ID.
//  Required:
//   tableId: The ID of the table.
//  Optional:
//   identifier: The ID of the feature to get.
//   select: A SQL-like projection clause used to specify returned properties.
//     If this parameter is not included, all properties are returned.
//   version: The table version to access. See Accessing Public Data for
//     information.
//      kGTLMapsEngineVersionDraft: The draft version.
//      kGTLMapsEngineVersionPublished: The published version.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineFeature.
<<<<<<< HEAD
+ (id)queryForTablesFeaturesGetWithTableId:(NSString *)tableId;
=======
+ (instancetype)queryForTablesFeaturesGetWithTableId:(NSString *)tableId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.features.list
// Return all features readable by the current user.
//  Required:
//   identifier: The ID of the table to which these features belong.
//  Optional:
//   include: A comma separated list of optional data to include. Optional data
//     available: schema.
//   intersects: A geometry literal that specifies the spatial restriction of
//     the query.
//   limit: The total number of features to return from the query, irrespective
//     of the number of pages.
//   maxResults: The maximum number of items to include in the response, used
//     for paging. The maximum supported value is 1000.
//   orderBy: An SQL-like order by clause used to sort results. If this
//     parameter is not included, the order of features is undefined.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//   select: A SQL-like projection clause used to specify returned properties.
//     If this parameter is not included, all properties are returned.
//   version: The table version to access. See Accessing Public Data for
//     information.
//      kGTLMapsEngineVersionDraft: The draft version.
//      kGTLMapsEngineVersionPublished: The published version.
//   where: An SQL-like predicate used to filter results.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineFeaturesListResponse.
<<<<<<< HEAD
+ (id)queryForTablesFeaturesListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "tables.files" methods
=======
+ (instancetype)queryForTablesFeaturesListWithIdentifier:(NSString *)identifier;

#pragma mark - "tables.files" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.files.insert
// Upload a file to a placeholder table asset. See Table Upload in the
// Developer's Guide for more information.
// Supported file types are listed in the Supported data formats and limits
// article of the Google Maps Engine help center.
//  Required:
//   identifier: The ID of the table asset.
//   filename: The file name of this uploaded file.
//  Upload Parameters:
//   Maximum size: 1GB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForTablesFilesInsertWithIdentifier:(NSString *)identifier
                                     filename:(NSString *)filename
                             uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark -
#pragma mark "tables" methods
=======
+ (instancetype)queryForTablesFilesInsertWithIdentifier:(NSString *)identifier
                                               filename:(NSString *)filename
                                       uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark - "tables" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.get
// Return metadata for a particular table, including the schema.
//  Required:
//   identifier: The ID of the table.
//  Optional:
//   version: NSString
//      kGTLMapsEngineVersionDraft: The draft version.
//      kGTLMapsEngineVersionPublished: The published version.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineTable.
<<<<<<< HEAD
+ (id)queryForTablesGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForTablesGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.list
// Return all tables readable by the current user.
//  Optional:
//   bbox: A bounding box, expressed as "west,south,east,north". If set, only
//     assets which intersect this bounding box will be returned.
//   createdAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or after
//     this time.
//   createdBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been created at or
//     before this time.
//   creatorEmail: An email address representing a user. Returned assets that
//     have been created by the user associated with the provided email address.
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 100.
//   modifiedAfter: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     after this time.
//   modifiedBefore: An RFC 3339 formatted date-time value (e.g.
//     1970-01-01T00:00:00Z). Returned assets will have been modified at or
//     before this time.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
<<<<<<< HEAD
=======
//   processingStatus: NSString
//      kGTLMapsEngineProcessingStatusComplete: The table has completed
//        processing.
//      kGTLMapsEngineProcessingStatusFailed: The table has failed processing.
//      kGTLMapsEngineProcessingStatusNotReady: The table is not ready for
//        processing.
//      kGTLMapsEngineProcessingStatusProcessing: The table is processing.
//      kGTLMapsEngineProcessingStatusReady: The table is ready for processing.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   projectId: The ID of a Maps Engine project, used to filter the response. To
//     list all available projects with their IDs, send a Projects: list
//     request. You can also find your project ID as the value of the
//     DashboardPlace:cid URL parameter when signed in to mapsengine.google.com.
<<<<<<< HEAD
=======
//   role: The role parameter indicates that the response should only contain
//     assets where the current user has the specified level of access.
//      kGTLMapsEngineRoleOwner: The user can read, write and administer the
//        asset.
//      kGTLMapsEngineRoleReader: The user can read the asset.
//      kGTLMapsEngineRoleWriter: The user can read and write the asset.
//   search: An unstructured search string used to filter the set of results
//     based on asset metadata.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   tags: A comma separated list of tags. Returned assets will contain all the
//     tags from the list.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineTablesListResponse.
<<<<<<< HEAD
+ (id)queryForTablesList;

#pragma mark -
#pragma mark "tables.parents" methods
=======
+ (instancetype)queryForTablesList;

#pragma mark - "tables.parents" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.parents.list
// Return all parent ids of the specified table.
//  Required:
//   identifier: The ID of the table whose parents will be listed.
//  Optional:
//   maxResults: The maximum number of items to include in a single response
//     page. The maximum supported value is 50.
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     nextPageToken from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEngineParentsListResponse.
<<<<<<< HEAD
+ (id)queryForTablesParentsListWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "tables" methods
=======
+ (instancetype)queryForTablesParentsListWithIdentifier:(NSString *)identifier;

#pragma mark - "tables" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.patch
// Mutate a table asset.
//  Required:
//   identifier: The ID of the table.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineTable.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
<<<<<<< HEAD
+ (id)queryForTablesPatchWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForTablesPatchWithIdentifier:(NSString *)identifier;

#pragma mark - "tables.permissions" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.permissions.batchDelete
// Remove permission entries from an already existing asset.
//  Required:
//   identifier: The ID of the asset from which permissions will be removed.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchDeleteRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchDeleteResponse.
+ (instancetype)queryForTablesPermissionsBatchDeleteWithIdentifier:(NSString *)identifier;

// Method: mapsengine.tables.permissions.batchUpdate
// Add or update permission entries to an already existing asset.
// An asset can hold up to 20 different permission entries. Each batchInsert
// request is atomic.
//  Required:
//   identifier: The ID of the asset to which permissions will be added.
//  Optional:
//   request: For this method, "request" should be of type
//     GTLMapsEnginePermissionsBatchUpdateRequest.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEnginePermissionsBatchUpdateResponse.
+ (instancetype)queryForTablesPermissionsBatchUpdateWithIdentifier:(NSString *)identifier;

// Method: mapsengine.tables.permissions.list
// Return all of the permissions for the specified asset.
//  Required:
//   identifier: The ID of the asset whose permissions will be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
//   kGTLAuthScopeMapsEngineReadonly
// Fetches a GTLMapsEnginePermissionsListResponse.
+ (instancetype)queryForTablesPermissionsListWithIdentifier:(NSString *)identifier;

#pragma mark - "tables" methods
// These create a GTLQueryMapsEngine object.

// Method: mapsengine.tables.process
// Process a table asset.
//  Required:
//   identifier: The ID of the table.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineProcessResponse.
+ (instancetype)queryForTablesProcessWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mapsengine.tables.upload
// Create a placeholder table asset to which table files can be uploaded.
// Once the placeholder has been created, files are uploaded to the
// https://www.googleapis.com/upload/mapsengine/v1/tables/table_id/files
// endpoint.
// See Table Upload in the Developer's Guide or Table.files: insert in the
// reference documentation for more information.
//  Optional:
//   request: For this method, "request" should be of type GTLMapsEngineTable.
//  Authorization scope(s):
//   kGTLAuthScopeMapsEngine
// Fetches a GTLMapsEngineTable.
<<<<<<< HEAD
+ (id)queryForTablesUpload;
=======
+ (instancetype)queryForTablesUpload;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
