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
//  GTLStorageBucketAccessControl.m
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
// Classes:
//   GTLStorageBucketAccessControl (0 custom class methods, 11 custom properties)
//   GTLStorageBucketAccessControlProjectTeam (0 custom class methods, 2 custom properties)

#import "GTLStorageBucketAccessControl.h"

// ----------------------------------------------------------------------------
//
//   GTLStorageBucketAccessControl
//

@implementation GTLStorageBucketAccessControl
@dynamic bucket, domain, email, entity, entityId, ETag, identifier, kind,
         projectTeam, role, selfLink;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
  NSDictionary *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"storage#bucketAccessControl"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLStorageBucketAccessControlProjectTeam
//

@implementation GTLStorageBucketAccessControlProjectTeam
@dynamic projectNumber, team;
@end
