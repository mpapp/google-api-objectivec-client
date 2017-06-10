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
//  GTLYouTubeVideoCategory.h
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
//   GTLYouTubeVideoCategory (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeVideoCategorySnippet;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoCategory
//

// A videoCategory resource identifies a category that has been or could be
// associated with uploaded videos.

@interface GTLYouTubeVideoCategory : GTLObject

// Etag of this resource.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The ID that YouTube uses to uniquely identify the video category.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#videoCategory".
@property (copy) NSString *kind;

// The snippet object contains basic details about the video category, including
// its title.
@property (retain) GTLYouTubeVideoCategorySnippet *snippet;
=======
@property (nonatomic, copy) NSString *ETag;

// The ID that YouTube uses to uniquely identify the video category.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#videoCategory".
@property (nonatomic, copy) NSString *kind;

// The snippet object contains basic details about the video category, including
// its title.
@property (nonatomic, retain) GTLYouTubeVideoCategorySnippet *snippet;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
