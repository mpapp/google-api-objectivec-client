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
//  GTLYouTubeChannelAuditDetails.h
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
//   GTLYouTubeChannelAuditDetails (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelAuditDetails
//

// The auditDetails object encapsulates channel data that is relevant for
// YouTube Partners during the audit process.

@interface GTLYouTubeChannelAuditDetails : GTLObject

// Whether or not the channel respects the community guidelines.
<<<<<<< HEAD
@property (retain) NSNumber *communityGuidelinesGoodStanding;  // boolValue

// Whether or not the channel has any unresolved claims.
@property (retain) NSNumber *contentIdClaimsGoodStanding;  // boolValue

// Whether or not the channel has any copyright strikes.
@property (retain) NSNumber *copyrightStrikesGoodStanding;  // boolValue
=======
@property (nonatomic, retain) NSNumber *communityGuidelinesGoodStanding;  // boolValue

// Whether or not the channel has any unresolved claims.
@property (nonatomic, retain) NSNumber *contentIdClaimsGoodStanding;  // boolValue

// Whether or not the channel has any copyright strikes.
@property (nonatomic, retain) NSNumber *copyrightStrikesGoodStanding;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Describes the general state of the channel. This field will always show if
// there are any issues whatsoever with the channel. Currently this field
// represents the result of the logical and operation over the community
// guidelines good standing, the copyright strikes good standing and the content
// ID claims good standing, but this may change in the future.
<<<<<<< HEAD
@property (retain) NSNumber *overallGoodStanding;  // boolValue
=======
@property (nonatomic, retain) NSNumber *overallGoodStanding;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
