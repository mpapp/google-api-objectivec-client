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
//  GTLPlusDomainsComment.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform for Google Apps Domains.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLPlusDomainsComment (0 custom class methods, 11 custom properties)
<<<<<<< HEAD
//   GTLPlusDomainsCommentActor (0 custom class methods, 4 custom properties)
//   GTLPlusDomainsCommentInReplyToItem (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsCommentObject (0 custom class methods, 3 custom properties)
//   GTLPlusDomainsCommentPlusoners (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsCommentActorImage (0 custom class methods, 1 custom properties)
=======
//   GTLPlusDomainsCommentActor (0 custom class methods, 6 custom properties)
//   GTLPlusDomainsCommentInReplyToItem (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsCommentObject (0 custom class methods, 3 custom properties)
//   GTLPlusDomainsCommentPlusoners (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsCommentActorClientSpecificActorInfo (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsCommentActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsCommentActorVerification (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsCommentActorClientSpecificActorInfoYoutubeActorInfo (0 custom class methods, 1 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLPlusDomainsComment.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsComment
//

@implementation GTLPlusDomainsComment
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
    [NSDictionary dictionaryWithObject:[GTLPlusDomainsCommentInReplyToItem class]
                                forKey:@"inReplyTo"];
=======
  NSDictionary *map = @{
    @"inReplyTo" : [GTLPlusDomainsCommentInReplyToItem class]
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
//   GTLPlusDomainsCommentActor
//

@implementation GTLPlusDomainsCommentActor
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
//   GTLPlusDomainsCommentInReplyToItem
//

@implementation GTLPlusDomainsCommentInReplyToItem
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
//   GTLPlusDomainsCommentObject
//

@implementation GTLPlusDomainsCommentObject
@dynamic content, objectType, originalContent;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCommentPlusoners
//

@implementation GTLPlusDomainsCommentPlusoners
@dynamic totalItems;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusDomainsCommentActorClientSpecificActorInfo
//

@implementation GTLPlusDomainsCommentActorClientSpecificActorInfo
@dynamic youtubeActorInfo;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusDomainsCommentActorImage
//

@implementation GTLPlusDomainsCommentActorImage
@dynamic url;
@end
<<<<<<< HEAD
=======


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCommentActorVerification
//

@implementation GTLPlusDomainsCommentActorVerification
@dynamic adHocVerified;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsCommentActorClientSpecificActorInfoYoutubeActorInfo
//

@implementation GTLPlusDomainsCommentActorClientSpecificActorInfoYoutubeActorInfo
@dynamic channelId;
@end
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
