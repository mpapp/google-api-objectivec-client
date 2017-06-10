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
//  GTLStorageBuckets.h
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
//   GTLStorageBuckets (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLStorageBucket;

// ----------------------------------------------------------------------------
//
//   GTLStorageBuckets
//

// A list of buckets.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLStorageBuckets : GTLCollectionObject

// The list of items.
<<<<<<< HEAD
@property (retain) NSArray *items;  // of GTLStorageBucket

// The kind of item this is. For lists of buckets, this is always
// storage#buckets.
@property (copy) NSString *kind;

// The continuation token, used to page through large result sets. Provide this
// value in a subsequent request to return the next page of results.
@property (copy) NSString *nextPageToken;
=======
@property (nonatomic, retain) NSArray *items;  // of GTLStorageBucket

// The kind of item this is. For lists of buckets, this is always
// storage#buckets.
@property (nonatomic, copy) NSString *kind;

// The continuation token, used to page through large result sets. Provide this
// value in a subsequent request to return the next page of results.
@property (nonatomic, copy) NSString *nextPageToken;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
