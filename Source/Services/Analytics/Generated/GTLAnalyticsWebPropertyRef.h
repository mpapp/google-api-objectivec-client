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
//  GTLAnalyticsWebPropertyRef.h
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
//   GTLAnalyticsWebPropertyRef (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsWebPropertyRef
//

// JSON template for a web property reference.

@interface GTLAnalyticsWebPropertyRef : GTLObject

// Account ID to which this web property belongs.
<<<<<<< HEAD
@property (copy) NSString *accountId;

// Link for this web property.
@property (copy) NSString *href;

// Web property ID of the form UA-XXXXX-YY.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Internal ID for this web property.
@property (copy) NSString *internalWebPropertyId;

// Analytics web property reference.
@property (copy) NSString *kind;

// Name of this web property.
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *accountId;

// Link for this web property.
@property (nonatomic, copy) NSString *href;

// Web property ID of the form UA-XXXXX-YY.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Internal ID for this web property.
@property (nonatomic, copy) NSString *internalWebPropertyId;

// Analytics web property reference.
@property (nonatomic, copy) NSString *kind;

// Name of this web property.
@property (nonatomic, copy) NSString *name;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
