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
//  GTLYouTubeChannelSettings.m
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
//   GTLYouTubeChannelSettings (0 custom class methods, 12 custom properties)
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeChannelSettings (0 custom class methods, 14 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLYouTubeChannelSettings.h"

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSettings
//

@implementation GTLYouTubeChannelSettings
<<<<<<< HEAD
@dynamic defaultTab, descriptionProperty, featuredChannelsTitle,
         featuredChannelsUrls, keywords, moderateComments, profileColor,
         showBrowseView, showRelatedChannels, title, trackingAnalyticsAccountId,
         unsubscribedTrailer;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"description"
                                forKey:@"descriptionProperty"];
=======
@dynamic country, defaultLanguage, defaultTab, descriptionProperty,
         featuredChannelsTitle, featuredChannelsUrls, keywords,
         moderateComments, profileColor, showBrowseView, showRelatedChannels,
         title, trackingAnalyticsAccountId, unsubscribedTrailer;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"featuredChannelsUrls"];
=======
  NSDictionary *map = @{
    @"featuredChannelsUrls" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
