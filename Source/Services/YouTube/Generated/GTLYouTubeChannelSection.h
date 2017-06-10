<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLYouTubeChannelSection.h
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
//   GTLYouTubeChannelSection (0 custom class methods, 5 custom properties)
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeChannelSection (0 custom class methods, 7 custom properties)
//   GTLYouTubeChannelSectionLocalizations (0 custom class methods, 0 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeChannelSectionContentDetails;
<<<<<<< HEAD
@class GTLYouTubeChannelSectionSnippet;
=======
@class GTLYouTubeChannelSectionLocalization;
@class GTLYouTubeChannelSectionLocalizations;
@class GTLYouTubeChannelSectionSnippet;
@class GTLYouTubeChannelSectionTargeting;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSection
//

<<<<<<< HEAD
// TODO(lxz) follow up with adiamondstein@ to fullfill the doc before deploying

@interface GTLYouTubeChannelSection : GTLObject

// The contentDetails object contains details about the ChannelSection content,
// such as playlists and channels.
@property (retain) GTLYouTubeChannelSectionContentDetails *contentDetails;

// Etag of this resource.
@property (copy) NSString *ETag;

// The ID that YouTube uses to uniquely identify the ChannelSection.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelSection".
@property (copy) NSString *kind;

// The snippet object contains basic details about the ChannelSection, such as
// its type, style and title.
@property (retain) GTLYouTubeChannelSectionSnippet *snippet;

=======
@interface GTLYouTubeChannelSection : GTLObject

// The contentDetails object contains details about the channel section content,
// such as a list of playlists or channels featured in the section.
@property (nonatomic, retain) GTLYouTubeChannelSectionContentDetails *contentDetails;

// Etag of this resource.
@property (nonatomic, copy) NSString *ETag;

// The ID that YouTube uses to uniquely identify the channel section.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelSection".
@property (nonatomic, copy) NSString *kind;

// Localizations for different languages
@property (nonatomic, retain) GTLYouTubeChannelSectionLocalizations *localizations;

// The snippet object contains basic details about the channel section, such as
// its type, style and title.
@property (nonatomic, retain) GTLYouTubeChannelSectionSnippet *snippet;

// The targeting object contains basic targeting settings about the channel
// section.
@property (nonatomic, retain) GTLYouTubeChannelSectionTargeting *targeting;

@end


// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSectionLocalizations
//

@interface GTLYouTubeChannelSectionLocalizations : GTLObject
// This object is documented as having more properties that are
// GTLYouTubeChannelSectionLocalization. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
