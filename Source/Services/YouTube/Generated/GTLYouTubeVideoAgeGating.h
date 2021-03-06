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
//  GTLYouTubeVideoAgeGating.h
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
//   GTLYouTubeVideoAgeGating (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoAgeGating
//

@interface GTLYouTubeVideoAgeGating : GTLObject

// Indicates whether or not the video has alcoholic beverage content. Only users
// of legal purchasing age in a particular country, as identified by ICAP, can
// view the content.
<<<<<<< HEAD
@property (retain) NSNumber *alcoholContent;  // boolValue
=======
@property (nonatomic, retain) NSNumber *alcoholContent;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Age-restricted trailers. For redband trailers and adult-rated video-games.
// Only users aged 18+ can view the content. The the field is true the content
// is restricted to viewers aged 18+. Otherwise The field won't be present.
<<<<<<< HEAD
@property (retain) NSNumber *restricted;  // boolValue

// Video game rating, if any.
@property (copy) NSString *videoGameRating;
=======
@property (nonatomic, retain) NSNumber *restricted;  // boolValue

// Video game rating, if any.
@property (nonatomic, copy) NSString *videoGameRating;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
