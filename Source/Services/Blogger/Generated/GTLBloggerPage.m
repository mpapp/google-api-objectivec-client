<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLBloggerPage.m
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
//   GTLBloggerPage (0 custom class methods, 11 custom properties)
=======
//   GTLBloggerPage (0 custom class methods, 12 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLBloggerPageAuthor (0 custom class methods, 4 custom properties)
//   GTLBloggerPageBlog (0 custom class methods, 1 custom properties)
//   GTLBloggerPageAuthorImage (0 custom class methods, 1 custom properties)

#import "GTLBloggerPage.h"

// ----------------------------------------------------------------------------
//
//   GTLBloggerPage
//

@implementation GTLBloggerPage
<<<<<<< HEAD
@dynamic author, blog, content, identifier, kind, published, selfLink, status,
         title, updated, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic author, blog, content, ETag, identifier, kind, published, selfLink,
         status, title, updated, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"blogger#page"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageAuthor
//

@implementation GTLBloggerPageAuthor
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
//   GTLBloggerPageBlog
//

@implementation GTLBloggerPageBlog
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
//   GTLBloggerPageAuthorImage
//

@implementation GTLBloggerPageAuthorImage
@dynamic url;
@end
