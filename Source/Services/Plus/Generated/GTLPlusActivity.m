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
//  GTLPlusActivity.m
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
//   GTLPlusActivity (0 custom class methods, 20 custom properties)
<<<<<<< HEAD
//   GTLPlusActivityActor (0 custom class methods, 5 custom properties)
//   GTLPlusActivityObject (0 custom class methods, 10 custom properties)
//   GTLPlusActivityProvider (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorName (0 custom class methods, 2 custom properties)
//   GTLPlusActivityObjectActor (0 custom class methods, 4 custom properties)
=======
//   GTLPlusActivityActor (0 custom class methods, 7 custom properties)
//   GTLPlusActivityObject (0 custom class methods, 10 custom properties)
//   GTLPlusActivityProvider (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorClientSpecificActorInfo (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorName (0 custom class methods, 2 custom properties)
//   GTLPlusActivityActorVerification (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActor (0 custom class methods, 6 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectAttachmentsItem (0 custom class methods, 9 custom properties)
//   GTLPlusActivityObjectPlusoners (0 custom class methods, 2 custom properties)
//   GTLPlusActivityObjectReplies (0 custom class methods, 2 custom properties)
//   GTLPlusActivityObjectResharers (0 custom class methods, 2 custom properties)
<<<<<<< HEAD
//   GTLPlusActivityObjectActorImage (0 custom class methods, 1 custom properties)
=======
//   GTLPlusActivityActorClientSpecificActorInfoYoutubeActorInfo (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActorClientSpecificActorInfo (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActorVerification (0 custom class methods, 1 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectAttachmentsItemEmbed (0 custom class methods, 2 custom properties)
//   GTLPlusActivityObjectAttachmentsItemFullImage (0 custom class methods, 4 custom properties)
//   GTLPlusActivityObjectAttachmentsItemImage (0 custom class methods, 4 custom properties)
//   GTLPlusActivityObjectAttachmentsItemThumbnailsItem (0 custom class methods, 3 custom properties)
<<<<<<< HEAD
=======
//   GTLPlusActivityObjectActorClientSpecificActorInfoYoutubeActorInfo (0 custom class methods, 1 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectAttachmentsItemThumbnailsItemImage (0 custom class methods, 4 custom properties)

#import "GTLPlusActivity.h"

#import "GTLPlusAcl.h"
#import "GTLPlusPlace.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusActivity
//

@implementation GTLPlusActivity
@dynamic access, actor, address, annotation, crosspostSource, ETag, geocode,
         identifier, kind, location, object, placeId, placeName, provider,
         published, radius, title, updated, url, verb;

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

+ (void)load {
  [self registerObjectClassForKind:@"plus#activity"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityActor
//

@implementation GTLPlusActivityActor
<<<<<<< HEAD
@dynamic displayName, identifier, image, name, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic clientSpecificActorInfo, displayName, identifier, image, name, url,
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
//   GTLPlusActivityObject
//

@implementation GTLPlusActivityObject
@dynamic actor, attachments, content, identifier, objectType, originalContent,
         plusoners, replies, resharers, url;

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

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLPlusActivityObjectAttachmentsItem class]
                                forKey:@"attachments"];
=======
  NSDictionary *map = @{
    @"attachments" : [GTLPlusActivityObjectAttachmentsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityProvider
//

@implementation GTLPlusActivityProvider
@dynamic title;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusActivityActorClientSpecificActorInfo
//

@implementation GTLPlusActivityActorClientSpecificActorInfo
@dynamic youtubeActorInfo;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityActorImage
//

@implementation GTLPlusActivityActorImage
@dynamic url;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityActorName
//

@implementation GTLPlusActivityActorName
@dynamic familyName, givenName;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusActivityActorVerification
//

@implementation GTLPlusActivityActorVerification
@dynamic adHocVerified;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectActor
//

@implementation GTLPlusActivityObjectActor
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
//   GTLPlusActivityObjectAttachmentsItem
//

@implementation GTLPlusActivityObjectAttachmentsItem
@dynamic content, displayName, embed, fullImage, identifier, image, objectType,
         thumbnails, url;

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

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLPlusActivityObjectAttachmentsItemThumbnailsItem class]
                                forKey:@"thumbnails"];
=======
  NSDictionary *map = @{
    @"thumbnails" : [GTLPlusActivityObjectAttachmentsItemThumbnailsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectPlusoners
//

@implementation GTLPlusActivityObjectPlusoners
@dynamic selfLink, totalItems;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectReplies
//

@implementation GTLPlusActivityObjectReplies
@dynamic selfLink, totalItems;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectResharers
//

@implementation GTLPlusActivityObjectResharers
@dynamic selfLink, totalItems;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusActivityActorClientSpecificActorInfoYoutubeActorInfo
//

@implementation GTLPlusActivityActorClientSpecificActorInfoYoutubeActorInfo
@dynamic channelId;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectActorClientSpecificActorInfo
//

@implementation GTLPlusActivityObjectActorClientSpecificActorInfo
@dynamic youtubeActorInfo;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectActorImage
//

@implementation GTLPlusActivityObjectActorImage
@dynamic url;
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusActivityObjectActorVerification
//

@implementation GTLPlusActivityObjectActorVerification
@dynamic adHocVerified;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectAttachmentsItemEmbed
//

@implementation GTLPlusActivityObjectAttachmentsItemEmbed
@dynamic type, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemFullImage
//

@implementation GTLPlusActivityObjectAttachmentsItemFullImage
@dynamic height, type, url, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemImage
//

@implementation GTLPlusActivityObjectAttachmentsItemImage
@dynamic height, type, url, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemThumbnailsItem
//

@implementation GTLPlusActivityObjectAttachmentsItemThumbnailsItem
@dynamic descriptionProperty, image, url;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"description"
                                forKey:@"descriptionProperty"];
=======
  NSDictionary *map = @{
    @"descriptionProperty" : @"description"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLPlusActivityObjectActorClientSpecificActorInfoYoutubeActorInfo
//

@implementation GTLPlusActivityObjectActorClientSpecificActorInfoYoutubeActorInfo
@dynamic channelId;
@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLPlusActivityObjectAttachmentsItemThumbnailsItemImage
//

@implementation GTLPlusActivityObjectAttachmentsItemThumbnailsItemImage
@dynamic height, type, url, width;
@end
