<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2015 Google Inc.
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
//  GTLBloggerPost.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Blogger API (blogger/v3)
// Description:
//   API for access to the data within Blogger.
// Documentation:
//   https://developers.google.com/blogger/docs/3.0/getting_started
// Classes:
<<<<<<< HEAD
//   GTLBloggerPost (0 custom class methods, 18 custom properties)
=======
//   GTLBloggerPost (0 custom class methods, 19 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLBloggerPostAuthor (0 custom class methods, 4 custom properties)
//   GTLBloggerPostBlog (0 custom class methods, 1 custom properties)
//   GTLBloggerPostImagesItem (0 custom class methods, 1 custom properties)
//   GTLBloggerPostLocation (0 custom class methods, 4 custom properties)
//   GTLBloggerPostReplies (0 custom class methods, 3 custom properties)
//   GTLBloggerPostAuthorImage (0 custom class methods, 1 custom properties)

#import "GTLBloggerPost.h"

#import "GTLBloggerComment.h"

// ----------------------------------------------------------------------------
//
//   GTLBloggerPost
//

@implementation GTLBloggerPost
<<<<<<< HEAD
@dynamic author, blog, content, customMetaData, identifier, images, kind,
=======
@dynamic author, blog, content, customMetaData, ETag, identifier, images, kind,
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
         labels, location, published, readerComments, replies, selfLink, status,
         title, titleLink, updated, url;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
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
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLBloggerPostImagesItem class], @"images",
      [NSString class], @"labels",
      nil];
=======
  NSDictionary *map = @{
    @"images" : [GTLBloggerPostImagesItem class],
    @"labels" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"blogger#post"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPostAuthor
//

@implementation GTLBloggerPostAuthor
@dynamic displayName, identifier, image, url;

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
//   GTLBloggerPostBlog
//

@implementation GTLBloggerPostBlog
@dynamic identifier;

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
//   GTLBloggerPostImagesItem
//

@implementation GTLBloggerPostImagesItem
@dynamic url;
@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPostLocation
//

@implementation GTLBloggerPostLocation
@dynamic lat, lng, name, span;
@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPostReplies
//

@implementation GTLBloggerPostReplies
@dynamic items, selfLink, totalItems;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBloggerComment class]
                                forKey:@"items"];
=======
  NSDictionary *map = @{
    @"items" : [GTLBloggerComment class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPostAuthorImage
//

@implementation GTLBloggerPostAuthorImage
@dynamic url;
@end
