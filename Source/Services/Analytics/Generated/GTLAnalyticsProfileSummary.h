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
//  GTLAnalyticsProfileSummary.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsProfileSummary (0 custom class methods, 4 custom properties)
=======
//   Views and manages your Google Analytics data.
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsProfileSummary (0 custom class methods, 5 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsProfileSummary
//

// JSON template for an Analytics ProfileSummary. ProfileSummary returns basic
// information (i.e., summary) for a profile.

@interface GTLAnalyticsProfileSummary : GTLObject

// View (profile) ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// Resource type for Analytics ProfileSummary.
@property (copy) NSString *kind;

// View (profile) name.
@property (copy) NSString *name;

// View (Profile) type. Supported types: WEB or APP.
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *identifier;

// Resource type for Analytics ProfileSummary.
@property (nonatomic, copy) NSString *kind;

// View (profile) name.
@property (nonatomic, copy) NSString *name;

// Indicates whether this view (profile) is starred or not.
@property (nonatomic, retain) NSNumber *starred;  // boolValue

// View (Profile) type. Supported types: WEB or APP.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
