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
//  GTLBigqueryJobConfiguration.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Documentation:
<<<<<<< HEAD
//   https://developers.google.com/bigquery/docs/overview
// Classes:
//   GTLBigqueryJobConfiguration (0 custom class methods, 6 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobConfiguration (0 custom class methods, 5 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLBigqueryJobConfiguration.h"

#import "GTLBigqueryJobConfigurationExtract.h"
<<<<<<< HEAD
#import "GTLBigqueryJobConfigurationLink.h"
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLBigqueryJobConfigurationLoad.h"
#import "GTLBigqueryJobConfigurationQuery.h"
#import "GTLBigqueryJobConfigurationTableCopy.h"

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobConfiguration
//

@implementation GTLBigqueryJobConfiguration
<<<<<<< HEAD
@dynamic copyProperty, dryRun, extract, link, load, query;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"copy"
                                forKey:@"copyProperty"];
=======
@dynamic copyProperty, dryRun, extract, load, query;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"copyProperty" : @"copy"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
