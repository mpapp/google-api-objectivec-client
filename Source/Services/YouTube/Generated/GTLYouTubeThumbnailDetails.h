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
//  GTLYouTubeThumbnailDetails.h
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
//   GTLYouTubeThumbnailDetails (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeThumbnail;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeThumbnailDetails
//

// Internal representation of thumbnails for a YouTube resource.

@interface GTLYouTubeThumbnailDetails : GTLObject

// The default image for this resource.
// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
<<<<<<< HEAD
@property (retain) GTLYouTubeThumbnail *defaultProperty;

// The high quality image for this resource.
@property (retain) GTLYouTubeThumbnail *high;

// The maximum resolution quality image for this resource.
@property (retain) GTLYouTubeThumbnail *maxres;

// The medium quality image for this resource.
@property (retain) GTLYouTubeThumbnail *medium;

// The standard quality image for this resource.
@property (retain) GTLYouTubeThumbnail *standard;
=======
@property (nonatomic, retain) GTLYouTubeThumbnail *defaultProperty;

// The high quality image for this resource.
@property (nonatomic, retain) GTLYouTubeThumbnail *high;

// The maximum resolution quality image for this resource.
@property (nonatomic, retain) GTLYouTubeThumbnail *maxres;

// The medium quality image for this resource.
@property (nonatomic, retain) GTLYouTubeThumbnail *medium;

// The standard quality image for this resource.
@property (nonatomic, retain) GTLYouTubeThumbnail *standard;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
