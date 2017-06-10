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
//  GTLStorageBucket.h
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
//   GTLStorageBucket (0 custom class methods, 18 custom properties)
=======
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/
// Classes:
//   GTLStorageBucket (0 custom class methods, 19 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLStorageBucketCorsItem (0 custom class methods, 4 custom properties)
//   GTLStorageBucketLifecycle (0 custom class methods, 1 custom properties)
//   GTLStorageBucketLogging (0 custom class methods, 2 custom properties)
//   GTLStorageBucketOwner (0 custom class methods, 2 custom properties)
//   GTLStorageBucketVersioning (0 custom class methods, 1 custom properties)
//   GTLStorageBucketWebsite (0 custom class methods, 2 custom properties)
//   GTLStorageBucketLifecycleRuleItem (0 custom class methods, 2 custom properties)
//   GTLStorageBucketLifecycleRuleItemAction (0 custom class methods, 1 custom properties)
//   GTLStorageBucketLifecycleRuleItemCondition (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLStorageBucketAccessControl;
@class GTLStorageBucketCorsItem;
@class GTLStorageBucketLifecycle;
@class GTLStorageBucketLifecycleRuleItem;
@class GTLStorageBucketLifecycleRuleItemAction;
@class GTLStorageBucketLifecycleRuleItemCondition;
@class GTLStorageBucketLogging;
@class GTLStorageBucketOwner;
@class GTLStorageBucketVersioning;
@class GTLStorageBucketWebsite;
@class GTLStorageObjectAccessControl;

// ----------------------------------------------------------------------------
//
//   GTLStorageBucket
//

// A bucket.

@interface GTLStorageBucket : GTLObject

// Access controls on the bucket.
<<<<<<< HEAD
@property (retain) NSArray *acl;  // of GTLStorageBucketAccessControl

// The bucket's Cross-Origin Resource Sharing (CORS) configuration.
@property (retain) NSArray *cors;  // of GTLStorageBucketCorsItem

// Default access controls to apply to new objects when no ACL is provided.
@property (retain) NSArray *defaultObjectAcl;  // of GTLStorageObjectAccessControl

// HTTP 1.1 Entity tag for the bucket.
@property (copy) NSString *ETag;

// The ID of the bucket.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The kind of item this is. For buckets, this is always storage#bucket.
@property (copy) NSString *kind;

// The bucket's lifecycle configuration. See lifecycle management for more
// information.
@property (retain) GTLStorageBucketLifecycle *lifecycle;
=======
@property (nonatomic, retain) NSArray *acl;  // of GTLStorageBucketAccessControl

// The bucket's Cross-Origin Resource Sharing (CORS) configuration.
@property (nonatomic, retain) NSArray *cors;  // of GTLStorageBucketCorsItem

// Default access controls to apply to new objects when no ACL is provided.
@property (nonatomic, retain) NSArray *defaultObjectAcl;  // of GTLStorageObjectAccessControl

// HTTP 1.1 Entity tag for the bucket.
@property (nonatomic, copy) NSString *ETag;

// The ID of the bucket.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The kind of item this is. For buckets, this is always storage#bucket.
@property (nonatomic, copy) NSString *kind;

// The bucket's lifecycle configuration. See lifecycle management for more
// information.
@property (nonatomic, retain) GTLStorageBucketLifecycle *lifecycle;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The location of the bucket. Object data for objects in the bucket resides in
// physical storage within this region. Defaults to US. See the developer's
// guide for the authoritative list.
<<<<<<< HEAD
@property (copy) NSString *location;

// The bucket's logging configuration, which defines the destination bucket and
// optional name prefix for the current bucket's logs.
@property (retain) GTLStorageBucketLogging *logging;

// The metadata generation of this bucket.
@property (retain) NSNumber *metageneration;  // longLongValue

// The name of the bucket.
@property (copy) NSString *name;

// The owner of the bucket. This is always the project team's owner group.
@property (retain) GTLStorageBucketOwner *owner;

// The project number of the project the bucket belongs to.
@property (retain) NSNumber *projectNumber;  // unsignedLongLongValue

// The URI of this bucket.
@property (copy) NSString *selfLink;

// The bucket's storage class. This defines how objects in the bucket are stored
// and determines the SLA and the cost of storage. Typical values are STANDARD
// and DURABLE_REDUCED_AVAILABILITY. Defaults to STANDARD. See the developer's
// guide for the authoritative list.
@property (copy) NSString *storageClass;

// Creation time of the bucket in RFC 3339 format.
@property (retain) GTLDateTime *timeCreated;

// The bucket's versioning configuration.
@property (retain) GTLStorageBucketVersioning *versioning;

// The bucket's website configuration.
@property (retain) GTLStorageBucketWebsite *website;
=======
@property (nonatomic, copy) NSString *location;

// The bucket's logging configuration, which defines the destination bucket and
// optional name prefix for the current bucket's logs.
@property (nonatomic, retain) GTLStorageBucketLogging *logging;

// The metadata generation of this bucket.
@property (nonatomic, retain) NSNumber *metageneration;  // longLongValue

// The name of the bucket.
@property (nonatomic, copy) NSString *name;

// The owner of the bucket. This is always the project team's owner group.
@property (nonatomic, retain) GTLStorageBucketOwner *owner;

// The project number of the project the bucket belongs to.
@property (nonatomic, retain) NSNumber *projectNumber;  // unsignedLongLongValue

// The URI of this bucket.
@property (nonatomic, copy) NSString *selfLink;

// The bucket's storage class. This defines how objects in the bucket are stored
// and determines the SLA and the cost of storage. Values include STANDARD,
// NEARLINE and DURABLE_REDUCED_AVAILABILITY. Defaults to STANDARD. For more
// information, see storage classes.
@property (nonatomic, copy) NSString *storageClass;

// The creation time of the bucket in RFC 3339 format.
@property (nonatomic, retain) GTLDateTime *timeCreated;

// The modification time of the bucket in RFC 3339 format.
@property (nonatomic, retain) GTLDateTime *updated;

// The bucket's versioning configuration.
@property (nonatomic, retain) GTLStorageBucketVersioning *versioning;

// The bucket's website configuration.
@property (nonatomic, retain) GTLStorageBucketWebsite *website;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketCorsItem
//

@interface GTLStorageBucketCorsItem : GTLObject

// The value, in seconds, to return in the Access-Control-Max-Age header used in
// preflight responses.
<<<<<<< HEAD
@property (retain) NSNumber *maxAgeSeconds;  // intValue
=======
@property (nonatomic, retain) NSNumber *maxAgeSeconds;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The list of HTTP methods on which to include CORS response headers, (GET,
// OPTIONS, POST, etc) Note: "*" is permitted in the list of methods, and means
// "any method".
<<<<<<< HEAD
@property (retain) NSArray *method;  // of NSString

// The list of Origins eligible to receive CORS response headers. Note: "*" is
// permitted in the list of origins, and means "any Origin".
@property (retain) NSArray *origin;  // of NSString

// The list of HTTP headers other than the simple response headers to give
// permission for the user-agent to share across domains.
@property (retain) NSArray *responseHeader;  // of NSString
=======
@property (nonatomic, retain) NSArray *method;  // of NSString

// The list of Origins eligible to receive CORS response headers. Note: "*" is
// permitted in the list of origins, and means "any Origin".
@property (nonatomic, retain) NSArray *origin;  // of NSString

// The list of HTTP headers other than the simple response headers to give
// permission for the user-agent to share across domains.
@property (nonatomic, retain) NSArray *responseHeader;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketLifecycle
//

@interface GTLStorageBucketLifecycle : GTLObject

// A lifecycle management rule, which is made of an action to take and the
// condition(s) under which the action will be taken.
<<<<<<< HEAD
@property (retain) NSArray *rule;  // of GTLStorageBucketLifecycleRuleItem
=======
@property (nonatomic, retain) NSArray *rule;  // of GTLStorageBucketLifecycleRuleItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketLogging
//

@interface GTLStorageBucketLogging : GTLObject

// The destination bucket where the current bucket's logs should be placed.
<<<<<<< HEAD
@property (copy) NSString *logBucket;

// A prefix for log object names.
@property (copy) NSString *logObjectPrefix;
=======
@property (nonatomic, copy) NSString *logBucket;

// A prefix for log object names.
@property (nonatomic, copy) NSString *logObjectPrefix;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketOwner
//

@interface GTLStorageBucketOwner : GTLObject

// The entity, in the form project-owner-projectId.
<<<<<<< HEAD
@property (copy) NSString *entity;

// The ID for the entity.
@property (copy) NSString *entityId;
=======
@property (nonatomic, copy) NSString *entity;

// The ID for the entity.
@property (nonatomic, copy) NSString *entityId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketVersioning
//

@interface GTLStorageBucketVersioning : GTLObject

// While set to true, versioning is fully enabled for this bucket.
<<<<<<< HEAD
@property (retain) NSNumber *enabled;  // boolValue
=======
@property (nonatomic, retain) NSNumber *enabled;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketWebsite
//

@interface GTLStorageBucketWebsite : GTLObject

// Behaves as the bucket's directory index where missing objects are treated as
// potential directories.
<<<<<<< HEAD
@property (copy) NSString *mainPageSuffix;

// The custom object to return when a requested resource is not found.
@property (copy) NSString *notFoundPage;
=======
@property (nonatomic, copy) NSString *mainPageSuffix;

// The custom object to return when a requested resource is not found.
@property (nonatomic, copy) NSString *notFoundPage;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketLifecycleRuleItem
//

@interface GTLStorageBucketLifecycleRuleItem : GTLObject

// The action to take.
<<<<<<< HEAD
@property (retain) GTLStorageBucketLifecycleRuleItemAction *action;

// The condition(s) under which the action will be taken.
@property (retain) GTLStorageBucketLifecycleRuleItemCondition *condition;
=======
@property (nonatomic, retain) GTLStorageBucketLifecycleRuleItemAction *action;

// The condition(s) under which the action will be taken.
@property (nonatomic, retain) GTLStorageBucketLifecycleRuleItemCondition *condition;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketLifecycleRuleItemAction
//

@interface GTLStorageBucketLifecycleRuleItemAction : GTLObject

// Type of the action. Currently, only Delete is supported.
<<<<<<< HEAD
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketLifecycleRuleItemCondition
//

@interface GTLStorageBucketLifecycleRuleItemCondition : GTLObject

// Age of an object (in days). This condition is satisfied when an object
// reaches the specified age.
<<<<<<< HEAD
@property (retain) NSNumber *age;  // intValue
=======
@property (nonatomic, retain) NSNumber *age;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// A date in RFC 3339 format with only the date part (for instance,
// "2013-01-15"). This condition is satisfied when an object is created before
// midnight of the specified date in UTC.
<<<<<<< HEAD
@property (retain) GTLDateTime *createdBefore;  // Date only (yyyy-mm-dd)

// Relevant only for versioned objects. If the value is true, this condition
// matches live objects; if the value is false, it matches archived objects.
@property (retain) NSNumber *isLive;  // boolValue
=======
@property (nonatomic, retain) GTLDateTime *createdBefore;  // Date only (yyyy-mm-dd)

// Relevant only for versioned objects. If the value is true, this condition
// matches live objects; if the value is false, it matches archived objects.
@property (nonatomic, retain) NSNumber *isLive;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Relevant only for versioned objects. If the value is N, this condition is
// satisfied when there are at least N versions (including the live version)
// newer than this version of the object.
<<<<<<< HEAD
@property (retain) NSNumber *numNewerVersions;  // intValue
=======
@property (nonatomic, retain) NSNumber *numNewerVersions;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
