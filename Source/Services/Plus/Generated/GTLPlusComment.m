<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLPlusComment.m
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

#import "GTLPlusComment.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusComment
//

@implementation GTLPlusComment
@dynamic actor, ETag, identifier, inReplyTo, kind, object, plusoners, published,
         selfLink, updated, verb;

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

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLPlusCommentInReplyToItem class]
                                forKey:@"inReplyTo"];
=======
  NSDictionary *map = @{
    @"inReplyTo" : [GTLPlusCommentInReplyToItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"plus#comment"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActor
//

@implementation GTLPlusCommentActor
<<<<<<< HEAD
@dynamic displayName, identifier, image, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic clientSpecificActorInfo, displayName, identifier, image, url,
         verification;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentInReplyToItem
//

@implementation GTLPlusCommentInReplyToItem
@dynamic identifier, url;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentObject
//

@implementation GTLPlusCommentObject
@dynamic content, objectType, originalContent;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentPlusoners
//

@implementation GTLPlusCommentPlusoners
@dynamic totalItems;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusCommentActorClientSpecificActorInfo
//

@implementation GTLPlusCommentActorClientSpecificActorInfo
@dynamic youtubeActorInfo;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusCommentActorImage
//

@implementation GTLPlusCommentActorImage
@dynamic url;
@end
<<<<<<< HEAD
=======


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorVerification
//

@implementation GTLPlusCommentActorVerification
@dynamic adHocVerified;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo
//

@implementation GTLPlusCommentActorClientSpecificActorInfoYoutubeActorInfo
@dynamic channelId;
@end
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
