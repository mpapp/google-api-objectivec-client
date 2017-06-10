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
//  GTLAnalyticsEntityUserLink.h
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
//   GTLAnalyticsEntityUserLink (0 custom class methods, 6 custom properties)
//   GTLAnalyticsEntityUserLinkEntity (0 custom class methods, 3 custom properties)
//   GTLAnalyticsEntityUserLinkPermissions (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsAccountRef;
@class GTLAnalyticsEntityUserLinkEntity;
@class GTLAnalyticsEntityUserLinkPermissions;
@class GTLAnalyticsProfileRef;
@class GTLAnalyticsUserRef;
@class GTLAnalyticsWebPropertyRef;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityUserLink
//

// JSON template for an Analytics Entity-User Link. Returns permissions that a
// user has for an entity.

@interface GTLAnalyticsEntityUserLink : GTLObject

// Entity for this link. It can be an account, a web property, or a view
// (profile).
<<<<<<< HEAD
@property (retain) GTLAnalyticsEntityUserLinkEntity *entity;

// Entity user link ID
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Resource type for entity user link.
@property (copy) NSString *kind;

// Permissions the user has for this entity.
@property (retain) GTLAnalyticsEntityUserLinkPermissions *permissions;

// Self link for this resource.
@property (copy) NSString *selfLink;

// User reference.
@property (retain) GTLAnalyticsUserRef *userRef;
=======
@property (nonatomic, retain) GTLAnalyticsEntityUserLinkEntity *entity;

// Entity user link ID
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Resource type for entity user link.
@property (nonatomic, copy) NSString *kind;

// Permissions the user has for this entity.
@property (nonatomic, retain) GTLAnalyticsEntityUserLinkPermissions *permissions;

// Self link for this resource.
@property (nonatomic, copy) NSString *selfLink;

// User reference.
@property (nonatomic, retain) GTLAnalyticsUserRef *userRef;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityUserLinkEntity
//

@interface GTLAnalyticsEntityUserLinkEntity : GTLObject

// Account for this link.
<<<<<<< HEAD
@property (retain) GTLAnalyticsAccountRef *accountRef;

// View (Profile) for this link.
@property (retain) GTLAnalyticsProfileRef *profileRef;

// Web property for this link.
@property (retain) GTLAnalyticsWebPropertyRef *webPropertyRef;
=======
@property (nonatomic, retain) GTLAnalyticsAccountRef *accountRef;

// View (Profile) for this link.
@property (nonatomic, retain) GTLAnalyticsProfileRef *profileRef;

// Web property for this link.
@property (nonatomic, retain) GTLAnalyticsWebPropertyRef *webPropertyRef;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsEntityUserLinkPermissions
//

@interface GTLAnalyticsEntityUserLinkPermissions : GTLObject

// Effective permissions represent all the permissions that a user has for this
// entity. These include any implied permissions (e.g., EDIT implies VIEW) or
// inherited permissions from the parent entity. Effective permissions are
// read-only.
<<<<<<< HEAD
@property (retain) NSArray *effective;  // of NSString
=======
@property (nonatomic, retain) NSArray *effective;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Permissions that a user has been assigned at this very level. Does not
// include any implied or inherited permissions. Local permissions are
// modifiable.
<<<<<<< HEAD
@property (retain) NSArray *local;  // of NSString
=======
@property (nonatomic, retain) NSArray *local;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
