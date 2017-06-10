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
//  GTLYouTubePromotedItem.h
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
//   GTLYouTubePromotedItem (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeInvideoTiming;
@class GTLYouTubePromotedItemId;

// ----------------------------------------------------------------------------
//
//   GTLYouTubePromotedItem
//

// Describes a single promoted item.

@interface GTLYouTubePromotedItem : GTLObject

// A custom message to display for this promotion. This field is currently
// ignored unless the promoted item is a website.
<<<<<<< HEAD
@property (copy) NSString *customMessage;

// Identifies the promoted item.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) GTLYouTubePromotedItemId *identifier;
=======
@property (nonatomic, copy) NSString *customMessage;

// Identifies the promoted item.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, retain) GTLYouTubePromotedItemId *identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// If true, the content owner's name will be used when displaying the promotion.
// This field can only be set when the update is made on behalf of the content
// owner.
<<<<<<< HEAD
@property (retain) NSNumber *promotedByContentOwner;  // boolValue

// The temporal position within the video where the promoted item will be
// displayed. If present, it overrides the default timing.
@property (retain) GTLYouTubeInvideoTiming *timing;
=======
@property (nonatomic, retain) NSNumber *promotedByContentOwner;  // boolValue

// The temporal position within the video where the promoted item will be
// displayed. If present, it overrides the default timing.
@property (nonatomic, retain) GTLYouTubeInvideoTiming *timing;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
