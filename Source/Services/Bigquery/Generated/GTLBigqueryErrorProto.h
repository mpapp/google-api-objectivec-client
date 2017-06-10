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
//  GTLBigqueryErrorProto.h
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
//   GTLBigqueryErrorProto (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLBigqueryErrorProto
//

@interface GTLBigqueryErrorProto : GTLObject

// Debugging information. This property is internal to Google and should not be
// used.
<<<<<<< HEAD
@property (copy) NSString *debugInfo;

// Specifies where the error occurred, if present.
@property (copy) NSString *location;

// A human-readable description of the error.
@property (copy) NSString *message;

// A short error code that summarizes the error.
@property (copy) NSString *reason;
=======
@property (nonatomic, copy) NSString *debugInfo;

// Specifies where the error occurred, if present.
@property (nonatomic, copy) NSString *location;

// A human-readable description of the error.
@property (nonatomic, copy) NSString *message;

// A short error code that summarizes the error.
@property (nonatomic, copy) NSString *reason;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
