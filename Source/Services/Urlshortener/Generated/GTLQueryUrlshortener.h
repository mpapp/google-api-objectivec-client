<<<<<<< HEAD
/* Copyright (c) 2011 Google Inc.
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
//  GTLQueryUrlshortener.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   URL Shortener API (urlshortener/v1)
// Description:
//   Lets you create, inspect, and manage goo.gl short URLs
// Documentation:
<<<<<<< HEAD
//   http://code.google.com/apis/urlshortener/v1/getting_started.html
=======
//   https://developers.google.com/url-shortener/v1/getting_started
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Classes:
//   GTLQueryUrlshortener (3 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLUrlshortenerUrl;

@interface GTLQueryUrlshortener : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (copy) NSString *projection;
@property (copy) NSString *shortUrl;
@property (copy) NSString *startToken;

#pragma mark -
#pragma mark "url" methods
=======
@property (nonatomic, copy) NSString *projection;
@property (nonatomic, copy) NSString *shortUrl;
@property (nonatomic, copy) NSString *startToken;

#pragma mark - "url" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryUrlshortener object.

// Method: urlshortener.url.get
// Expands a short URL or gets creation time and analytics.
//  Required:
//   shortUrl: The short URL, including the protocol.
//  Optional:
//   projection: Additional information to return.
//      kGTLUrlshortenerProjectionAnalyticsClicks: Returns only click counts.
//      kGTLUrlshortenerProjectionAnalyticsTopStrings: Returns only top string
//        counts.
//      kGTLUrlshortenerProjectionFull: Returns the creation timestamp and all
//        available analytics.
<<<<<<< HEAD
// Fetches a GTLUrlshortenerUrl.
+ (id)queryForUrlGetWithShortUrl:(NSString *)shortUrl;
=======
//  Authorization scope(s):
//   kGTLAuthScopeUrlshortener
// Fetches a GTLUrlshortenerUrl.
+ (instancetype)queryForUrlGetWithShortUrl:(NSString *)shortUrl;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: urlshortener.url.insert
// Creates a new short URL.
//  Authorization scope(s):
//   kGTLAuthScopeUrlshortener
// Fetches a GTLUrlshortenerUrl.
<<<<<<< HEAD
+ (id)queryForUrlInsertWithObject:(GTLUrlshortenerUrl *)object;
=======
+ (instancetype)queryForUrlInsertWithObject:(GTLUrlshortenerUrl *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: urlshortener.url.list
// Retrieves a list of URLs shortened by a user.
//  Optional:
//   projection: Additional information to return.
//      kGTLUrlshortenerProjectionAnalyticsClicks: Returns short URL click
//        counts.
//      kGTLUrlshortenerProjectionFull: Returns short URL click counts.
//   startToken: Token for requesting successive pages of results.
//  Authorization scope(s):
//   kGTLAuthScopeUrlshortener
// Fetches a GTLUrlshortenerUrlHistory.
<<<<<<< HEAD
+ (id)queryForUrlList;
=======
+ (instancetype)queryForUrlList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
