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
//  GTLYouTubeLocalizedProperty.m
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
//   GTLYouTubeLocalizedProperty (0 custom class methods, 2 custom properties)

#import "GTLYouTubeLocalizedProperty.h"

=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeLocalizedProperty (0 custom class methods, 3 custom properties)

#import "GTLYouTubeLocalizedProperty.h"

#import "GTLYouTubeLanguageTag.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeLocalizedString.h"

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLocalizedProperty
//

@implementation GTLYouTubeLocalizedProperty
<<<<<<< HEAD
@dynamic defaultProperty, localized;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"default"
                                forKey:@"defaultProperty"];
=======
@dynamic defaultProperty, defaultLanguage, localized;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"defaultProperty" : @"default"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLYouTubeLocalizedString class]
                                forKey:@"localized"];
=======
  NSDictionary *map = @{
    @"localized" : [GTLYouTubeLocalizedString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
