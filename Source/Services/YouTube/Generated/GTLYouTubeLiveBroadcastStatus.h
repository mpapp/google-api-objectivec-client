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
//  GTLYouTubeLiveBroadcastStatus.h
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
//   GTLYouTubeLiveBroadcastStatus (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLiveBroadcastStatus
//

@interface GTLYouTubeLiveBroadcastStatus : GTLObject

// The broadcast's status. The status can be updated using the API's
// liveBroadcasts.transition method.
<<<<<<< HEAD
@property (copy) NSString *lifeCycleStatus;

// Priority of the live broadcast event (internal state).
@property (copy) NSString *liveBroadcastPriority;
=======
@property (nonatomic, copy) NSString *lifeCycleStatus;

// Priority of the live broadcast event (internal state).
@property (nonatomic, copy) NSString *liveBroadcastPriority;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The broadcast's privacy status. Note that the broadcast represents exactly
// one YouTube video, so the privacy settings are identical to those supported
// for videos. In addition, you can set this field by modifying the broadcast
// resource or by setting the privacyStatus field of the corresponding video
// resource.
<<<<<<< HEAD
@property (copy) NSString *privacyStatus;

// The broadcast's recording status.
@property (copy) NSString *recordingStatus;
=======
@property (nonatomic, copy) NSString *privacyStatus;

// The broadcast's recording status.
@property (nonatomic, copy) NSString *recordingStatus;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
