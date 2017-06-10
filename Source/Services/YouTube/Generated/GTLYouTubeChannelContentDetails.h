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
//  GTLYouTubeChannelContentDetails.h
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
//   GTLYouTubeChannelContentDetails (0 custom class methods, 2 custom properties)
//   GTLYouTubeChannelContentDetailsRelatedPlaylists (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeChannelContentDetailsRelatedPlaylists;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelContentDetails
//

// Details about the content of a channel.

@interface GTLYouTubeChannelContentDetails : GTLObject

// The googlePlusUserId object identifies the Google+ profile ID associated with
// this channel.
<<<<<<< HEAD
@property (copy) NSString *googlePlusUserId;

@property (retain) GTLYouTubeChannelContentDetailsRelatedPlaylists *relatedPlaylists;
=======
@property (nonatomic, copy) NSString *googlePlusUserId;

@property (nonatomic, retain) GTLYouTubeChannelContentDetailsRelatedPlaylists *relatedPlaylists;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelContentDetailsRelatedPlaylists
//

@interface GTLYouTubeChannelContentDetailsRelatedPlaylists : GTLObject

// The ID of the playlist that contains the channel"s favorite videos. Use the
// playlistItems.insert and playlistItems.delete to add or remove items from
// that list.
<<<<<<< HEAD
@property (copy) NSString *favorites;
=======
@property (nonatomic, copy) NSString *favorites;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID of the playlist that contains the channel"s liked videos. Use the
// playlistItems.insert and playlistItems.delete to add or remove items from
// that list.
<<<<<<< HEAD
@property (copy) NSString *likes;
=======
@property (nonatomic, copy) NSString *likes;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID of the playlist that contains the channel"s uploaded videos. Use the
// videos.insert method to upload new videos and the videos.delete method to
// delete previously uploaded videos.
<<<<<<< HEAD
@property (copy) NSString *uploads;
=======
@property (nonatomic, copy) NSString *uploads;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID of the playlist that contains the channel"s watch history. Use the
// playlistItems.insert and playlistItems.delete to add or remove items from
// that list.
<<<<<<< HEAD
@property (copy) NSString *watchHistory;
=======
@property (nonatomic, copy) NSString *watchHistory;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The ID of the playlist that contains the channel"s watch later playlist. Use
// the playlistItems.insert and playlistItems.delete to add or remove items from
// that list.
<<<<<<< HEAD
@property (copy) NSString *watchLater;
=======
@property (nonatomic, copy) NSString *watchLater;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
