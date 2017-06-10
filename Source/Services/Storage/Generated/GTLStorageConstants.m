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
//  GTLStorageConstants.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
<<<<<<< HEAD
//   Cloud Storage API (storage/v1)
// Description:
//   Lets you store and retrieve potentially-large, immutable data objects.
=======
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#import "GTLStorageConstants.h"

// Authorization scope
<<<<<<< HEAD
=======
NSString * const kGTLAuthScopeStorageCloudPlatform         = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLAuthScopeStorageCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
NSString * const kGTLAuthScopeStorageDevstorageFullControl = @"https://www.googleapis.com/auth/devstorage.full_control";
NSString * const kGTLAuthScopeStorageDevstorageReadOnly    = @"https://www.googleapis.com/auth/devstorage.read_only";
NSString * const kGTLAuthScopeStorageDevstorageReadWrite   = @"https://www.googleapis.com/auth/devstorage.read_write";

// GTLQueryStorage - DestinationPredefinedAcl
NSString * const kGTLStorageDestinationPredefinedAclAuthenticatedRead = @"authenticatedRead";
NSString * const kGTLStorageDestinationPredefinedAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLStorageDestinationPredefinedAclBucketOwnerRead = @"bucketOwnerRead";
NSString * const kGTLStorageDestinationPredefinedAclPrivate    = @"private";
NSString * const kGTLStorageDestinationPredefinedAclProjectPrivate = @"projectPrivate";
NSString * const kGTLStorageDestinationPredefinedAclPublicRead = @"publicRead";

// GTLQueryStorage - PredefinedAcl
NSString * const kGTLStoragePredefinedAclAuthenticatedRead     = @"authenticatedRead";
NSString * const kGTLStoragePredefinedAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLStoragePredefinedAclBucketOwnerRead       = @"bucketOwnerRead";
NSString * const kGTLStoragePredefinedAclPrivate               = @"private";
NSString * const kGTLStoragePredefinedAclProjectPrivate        = @"projectPrivate";
NSString * const kGTLStoragePredefinedAclPublicRead            = @"publicRead";
NSString * const kGTLStoragePredefinedAclPublicReadWrite       = @"publicReadWrite";

<<<<<<< HEAD
=======
// GTLQueryStorage - PredefinedDefaultObjectAcl
NSString * const kGTLStoragePredefinedDefaultObjectAclAuthenticatedRead = @"authenticatedRead";
NSString * const kGTLStoragePredefinedDefaultObjectAclBucketOwnerFullControl = @"bucketOwnerFullControl";
NSString * const kGTLStoragePredefinedDefaultObjectAclBucketOwnerRead = @"bucketOwnerRead";
NSString * const kGTLStoragePredefinedDefaultObjectAclPrivate  = @"private";
NSString * const kGTLStoragePredefinedDefaultObjectAclProjectPrivate = @"projectPrivate";
NSString * const kGTLStoragePredefinedDefaultObjectAclPublicRead = @"publicRead";

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// GTLQueryStorage - Projection
NSString * const kGTLStorageProjectionFull  = @"full";
NSString * const kGTLStorageProjectionNoAcl = @"noAcl";
