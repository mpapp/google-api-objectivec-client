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
//  GTLYouTubeChannelSectionListResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
<<<<<<< HEAD
//   Programmatic access to YouTube features.
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeChannelSectionListResponse (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeChannelSection;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSectionListResponse
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLYouTubeChannelSectionListResponse : GTLCollectionObject

// Etag of this resource.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// Serialized EventId of the request which produced this response.
@property (copy) NSString *eventId;

// A list of ChannelSections that match the request criteria.
@property (retain) NSArray *items;  // of GTLYouTubeChannelSection

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelSectionListResponse".
@property (copy) NSString *kind;

// The visitorId identifies the visitor.
@property (copy) NSString *visitorId;
=======
@property (nonatomic, copy) NSString *ETag;

// Serialized EventId of the request which produced this response.
@property (nonatomic, copy) NSString *eventId;

// A list of ChannelSections that match the request criteria.
@property (nonatomic, retain) NSArray *items;  // of GTLYouTubeChannelSection

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelSectionListResponse".
@property (nonatomic, copy) NSString *kind;

// The visitorId identifies the visitor.
@property (nonatomic, copy) NSString *visitorId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
