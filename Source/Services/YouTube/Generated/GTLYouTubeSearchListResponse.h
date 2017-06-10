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
//  GTLYouTubeSearchListResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
<<<<<<< HEAD
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeSearchListResponse (0 custom class methods, 9 custom properties)
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeSearchListResponse (0 custom class methods, 10 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubePageInfo;
@class GTLYouTubeSearchResult;
@class GTLYouTubeTokenPagination;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeSearchListResponse
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLYouTubeSearchListResponse : GTLCollectionObject

// Etag of this resource.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// Serialized EventId of the request which produced this response.
@property (copy) NSString *eventId;

// A list of results that match the search criteria.
@property (retain) NSArray *items;  // of GTLYouTubeSearchResult

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#searchListResponse".
@property (copy) NSString *kind;

// The token that can be used as the value of the pageToken parameter to
// retrieve the next page in the result set.
@property (copy) NSString *nextPageToken;

@property (retain) GTLYouTubePageInfo *pageInfo;

// The token that can be used as the value of the pageToken parameter to
// retrieve the previous page in the result set.
@property (copy) NSString *prevPageToken;

@property (retain) GTLYouTubeTokenPagination *tokenPagination;

// The visitorId identifies the visitor.
@property (copy) NSString *visitorId;
=======
@property (nonatomic, copy) NSString *ETag;

// Serialized EventId of the request which produced this response.
@property (nonatomic, copy) NSString *eventId;

// A list of results that match the search criteria.
@property (nonatomic, retain) NSArray *items;  // of GTLYouTubeSearchResult

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#searchListResponse".
@property (nonatomic, copy) NSString *kind;

// The token that can be used as the value of the pageToken parameter to
// retrieve the next page in the result set.
@property (nonatomic, copy) NSString *nextPageToken;

@property (nonatomic, retain) GTLYouTubePageInfo *pageInfo;

// The token that can be used as the value of the pageToken parameter to
// retrieve the previous page in the result set.
@property (nonatomic, copy) NSString *prevPageToken;

@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, retain) GTLYouTubeTokenPagination *tokenPagination;

// The visitorId identifies the visitor.
@property (nonatomic, copy) NSString *visitorId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
