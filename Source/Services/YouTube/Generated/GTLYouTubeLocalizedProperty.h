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
//  GTLYouTubeLocalizedProperty.h
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
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeLocalizedProperty (0 custom class methods, 3 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
=======
@class GTLYouTubeLanguageTag;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLYouTubeLocalizedString;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLocalizedProperty
//

<<<<<<< HEAD
// Represent a property available in different languages.

@interface GTLYouTubeLocalizedProperty : GTLObject

// Default value for the localized property.
// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
@property (copy) NSString *defaultProperty;

// The localized values.
@property (retain) NSArray *localized;  // of GTLYouTubeLocalizedString

=======
@interface GTLYouTubeLocalizedProperty : GTLObject

// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
@property (nonatomic, copy) NSString *defaultProperty;

// The language of the default property.
@property (nonatomic, retain) GTLYouTubeLanguageTag *defaultLanguage;

@property (nonatomic, retain) NSArray *localized;  // of GTLYouTubeLocalizedString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
