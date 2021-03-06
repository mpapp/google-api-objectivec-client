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
//  GTLYouTubeVideoFileDetailsAudioStream.h
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
//   GTLYouTubeVideoFileDetailsAudioStream (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoFileDetailsAudioStream
//

// Information about an audio stream.

@interface GTLYouTubeVideoFileDetailsAudioStream : GTLObject

// The audio stream's bitrate, in bits per second.
<<<<<<< HEAD
@property (retain) NSNumber *bitrateBps;  // unsignedLongLongValue

// The number of audio channels that the stream contains.
@property (retain) NSNumber *channelCount;  // unsignedIntValue

// The audio codec that the stream uses.
@property (copy) NSString *codec;

// A value that uniquely identifies a video vendor. Typically, the value is a
// four-letter vendor code.
@property (copy) NSString *vendor;
=======
@property (nonatomic, retain) NSNumber *bitrateBps;  // unsignedLongLongValue

// The number of audio channels that the stream contains.
@property (nonatomic, retain) NSNumber *channelCount;  // unsignedIntValue

// The audio codec that the stream uses.
@property (nonatomic, copy) NSString *codec;

// A value that uniquely identifies a video vendor. Typically, the value is a
// four-letter vendor code.
@property (nonatomic, copy) NSString *vendor;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
