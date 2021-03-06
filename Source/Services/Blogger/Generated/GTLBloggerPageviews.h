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
//  GTLBloggerPageviews.h
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
//   GTLBloggerPageviews (0 custom class methods, 3 custom properties)
//   GTLBloggerPageviewsCountsItem (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerPageviewsCountsItem;

// ----------------------------------------------------------------------------
//
//   GTLBloggerPageviews
//

@interface GTLBloggerPageviews : GTLObject

// Blog Id
<<<<<<< HEAD
@property (retain) NSNumber *blogId;  // longLongValue

// The container of posts in this blog.
@property (retain) NSArray *counts;  // of GTLBloggerPageviewsCountsItem

// The kind of this entry. Always blogger#page_views
@property (copy) NSString *kind;
=======
@property (nonatomic, copy) NSString *blogId;

// The container of posts in this blog.
@property (nonatomic, retain) NSArray *counts;  // of GTLBloggerPageviewsCountsItem

// The kind of this entry. Always blogger#page_views
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageviewsCountsItem
//

@interface GTLBloggerPageviewsCountsItem : GTLObject

// Count of page views for the given time range
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// Time range the given count applies to
@property (copy) NSString *timeRange;
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// Time range the given count applies to
@property (nonatomic, copy) NSString *timeRange;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
