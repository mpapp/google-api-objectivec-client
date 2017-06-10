<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLPlusCommentFeed.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLPlusCommentFeed (0 custom class methods, 8 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusComment;

// ----------------------------------------------------------------------------
//
//   GTLPlusCommentFeed
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLPlusCommentFeed : GTLCollectionObject

// ETag of this response for caching purposes.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The ID of this collection of comments.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The comments in this page of results.
@property (retain) NSArray *items;  // of GTLPlusComment

// Identifies this resource as a collection of comments. Value:
// "plus#commentFeed".
@property (copy) NSString *kind;

// Link to the next page of activities.
@property (copy) NSString *nextLink;
=======
@property (nonatomic, copy) NSString *ETag;

// The ID of this collection of comments.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The comments in this page of results.
@property (nonatomic, retain) NSArray *items;  // of GTLPlusComment

// Identifies this resource as a collection of comments. Value:
// "plus#commentFeed".
@property (nonatomic, copy) NSString *kind;

// Link to the next page of activities.
@property (nonatomic, copy) NSString *nextLink;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The continuation token, which is used to page through large result sets.
// Provide this value in a subsequent request to return the next page of
// results.
<<<<<<< HEAD
@property (copy) NSString *nextPageToken;

// The title of this collection of comments.
@property (copy) NSString *title;

// The time at which this collection of comments was last updated. Formatted as
// an RFC 3339 timestamp.
@property (retain) GTLDateTime *updated;
=======
@property (nonatomic, copy) NSString *nextPageToken;

// The title of this collection of comments.
@property (nonatomic, copy) NSString *title;

// The time at which this collection of comments was last updated. Formatted as
// an RFC 3339 timestamp.
@property (nonatomic, retain) GTLDateTime *updated;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
