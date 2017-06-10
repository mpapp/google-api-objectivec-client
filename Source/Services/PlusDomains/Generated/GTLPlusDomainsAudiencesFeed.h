<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLPlusDomainsAudiencesFeed.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform for Google Apps Domains.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLPlusDomainsAudiencesFeed (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusDomainsAudience;

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsAudiencesFeed
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLPlusDomainsAudiencesFeed : GTLCollectionObject

// ETag of this response for caching purposes.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The audiences in this result.
@property (retain) NSArray *items;  // of GTLPlusDomainsAudience

// Identifies this resource as a collection of audiences. Value:
// "plus#audienceFeed".
@property (copy) NSString *kind;
=======
@property (nonatomic, copy) NSString *ETag;

// The audiences in this result.
@property (nonatomic, retain) NSArray *items;  // of GTLPlusDomainsAudience

// Identifies this resource as a collection of audiences. Value:
// "plus#audienceFeed".
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The continuation token, which is used to page through large result sets.
// Provide this value in a subsequent request to return the next page of
// results.
<<<<<<< HEAD
@property (copy) NSString *nextPageToken;

// The total number of ACL entries. The number of entries in this response may
// be smaller due to paging.
@property (retain) NSNumber *totalItems;  // intValue
=======
@property (nonatomic, copy) NSString *nextPageToken;

// The total number of ACL entries. The number of entries in this response may
// be smaller due to paging.
@property (nonatomic, retain) NSNumber *totalItems;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
