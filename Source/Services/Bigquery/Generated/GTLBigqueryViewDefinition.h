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
//  GTLBigqueryViewDefinition.h
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
//   GTLBigqueryViewDefinition (0 custom class methods, 1 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryViewDefinition (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
=======
@class GTLBigqueryUserDefinedFunctionResource;

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// ----------------------------------------------------------------------------
//
//   GTLBigqueryViewDefinition
//

@interface GTLBigqueryViewDefinition : GTLObject

// [Required] A query that BigQuery executes when the view is referenced.
<<<<<<< HEAD
@property (copy) NSString *query;
=======
@property (nonatomic, copy) NSString *query;

// [Experimental] Describes user-defined function resources used in the query.
@property (nonatomic, retain) NSArray *userDefinedFunctionResources;  // of GTLBigqueryUserDefinedFunctionResource
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
