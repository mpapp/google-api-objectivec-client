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
//  GTLYouTubeChannelSectionContentDetails.h
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
//   GTLYouTubeChannelSectionContentDetails (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSectionContentDetails
//

// Details about a channelsection, including playlists and channels.

@interface GTLYouTubeChannelSectionContentDetails : GTLObject

// The channel ids for type multiple_channels.
<<<<<<< HEAD
@property (retain) NSArray *channels;  // of NSString

// The playlist ids for type single_playlist and multiple_playlists. For
// singlePlaylist, only one playlistId is allowed.
@property (retain) NSArray *playlists;  // of NSString
=======
@property (nonatomic, retain) NSArray *channels;  // of NSString

// The playlist ids for type single_playlist and multiple_playlists. For
// singlePlaylist, only one playlistId is allowed.
@property (nonatomic, retain) NSArray *playlists;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
