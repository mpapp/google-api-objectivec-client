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
//  GTLAnalyticsMcfData.m
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
//   GTLAnalyticsMcfData (0 custom class methods, 15 custom properties)
//   GTLAnalyticsMcfDataColumnHeadersItem (0 custom class methods, 3 custom properties)
//   GTLAnalyticsMcfDataProfileInfo (0 custom class methods, 6 custom properties)
//   GTLAnalyticsMcfDataQuery (0 custom class methods, 11 custom properties)
//   GTLAnalyticsMcfDataRowsItem (0 custom class methods, 2 custom properties)
//   GTLAnalyticsMcfDataTotalsForAllResults (0 custom class methods, 0 custom properties)
//   GTLAnalyticsMcfDataRowsItemConversionPathValueItem (0 custom class methods, 2 custom properties)

#import "GTLAnalyticsMcfData.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfData
//

@implementation GTLAnalyticsMcfData
@dynamic columnHeaders, containsSampledData, identifier, itemsPerPage, kind,
         nextLink, previousLink, profileInfo, query, rows, sampleSize,
         sampleSpace, selfLink, totalResults, totalsForAllResults;

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
      [GTLAnalyticsMcfDataColumnHeadersItem class], @"columnHeaders",
      [GTLAnalyticsMcfDataRowsItem class], @"rows",
      nil];
=======
  NSDictionary *map = @{
    @"columnHeaders" : [GTLAnalyticsMcfDataColumnHeadersItem class],
    @"rows" : [GTLAnalyticsMcfDataRowsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"analytics#mcfData"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfDataColumnHeadersItem
//

@implementation GTLAnalyticsMcfDataColumnHeadersItem
@dynamic columnType, dataType, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfDataProfileInfo
//

@implementation GTLAnalyticsMcfDataProfileInfo
@dynamic accountId, internalWebPropertyId, profileId, profileName, tableId,
         webPropertyId;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfDataQuery
//

@implementation GTLAnalyticsMcfDataQuery
@dynamic dimensions, endDate, filters, ids, maxResults, metrics, samplingLevel,
         segment, sort, startDate, startIndex;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"end-date", @"endDate",
      @"max-results", @"maxResults",
      @"start-date", @"startDate",
      @"start-index", @"startIndex",
      nil];
=======
  NSDictionary *map = @{
    @"endDate" : @"end-date",
    @"maxResults" : @"max-results",
    @"startDate" : @"start-date",
    @"startIndex" : @"start-index"
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
//   GTLAnalyticsMcfDataRowsItem
//

@implementation GTLAnalyticsMcfDataRowsItem
@dynamic conversionPathValue, primitiveValue;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLAnalyticsMcfDataRowsItemConversionPathValueItem class]
                                forKey:@"conversionPathValue"];
=======
  NSDictionary *map = @{
    @"conversionPathValue" : [GTLAnalyticsMcfDataRowsItemConversionPathValueItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfDataTotalsForAllResults
//

@implementation GTLAnalyticsMcfDataTotalsForAllResults

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsMcfDataRowsItemConversionPathValueItem
//

@implementation GTLAnalyticsMcfDataRowsItemConversionPathValueItem
@dynamic interactionType, nodeValue;
@end
