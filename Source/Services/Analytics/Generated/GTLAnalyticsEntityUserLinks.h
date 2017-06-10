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
//  GTLAnalyticsEntityUserLinks.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
=======
//   Views and manages your Google Analytics data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsEntityUserLinks (0 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsEntityUserLink;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityUserLinks
//

// An entity user link collection provides a list of Analytics ACL links Each
// resource in this collection corresponds to a single link.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLAnalyticsEntityUserLinks : GTLCollectionObject

// A list of entity user links.
<<<<<<< HEAD
@property (retain) NSArray *items;  // of GTLAnalyticsEntityUserLink
=======
@property (nonatomic, retain) NSArray *items;  // of GTLAnalyticsEntityUserLink
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The maximum number of entries the response can contain, regardless of the
// actual number of entries returned. Its value ranges from 1 to 1000 with a
// value of 1000 by default, or otherwise specified by the max-results query
// parameter.
<<<<<<< HEAD
@property (retain) NSNumber *itemsPerPage;  // intValue

// Collection type.
@property (copy) NSString *kind;

// Next link for this account collection.
@property (copy) NSString *nextLink;

// Previous link for this account collection.
@property (copy) NSString *previousLink;

// The starting index of the entries, which is 1 by default or otherwise
// specified by the start-index query parameter.
@property (retain) NSNumber *startIndex;  // intValue

// The total number of results for the query, regardless of the number of
// results in the response.
@property (retain) NSNumber *totalResults;  // intValue
=======
@property (nonatomic, retain) NSNumber *itemsPerPage;  // intValue

// Collection type.
@property (nonatomic, copy) NSString *kind;

// Next link for this account collection.
@property (nonatomic, copy) NSString *nextLink;

// Previous link for this account collection.
@property (nonatomic, copy) NSString *previousLink;

// The starting index of the entries, which is 1 by default or otherwise
// specified by the start-index query parameter.
@property (nonatomic, retain) NSNumber *startIndex;  // intValue

// The total number of results for the query, regardless of the number of
// results in the response.
@property (nonatomic, retain) NSNumber *totalResults;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
