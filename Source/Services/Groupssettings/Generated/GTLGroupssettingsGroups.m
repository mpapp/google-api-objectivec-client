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
//  GTLGroupssettingsGroups.m
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
<<<<<<< HEAD
//   GTLGroupssettingsGroups (0 custom class methods, 28 custom properties)
=======
//   GTLGroupssettingsGroups (0 custom class methods, 29 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLGroupssettingsGroups.h"

// ----------------------------------------------------------------------------
//
//   GTLGroupssettingsGroups
//

@implementation GTLGroupssettingsGroups
@dynamic allowExternalMembers, allowGoogleCommunication, allowWebPosting,
         archiveOnly, customReplyTo, defaultMessageDenyNotificationText,
         descriptionProperty, email, includeInGlobalAddressList, isArchived,
         kind, maxMessageBytes, membersCanPostAsTheGroup, messageDisplayFont,
         messageModerationLevel, name, primaryLanguage, replyTo,
         sendMessageDenyNotification, showInGroupDirectory, spamModerationLevel,
<<<<<<< HEAD
         whoCanContactOwner, whoCanInvite, whoCanJoin, whoCanLeaveGroup,
         whoCanPostMessage, whoCanViewGroup, whoCanViewMembership;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"description"
                                forKey:@"descriptionProperty"];
=======
         whoCanAdd, whoCanContactOwner, whoCanInvite, whoCanJoin,
         whoCanLeaveGroup, whoCanPostMessage, whoCanViewGroup,
         whoCanViewMembership;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"groupsSettings#groups"];
}

@end
