<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLAnalyticsAdWordsAccount.h
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
//   GTLAnalyticsAdWordsAccount (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsAdWordsAccount
//

// JSON template for an AdWords account.

@interface GTLAnalyticsAdWordsAccount : GTLObject

// True if auto-tagging is enabled on the AdWords account. Read-only after the
// insert operation.
<<<<<<< HEAD
@property (retain) NSNumber *autoTaggingEnabled;  // boolValue

// Customer ID. This field is required when creating an AdWords link.
@property (copy) NSString *customerId;

// Resource type for AdWords account.
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) NSNumber *autoTaggingEnabled;  // boolValue

// Customer ID. This field is required when creating an AdWords link.
@property (nonatomic, copy) NSString *customerId;

// Resource type for AdWords account.
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
