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
//  GTLYouTubePromotedItemId.h
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
//   GTLYouTubePromotedItemId (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubePromotedItemId
//

// Describes a single promoted item id. It is a union of various possible types.

@interface GTLYouTubePromotedItemId : GTLObject

// If type is recentUpload, this field identifies the channel from which to take
// the recent upload. If missing, the channel is assumed to be the same channel
// for which the invideoPromotion is set.
<<<<<<< HEAD
@property (copy) NSString *recentlyUploadedBy;

// Describes the type of the promoted item.
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *recentlyUploadedBy;

// Describes the type of the promoted item.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// If the promoted item represents a video, this field represents the unique
// YouTube ID identifying it. This field will be present only if type has the
// value video.
<<<<<<< HEAD
@property (copy) NSString *videoId;
=======
@property (nonatomic, copy) NSString *videoId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// If the promoted item represents a website, this field represents the url
// pointing to the website. This field will be present only if type has the
// value website.
<<<<<<< HEAD
@property (copy) NSString *websiteUrl;
=======
@property (nonatomic, copy) NSString *websiteUrl;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
