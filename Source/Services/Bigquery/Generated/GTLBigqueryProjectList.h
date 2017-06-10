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
//  GTLBigqueryProjectList.h
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
//   GTLBigqueryProjectList (0 custom class methods, 5 custom properties)
//   GTLBigqueryProjectListProjectsItem (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryProjectListProjectsItem;
@class GTLBigqueryProjectReference;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryProjectList
//

@interface GTLBigqueryProjectList : GTLObject

// A hash of the page of results
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The type of list.
@property (copy) NSString *kind;

// A token to request the next page of results.
@property (copy) NSString *nextPageToken;

// Projects to which you have at least READ access.
@property (retain) NSArray *projects;  // of GTLBigqueryProjectListProjectsItem

// The total number of projects in the list.
@property (retain) NSNumber *totalItems;  // intValue
=======
@property (nonatomic, copy) NSString *ETag;

// The type of list.
@property (nonatomic, copy) NSString *kind;

// A token to request the next page of results.
@property (nonatomic, copy) NSString *nextPageToken;

// Projects to which you have at least READ access.
@property (nonatomic, retain) NSArray *projects;  // of GTLBigqueryProjectListProjectsItem

// The total number of projects in the list.
@property (nonatomic, retain) NSNumber *totalItems;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBigqueryProjectListProjectsItem
//

@interface GTLBigqueryProjectListProjectsItem : GTLObject

// A descriptive name for this project.
<<<<<<< HEAD
@property (copy) NSString *friendlyName;

// An opaque ID of this project.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The resource type.
@property (copy) NSString *kind;

// The numeric ID of this project.
@property (retain) NSNumber *numericId;  // unsignedLongLongValue

// A unique reference to this project.
@property (retain) GTLBigqueryProjectReference *projectReference;
=======
@property (nonatomic, copy) NSString *friendlyName;

// An opaque ID of this project.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The resource type.
@property (nonatomic, copy) NSString *kind;

// The numeric ID of this project.
@property (nonatomic, retain) NSNumber *numericId;  // unsignedLongLongValue

// A unique reference to this project.
@property (nonatomic, retain) GTLBigqueryProjectReference *projectReference;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
