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
//  GTLBigqueryJobStatistics2.h
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
//   GTLBigqueryJobStatistics2 (0 custom class methods, 2 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobStatistics2 (0 custom class methods, 7 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
=======
@class GTLBigqueryExplainQueryStage;
@class GTLBigqueryTableReference;
@class GTLBigqueryTableSchema;

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobStatistics2
//

@interface GTLBigqueryJobStatistics2 : GTLObject

<<<<<<< HEAD
// [Output-only] Whether the query result was fetched from the query cache.
@property (retain) NSNumber *cacheHit;  // boolValue

// [Output-only] Total bytes processed for this job.
@property (retain) NSNumber *totalBytesProcessed;  // longLongValue
=======
// [Output-only] Billing tier for the job.
@property (nonatomic, retain) NSNumber *billingTier;  // intValue

// [Output-only] Whether the query result was fetched from the query cache.
@property (nonatomic, retain) NSNumber *cacheHit;  // boolValue

// [Output-only, Experimental] Describes execution plan for the query as a list
// of stages.
@property (nonatomic, retain) NSArray *queryPlan;  // of GTLBigqueryExplainQueryStage

// [Output-only, Experimental] Referenced tables for the job. Queries that
// reference more than 50 tables will not have a complete list.
@property (nonatomic, retain) NSArray *referencedTables;  // of GTLBigqueryTableReference

// [Output-only, Experimental] The schema of the results. Present only for
// successful dry run of non-legacy SQL queries.
@property (nonatomic, retain) GTLBigqueryTableSchema *schema;

// [Output-only] Total bytes billed for the job.
@property (nonatomic, retain) NSNumber *totalBytesBilled;  // longLongValue

// [Output-only] Total bytes processed for the job.
@property (nonatomic, retain) NSNumber *totalBytesProcessed;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
