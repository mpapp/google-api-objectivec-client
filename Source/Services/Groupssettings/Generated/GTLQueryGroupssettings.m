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
//  GTLQueryGroupssettings.m
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

#import "GTLQueryGroupssettings.h"

#import "GTLGroupssettingsGroups.h"

@implementation GTLQueryGroupssettings

@dynamic fields, groupUniqueId;

<<<<<<< HEAD
#pragma mark -
#pragma mark "groups" methods
// These create a GTLQueryGroupssettings object.

+ (id)queryForGroupsGetWithGroupUniqueId:(NSString *)groupUniqueId {
=======
#pragma mark - "groups" methods
// These create a GTLQueryGroupssettings object.

+ (instancetype)queryForGroupsGetWithGroupUniqueId:(NSString *)groupUniqueId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"groupsSettings.groups.get";
  GTLQueryGroupssettings *query = [self queryWithMethodName:methodName];
  query.groupUniqueId = groupUniqueId;
  query.expectedObjectClass = [GTLGroupssettingsGroups class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForGroupsPatchWithObject:(GTLGroupssettingsGroups *)object
                      groupUniqueId:(NSString *)groupUniqueId {
=======
+ (instancetype)queryForGroupsPatchWithObject:(GTLGroupssettingsGroups *)object
                                groupUniqueId:(NSString *)groupUniqueId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"groupsSettings.groups.patch";
  GTLQueryGroupssettings *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.groupUniqueId = groupUniqueId;
  query.expectedObjectClass = [GTLGroupssettingsGroups class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForGroupsUpdateWithObject:(GTLGroupssettingsGroups *)object
                       groupUniqueId:(NSString *)groupUniqueId {
=======
+ (instancetype)queryForGroupsUpdateWithObject:(GTLGroupssettingsGroups *)object
                                 groupUniqueId:(NSString *)groupUniqueId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"groupsSettings.groups.update";
  GTLQueryGroupssettings *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.groupUniqueId = groupUniqueId;
  query.expectedObjectClass = [GTLGroupssettingsGroups class];
  return query;
}

@end
