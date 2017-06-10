<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLBigqueryGetQueryResultsResponse.m
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
//   GTLBigqueryGetQueryResultsResponse (0 custom class methods, 9 custom properties)

#import "GTLBigqueryGetQueryResultsResponse.h"

=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryGetQueryResultsResponse (0 custom class methods, 11 custom properties)

#import "GTLBigqueryGetQueryResultsResponse.h"

#import "GTLBigqueryErrorProto.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLBigqueryJobReference.h"
#import "GTLBigqueryTableRow.h"
#import "GTLBigqueryTableSchema.h"

// ----------------------------------------------------------------------------
//
//   GTLBigqueryGetQueryResultsResponse
//

@implementation GTLBigqueryGetQueryResultsResponse
<<<<<<< HEAD
@dynamic cacheHit, ETag, jobComplete, jobReference, kind, pageToken, rows,
         schema, totalRows;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"etag"
                                forKey:@"ETag"];
=======
@dynamic cacheHit, errors, ETag, jobComplete, jobReference, kind, pageToken,
         rows, schema, totalBytesProcessed, totalRows;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"ETag" : @"etag"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBigqueryTableRow class]
                                forKey:@"rows"];
=======
  NSDictionary *map = @{
    @"errors" : [GTLBigqueryErrorProto class],
    @"rows" : [GTLBigqueryTableRow class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"bigquery#getQueryResultsResponse"];
}

@end
