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
//  GTLAnalyticsUpload.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
=======
//   Views and manages your Google Analytics data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsUpload (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsUpload
//

// Metadata returned for an upload operation.

@interface GTLAnalyticsUpload : GTLObject

// Account Id to which this upload belongs.
<<<<<<< HEAD
@property (retain) NSNumber *accountId;  // longLongValue

// Custom data source Id to which this data import belongs.
@property (copy) NSString *customDataSourceId;

// Data import errors collection.
@property (retain) NSArray *errors;  // of NSString

// A unique ID for this upload.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Resource type for Analytics upload.
@property (copy) NSString *kind;

// Upload status. Possible values: PENDING, COMPLETED, FAILED, DELETING,
// DELETED.
@property (copy) NSString *status;
=======
@property (nonatomic, retain) NSNumber *accountId;  // longLongValue

// Custom data source Id to which this data import belongs.
@property (nonatomic, copy) NSString *customDataSourceId;

// Data import errors collection.
@property (nonatomic, retain) NSArray *errors;  // of NSString

// A unique ID for this upload.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Resource type for Analytics upload.
@property (nonatomic, copy) NSString *kind;

// Upload status. Possible values: PENDING, COMPLETED, FAILED, DELETING,
// DELETED.
@property (nonatomic, copy) NSString *status;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
