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
//  GTLBigqueryTable.m
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
//   GTLBigqueryTable (0 custom class methods, 15 custom properties)

#import "GTLBigqueryTable.h"

#import "GTLBigqueryTableReference.h"
#import "GTLBigqueryTableSchema.h"
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryTable (0 custom class methods, 20 custom properties)

#import "GTLBigqueryTable.h"

#import "GTLBigqueryExternalDataConfiguration.h"
#import "GTLBigqueryStreamingbuffer.h"
#import "GTLBigqueryTableReference.h"
#import "GTLBigqueryTableSchema.h"
#import "GTLBigqueryTimePartitioning.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLBigqueryViewDefinition.h"

// ----------------------------------------------------------------------------
//
//   GTLBigqueryTable
//

@implementation GTLBigqueryTable
<<<<<<< HEAD
@dynamic creationTime, descriptionProperty, ETag, expirationTime, friendlyName,
         identifier, kind, lastModifiedTime, numBytes, numRows, schema,
         selfLink, tableReference, type, view;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
@dynamic creationTime, descriptionProperty, ETag, expirationTime,
         externalDataConfiguration, friendlyName, identifier, kind,
         lastModifiedTime, location, numBytes, numLongTermBytes, numRows,
         schema, selfLink, streamingBuffer, tableReference, timePartitioning,
         type, view;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

// +load method not generated as another class also claims kind 'bigquery#table'.

@end
