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
//  GTLBigqueryJobConfigurationTableCopy.h
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
//   GTLBigqueryJobConfigurationTableCopy (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryTableReference;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobConfigurationTableCopy
//

@interface GTLBigqueryJobConfigurationTableCopy : GTLObject

// [Optional] Specifies whether the job is allowed to create new tables. The
// following values are supported: CREATE_IF_NEEDED: If the table does not
// exist, BigQuery creates the table. CREATE_NEVER: The table must already
// exist. If it does not, a 'notFound' error is returned in the job result. The
// default value is CREATE_IF_NEEDED. Creation, truncation and append actions
// occur as one atomic update upon job completion.
<<<<<<< HEAD
@property (copy) NSString *createDisposition;

// [Required] The destination table
@property (retain) GTLBigqueryTableReference *destinationTable;

// [Pick one] Source table to copy.
@property (retain) GTLBigqueryTableReference *sourceTable;

// [Pick one] Source tables to copy.
@property (retain) NSArray *sourceTables;  // of GTLBigqueryTableReference
=======
@property (nonatomic, copy) NSString *createDisposition;

// [Required] The destination table
@property (nonatomic, retain) GTLBigqueryTableReference *destinationTable;

// [Pick one] Source table to copy.
@property (nonatomic, retain) GTLBigqueryTableReference *sourceTable;

// [Pick one] Source tables to copy.
@property (nonatomic, retain) NSArray *sourceTables;  // of GTLBigqueryTableReference
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] Specifies the action that occurs if the destination table already
// exists. The following values are supported: WRITE_TRUNCATE: If the table
// already exists, BigQuery overwrites the table data. WRITE_APPEND: If the
// table already exists, BigQuery appends the data to the table. WRITE_EMPTY: If
// the table already exists and contains data, a 'duplicate' error is returned
// in the job result. The default value is WRITE_EMPTY. Each action is atomic
// and only occurs if BigQuery is able to complete the job successfully.
// Creation, truncation and append actions occur as one atomic update upon job
// completion.
<<<<<<< HEAD
@property (copy) NSString *writeDisposition;
=======
@property (nonatomic, copy) NSString *writeDisposition;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
