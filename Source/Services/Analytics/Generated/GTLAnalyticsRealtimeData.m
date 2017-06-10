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
//  GTLAnalyticsRealtimeData.m
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
//   GTLAnalyticsRealtimeData (0 custom class methods, 9 custom properties)
//   GTLAnalyticsRealtimeDataColumnHeadersItem (0 custom class methods, 3 custom properties)
//   GTLAnalyticsRealtimeDataProfileInfo (0 custom class methods, 6 custom properties)
//   GTLAnalyticsRealtimeDataQuery (0 custom class methods, 6 custom properties)
//   GTLAnalyticsRealtimeDataTotalsForAllResults (0 custom class methods, 0 custom properties)

#import "GTLAnalyticsRealtimeData.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeData
//

@implementation GTLAnalyticsRealtimeData
@dynamic columnHeaders, identifier, kind, profileInfo, query, rows, selfLink,
         totalResults, totalsForAllResults;

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
      [GTLAnalyticsRealtimeDataColumnHeadersItem class], @"columnHeaders",
      [NSString class], @"rows",
      nil];
=======
  NSDictionary *map = @{
    @"columnHeaders" : [GTLAnalyticsRealtimeDataColumnHeadersItem class],
    @"rows" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"analytics#realtimeData"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataColumnHeadersItem
//

@implementation GTLAnalyticsRealtimeDataColumnHeadersItem
@dynamic columnType, dataType, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataProfileInfo
//

@implementation GTLAnalyticsRealtimeDataProfileInfo
@dynamic accountId, internalWebPropertyId, profileId, profileName, tableId,
         webPropertyId;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataQuery
//

@implementation GTLAnalyticsRealtimeDataQuery
@dynamic dimensions, filters, ids, maxResults, metrics, sort;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"max-results"
                                forKey:@"maxResults"];
=======
  NSDictionary *map = @{
    @"maxResults" : @"max-results"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"metrics",
      [NSString class], @"sort",
      nil];
=======
  NSDictionary *map = @{
    @"metrics" : [NSString class],
    @"sort" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataTotalsForAllResults
//

@implementation GTLAnalyticsRealtimeDataTotalsForAllResults

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end
