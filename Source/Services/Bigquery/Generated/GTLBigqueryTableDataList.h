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
//  GTLBigqueryTableDataList.h
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
=======
//   https://cloud.google.com/bigquery/
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Classes:
//   GTLBigqueryTableDataList (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryTableRow;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryTableDataList
//

@interface GTLBigqueryTableDataList : GTLObject

// A hash of this page of results.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The resource type of the response.
@property (copy) NSString *kind;
=======
@property (nonatomic, copy) NSString *ETag;

// The resource type of the response.
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// A token used for paging results. Providing this token instead of the
// startIndex parameter can help you retrieve stable results when an underlying
// table is changing.
<<<<<<< HEAD
@property (copy) NSString *pageToken;

// Rows of results.
@property (retain) NSArray *rows;  // of GTLBigqueryTableRow

// The total number of rows in the complete table.
@property (retain) NSNumber *totalRows;  // longLongValue
=======
@property (nonatomic, copy) NSString *pageToken;

// Rows of results.
@property (nonatomic, retain) NSArray *rows;  // of GTLBigqueryTableRow

// The total number of rows in the complete table.
@property (nonatomic, retain) NSNumber *totalRows;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
