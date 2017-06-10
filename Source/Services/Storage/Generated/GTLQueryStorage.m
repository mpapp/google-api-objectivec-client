<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2016 Google Inc.
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
//  GTLQueryStorage.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
<<<<<<< HEAD
//   Cloud Storage API (storage/v1)
// Description:
//   Lets you store and retrieve potentially-large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/
// Classes:
//   GTLQueryStorage (34 custom class methods, 33 custom properties)
=======
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/
// Classes:
//   GTLQueryStorage (35 custom class methods, 36 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLStorageObjectsComposeSourceObjectsItem (0 custom class methods, 3 custom properties)
//   GTLStorageObjectsComposeSourceObjectsItemObjectPreconditions (0 custom class methods, 1 custom properties)

#import "GTLQueryStorage.h"

#import "GTLStorageBucket.h"
#import "GTLStorageBucketAccessControl.h"
#import "GTLStorageBucketAccessControls.h"
#import "GTLStorageBuckets.h"
#import "GTLStorageChannel.h"
#import "GTLStorageObject.h"
#import "GTLStorageObjectAccessControl.h"
#import "GTLStorageObjectAccessControls.h"
#import "GTLStorageObjects.h"
<<<<<<< HEAD
=======
#import "GTLStorageRewriteResponse.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@implementation GTLQueryStorage

@dynamic bucket, contentEncoding, delimiter, destination, destinationResource,
         destinationBucket, destinationObject, destinationPredefinedAcl, entity,
         fields, generation, ifGenerationMatch, ifGenerationNotMatch,
         ifMetagenerationMatch, ifMetagenerationNotMatch,
         ifSourceGenerationMatch, ifSourceGenerationNotMatch,
         ifSourceMetagenerationMatch, ifSourceMetagenerationNotMatch, kind,
<<<<<<< HEAD
         maxResults, name, object, pageToken, predefinedAcl, prefix, project,
         projection, sourceBucket, sourceGeneration, sourceObject,
         sourceObjects, versions;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"destination_resource"
                                forKey:@"destinationResource"];
=======
         maxBytesRewrittenPerCall, maxResults, name, object, pageToken,
         predefinedAcl, predefinedDefaultObjectAcl, prefix, project, projection,
         rewriteToken, sourceBucket, sourceGeneration, sourceObject,
         sourceObjects, versions;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"destinationResource" : @"destination_resource"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLStorageObjectsComposeSourceObjectsItem class]
                                forKey:@"sourceObjects"];
  return map;
}

#pragma mark -
#pragma mark "bucketAccessControls" methods
// These create a GTLQueryStorage object.

+ (id)queryForBucketAccessControlsDeleteWithBucket:(NSString *)bucket
                                            entity:(NSString *)entity {
=======
  NSDictionary *map = @{
    @"sourceObjects" : [GTLStorageObjectsComposeSourceObjectsItem class]
  };
  return map;
}

#pragma mark - "bucketAccessControls" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForBucketAccessControlsDeleteWithBucket:(NSString *)bucket
                                                      entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.bucketAccessControls.delete";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.entity = entity;
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketAccessControlsGetWithBucket:(NSString *)bucket
                                         entity:(NSString *)entity {
=======
+ (instancetype)queryForBucketAccessControlsGetWithBucket:(NSString *)bucket
                                                   entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.bucketAccessControls.get";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageBucketAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketAccessControlsInsertWithObject:(GTLStorageBucketAccessControl *)object
                                            bucket:(NSString *)bucket {
=======
+ (instancetype)queryForBucketAccessControlsInsertWithObject:(GTLStorageBucketAccessControl *)object
                                                      bucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.bucketAccessControls.insert";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageBucketAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketAccessControlsListWithBucket:(NSString *)bucket {
=======
+ (instancetype)queryForBucketAccessControlsListWithBucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.bucketAccessControls.list";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageBucketAccessControls class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketAccessControlsPatchWithObject:(GTLStorageBucketAccessControl *)object
                                           bucket:(NSString *)bucket
                                           entity:(NSString *)entity {
=======
+ (instancetype)queryForBucketAccessControlsPatchWithObject:(GTLStorageBucketAccessControl *)object
                                                     bucket:(NSString *)bucket
                                                     entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.bucketAccessControls.patch";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageBucketAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketAccessControlsUpdateWithObject:(GTLStorageBucketAccessControl *)object
                                            bucket:(NSString *)bucket
                                            entity:(NSString *)entity {
=======
+ (instancetype)queryForBucketAccessControlsUpdateWithObject:(GTLStorageBucketAccessControl *)object
                                                      bucket:(NSString *)bucket
                                                      entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.bucketAccessControls.update";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageBucketAccessControl class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "buckets" methods
// These create a GTLQueryStorage object.

+ (id)queryForBucketsDeleteWithBucket:(NSString *)bucket {
=======
#pragma mark - "buckets" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForBucketsDeleteWithBucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.buckets.delete";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketsGetWithBucket:(NSString *)bucket {
=======
+ (instancetype)queryForBucketsGetWithBucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.buckets.get";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageBucket class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketsInsertWithObject:(GTLStorageBucket *)object
                              project:(NSString *)project {
=======
+ (instancetype)queryForBucketsInsertWithObject:(GTLStorageBucket *)object
                                        project:(NSString *)project {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.buckets.insert";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.project = project;
  query.expectedObjectClass = [GTLStorageBucket class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketsListWithProject:(NSString *)project {
=======
+ (instancetype)queryForBucketsListWithProject:(NSString *)project {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.buckets.list";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.project = project;
  query.expectedObjectClass = [GTLStorageBuckets class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketsPatchWithObject:(GTLStorageBucket *)object
                              bucket:(NSString *)bucket {
=======
+ (instancetype)queryForBucketsPatchWithObject:(GTLStorageBucket *)object
                                        bucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.buckets.patch";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageBucket class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBucketsUpdateWithObject:(GTLStorageBucket *)object
                               bucket:(NSString *)bucket {
=======
+ (instancetype)queryForBucketsUpdateWithObject:(GTLStorageBucket *)object
                                         bucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.buckets.update";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageBucket class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "channels" methods
// These create a GTLQueryStorage object.

+ (id)queryForChannelsStopWithObject:(GTLStorageChannel *)object {
=======
#pragma mark - "channels" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForChannelsStopWithObject:(GTLStorageChannel *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.channels.stop";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "defaultObjectAccessControls" methods
// These create a GTLQueryStorage object.

+ (id)queryForDefaultObjectAccessControlsDeleteWithBucket:(NSString *)bucket
                                                   entity:(NSString *)entity {
=======
#pragma mark - "defaultObjectAccessControls" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForDefaultObjectAccessControlsDeleteWithBucket:(NSString *)bucket
                                                             entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.defaultObjectAccessControls.delete";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.entity = entity;
  return query;
}

<<<<<<< HEAD
+ (id)queryForDefaultObjectAccessControlsGetWithBucket:(NSString *)bucket
                                                entity:(NSString *)entity {
=======
+ (instancetype)queryForDefaultObjectAccessControlsGetWithBucket:(NSString *)bucket
                                                          entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.defaultObjectAccessControls.get";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDefaultObjectAccessControlsInsertWithObject:(GTLStorageObjectAccessControl *)object
                                                   bucket:(NSString *)bucket {
=======
+ (instancetype)queryForDefaultObjectAccessControlsInsertWithObject:(GTLStorageObjectAccessControl *)object
                                                             bucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.defaultObjectAccessControls.insert";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDefaultObjectAccessControlsListWithBucket:(NSString *)bucket {
=======
+ (instancetype)queryForDefaultObjectAccessControlsListWithBucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.defaultObjectAccessControls.list";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageObjectAccessControls class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDefaultObjectAccessControlsPatchWithObject:(GTLStorageObjectAccessControl *)object
                                                  bucket:(NSString *)bucket
                                                  entity:(NSString *)entity {
=======
+ (instancetype)queryForDefaultObjectAccessControlsPatchWithObject:(GTLStorageObjectAccessControl *)object
                                                            bucket:(NSString *)bucket
                                                            entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.defaultObjectAccessControls.patch";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDefaultObjectAccessControlsUpdateWithObject:(GTLStorageObjectAccessControl *)object
                                                   bucket:(NSString *)bucket
                                                   entity:(NSString *)entity {
=======
+ (instancetype)queryForDefaultObjectAccessControlsUpdateWithObject:(GTLStorageObjectAccessControl *)object
                                                             bucket:(NSString *)bucket
                                                             entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.defaultObjectAccessControls.update";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "objectAccessControls" methods
// These create a GTLQueryStorage object.

+ (id)queryForObjectAccessControlsDeleteWithBucket:(NSString *)bucket
                                            object:(NSString *)object_param
                                            entity:(NSString *)entity {
=======
#pragma mark - "objectAccessControls" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForObjectAccessControlsDeleteWithBucket:(NSString *)bucket
                                                      object:(NSString *)object_param
                                                      entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objectAccessControls.delete";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectAccessControlsGetWithBucket:(NSString *)bucket
                                         object:(NSString *)object_param
                                         entity:(NSString *)entity {
=======
+ (instancetype)queryForObjectAccessControlsGetWithBucket:(NSString *)bucket
                                                   object:(NSString *)object_param
                                                   entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objectAccessControls.get";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectAccessControlsInsertWithObject:(GTLStorageObjectAccessControl *)object
                                            bucket:(NSString *)bucket
                                            object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectAccessControlsInsertWithObject:(GTLStorageObjectAccessControl *)object
                                                      bucket:(NSString *)bucket
                                                      object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objectAccessControls.insert";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectAccessControlsListWithBucket:(NSString *)bucket
                                          object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectAccessControlsListWithBucket:(NSString *)bucket
                                                    object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objectAccessControls.list";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLStorageObjectAccessControls class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectAccessControlsPatchWithObject:(GTLStorageObjectAccessControl *)object
                                           bucket:(NSString *)bucket
                                           object:(NSString *)object_param
                                           entity:(NSString *)entity {
=======
+ (instancetype)queryForObjectAccessControlsPatchWithObject:(GTLStorageObjectAccessControl *)object
                                                     bucket:(NSString *)bucket
                                                     object:(NSString *)object_param
                                                     entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objectAccessControls.patch";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectAccessControlsUpdateWithObject:(GTLStorageObjectAccessControl *)object
                                            bucket:(NSString *)bucket
                                            object:(NSString *)object_param
                                            entity:(NSString *)entity {
=======
+ (instancetype)queryForObjectAccessControlsUpdateWithObject:(GTLStorageObjectAccessControl *)object
                                                      bucket:(NSString *)bucket
                                                      object:(NSString *)object_param
                                                      entity:(NSString *)entity {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objectAccessControls.update";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.entity = entity;
  query.expectedObjectClass = [GTLStorageObjectAccessControl class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "objects" methods
// These create a GTLQueryStorage object.

+ (id)queryForObjectsComposeWithDestinationBucket:(NSString *)destinationBucket
                                destinationObject:(NSString *)destinationObject {
=======
#pragma mark - "objects" methods
// These create a GTLQueryStorage object.

+ (instancetype)queryForObjectsComposeWithDestinationBucket:(NSString *)destinationBucket
                                          destinationObject:(NSString *)destinationObject {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objects.compose";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsCopyWithSourceBucket:(NSString *)sourceBucket
                             sourceObject:(NSString *)sourceObject
                        destinationBucket:(NSString *)destinationBucket
                        destinationObject:(NSString *)destinationObject {
=======
+ (instancetype)queryForObjectsCopyWithSourceBucket:(NSString *)sourceBucket
                                       sourceObject:(NSString *)sourceObject
                                  destinationBucket:(NSString *)destinationBucket
                                  destinationObject:(NSString *)destinationObject {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objects.copy";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.sourceBucket = sourceBucket;
  query.sourceObject = sourceObject;
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsDeleteWithBucket:(NSString *)bucket
                               object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectsDeleteWithBucket:(NSString *)bucket
                                         object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objects.delete";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.object = object_param;
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsGetWithBucket:(NSString *)bucket
                            object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectsGetWithBucket:(NSString *)bucket
                                      object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objects.get";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsInsertWithObject:(GTLStorageObject *)object
                               bucket:(NSString *)bucket
                     uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForObjectsInsertWithObject:(GTLStorageObject *)object
                                         bucket:(NSString *)bucket
                               uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objects.insert";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsListWithBucket:(NSString *)bucket {
=======
+ (instancetype)queryForObjectsListWithBucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"storage.objects.list";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageObjects class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsPatchWithObject:(GTLStorageObject *)object
                              bucket:(NSString *)bucket
                              object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectsPatchWithObject:(GTLStorageObject *)object
                                        bucket:(NSString *)bucket
                                        object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objects.patch";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsUpdateWithObject:(GTLStorageObject *)object
                               bucket:(NSString *)bucket
                               object:(NSString *)object_param {
=======
+ (instancetype)queryForObjectsRewriteWithSourceBucket:(NSString *)sourceBucket
                                          sourceObject:(NSString *)sourceObject
                                     destinationBucket:(NSString *)destinationBucket
                                     destinationObject:(NSString *)destinationObject {
  NSString *methodName = @"storage.objects.rewrite";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.sourceBucket = sourceBucket;
  query.sourceObject = sourceObject;
  query.destinationBucket = destinationBucket;
  query.destinationObject = destinationObject;
  query.expectedObjectClass = [GTLStorageRewriteResponse class];
  return query;
}

+ (instancetype)queryForObjectsUpdateWithObject:(GTLStorageObject *)object
                                         bucket:(NSString *)bucket
                                         object:(NSString *)object_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objects.update";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.object = object_param;
  query.expectedObjectClass = [GTLStorageObject class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForObjectsWatchAllWithObject:(GTLStorageChannel *)object
                                 bucket:(NSString *)bucket {
=======
+ (instancetype)queryForObjectsWatchAllWithObject:(GTLStorageChannel *)object
                                           bucket:(NSString *)bucket {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"storage.objects.watchAll";
  GTLQueryStorage *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.bucket = bucket;
  query.expectedObjectClass = [GTLStorageChannel class];
  return query;
}

@end

<<<<<<< HEAD
#pragma mark -
#pragma mark method parameter objects
=======
#pragma mark - method parameter objects
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These object are used only to pass a collection of parameters to a
// method as a single item.

// ----------------------------------------------------------------------------
//
//   GTLStorageObjectsComposeSourceObjectsItem
//

@implementation GTLStorageObjectsComposeSourceObjectsItem
@dynamic generation, name, objectPreconditions;
@end

// ----------------------------------------------------------------------------
//
//   GTLStorageObjectsComposeSourceObjectsItemObjectPreconditions
//

@implementation GTLStorageObjectsComposeSourceObjectsItemObjectPreconditions
@dynamic ifGenerationMatch;
@end
