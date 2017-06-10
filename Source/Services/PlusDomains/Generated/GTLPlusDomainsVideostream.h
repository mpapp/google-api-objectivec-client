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
//  GTLPlusDomainsVideostream.h
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
//   GTLPlusDomainsVideostream (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsVideostream
//

@interface GTLPlusDomainsVideostream : GTLObject

// The height, in pixels, of the video resource.
<<<<<<< HEAD
@property (retain) NSNumber *height;  // intValue

// MIME type of the video stream.
@property (copy) NSString *type;

// URL of the video stream.
@property (copy) NSString *url;

// The width, in pixels, of the video resource.
@property (retain) NSNumber *width;  // intValue
=======
@property (nonatomic, retain) NSNumber *height;  // intValue

// MIME type of the video stream.
@property (nonatomic, copy) NSString *type;

// URL of the video stream.
@property (nonatomic, copy) NSString *url;

// The width, in pixels, of the video resource.
@property (nonatomic, retain) NSNumber *width;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
