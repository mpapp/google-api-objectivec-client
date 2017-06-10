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
//  GTLYouTubeVideoProcessingDetailsProcessingProgress.h
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
//   GTLYouTubeVideoProcessingDetailsProcessingProgress (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoProcessingDetailsProcessingProgress
//

// Video processing progress and completion time estimate.

@interface GTLYouTubeVideoProcessingDetailsProcessingProgress : GTLObject

// The number of parts of the video that YouTube has already processed. You can
// estimate the percentage of the video that YouTube has already processed by
// calculating:
// 100 * parts_processed / parts_total
// Note that since the estimated number of parts could increase without a
// corresponding increase in the number of parts that have already been
// processed, it is possible that the calculated progress could periodically
// decrease while YouTube processes a video.
<<<<<<< HEAD
@property (retain) NSNumber *partsProcessed;  // unsignedLongLongValue
=======
@property (nonatomic, retain) NSNumber *partsProcessed;  // unsignedLongLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An estimate of the total number of parts that need to be processed for the
// video. The number may be updated with more precise estimates while YouTube
// processes the video.
<<<<<<< HEAD
@property (retain) NSNumber *partsTotal;  // unsignedLongLongValue

// An estimate of the amount of time, in millseconds, that YouTube needs to
// finish processing the video.
@property (retain) NSNumber *timeLeftMs;  // unsignedLongLongValue
=======
@property (nonatomic, retain) NSNumber *partsTotal;  // unsignedLongLongValue

// An estimate of the amount of time, in millseconds, that YouTube needs to
// finish processing the video.
@property (nonatomic, retain) NSNumber *timeLeftMs;  // unsignedLongLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
