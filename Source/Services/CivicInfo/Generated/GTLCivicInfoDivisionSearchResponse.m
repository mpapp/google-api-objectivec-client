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
//  GTLCivicInfoDivisionSearchResponse.m
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
<<<<<<< HEAD
//   GTLCivicInfoDivisionSearchResponse (0 custom class methods, 3 custom properties)
=======
//   GTLCivicInfoDivisionSearchResponse (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLCivicInfoDivisionSearchResponse.h"

#import "GTLCivicInfoDivisionSearchResult.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoDivisionSearchResponse
//

@implementation GTLCivicInfoDivisionSearchResponse
<<<<<<< HEAD
@dynamic kind, results, status;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLCivicInfoDivisionSearchResult class]
                                forKey:@"results"];
=======
@dynamic kind, results;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"results" : [GTLCivicInfoDivisionSearchResult class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"civicinfo#divisionSearchResponse"];
}

@end
