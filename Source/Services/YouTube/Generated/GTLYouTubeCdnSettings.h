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
//  GTLYouTubeCdnSettings.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
<<<<<<< HEAD
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeCdnSettings (0 custom class methods, 3 custom properties)
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeCdnSettings (0 custom class methods, 5 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeIngestionInfo;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeCdnSettings
//

// Brief description of the live stream cdn settings.

@interface GTLYouTubeCdnSettings : GTLObject

// The format of the video stream that you are sending to Youtube.
<<<<<<< HEAD
@property (copy) NSString *format;

// The ingestionInfo object contains information that YouTube provides that you
// need to transmit your RTMP or HTTP stream to YouTube.
@property (retain) GTLYouTubeIngestionInfo *ingestionInfo;

// The method or protocol used to transmit the video stream.
@property (copy) NSString *ingestionType;
=======
@property (nonatomic, copy) NSString *format;

// The frame rate of the inbound video data.
@property (nonatomic, copy) NSString *frameRate;

// The ingestionInfo object contains information that YouTube provides that you
// need to transmit your RTMP or HTTP stream to YouTube.
@property (nonatomic, retain) GTLYouTubeIngestionInfo *ingestionInfo;

// The method or protocol used to transmit the video stream.
@property (nonatomic, copy) NSString *ingestionType;

// The resolution of the inbound video data.
@property (nonatomic, copy) NSString *resolution;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
