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
//  GTLBigqueryTableReference.h
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
//   GTLBigqueryTableReference (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLBigqueryTableReference
//

@interface GTLBigqueryTableReference : GTLObject

<<<<<<< HEAD
// [Required] ID of the dataset containing the table.
@property (copy) NSString *datasetId;

// [Required] ID of the project billed for storage of the table.
@property (copy) NSString *projectId;

// [Required] ID of the table.
@property (copy) NSString *tableId;
=======
// [Required] The ID of the dataset containing this table.
@property (nonatomic, copy) NSString *datasetId;

// [Required] The ID of the project containing this table.
@property (nonatomic, copy) NSString *projectId;

// [Required] The ID of the table. The ID must contain only letters (a-z, A-Z),
// numbers (0-9), or underscores (_). The maximum length is 1,024 characters.
@property (nonatomic, copy) NSString *tableId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
