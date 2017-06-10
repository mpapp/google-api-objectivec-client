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
//  GTLBigqueryJobStatistics.h
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
//   GTLBigqueryJobStatistics (0 custom class methods, 6 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobStatistics (0 custom class methods, 7 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryJobStatistics2;
@class GTLBigqueryJobStatistics3;
<<<<<<< HEAD
=======
@class GTLBigqueryJobStatistics4;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobStatistics
//

@interface GTLBigqueryJobStatistics : GTLObject

// [Output-only] Creation time of this job, in milliseconds since the epoch.
// This field will be present on all jobs.
<<<<<<< HEAD
@property (retain) NSNumber *creationTime;  // longLongValue

// [Output-only] End time of this job, in milliseconds since the epoch. This
// field will be present whenever a job is in the DONE state.
@property (retain) NSNumber *endTime;  // longLongValue

// [Output-only] Statistics for a load job.
@property (retain) GTLBigqueryJobStatistics3 *load;

// [Output-only] Statistics for a query job.
@property (retain) GTLBigqueryJobStatistics2 *query;
=======
@property (nonatomic, retain) NSNumber *creationTime;  // longLongValue

// [Output-only] End time of this job, in milliseconds since the epoch. This
// field will be present whenever a job is in the DONE state.
@property (nonatomic, retain) NSNumber *endTime;  // longLongValue

// [Output-only] Statistics for an extract job.
@property (nonatomic, retain) GTLBigqueryJobStatistics4 *extract;

// [Output-only] Statistics for a load job.
@property (nonatomic, retain) GTLBigqueryJobStatistics3 *load;

// [Output-only] Statistics for a query job.
@property (nonatomic, retain) GTLBigqueryJobStatistics2 *query;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Output-only] Start time of this job, in milliseconds since the epoch. This
// field will be present when the job transitions from the PENDING state to
// either RUNNING or DONE.
<<<<<<< HEAD
@property (retain) NSNumber *startTime;  // longLongValue

// [Output-only] [Deprecated] Use the bytes processed in the query statistics
// instead.
@property (retain) NSNumber *totalBytesProcessed;  // longLongValue
=======
@property (nonatomic, retain) NSNumber *startTime;  // longLongValue

// [Output-only] [Deprecated] Use the bytes processed in the query statistics
// instead.
@property (nonatomic, retain) NSNumber *totalBytesProcessed;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
