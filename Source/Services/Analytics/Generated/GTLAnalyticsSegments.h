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
//  GTLAnalyticsSegments.h
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
//   GTLAnalyticsSegments (0 custom class methods, 8 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsSegment;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsSegments
//

// An segment collection lists Analytics segments that the user has access to.
// Each resource in the collection corresponds to a single Analytics segment.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLAnalyticsSegments : GTLCollectionObject

// A list of segments.
<<<<<<< HEAD
@property (retain) NSArray *items;  // of GTLAnalyticsSegment
=======
@property (nonatomic, retain) NSArray *items;  // of GTLAnalyticsSegment
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The maximum number of resources the response can contain, regardless of the
// actual number of resources returned. Its value ranges from 1 to 1000 with a
// value of 1000 by default, or otherwise specified by the max-results query
// parameter.
<<<<<<< HEAD
@property (retain) NSNumber *itemsPerPage;  // intValue

// Collection type for segments.
@property (copy) NSString *kind;

// Link to next page for this segment collection.
@property (copy) NSString *nextLink;

// Link to previous page for this segment collection.
@property (copy) NSString *previousLink;

// The starting index of the resources, which is 1 by default or otherwise
// specified by the start-index query parameter.
@property (retain) NSNumber *startIndex;  // intValue

// The total number of results for the query, regardless of the number of
// results in the response.
@property (retain) NSNumber *totalResults;  // intValue

// Email ID of the authenticated user
@property (copy) NSString *username;
=======
@property (nonatomic, retain) NSNumber *itemsPerPage;  // intValue

// Collection type for segments.
@property (nonatomic, copy) NSString *kind;

// Link to next page for this segment collection.
@property (nonatomic, copy) NSString *nextLink;

// Link to previous page for this segment collection.
@property (nonatomic, copy) NSString *previousLink;

// The starting index of the resources, which is 1 by default or otherwise
// specified by the start-index query parameter.
@property (nonatomic, retain) NSNumber *startIndex;  // intValue

// The total number of results for the query, regardless of the number of
// results in the response.
@property (nonatomic, retain) NSNumber *totalResults;  // intValue

// Email ID of the authenticated user
@property (nonatomic, copy) NSString *username;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
