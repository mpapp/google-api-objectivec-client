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
//  GTLAnalyticsEntityAdWordsLink.h
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
//   GTLAnalyticsEntityAdWordsLink (0 custom class methods, 7 custom properties)
//   GTLAnalyticsEntityAdWordsLinkEntity (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsAdWordsAccount;
@class GTLAnalyticsEntityAdWordsLinkEntity;
@class GTLAnalyticsWebPropertyRef;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityAdWordsLink
//

// JSON template for Analytics Entity AdWords Link.

@interface GTLAnalyticsEntityAdWordsLink : GTLObject

// A list of AdWords client accounts. These cannot be MCC accounts. This field
// is required when creating an AdWords link. It cannot be empty.
<<<<<<< HEAD
@property (retain) NSArray *adWordsAccounts;  // of GTLAnalyticsAdWordsAccount

// Web property being linked.
@property (retain) GTLAnalyticsEntityAdWordsLinkEntity *entity;

// Entity AdWords link ID
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Resource type for entity AdWords link.
@property (copy) NSString *kind;

// Name of the link. This field is required when creating an AdWords link.
@property (copy) NSString *name;

// IDs of linked Views (Profiles) represented as strings.
@property (retain) NSArray *profileIds;  // of NSString

// URL link for this Google Analytics - Google AdWords link.
@property (copy) NSString *selfLink;
=======
@property (nonatomic, retain) NSArray *adWordsAccounts;  // of GTLAnalyticsAdWordsAccount

// Web property being linked.
@property (nonatomic, retain) GTLAnalyticsEntityAdWordsLinkEntity *entity;

// Entity AdWords link ID
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Resource type for entity AdWords link.
@property (nonatomic, copy) NSString *kind;

// Name of the link. This field is required when creating an AdWords link.
@property (nonatomic, copy) NSString *name;

// IDs of linked Views (Profiles) represented as strings.
@property (nonatomic, retain) NSArray *profileIds;  // of NSString

// URL link for this Google Analytics - Google AdWords link.
@property (nonatomic, copy) NSString *selfLink;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityAdWordsLinkEntity
//

@interface GTLAnalyticsEntityAdWordsLinkEntity : GTLObject
<<<<<<< HEAD
@property (retain) GTLAnalyticsWebPropertyRef *webPropertyRef;
=======
@property (nonatomic, retain) GTLAnalyticsWebPropertyRef *webPropertyRef;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
