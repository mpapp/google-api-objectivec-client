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
//  GTLStorageObject.m
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
//   GTLStorageObject (0 custom class methods, 24 custom properties)
=======
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Documentation:
//   https://developers.google.com/storage/docs/json_api/
// Classes:
//   GTLStorageObject (0 custom class methods, 26 custom properties)
//   GTLStorageObjectCustomerEncryption (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLStorageObjectMetadata (0 custom class methods, 0 custom properties)
//   GTLStorageObjectOwner (0 custom class methods, 2 custom properties)

#import "GTLStorageObject.h"

#import "GTLStorageObjectAccessControl.h"

// ----------------------------------------------------------------------------
//
//   GTLStorageObject
//

@implementation GTLStorageObject
@dynamic acl, bucket, cacheControl, componentCount, contentDisposition,
<<<<<<< HEAD
         contentEncoding, contentLanguage, contentType, crc32c, ETag,
         generation, identifier, kind, md5Hash, mediaLink, metadata,
         metageneration, name, owner, selfLink, size, storageClass, timeDeleted,
         updated;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
         contentEncoding, contentLanguage, contentType, crc32c,
         customerEncryption, ETag, generation, identifier, kind, md5Hash,
         mediaLink, metadata, metageneration, name, owner, selfLink, size,
         storageClass, timeCreated, timeDeleted, updated;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLStorageObjectAccessControl class]
                                forKey:@"acl"];
=======
  NSDictionary *map = @{
    @"acl" : [GTLStorageObjectAccessControl class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"storage#object"];
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLStorageObjectCustomerEncryption
//

@implementation GTLStorageObjectCustomerEncryption
@dynamic encryptionAlgorithm, keySha256;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLStorageObjectMetadata
//

@implementation GTLStorageObjectMetadata

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageObjectOwner
//

@implementation GTLStorageObjectOwner
@dynamic entity, entityId;
@end
