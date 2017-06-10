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
//  GTLPlusComment.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLPlusComment (0 custom class methods, 11 custom properties)
<<<<<<< HEAD
//   GTLPlusCommentActor (0 custom class methods, 4 custom properties)
//   GTLPlusCommentInReplyToItem (0 custom class methods, 2 custom properties)
//   GTLPlusCommentObject (0 custom class methods, 3 custom properties)
//   GTLPlusCommentPlusoners (0 custom class methods, 1 custom properties)
//   GTLPlusCommentActorImage (0 custom class methods, 1 custom properties)
=======
//   GTLPlusCommentActor (0 custom class methods, 6 custom properties)
//   GTLPlusCommentInReplyToItem (0 custom class methods, 2 custom properties)
//   GTLPlusCommentObject (0 custom class methods, 3 custom properties)
//   GTLPlusCommentPlusoners (0 custom class methods, 1 custom properties)
//   GTLPlusCommentActorClientSpecificActorInfo (0 custom class methods, 1 custom properties)
//   GTLPlusCommentActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusCommentActorVerification (0 custom class methods, 1 custom properties)
//   GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo (0 custom class methods, 1 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusCommentActor;
<<<<<<< HEAD
@class GTLPlusCommentActorImage;
=======
@class GTLPlusCommentActorClientSpecificActorInfo;
@class GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo;
@class GTLPlusCommentActorImage;
@class GTLPlusCommentActorVerification;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLPlusCommentInReplyToItem;
@class GTLPlusCommentObject;
@class GTLPlusCommentPlusoners;

// ----------------------------------------------------------------------------
//
//   GTLPlusComment
//

@interface GTLPlusComment : GTLObject

// The person who posted this comment.
<<<<<<< HEAD
@property (retain) GTLPlusCommentActor *actor;

// ETag of this response for caching purposes.
@property (copy) NSString *ETag;

// The ID of this comment.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The activity this comment replied to.
@property (retain) NSArray *inReplyTo;  // of GTLPlusCommentInReplyToItem

// Identifies this resource as a comment. Value: "plus#comment".
@property (copy) NSString *kind;

// The object of this comment.
@property (retain) GTLPlusCommentObject *object;

// People who +1'd this comment.
@property (retain) GTLPlusCommentPlusoners *plusoners;

// The time at which this comment was initially published. Formatted as an RFC
// 3339 timestamp.
@property (retain) GTLDateTime *published;

// Link to this comment resource.
@property (copy) NSString *selfLink;

// The time at which this comment was last updated. Formatted as an RFC 3339
// timestamp.
@property (retain) GTLDateTime *updated;
=======
@property (nonatomic, retain) GTLPlusCommentActor *actor;

// ETag of this response for caching purposes.
@property (nonatomic, copy) NSString *ETag;

// The ID of this comment.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The activity this comment replied to.
@property (nonatomic, retain) NSArray *inReplyTo;  // of GTLPlusCommentInReplyToItem

// Identifies this resource as a comment. Value: "plus#comment".
@property (nonatomic, copy) NSString *kind;

// The object of this comment.
@property (nonatomic, retain) GTLPlusCommentObject *object;

// People who +1'd this comment.
@property (nonatomic, retain) GTLPlusCommentPlusoners *plusoners;

// The time at which this comment was initially published. Formatted as an RFC
// 3339 timestamp.
@property (nonatomic, retain) GTLDateTime *published;

// Link to this comment resource.
@property (nonatomic, copy) NSString *selfLink;

// The time at which this comment was last updated. Formatted as an RFC 3339
// timestamp.
@property (nonatomic, retain) GTLDateTime *updated;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// This comment's verb, indicating what action was performed. Possible values
// are:
// - "post" - Publish content to the stream.
<<<<<<< HEAD
@property (copy) NSString *verb;
=======
@property (nonatomic, copy) NSString *verb;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActor
//

@interface GTLPlusCommentActor : GTLObject

<<<<<<< HEAD
// The name of this actor, suitable for display.
@property (copy) NSString *displayName;

// The ID of the actor.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The image representation of this actor.
@property (retain) GTLPlusCommentActorImage *image;

// A link to the Person resource for this actor.
@property (copy) NSString *url;
=======
// Actor info specific to particular clients.
@property (nonatomic, retain) GTLPlusCommentActorClientSpecificActorInfo *clientSpecificActorInfo;

// The name of this actor, suitable for display.
@property (nonatomic, copy) NSString *displayName;

// The ID of the actor.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The image representation of this actor.
@property (nonatomic, retain) GTLPlusCommentActorImage *image;

// A link to the Person resource for this actor.
@property (nonatomic, copy) NSString *url;

// Verification status of actor.
@property (nonatomic, retain) GTLPlusCommentActorVerification *verification;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentInReplyToItem
//

@interface GTLPlusCommentInReplyToItem : GTLObject

// The ID of the activity.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// The URL of the activity.
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *identifier;

// The URL of the activity.
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentObject
//

@interface GTLPlusCommentObject : GTLObject

// The HTML-formatted content, suitable for display.
<<<<<<< HEAD
@property (copy) NSString *content;

// The object type of this comment. Possible values are:
// - "comment" - A comment in reply to an activity.
@property (copy) NSString *objectType;
=======
@property (nonatomic, copy) NSString *content;

// The object type of this comment. Possible values are:
// - "comment" - A comment in reply to an activity.
@property (nonatomic, copy) NSString *objectType;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The content (text) as provided by the author, stored without any HTML
// formatting. When creating or updating a comment, this value must be supplied
// as plain text in the request.
<<<<<<< HEAD
@property (copy) NSString *originalContent;
=======
@property (nonatomic, copy) NSString *originalContent;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentPlusoners
//

@interface GTLPlusCommentPlusoners : GTLObject

// Total number of people who +1'd this comment.
<<<<<<< HEAD
@property (retain) NSNumber *totalItems;  // unsignedIntValue
=======
@property (nonatomic, retain) NSNumber *totalItems;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorClientSpecificActorInfo
//

@interface GTLPlusCommentActorClientSpecificActorInfo : GTLObject

// Actor info specific to YouTube clients.
@property (nonatomic, retain) GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo *youtubeActorInfo;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorImage
//

@interface GTLPlusCommentActorImage : GTLObject

// The URL of the actor's profile photo. To resize the image and crop it to a
// square, append the query string ?sz=x, where x is the dimension in pixels of
// each side.
<<<<<<< HEAD
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorVerification
//

@interface GTLPlusCommentActorVerification : GTLObject

// Verification for one-time or manual processes.
@property (nonatomic, copy) NSString *adHocVerified;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo
//

@interface GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo : GTLObject

// ID of the YouTube channel owned by the Actor.
@property (nonatomic, copy) NSString *channelId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
