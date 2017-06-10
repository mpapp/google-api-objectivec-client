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
//  GTLAnalyticsFilter.m
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
//   GTLAnalyticsFilter (0 custom class methods, 15 custom properties)
<<<<<<< HEAD
//   GTLAnalyticsFilterAdvancedDetails (0 custom class methods, 10 custom properties)
//   GTLAnalyticsFilterLowercaseDetails (0 custom class methods, 1 custom properties)
//   GTLAnalyticsFilterParentLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterSearchAndReplaceDetails (0 custom class methods, 4 custom properties)
//   GTLAnalyticsFilterUppercaseDetails (0 custom class methods, 1 custom properties)
=======
//   GTLAnalyticsFilterAdvancedDetails (0 custom class methods, 13 custom properties)
//   GTLAnalyticsFilterLowercaseDetails (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterParentLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterSearchAndReplaceDetails (0 custom class methods, 5 custom properties)
//   GTLAnalyticsFilterUppercaseDetails (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLAnalyticsFilter.h"

#import "GTLAnalyticsFilterExpression.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilter
//

@implementation GTLAnalyticsFilter
@dynamic accountId, advancedDetails, created, excludeDetails, identifier,
         includeDetails, kind, lowercaseDetails, name, parentLink,
         searchAndReplaceDetails, selfLink, type, updated, uppercaseDetails;

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

+ (void)load {
  [self registerObjectClassForKind:@"analytics#filter"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterAdvancedDetails
//

@implementation GTLAnalyticsFilterAdvancedDetails
<<<<<<< HEAD
@dynamic caseSensitive, extractA, extractB, fieldA, fieldARequired, fieldB,
         fieldBRequired, outputConstructor, outputToField, overrideOutputField;
=======
@dynamic caseSensitive, extractA, extractB, fieldA, fieldAIndex, fieldARequired,
         fieldB, fieldBIndex, fieldBRequired, outputConstructor, outputToField,
         outputToFieldIndex, overrideOutputField;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterLowercaseDetails
//

@implementation GTLAnalyticsFilterLowercaseDetails
<<<<<<< HEAD
@dynamic field;
=======
@dynamic field, fieldIndex;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterParentLink
//

@implementation GTLAnalyticsFilterParentLink
@dynamic href, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterSearchAndReplaceDetails
//

@implementation GTLAnalyticsFilterSearchAndReplaceDetails
<<<<<<< HEAD
@dynamic caseSensitive, field, replaceString, searchString;
=======
@dynamic caseSensitive, field, fieldIndex, replaceString, searchString;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterUppercaseDetails
//

@implementation GTLAnalyticsFilterUppercaseDetails
<<<<<<< HEAD
@dynamic field;
=======
@dynamic field, fieldIndex;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
