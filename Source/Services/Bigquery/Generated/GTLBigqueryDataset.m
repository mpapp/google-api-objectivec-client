<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLBigqueryDataset.m
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
//   GTLBigqueryDataset (0 custom class methods, 10 custom properties)
//   GTLBigqueryDatasetAccessItem (0 custom class methods, 5 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryDataset (0 custom class methods, 12 custom properties)
//   GTLBigqueryDatasetAccessItem (0 custom class methods, 6 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLBigqueryDataset.h"

#import "GTLBigqueryDatasetReference.h"
<<<<<<< HEAD
=======
#import "GTLBigqueryTableReference.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// ----------------------------------------------------------------------------
//
//   GTLBigqueryDataset
//

@implementation GTLBigqueryDataset
<<<<<<< HEAD
@dynamic access, creationTime, datasetReference, descriptionProperty, ETag,
         friendlyName, identifier, kind, lastModifiedTime, selfLink;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
@dynamic access, creationTime, datasetReference, defaultTableExpirationMs,
         descriptionProperty, ETag, friendlyName, identifier, kind,
         lastModifiedTime, location, selfLink;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBigqueryDatasetAccessItem class]
                                forKey:@"access"];
=======
  NSDictionary *map = @{
    @"access" : [GTLBigqueryDatasetAccessItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

// +load method not generated as another class also claims kind 'bigquery#dataset'.

@end


// ----------------------------------------------------------------------------
//
//   GTLBigqueryDatasetAccessItem
//

@implementation GTLBigqueryDatasetAccessItem
<<<<<<< HEAD
@dynamic domain, groupByEmail, role, specialGroup, userByEmail;
=======
@dynamic domain, groupByEmail, role, specialGroup, userByEmail, view;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
