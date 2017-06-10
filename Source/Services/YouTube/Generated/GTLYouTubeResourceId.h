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
//  GTLYouTubeResourceId.h
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
//   GTLYouTubeResourceId (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeResourceId
//

// A resource id is a generic reference that points to another YouTube resource.

@interface GTLYouTubeResourceId : GTLObject

// The ID that YouTube uses to uniquely identify the referred resource, if that
// resource is a channel. This property is only present if the resourceId.kind
// value is youtube#channel.
<<<<<<< HEAD
@property (copy) NSString *channelId;

// The type of the API resource.
@property (copy) NSString *kind;
=======
@property (nonatomic, copy) NSString *channelId;

// The type of the API resource.
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID that YouTube uses to uniquely identify the referred resource, if that
// resource is a playlist. This property is only present if the resourceId.kind
// value is youtube#playlist.
<<<<<<< HEAD
@property (copy) NSString *playlistId;
=======
@property (nonatomic, copy) NSString *playlistId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID that YouTube uses to uniquely identify the referred resource, if that
// resource is a video. This property is only present if the resourceId.kind
// value is youtube#video.
<<<<<<< HEAD
@property (copy) NSString *videoId;
=======
@property (nonatomic, copy) NSString *videoId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
