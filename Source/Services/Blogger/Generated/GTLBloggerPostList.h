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
//  GTLBloggerPostList.h
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
//   GTLBloggerPostList (0 custom class methods, 3 custom properties)
=======
//   GTLBloggerPostList (0 custom class methods, 4 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerPost;

// ----------------------------------------------------------------------------
//
//   GTLBloggerPostList
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLBloggerPostList : GTLCollectionObject

<<<<<<< HEAD
// The list of Posts for this Blog.
@property (retain) NSArray *items;  // of GTLBloggerPost

// The kind of this entity. Always blogger#postList
@property (copy) NSString *kind;

// Pagination token to fetch the next page, if one exists.
@property (copy) NSString *nextPageToken;
=======
// Etag of the response.
@property (nonatomic, copy) NSString *ETag;

// The list of Posts for this Blog.
@property (nonatomic, retain) NSArray *items;  // of GTLBloggerPost

// The kind of this entity. Always blogger#postList
@property (nonatomic, copy) NSString *kind;

// Pagination token to fetch the next page, if one exists.
@property (nonatomic, copy) NSString *nextPageToken;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
