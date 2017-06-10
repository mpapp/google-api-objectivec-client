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
//  GTLQueryMapsEngine.m
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

#import "GTLQueryMapsEngine.h"

#import "GTLMapsEngineAsset.h"
#import "GTLMapsEngineAssetsListResponse.h"
#import "GTLMapsEngineFeature.h"
#import "GTLMapsEngineFeaturesListResponse.h"
<<<<<<< HEAD
=======
#import "GTLMapsEngineIcon.h"
#import "GTLMapsEngineIconsListResponse.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLMapsEngineLayer.h"
#import "GTLMapsEngineLayersListResponse.h"
#import "GTLMapsEngineMap.h"
#import "GTLMapsEngineMapsListResponse.h"
#import "GTLMapsEngineParentsListResponse.h"
<<<<<<< HEAD
#import "GTLMapsEngineProcessResponse.h"
#import "GTLMapsEngineProjectsListResponse.h"
=======
#import "GTLMapsEnginePermissionsBatchDeleteRequest.h"
#import "GTLMapsEnginePermissionsBatchDeleteResponse.h"
#import "GTLMapsEnginePermissionsBatchUpdateRequest.h"
#import "GTLMapsEnginePermissionsBatchUpdateResponse.h"
#import "GTLMapsEnginePermissionsListResponse.h"
#import "GTLMapsEngineProcessResponse.h"
#import "GTLMapsEngineProjectsListResponse.h"
#import "GTLMapsEnginePublishedLayer.h"
#import "GTLMapsEnginePublishedLayersListResponse.h"
#import "GTLMapsEnginePublishedMap.h"
#import "GTLMapsEnginePublishedMapsListResponse.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLMapsEnginePublishResponse.h"
#import "GTLMapsEngineRaster.h"
#import "GTLMapsEngineRasterCollection.h"
#import "GTLMapsEngineRasterCollectionsListResponse.h"
#import "GTLMapsEngineRasterCollectionsRasterBatchDeleteRequest.h"
#import "GTLMapsEngineRasterCollectionsRastersBatchDeleteResponse.h"
#import "GTLMapsEngineRasterCollectionsRastersBatchInsertRequest.h"
#import "GTLMapsEngineRasterCollectionsRastersBatchInsertResponse.h"
#import "GTLMapsEngineRasterCollectionsRastersListResponse.h"
<<<<<<< HEAD
=======
#import "GTLMapsEngineRastersListResponse.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLMapsEngineTable.h"
#import "GTLMapsEngineTablesListResponse.h"

@implementation GTLQueryMapsEngine

@dynamic bbox, createdAfter, createdBefore, creatorEmail, features, fields,
<<<<<<< HEAD
         filename, gxIds, identifier, include, intersects, limit, maxResults,
         modifiedAfter, modifiedBefore, orderBy, pageToken, primaryKeys,
         process, projectId, request, select, tableId, tags, type, version,
         where;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"gx_ids", @"gxIds",
      @"id", @"identifier",
      nil];
=======
         filename, force, gxIds, identifier, include, intersects, limit,
         maxResults, modifiedAfter, modifiedBefore, normalizeGeometries,
         orderBy, pageToken, primaryKeys, process, processingStatus, projectId,
         request, role, search, select, tableId, tags, type, version, where;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"gxIds" : @"gx_ids",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLMapsEngineFeature class], @"features",
      [NSString class], @"gx_ids",
      [NSString class], @"primaryKeys",
      nil];
  return map;
}

#pragma mark -
#pragma mark "assets" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForAssetsGetWithIdentifier:(NSString *)identifier {
=======
  NSDictionary *map = @{
    @"features" : [GTLMapsEngineFeature class],
    @"gx_ids" : [NSString class],
    @"primaryKeys" : [NSString class]
  };
  return map;
}

#pragma mark - "assets" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForAssetsGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.assets.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineAsset class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAssetsList {
=======
+ (instancetype)queryForAssetsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.assets.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineAssetsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "assets.parents" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForAssetsParentsListWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "assets.parents" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForAssetsParentsListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.assets.parents.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineParentsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForLayersCancelProcessingWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "assets.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForAssetsPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.assets.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "layers" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForLayersCancelProcessingWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.cancelProcessing";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersCreate {
=======
+ (instancetype)queryForLayersCreate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.create";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineLayer class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersDeleteWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForLayersDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.delete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersGetWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForLayersGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineLayer class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersList {
=======
+ (instancetype)queryForLayersGetPublishedWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.layers.getPublished";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishedLayer class];
  return query;
}

+ (instancetype)queryForLayersList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineLayersListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers.parents" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForLayersParentsListWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForLayersListPublished {
  NSString *methodName = @"mapsengine.layers.listPublished";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEnginePublishedLayersListResponse class];
  return query;
}

#pragma mark - "layers.parents" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForLayersParentsListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.parents.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineParentsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForLayersPatchWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "layers" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForLayersPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.patch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersProcessWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "layers.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForLayersPermissionsBatchDeleteWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.layers.permissions.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchDeleteResponse class];
  return query;
}

+ (instancetype)queryForLayersPermissionsBatchUpdateWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.layers.permissions.batchUpdate";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchUpdateResponse class];
  return query;
}

+ (instancetype)queryForLayersPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.layers.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "layers" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForLayersProcessWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.process";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersPublishWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForLayersPublishWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.publish";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersUnpublishWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForLayersUnpublishWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.layers.unpublish";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "maps" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForMapsCreate {
=======
#pragma mark - "maps" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForMapsCreate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.create";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineMap class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsDeleteWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForMapsDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.delete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsGetWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForMapsGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineMap class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsList {
=======
+ (instancetype)queryForMapsGetPublishedWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.maps.getPublished";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishedMap class];
  return query;
}

+ (instancetype)queryForMapsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineMapsListResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsPatchWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForMapsListPublished {
  NSString *methodName = @"mapsengine.maps.listPublished";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEnginePublishedMapsListResponse class];
  return query;
}

+ (instancetype)queryForMapsPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.patch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsPublishWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "maps.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForMapsPermissionsBatchDeleteWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.maps.permissions.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchDeleteResponse class];
  return query;
}

+ (instancetype)queryForMapsPermissionsBatchUpdateWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.maps.permissions.batchUpdate";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchUpdateResponse class];
  return query;
}

+ (instancetype)queryForMapsPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.maps.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "maps" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForMapsPublishWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.publish";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMapsUnpublishWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForMapsUnpublishWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.maps.unpublish";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePublishResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "projects" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForProjectsList {
=======
#pragma mark - "projects.icons" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForProjectsIconsCreateWithProjectId:(NSString *)projectId
                                        uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
  NSString *methodName = @"mapsengine.projects.icons.create";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLMapsEngineIcon class];
  return query;
}

+ (instancetype)queryForProjectsIconsGetWithProjectId:(NSString *)projectId
                                           identifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.projects.icons.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineIcon class];
  return query;
}

+ (instancetype)queryForProjectsIconsListWithProjectId:(NSString *)projectId {
  NSString *methodName = @"mapsengine.projects.icons.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLMapsEngineIconsListResponse class];
  return query;
}

#pragma mark - "projects" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForProjectsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.projects.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineProjectsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasterCollections" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRasterCollectionsCancelProcessingWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasterCollections" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsCancelProcessingWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.cancelProcessing";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsCreate {
=======
+ (instancetype)queryForRasterCollectionsCreate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.create";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineRasterCollection class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsDeleteWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForRasterCollectionsDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.delete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsGetWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForRasterCollectionsGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineRasterCollection class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsList {
=======
+ (instancetype)queryForRasterCollectionsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineRasterCollectionsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasterCollections.parents" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRasterCollectionsParentsListWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasterCollections.parents" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsParentsListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.parents.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineParentsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasterCollections" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRasterCollectionsPatchWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasterCollections" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.patch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsProcessWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasterCollections.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsPermissionsBatchDeleteWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasterCollections.permissions.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchDeleteResponse class];
  return query;
}

+ (instancetype)queryForRasterCollectionsPermissionsBatchUpdateWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasterCollections.permissions.batchUpdate";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchUpdateResponse class];
  return query;
}

+ (instancetype)queryForRasterCollectionsPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasterCollections.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "rasterCollections" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsProcessWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.process";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasterCollections.rasters" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRasterCollectionsRastersBatchDeleteWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasterCollections.rasters" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRasterCollectionsRastersBatchDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.rasters.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineRasterCollectionsRastersBatchDeleteResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsRastersBatchInsertWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForRasterCollectionsRastersBatchInsertWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.rasters.batchInsert";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineRasterCollectionsRastersBatchInsertResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForRasterCollectionsRastersListWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForRasterCollectionsRastersListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasterCollections.rasters.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineRasterCollectionsRastersListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRastersDeleteWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.delete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasters.files" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRastersFilesInsertWithIdentifier:(NSString *)identifier
                                      filename:(NSString *)filename
                              uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
#pragma mark - "rasters.files" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersFilesInsertWithIdentifier:(NSString *)identifier
                                                filename:(NSString *)filename
                                        uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.files.insert";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.filename = filename;
  query.uploadParameters = uploadParametersOrNil;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRastersGetWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineRaster class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasters.parents" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRastersParentsListWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForRastersListWithProjectId:(NSString *)projectId {
  NSString *methodName = @"mapsengine.rasters.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLMapsEngineRastersListResponse class];
  return query;
}

#pragma mark - "rasters.parents" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersParentsListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.parents.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineParentsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForRastersPatchWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.patch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForRastersUpload {
=======
#pragma mark - "rasters.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersPermissionsBatchDeleteWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasters.permissions.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchDeleteResponse class];
  return query;
}

+ (instancetype)queryForRastersPermissionsBatchUpdateWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasters.permissions.batchUpdate";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchUpdateResponse class];
  return query;
}

+ (instancetype)queryForRastersPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasters.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "rasters" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForRastersProcessWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.rasters.process";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

+ (instancetype)queryForRastersUpload {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.rasters.upload";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineRaster class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesCreate {
=======
#pragma mark - "tables" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesCreate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.create";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineTable class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesDeleteWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForTablesDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.delete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables.features" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesFeaturesBatchDeleteWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "tables.features" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesFeaturesBatchDeleteWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.features.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesFeaturesBatchInsertWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForTablesFeaturesBatchInsertWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.features.batchInsert";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesFeaturesBatchPatchWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForTablesFeaturesBatchPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.features.batchPatch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesFeaturesGetWithTableId:(NSString *)tableId {
=======
+ (instancetype)queryForTablesFeaturesGetWithTableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.features.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.tableId = tableId;
  query.expectedObjectClass = [GTLMapsEngineFeature class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesFeaturesListWithIdentifier:(NSString *)identifier {
=======
+ (instancetype)queryForTablesFeaturesListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.features.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineFeaturesListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables.files" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesFilesInsertWithIdentifier:(NSString *)identifier
                                     filename:(NSString *)filename
                             uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
#pragma mark - "tables.files" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesFilesInsertWithIdentifier:(NSString *)identifier
                                               filename:(NSString *)filename
                                       uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.files.insert";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.filename = filename;
  query.uploadParameters = uploadParametersOrNil;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesGetWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "tables" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesGetWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.get";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineTable class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesList {
=======
+ (instancetype)queryForTablesList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineTablesListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables.parents" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesParentsListWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "tables.parents" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesParentsListWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.parents.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineParentsListResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables" methods
// These create a GTLQueryMapsEngine object.

+ (id)queryForTablesPatchWithIdentifier:(NSString *)identifier {
=======
#pragma mark - "tables" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesPatchWithIdentifier:(NSString *)identifier {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.patch";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesUpload {
=======
#pragma mark - "tables.permissions" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesPermissionsBatchDeleteWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.tables.permissions.batchDelete";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchDeleteResponse class];
  return query;
}

+ (instancetype)queryForTablesPermissionsBatchUpdateWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.tables.permissions.batchUpdate";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsBatchUpdateResponse class];
  return query;
}

+ (instancetype)queryForTablesPermissionsListWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.tables.permissions.list";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEnginePermissionsListResponse class];
  return query;
}

#pragma mark - "tables" methods
// These create a GTLQueryMapsEngine object.

+ (instancetype)queryForTablesProcessWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"mapsengine.tables.process";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  query.expectedObjectClass = [GTLMapsEngineProcessResponse class];
  return query;
}

+ (instancetype)queryForTablesUpload {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"mapsengine.tables.upload";
  GTLQueryMapsEngine *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLMapsEngineTable class];
  return query;
}

@end
