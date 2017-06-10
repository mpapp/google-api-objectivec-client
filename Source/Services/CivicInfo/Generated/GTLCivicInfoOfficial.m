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
//  GTLCivicInfoOfficial.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
<<<<<<< HEAD
//   Google Civic Information API (civicinfo/v1)
=======
//   Google Civic Information API (civicinfo/v2)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Description:
//   An API for accessing civic information.
// Documentation:
//   https://developers.google.com/civic-information
// Classes:
//   GTLCivicInfoOfficial (0 custom class methods, 8 custom properties)

#import "GTLCivicInfoOfficial.h"

#import "GTLCivicInfoChannel.h"
#import "GTLCivicInfoSimpleAddressType.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoOfficial
//

@implementation GTLCivicInfoOfficial
@dynamic address, channels, emails, name, party, phones, photoUrl, urls;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLCivicInfoSimpleAddressType class], @"address",
      [GTLCivicInfoChannel class], @"channels",
      [NSString class], @"emails",
      [NSString class], @"phones",
      [NSString class], @"urls",
      nil];
=======
  NSDictionary *map = @{
    @"address" : [GTLCivicInfoSimpleAddressType class],
    @"channels" : [GTLCivicInfoChannel class],
    @"emails" : [NSString class],
    @"phones" : [NSString class],
    @"urls" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
