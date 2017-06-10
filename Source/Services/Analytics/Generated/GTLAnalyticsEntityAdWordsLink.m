<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLAnalyticsEntityAdWordsLink.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
=======
//   Views and manages your Google Analytics data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsEntityAdWordsLink (0 custom class methods, 7 custom properties)
//   GTLAnalyticsEntityAdWordsLinkEntity (0 custom class methods, 1 custom properties)

#import "GTLAnalyticsEntityAdWordsLink.h"

#import "GTLAnalyticsAdWordsAccount.h"
#import "GTLAnalyticsWebPropertyRef.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityAdWordsLink
//

@implementation GTLAnalyticsEntityAdWordsLink
@dynamic adWordsAccounts, entity, identifier, kind, name, profileIds, selfLink;

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

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLAnalyticsAdWordsAccount class], @"adWordsAccounts",
      [NSString class], @"profileIds",
      nil];
=======
  NSDictionary *map = @{
    @"adWordsAccounts" : [GTLAnalyticsAdWordsAccount class],
    @"profileIds" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"analytics#entityAdWordsLink"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityAdWordsLinkEntity
//

@implementation GTLAnalyticsEntityAdWordsLinkEntity
@dynamic webPropertyRef;
@end
