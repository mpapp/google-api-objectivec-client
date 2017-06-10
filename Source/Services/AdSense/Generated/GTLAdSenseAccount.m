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
//  GTLAdSenseAccount.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   AdSense Management API (adsense/v1.4)
// Description:
<<<<<<< HEAD
//   Gives AdSense publishers access to their inventory and the ability to
//   generate reports
// Documentation:
//   https://developers.google.com/adsense/management/
// Classes:
//   GTLAdSenseAccount (0 custom class methods, 6 custom properties)
=======
//   Accesses AdSense publishers' inventory and generates performance reports.
// Documentation:
//   https://developers.google.com/adsense/management/
// Classes:
//   GTLAdSenseAccount (0 custom class methods, 7 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLAdSenseAccount.h"

// ----------------------------------------------------------------------------
//
//   GTLAdSenseAccount
//

@implementation GTLAdSenseAccount
<<<<<<< HEAD
@dynamic identifier, kind, name, premium, subAccounts, timezone;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic creationTime, identifier, kind, name, premium, subAccounts, timezone;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"creationTime" : @"creation_time",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLAdSenseAccount class]
                                forKey:@"subAccounts"];
=======
  NSDictionary *map = @{
    @"subAccounts" : [GTLAdSenseAccount class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"adsense#account"];
}

@end
