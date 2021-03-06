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
//  GTLPlusDomainsMedia.m
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
//   GTLPlusDomainsMedia (0 custom class methods, 18 custom properties)
//   GTLPlusDomainsMediaAuthor (0 custom class methods, 4 custom properties)
//   GTLPlusDomainsMediaExif (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsMediaAuthorImage (0 custom class methods, 1 custom properties)

#import "GTLPlusDomainsMedia.h"

#import "GTLPlusDomainsVideostream.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMedia
//

@implementation GTLPlusDomainsMedia
@dynamic author, displayName, ETag, exif, height, identifier, kind,
         mediaCreatedTime, mediaUrl, published, sizeBytes, streams, summary,
         updated, url, videoDuration, videoStatus, width;

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
    [NSDictionary dictionaryWithObject:[GTLPlusDomainsVideostream class]
                                forKey:@"streams"];
=======
  NSDictionary *map = @{
    @"streams" : [GTLPlusDomainsVideostream class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"plus#media"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMediaAuthor
//

@implementation GTLPlusDomainsMediaAuthor
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
//   GTLPlusDomainsMediaExif
//

@implementation GTLPlusDomainsMediaExif
@dynamic time;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsMediaAuthorImage
//

@implementation GTLPlusDomainsMediaAuthorImage
@dynamic url;
@end
