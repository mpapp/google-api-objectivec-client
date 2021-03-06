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
//  GTLQueryGroupssettings.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Groups Settings API (groupssettings/v1)
// Description:
//   Lets you manage permission levels and related settings of a group.
// Documentation:
//   https://developers.google.com/google-apps/groups-settings/get_started
// Classes:
//   GTLQueryGroupssettings (3 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLGroupssettingsGroups;

@interface GTLQueryGroupssettings : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (copy) NSString *groupUniqueId;

#pragma mark -
#pragma mark "groups" methods
=======
@property (nonatomic, copy) NSString *groupUniqueId;

#pragma mark - "groups" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryGroupssettings object.

// Method: groupsSettings.groups.get
// Gets one resource by id.
//  Required:
//   groupUniqueId: The resource ID
//  Authorization scope(s):
//   kGTLAuthScopeGroupssettingsAppsGroupsSettings
// Fetches a GTLGroupssettingsGroups.
<<<<<<< HEAD
+ (id)queryForGroupsGetWithGroupUniqueId:(NSString *)groupUniqueId;
=======
+ (instancetype)queryForGroupsGetWithGroupUniqueId:(NSString *)groupUniqueId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: groupsSettings.groups.patch
// Updates an existing resource. This method supports patch semantics.
//  Required:
//   groupUniqueId: The resource ID
//  Authorization scope(s):
//   kGTLAuthScopeGroupssettingsAppsGroupsSettings
// Fetches a GTLGroupssettingsGroups.
<<<<<<< HEAD
+ (id)queryForGroupsPatchWithObject:(GTLGroupssettingsGroups *)object
                      groupUniqueId:(NSString *)groupUniqueId;
=======
+ (instancetype)queryForGroupsPatchWithObject:(GTLGroupssettingsGroups *)object
                                groupUniqueId:(NSString *)groupUniqueId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: groupsSettings.groups.update
// Updates an existing resource.
//  Required:
//   groupUniqueId: The resource ID
//  Authorization scope(s):
//   kGTLAuthScopeGroupssettingsAppsGroupsSettings
// Fetches a GTLGroupssettingsGroups.
<<<<<<< HEAD
+ (id)queryForGroupsUpdateWithObject:(GTLGroupssettingsGroups *)object
                       groupUniqueId:(NSString *)groupUniqueId;
=======
+ (instancetype)queryForGroupsUpdateWithObject:(GTLGroupssettingsGroups *)object
                                 groupUniqueId:(NSString *)groupUniqueId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
