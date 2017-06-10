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
//  GTLBigqueryQueryResponse.h
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
//   GTLBigqueryQueryResponse (0 custom class methods, 9 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryQueryResponse (0 custom class methods, 10 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
=======
@class GTLBigqueryErrorProto;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLBigqueryJobReference;
@class GTLBigqueryTableRow;
@class GTLBigqueryTableSchema;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryQueryResponse
//

@interface GTLBigqueryQueryResponse : GTLObject

// Whether the query result was fetched from the query cache.
<<<<<<< HEAD
@property (retain) NSNumber *cacheHit;  // boolValue

// Whether the query has completed or not. If rows or totalRows are present,
// this will always be true. If this is false, totalRows will not be available.
@property (retain) NSNumber *jobComplete;  // boolValue
=======
@property (nonatomic, retain) NSNumber *cacheHit;  // boolValue

// [Output-only] All errors and warnings encountered during the running of the
// job. Errors here do not necessarily mean that the job has completed or was
// unsuccessful.
@property (nonatomic, retain) NSArray *errors;  // of GTLBigqueryErrorProto

// Whether the query has completed or not. If rows or totalRows are present,
// this will always be true. If this is false, totalRows will not be available.
@property (nonatomic, retain) NSNumber *jobComplete;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Reference to the Job that was created to run the query. This field will be
// present even if the original request timed out, in which case GetQueryResults
// can be used to read the results once the query has completed. Since this API
// only returns the first page of results, subsequent pages can be fetched via
// the same mechanism (GetQueryResults).
<<<<<<< HEAD
@property (retain) GTLBigqueryJobReference *jobReference;

// The resource type.
@property (copy) NSString *kind;

// A token used for paging results.
@property (copy) NSString *pageToken;
=======
@property (nonatomic, retain) GTLBigqueryJobReference *jobReference;

// The resource type.
@property (nonatomic, copy) NSString *kind;

// A token used for paging results.
@property (nonatomic, copy) NSString *pageToken;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An object with as many results as can be contained within the maximum
// permitted reply size. To get any additional rows, you can call
// GetQueryResults and specify the jobReference returned above.
<<<<<<< HEAD
@property (retain) NSArray *rows;  // of GTLBigqueryTableRow

// The schema of the results. Present only when the query completes
// successfully.
@property (retain) GTLBigqueryTableSchema *schema;
=======
@property (nonatomic, retain) NSArray *rows;  // of GTLBigqueryTableRow

// The schema of the results. Present only when the query completes
// successfully.
@property (nonatomic, retain) GTLBigqueryTableSchema *schema;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The total number of bytes processed for this query. If this query was a dry
// run, this is the number of bytes that would be processed if the query were
// run.
<<<<<<< HEAD
@property (retain) NSNumber *totalBytesProcessed;  // longLongValue

// The total number of rows in the complete query result set, which can be more
// than the number of rows in this single page of results.
@property (retain) NSNumber *totalRows;  // unsignedLongLongValue
=======
@property (nonatomic, retain) NSNumber *totalBytesProcessed;  // longLongValue

// The total number of rows in the complete query result set, which can be more
// than the number of rows in this single page of results.
@property (nonatomic, retain) NSNumber *totalRows;  // unsignedLongLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
