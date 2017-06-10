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
//  GTLYouTubeVideo.m
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
//   GTLYouTubeVideo (0 custom class methods, 18 custom properties)
<<<<<<< HEAD
=======
//   GTLYouTubeVideoLocalizations (0 custom class methods, 0 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLYouTubeVideo.h"

#import "GTLYouTubeVideoAgeGating.h"
#import "GTLYouTubeVideoContentDetails.h"
<<<<<<< HEAD
#import "GTLYouTubeVideoConversionPings.h"
#import "GTLYouTubeVideoFileDetails.h"
#import "GTLYouTubeVideoLiveStreamingDetails.h"
=======
#import "GTLYouTubeVideoFileDetails.h"
#import "GTLYouTubeVideoLiveStreamingDetails.h"
#import "GTLYouTubeVideoLocalization.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoMonetizationDetails.h"
#import "GTLYouTubeVideoPlayer.h"
#import "GTLYouTubeVideoProcessingDetails.h"
#import "GTLYouTubeVideoProjectDetails.h"
#import "GTLYouTubeVideoRecordingDetails.h"
#import "GTLYouTubeVideoSnippet.h"
#import "GTLYouTubeVideoStatistics.h"
#import "GTLYouTubeVideoStatus.h"
#import "GTLYouTubeVideoSuggestions.h"
#import "GTLYouTubeVideoTopicDetails.h"

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideo
//

@implementation GTLYouTubeVideo
<<<<<<< HEAD
@dynamic ageGating, contentDetails, conversionPings, ETag, fileDetails,
         identifier, kind, liveStreamingDetails, monetizationDetails, player,
=======
@dynamic ageGating, contentDetails, ETag, fileDetails, identifier, kind,
         liveStreamingDetails, localizations, monetizationDetails, player,
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
         processingDetails, projectDetails, recordingDetails, snippet,
         statistics, status, suggestions, topicDetails;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
  NSDictionary *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"youtube#video"];
}

@end
<<<<<<< HEAD
=======


// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoLocalizations
//

@implementation GTLYouTubeVideoLocalizations

+ (Class)classForAdditionalProperties {
  return [GTLYouTubeVideoLocalization class];
}

@end
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
