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
//  GTLYouTubeVideoStatistics.h
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
//   GTLYouTubeVideoStatistics (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoStatistics
//

// Statistics about the video, such as the number of times the video was viewed
// or liked.

@interface GTLYouTubeVideoStatistics : GTLObject

// The number of comments for the video.
<<<<<<< HEAD
@property (retain) NSNumber *commentCount;  // unsignedLongLongValue

// The number of users who have indicated that they disliked the video by giving
// it a negative rating.
@property (retain) NSNumber *dislikeCount;  // unsignedLongLongValue

// The number of users who currently have the video marked as a favorite video.
@property (retain) NSNumber *favoriteCount;  // unsignedLongLongValue

// The number of users who have indicated that they liked the video by giving it
// a positive rating.
@property (retain) NSNumber *likeCount;  // unsignedLongLongValue

// The number of times the video has been viewed.
@property (retain) NSNumber *viewCount;  // unsignedLongLongValue
=======
@property (nonatomic, retain) NSNumber *commentCount;  // unsignedLongLongValue

// The number of users who have indicated that they disliked the video by giving
// it a negative rating.
@property (nonatomic, retain) NSNumber *dislikeCount;  // unsignedLongLongValue

// The number of users who currently have the video marked as a favorite video.
@property (nonatomic, retain) NSNumber *favoriteCount;  // unsignedLongLongValue

// The number of users who have indicated that they liked the video by giving it
// a positive rating.
@property (nonatomic, retain) NSNumber *likeCount;  // unsignedLongLongValue

// The number of times the video has been viewed.
@property (nonatomic, retain) NSNumber *viewCount;  // unsignedLongLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
