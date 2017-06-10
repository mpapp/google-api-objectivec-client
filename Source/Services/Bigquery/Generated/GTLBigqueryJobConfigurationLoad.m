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
//  GTLBigqueryJobConfigurationLoad.m
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
//   GTLBigqueryJobConfigurationLoad (0 custom class methods, 16 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobConfigurationLoad (0 custom class methods, 18 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLBigqueryJobConfigurationLoad.h"

#import "GTLBigqueryTableReference.h"
#import "GTLBigqueryTableSchema.h"

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobConfigurationLoad
//

@implementation GTLBigqueryJobConfigurationLoad
<<<<<<< HEAD
@dynamic allowJaggedRows, allowQuotedNewlines, createDisposition,
         destinationTable, encoding, fieldDelimiter, ignoreUnknownValues,
         maxBadRecords, quote, schema, schemaInline, schemaInlineFormat,
         skipLeadingRows, sourceFormat, sourceUris, writeDisposition;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"sourceUris"];
=======
@dynamic allowJaggedRows, allowQuotedNewlines, autodetect, createDisposition,
         destinationTable, encoding, fieldDelimiter, ignoreUnknownValues,
         maxBadRecords, projectionFields, quote, schema, schemaInline,
         schemaInlineFormat, skipLeadingRows, sourceFormat, sourceUris,
         writeDisposition;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"projectionFields" : [NSString class],
    @"sourceUris" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
