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
//  GTLBloggerPostUserInfo.m
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
//   GTLBloggerPostUserInfo (0 custom class methods, 3 custom properties)

#import "GTLBloggerPostUserInfo.h"

#import "GTLBloggerPost.h"
#import "GTLBloggerPostPerUserInfo.h"

// ----------------------------------------------------------------------------
//
//   GTLBloggerPostUserInfo
//

@implementation GTLBloggerPostUserInfo
@dynamic kind, post, postUserInfo;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"post_user_info"
                                forKey:@"postUserInfo"];
=======
  NSDictionary *map = @{
    @"postUserInfo" : @"post_user_info"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"blogger#postUserInfo"];
}

@end
