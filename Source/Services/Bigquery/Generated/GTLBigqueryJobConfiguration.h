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
//  GTLBigqueryJobConfiguration.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryJobConfigurationExtract;
<<<<<<< HEAD
@class GTLBigqueryJobConfigurationLink;
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLBigqueryJobConfigurationLoad;
@class GTLBigqueryJobConfigurationQuery;
@class GTLBigqueryJobConfigurationTableCopy;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobConfiguration
//

@interface GTLBigqueryJobConfiguration : GTLObject

// [Pick one] Copies a table.
// Remapped to 'copyProperty' to avoid NSObject's 'copy'.
<<<<<<< HEAD
@property (retain) GTLBigqueryJobConfigurationTableCopy *copyProperty NS_RETURNS_NOT_RETAINED;
=======
@property (nonatomic, retain) GTLBigqueryJobConfigurationTableCopy *copyProperty NS_RETURNS_NOT_RETAINED;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] If set, don't actually run this job. A valid query will return a
// mostly empty response with some processing statistics, while an invalid query
// will return the same error it would if it wasn't a dry run. Behavior of
// non-query jobs is undefined.
<<<<<<< HEAD
@property (retain) NSNumber *dryRun;  // boolValue

// [Pick one] Configures an extract job.
@property (retain) GTLBigqueryJobConfigurationExtract *extract;

// [Pick one] Configures a link job.
@property (retain) GTLBigqueryJobConfigurationLink *link;

// [Pick one] Configures a load job.
@property (retain) GTLBigqueryJobConfigurationLoad *load;

// [Pick one] Configures a query job.
@property (retain) GTLBigqueryJobConfigurationQuery *query;
=======
@property (nonatomic, retain) NSNumber *dryRun;  // boolValue

// [Pick one] Configures an extract job.
@property (nonatomic, retain) GTLBigqueryJobConfigurationExtract *extract;

// [Pick one] Configures a load job.
@property (nonatomic, retain) GTLBigqueryJobConfigurationLoad *load;

// [Pick one] Configures a query job.
@property (nonatomic, retain) GTLBigqueryJobConfigurationQuery *query;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
