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
//  GTLBigqueryJobStatistics3.h
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
//   GTLBigqueryJobStatistics3 (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobStatistics3
//

@interface GTLBigqueryJobStatistics3 : GTLObject

<<<<<<< HEAD
// [Output-only] Number of bytes of source data in a joad job.
@property (retain) NSNumber *inputFileBytes;  // longLongValue

// [Output-only] Number of source files in a load job.
@property (retain) NSNumber *inputFiles;  // longLongValue

// [Output-only] Size of the loaded data in bytes. Note that while an import job
// is in the running state, this value may change.
@property (retain) NSNumber *outputBytes;  // longLongValue

// [Output-only] Number of rows imported in a load job. Note that while an
// import job is in the running state, this value may change.
@property (retain) NSNumber *outputRows;  // longLongValue
=======
// [Output-only] Number of bytes of source data in a load job.
@property (nonatomic, retain) NSNumber *inputFileBytes;  // longLongValue

// [Output-only] Number of source files in a load job.
@property (nonatomic, retain) NSNumber *inputFiles;  // longLongValue

// [Output-only] Size of the loaded data in bytes. Note that while a load job is
// in the running state, this value may change.
@property (nonatomic, retain) NSNumber *outputBytes;  // longLongValue

// [Output-only] Number of rows imported in a load job. Note that while an
// import job is in the running state, this value may change.
@property (nonatomic, retain) NSNumber *outputRows;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
