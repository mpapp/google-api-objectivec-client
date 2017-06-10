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
//  GTLYouTubeActivityContentDetails.h
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
//   GTLYouTubeActivityContentDetails (0 custom class methods, 11 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeActivityContentDetailsBulletin;
@class GTLYouTubeActivityContentDetailsChannelItem;
@class GTLYouTubeActivityContentDetailsComment;
@class GTLYouTubeActivityContentDetailsFavorite;
@class GTLYouTubeActivityContentDetailsLike;
@class GTLYouTubeActivityContentDetailsPlaylistItem;
@class GTLYouTubeActivityContentDetailsPromotedItem;
@class GTLYouTubeActivityContentDetailsRecommendation;
@class GTLYouTubeActivityContentDetailsSocial;
@class GTLYouTubeActivityContentDetailsSubscription;
@class GTLYouTubeActivityContentDetailsUpload;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeActivityContentDetails
//

// Details about the content of an activity: the video that was shared, the
// channel that was subscribed to, etc.

@interface GTLYouTubeActivityContentDetails : GTLObject

// The bulletin object contains details about a channel bulletin post. This
// object is only present if the snippet.type is bulletin.
<<<<<<< HEAD
@property (retain) GTLYouTubeActivityContentDetailsBulletin *bulletin;

// The channelItem object contains details about a resource which was added to a
// channel. This property is only present if the snippet.type is channelItem.
@property (retain) GTLYouTubeActivityContentDetailsChannelItem *channelItem;

// The comment object contains information about a resource that received a
// comment. This property is only present if the snippet.type is comment.
@property (retain) GTLYouTubeActivityContentDetailsComment *comment;
=======
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsBulletin *bulletin;

// The channelItem object contains details about a resource which was added to a
// channel. This property is only present if the snippet.type is channelItem.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsChannelItem *channelItem;

// The comment object contains information about a resource that received a
// comment. This property is only present if the snippet.type is comment.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsComment *comment;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The favorite object contains information about a video that was marked as a
// favorite video. This property is only present if the snippet.type is
// favorite.
<<<<<<< HEAD
@property (retain) GTLYouTubeActivityContentDetailsFavorite *favorite;
=======
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsFavorite *favorite;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The like object contains information about a resource that received a
// positive (like) rating. This property is only present if the snippet.type is
// like.
<<<<<<< HEAD
@property (retain) GTLYouTubeActivityContentDetailsLike *like;

// The playlistItem object contains information about a new playlist item. This
// property is only present if the snippet.type is playlistItem.
@property (retain) GTLYouTubeActivityContentDetailsPlaylistItem *playlistItem;

// The promotedItem object contains details about a resource which is being
// promoted. This property is only present if the snippet.type is promotedItem.
@property (retain) GTLYouTubeActivityContentDetailsPromotedItem *promotedItem;

// The recommendation object contains information about a recommended resource.
// This property is only present if the snippet.type is recommendation.
@property (retain) GTLYouTubeActivityContentDetailsRecommendation *recommendation;

// The social object contains details about a social network post. This property
// is only present if the snippet.type is social.
@property (retain) GTLYouTubeActivityContentDetailsSocial *social;
=======
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsLike *like;

// The playlistItem object contains information about a new playlist item. This
// property is only present if the snippet.type is playlistItem.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsPlaylistItem *playlistItem;

// The promotedItem object contains details about a resource which is being
// promoted. This property is only present if the snippet.type is promotedItem.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsPromotedItem *promotedItem;

// The recommendation object contains information about a recommended resource.
// This property is only present if the snippet.type is recommendation.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsRecommendation *recommendation;

// The social object contains details about a social network post. This property
// is only present if the snippet.type is social.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsSocial *social;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The subscription object contains information about a channel that a user
// subscribed to. This property is only present if the snippet.type is
// subscription.
<<<<<<< HEAD
@property (retain) GTLYouTubeActivityContentDetailsSubscription *subscription;

// The upload object contains information about the uploaded video. This
// property is only present if the snippet.type is upload.
@property (retain) GTLYouTubeActivityContentDetailsUpload *upload;
=======
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsSubscription *subscription;

// The upload object contains information about the uploaded video. This
// property is only present if the snippet.type is upload.
@property (nonatomic, retain) GTLYouTubeActivityContentDetailsUpload *upload;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
