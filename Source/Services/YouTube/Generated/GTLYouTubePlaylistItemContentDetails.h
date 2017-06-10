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
//  GTLYouTubePlaylistItemContentDetails.h
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
//   GTLYouTubePlaylistItemContentDetails (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubePlaylistItemContentDetails
//

@interface GTLYouTubePlaylistItemContentDetails : GTLObject

// The time, measured in seconds from the start of the video, when the video
// should stop playing. (The playlist owner can specify the times when the video
// should start and stop playing when the video is played in the context of the
// playlist.) By default, assume that the video.endTime is the end of the video.
<<<<<<< HEAD
@property (copy) NSString *endAt;

// A user-generated note for this item.
@property (copy) NSString *note;
=======
@property (nonatomic, copy) NSString *endAt;

// A user-generated note for this item.
@property (nonatomic, copy) NSString *note;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The time, measured in seconds from the start of the video, when the video
// should start playing. (The playlist owner can specify the times when the
// video should start and stop playing when the video is played in the context
// of the playlist.) The default value is 0.
<<<<<<< HEAD
@property (copy) NSString *startAt;

// The ID that YouTube uses to uniquely identify a video. To retrieve the video
// resource, set the id query parameter to this value in your API request.
@property (copy) NSString *videoId;
=======
@property (nonatomic, copy) NSString *startAt;

// The ID that YouTube uses to uniquely identify a video. To retrieve the video
// resource, set the id query parameter to this value in your API request.
@property (nonatomic, copy) NSString *videoId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
