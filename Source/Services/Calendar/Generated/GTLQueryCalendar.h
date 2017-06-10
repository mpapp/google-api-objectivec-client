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
//  GTLQueryCalendar.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Description:
<<<<<<< HEAD
//   Lets you manipulate events and other calendar data.
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp
// Classes:
//   GTLQueryCalendar (37 custom class methods, 32 custom properties)
=======
//   Manipulates events and other calendar data.
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp
// Classes:
//   GTLQueryCalendar (37 custom class methods, 33 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLCalendarAclRule;
@class GTLCalendarCalendar;
@class GTLCalendarCalendarListEntry;
@class GTLCalendarChannel;
@class GTLCalendarEvent;
@class GTLCalendarFreeBusyRequestItem;

@interface GTLQueryCalendar : GTLQuery

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
@property (assign) BOOL alwaysIncludeEmail;
@property (assign) NSInteger calendarExpansionMax;
@property (copy) NSString *calendarId;
@property (assign) BOOL colorRgbFormat;
@property (copy) NSString *destination;
@property (copy) NSString *eventId;
@property (assign) NSInteger groupExpansionMax;
@property (copy) NSString *iCalUID;
@property (retain) NSArray *items;  // of GTLCalendarFreeBusyRequestItem
@property (assign) NSInteger maxAttendees;
@property (assign) NSInteger maxResults;
@property (copy) NSString *minAccessRole;
@property (copy) NSString *orderBy;
@property (copy) NSString *originalStart;
@property (copy) NSString *pageToken;
@property (retain) NSArray *privateExtendedProperty;  // of NSString
@property (copy) NSString *q;
@property (copy) NSString *ruleId;
@property (assign) BOOL sendNotifications;
@property (copy) NSString *setting;
@property (retain) NSArray *sharedExtendedProperty;  // of NSString
@property (assign) BOOL showDeleted;
@property (assign) BOOL showHidden;
@property (assign) BOOL showHiddenInvitations;
@property (assign) BOOL singleEvents;
@property (copy) NSString *syncToken;
@property (copy) NSString *text;
@property (retain) GTLDateTime *timeMax;
@property (retain) GTLDateTime *timeMin;
@property (copy) NSString *timeZone;
@property (retain) GTLDateTime *updatedMin;

#pragma mark -
#pragma mark "acl" methods
=======
@property (nonatomic, assign) BOOL alwaysIncludeEmail;
@property (nonatomic, assign) NSInteger calendarExpansionMax;
@property (nonatomic, copy) NSString *calendarId;
@property (nonatomic, assign) BOOL colorRgbFormat;
@property (nonatomic, copy) NSString *destination;
@property (nonatomic, copy) NSString *eventId;
@property (nonatomic, assign) NSInteger groupExpansionMax;
@property (nonatomic, copy) NSString *iCalUID;
@property (nonatomic, retain) NSArray *items;  // of GTLCalendarFreeBusyRequestItem
@property (nonatomic, assign) NSInteger maxAttendees;
@property (nonatomic, assign) NSInteger maxResults;
@property (nonatomic, copy) NSString *minAccessRole;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, copy) NSString *originalStart;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, retain) NSArray *privateExtendedProperty;  // of NSString
@property (nonatomic, copy) NSString *q;
@property (nonatomic, copy) NSString *ruleId;
@property (nonatomic, assign) BOOL sendNotifications;
@property (nonatomic, copy) NSString *setting;
@property (nonatomic, retain) NSArray *sharedExtendedProperty;  // of NSString
@property (nonatomic, assign) BOOL showDeleted;
@property (nonatomic, assign) BOOL showHidden;
@property (nonatomic, assign) BOOL showHiddenInvitations;
@property (nonatomic, assign) BOOL singleEvents;
@property (nonatomic, assign) BOOL supportsAttachments;
@property (nonatomic, copy) NSString *syncToken;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) GTLDateTime *timeMax;
@property (nonatomic, retain) GTLDateTime *timeMin;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, retain) GTLDateTime *updatedMin;

#pragma mark - "acl" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.acl.delete
// Deletes an access control rule.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//   ruleId: ACL rule identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (id)queryForAclDeleteWithCalendarId:(NSString *)calendarId
                               ruleId:(NSString *)ruleId;
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//   ruleId: ACL rule identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (instancetype)queryForAclDeleteWithCalendarId:(NSString *)calendarId
                                         ruleId:(NSString *)ruleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.get
// Returns an access control rule.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   ruleId: ACL rule identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarAclRule.
<<<<<<< HEAD
+ (id)queryForAclGetWithCalendarId:(NSString *)calendarId
                            ruleId:(NSString *)ruleId;
=======
+ (instancetype)queryForAclGetWithCalendarId:(NSString *)calendarId
                                      ruleId:(NSString *)ruleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.insert
// Creates an access control rule.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarAclRule.
+ (id)queryForAclInsertWithObject:(GTLCalendarAclRule *)object
                       calendarId:(NSString *)calendarId;
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarAclRule.
+ (instancetype)queryForAclInsertWithObject:(GTLCalendarAclRule *)object
                                 calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.list
// Returns the rules in the access control list for the calendar.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   pageToken: Token specifying which result page to return. Optional.
//   showDeleted: Whether to include deleted ACLs in the result. Deleted ACLs
//     are represented by role equal to "none". Deleted ACLs will always be
//     included if syncToken is provided. Optional. The default is False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. All
//     entries deleted since the previous list request will always be in the
//     result set and it is not allowed to set showDeleted to False.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarAcl.
<<<<<<< HEAD
+ (id)queryForAclListWithCalendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForAclListWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.patch
// Updates an access control rule. This method supports patch semantics.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   ruleId: ACL rule identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarAclRule.
<<<<<<< HEAD
+ (id)queryForAclPatchWithObject:(GTLCalendarAclRule *)object
                      calendarId:(NSString *)calendarId
                          ruleId:(NSString *)ruleId;
=======
+ (instancetype)queryForAclPatchWithObject:(GTLCalendarAclRule *)object
                                calendarId:(NSString *)calendarId
                                    ruleId:(NSString *)ruleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.update
// Updates an access control rule.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   ruleId: ACL rule identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarAclRule.
<<<<<<< HEAD
+ (id)queryForAclUpdateWithObject:(GTLCalendarAclRule *)object
                       calendarId:(NSString *)calendarId
                           ruleId:(NSString *)ruleId;
=======
+ (instancetype)queryForAclUpdateWithObject:(GTLCalendarAclRule *)object
                                 calendarId:(NSString *)calendarId
                                     ruleId:(NSString *)ruleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.acl.watch
// Watch for changes to ACL resources.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   pageToken: Token specifying which result page to return. Optional.
//   showDeleted: Whether to include deleted ACLs in the result. Deleted ACLs
//     are represented by role equal to "none". Deleted ACLs will always be
//     included if syncToken is provided. Optional. The default is False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. All
//     entries deleted since the previous list request will always be in the
//     result set and it is not allowed to set showDeleted to False.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarChannel.
<<<<<<< HEAD
+ (id)queryForAclWatchWithObject:(GTLCalendarChannel *)object
                      calendarId:(NSString *)calendarId;

#pragma mark -
#pragma mark "calendarList" methods
=======
+ (instancetype)queryForAclWatchWithObject:(GTLCalendarChannel *)object
                                calendarId:(NSString *)calendarId;

#pragma mark - "calendarList" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.calendarList.delete
// Deletes an entry on the user's calendar list.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (id)queryForCalendarListDeleteWithCalendarId:(NSString *)calendarId;
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (instancetype)queryForCalendarListDeleteWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.get
// Returns an entry on the user's calendar list.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarCalendarListEntry.
<<<<<<< HEAD
+ (id)queryForCalendarListGetWithCalendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForCalendarListGetWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.insert
// Adds an entry to the user's calendar list.
//  Optional:
//   colorRgbFormat: Whether to use the foregroundColor and backgroundColor
//     fields to write the calendar colors (RGB). If this feature is used, the
//     index-based colorId field will be set to the best matching option
//     automatically. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendarListEntry.
<<<<<<< HEAD
+ (id)queryForCalendarListInsertWithObject:(GTLCalendarCalendarListEntry *)object;
=======
+ (instancetype)queryForCalendarListInsertWithObject:(GTLCalendarCalendarListEntry *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.list
// Returns entries on the user's calendar list.
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   minAccessRole: The minimum access role for the user in the returned
<<<<<<< HEAD
//     entires. Optional. The default is no restriction.
=======
//     entries. Optional. The default is no restriction.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//      kGTLCalendarMinAccessRoleFreeBusyReader: The user can read free/busy
//        information.
//      kGTLCalendarMinAccessRoleOwner: The user can read and modify events and
//        access control lists.
//      kGTLCalendarMinAccessRoleReader: The user can read events that are not
//        private.
//      kGTLCalendarMinAccessRoleWriter: The user can read and modify events.
//   pageToken: Token specifying which result page to return. Optional.
//   showDeleted: Whether to include deleted calendar list entries in the
//     result. Optional. The default is False.
//   showHidden: Whether to show hidden entries. Optional. The default is False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. If
//     only read-only fields such as calendar properties or ACLs have changed,
//     the entry won't be returned. All entries deleted and hidden since the
//     previous list request will always be in the result set and it is not
//     allowed to set showDeleted neither showHidden to False.
//     To ensure client state consistency minAccessRole query parameter cannot
//     be specified together with nextSyncToken.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarCalendarList.
<<<<<<< HEAD
+ (id)queryForCalendarListList;
=======
+ (instancetype)queryForCalendarListList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.patch
// Updates an entry on the user's calendar list. This method supports patch
// semantics.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   colorRgbFormat: Whether to use the foregroundColor and backgroundColor
//     fields to write the calendar colors (RGB). If this feature is used, the
//     index-based colorId field will be set to the best matching option
//     automatically. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendarListEntry.
<<<<<<< HEAD
+ (id)queryForCalendarListPatchWithObject:(GTLCalendarCalendarListEntry *)object
                               calendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForCalendarListPatchWithObject:(GTLCalendarCalendarListEntry *)object
                                         calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.update
// Updates an entry on the user's calendar list.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   colorRgbFormat: Whether to use the foregroundColor and backgroundColor
//     fields to write the calendar colors (RGB). If this feature is used, the
//     index-based colorId field will be set to the best matching option
//     automatically. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendarListEntry.
<<<<<<< HEAD
+ (id)queryForCalendarListUpdateWithObject:(GTLCalendarCalendarListEntry *)object
                                calendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForCalendarListUpdateWithObject:(GTLCalendarCalendarListEntry *)object
                                          calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendarList.watch
// Watch for changes to CalendarList resources.
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   minAccessRole: The minimum access role for the user in the returned
<<<<<<< HEAD
//     entires. Optional. The default is no restriction.
=======
//     entries. Optional. The default is no restriction.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//      kGTLCalendarMinAccessRoleFreeBusyReader: The user can read free/busy
//        information.
//      kGTLCalendarMinAccessRoleOwner: The user can read and modify events and
//        access control lists.
//      kGTLCalendarMinAccessRoleReader: The user can read events that are not
//        private.
//      kGTLCalendarMinAccessRoleWriter: The user can read and modify events.
//   pageToken: Token specifying which result page to return. Optional.
//   showDeleted: Whether to include deleted calendar list entries in the
//     result. Optional. The default is False.
//   showHidden: Whether to show hidden entries. Optional. The default is False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. If
//     only read-only fields such as calendar properties or ACLs have changed,
//     the entry won't be returned. All entries deleted and hidden since the
//     previous list request will always be in the result set and it is not
//     allowed to set showDeleted neither showHidden to False.
//     To ensure client state consistency minAccessRole query parameter cannot
//     be specified together with nextSyncToken.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarChannel.
<<<<<<< HEAD
+ (id)queryForCalendarListWatchWithObject:(GTLCalendarChannel *)object;

#pragma mark -
#pragma mark "calendars" methods
// These create a GTLQueryCalendar object.

// Method: calendar.calendars.clear
// Clears a primary calendar. This operation deletes all data associated with
// the primary calendar of an account and cannot be undone.
//  Required:
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (id)queryForCalendarsClearWithCalendarId:(NSString *)calendarId;

// Method: calendar.calendars.delete
// Deletes a secondary calendar.
//  Required:
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (id)queryForCalendarsDeleteWithCalendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForCalendarListWatchWithObject:(GTLCalendarChannel *)object;

#pragma mark - "calendars" methods
// These create a GTLQueryCalendar object.

// Method: calendar.calendars.clear
// Clears a primary calendar. This operation deletes all events associated with
// the primary calendar of an account.
//  Required:
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (instancetype)queryForCalendarsClearWithCalendarId:(NSString *)calendarId;

// Method: calendar.calendars.delete
// Deletes a secondary calendar. Use calendars.clear for clearing all events on
// primary calendars.
//  Required:
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
+ (instancetype)queryForCalendarsDeleteWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendars.get
// Returns metadata for a calendar.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarCalendar.
<<<<<<< HEAD
+ (id)queryForCalendarsGetWithCalendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForCalendarsGetWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendars.insert
// Creates a secondary calendar.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendar.
<<<<<<< HEAD
+ (id)queryForCalendarsInsertWithObject:(GTLCalendarCalendar *)object;
=======
+ (instancetype)queryForCalendarsInsertWithObject:(GTLCalendarCalendar *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendars.patch
// Updates metadata for a calendar. This method supports patch semantics.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendar.
+ (id)queryForCalendarsPatchWithObject:(GTLCalendarCalendar *)object
                            calendarId:(NSString *)calendarId;
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendar.
+ (instancetype)queryForCalendarsPatchWithObject:(GTLCalendarCalendar *)object
                                      calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.calendars.update
// Updates metadata for a calendar.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendar.
+ (id)queryForCalendarsUpdateWithObject:(GTLCalendarCalendar *)object
                             calendarId:(NSString *)calendarId;

#pragma mark -
#pragma mark "channels" methods
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarCalendar.
+ (instancetype)queryForCalendarsUpdateWithObject:(GTLCalendarCalendar *)object
                                       calendarId:(NSString *)calendarId;

#pragma mark - "channels" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.channels.stop
// Stop watching resources through this channel
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
<<<<<<< HEAD
+ (id)queryForChannelsStopWithObject:(GTLCalendarChannel *)object;

#pragma mark -
#pragma mark "colors" methods
=======
+ (instancetype)queryForChannelsStopWithObject:(GTLCalendarChannel *)object;

#pragma mark - "colors" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.colors.get
// Returns the color definitions for calendars and events.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarColors.
<<<<<<< HEAD
+ (id)queryForColorsGet;

#pragma mark -
#pragma mark "events" methods
=======
+ (instancetype)queryForColorsGet;

#pragma mark - "events" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.events.delete
// Deletes an event.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   eventId: Event identifier.
//  Optional:
//   sendNotifications: Whether to send notifications about the deletion of the
//     event. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
<<<<<<< HEAD
+ (id)queryForEventsDeleteWithCalendarId:(NSString *)calendarId
                                 eventId:(NSString *)eventId;
=======
+ (instancetype)queryForEventsDeleteWithCalendarId:(NSString *)calendarId
                                           eventId:(NSString *)eventId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.get
// Returns an event.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   eventId: Event identifier.
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarEvent.
<<<<<<< HEAD
+ (id)queryForEventsGetWithCalendarId:(NSString *)calendarId
                              eventId:(NSString *)eventId;
=======
+ (instancetype)queryForEventsGetWithCalendarId:(NSString *)calendarId
                                        eventId:(NSString *)eventId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.import
// Imports an event. This operation is used to add a private copy of an existing
// event to a calendar.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (id)queryForEventsImportWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId;
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
//  Optional:
//   supportsAttachments: Whether API client performing operation supports event
//     attachments. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (instancetype)queryForEventsImportWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.insert
// Creates an event.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   sendNotifications: Whether to send notifications about the creation of the
//     new event. Optional. The default is False.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (id)queryForEventsInsertWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId;
=======
//   supportsAttachments: Whether API client performing operation supports event
//     attachments. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (instancetype)queryForEventsInsertWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.instances
// Returns instances of the specified recurring event.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   eventId: Recurring event identifier.
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   maxResults: Maximum number of events returned on one result page. By
//     default the value is 250 events. The page size can never be larger than
//     2500 events. Optional.
//   originalStart: The original start time of the instance in the result.
//     Optional.
//   pageToken: Token specifying which result page to return. Optional.
//   showDeleted: Whether to include deleted events (with status equals
//     "cancelled") in the result. Cancelled instances of recurring events will
//     still be included if singleEvents is False. Optional. The default is
//     False.
//   timeMax: Upper bound (exclusive) for an event's start time to filter by.
<<<<<<< HEAD
//     Optional. The default is not to filter by start time.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time.
=======
//     Optional. The default is not to filter by start time. Must be an RFC3339
//     timestamp with mandatory time zone offset.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time. Must be an RFC3339
//     timestamp with mandatory time zone offset.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarEvents.
<<<<<<< HEAD
+ (id)queryForEventsInstancesWithCalendarId:(NSString *)calendarId
                                    eventId:(NSString *)eventId;
=======
+ (instancetype)queryForEventsInstancesWithCalendarId:(NSString *)calendarId
                                              eventId:(NSString *)eventId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.list
// Returns events on the specified calendar.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   iCalUID: Specifies event ID in the iCalendar format to be included in the
//     response. Optional.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   maxResults: Maximum number of events returned on one result page. By
//     default the value is 250 events. The page size can never be larger than
//     2500 events. Optional.
//   orderBy: The order of the events returned in the result. Optional. The
//     default is an unspecified, stable order.
//      kGTLCalendarOrderByStartTime: Order by the start date/time (ascending).
//        This is only available when querying single events (i.e. the parameter
//        singleEvents is True)
//      kGTLCalendarOrderByUpdated: Order by last modification time (ascending).
//   pageToken: Token specifying which result page to return. Optional.
//   privateExtendedProperty: Extended properties constraint specified as
//     propertyName=value. Matches only private properties. This parameter might
//     be repeated multiple times to return events that match all given
//     constraints.
//   q: Free text search terms to find events that match these terms in any
//     field, except for extended properties. Optional.
//   sharedExtendedProperty: Extended properties constraint specified as
//     propertyName=value. Matches only shared properties. This parameter might
//     be repeated multiple times to return events that match all given
//     constraints.
//   showDeleted: Whether to include deleted events (with status equals
//     "cancelled") in the result. Cancelled instances of recurring events (but
//     not the underlying recurring event) will still be included if showDeleted
//     and singleEvents are both False. If showDeleted and singleEvents are both
//     True, only single instances of deleted events (but not the underlying
//     recurring events) are returned. Optional. The default is False.
//   showHiddenInvitations: Whether to include hidden invitations in the result.
//     Optional. The default is False.
//   singleEvents: Whether to expand recurring events into instances and only
//     return single one-off events and instances of recurring events, but not
//     the underlying recurring events themselves. Optional. The default is
//     False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. All
//     events deleted since the previous list request will always be in the
//     result set and it is not allowed to set showDeleted to False.
//     There are several query parameters that cannot be specified together with
//     nextSyncToken to ensure consistency of the client state.
//     These are:
//     - iCalUID
//     - orderBy
//     - privateExtendedProperty
//     - q
//     - sharedExtendedProperty
//     - timeMin
//     - timeMax
//     - updatedMin If the syncToken expires, the server will respond with a 410
//     GONE response code and the client should clear its storage and perform a
//     full synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//   timeMax: Upper bound (exclusive) for an event's start time to filter by.
<<<<<<< HEAD
//     Optional. The default is not to filter by start time.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time.
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//   updatedMin: Lower bound for an event's last modification time (as a RFC
//     3339 timestamp) to filter by. When specified, entries deleted since this
//     time will always be included regardless of showDeleted. Optional. The
//     default is not to filter by last modification time.
=======
//     Optional. The default is not to filter by start time. Must be an RFC3339
//     timestamp with mandatory time zone offset, e.g.,
//     2011-06-03T10:00:00-07:00, 2011-06-03T10:00:00Z. Milliseconds may be
//     provided but will be ignored.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time. Must be an RFC3339
//     timestamp with mandatory time zone offset, e.g.,
//     2011-06-03T10:00:00-07:00, 2011-06-03T10:00:00Z. Milliseconds may be
//     provided but will be ignored.
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//   updatedMin: Lower bound for an event's last modification time (as a RFC3339
//     timestamp) to filter by. When specified, entries deleted since this time
//     will always be included regardless of showDeleted. Optional. The default
//     is not to filter by last modification time.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarEvents.
<<<<<<< HEAD
+ (id)queryForEventsListWithCalendarId:(NSString *)calendarId;
=======
+ (instancetype)queryForEventsListWithCalendarId:(NSString *)calendarId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.move
// Moves an event to another calendar, i.e. changes an event's organizer.
//  Required:
//   calendarId: Calendar identifier of the source calendar where the event
//     currently is on.
//   eventId: Event identifier.
//   destination: Calendar identifier of the target calendar where the event is
//     to be moved to.
//  Optional:
//   sendNotifications: Whether to send notifications about the change of the
//     event's organizer. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
<<<<<<< HEAD
+ (id)queryForEventsMoveWithCalendarId:(NSString *)calendarId
                               eventId:(NSString *)eventId
                           destination:(NSString *)destination;
=======
+ (instancetype)queryForEventsMoveWithCalendarId:(NSString *)calendarId
                                         eventId:(NSString *)eventId
                                     destination:(NSString *)destination;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.patch
// Updates an event. This method supports patch semantics.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   eventId: Event identifier.
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   sendNotifications: Whether to send notifications about the event update
//     (e.g. attendee's responses, title changes, etc.). Optional. The default
//     is False.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (id)queryForEventsPatchWithObject:(GTLCalendarEvent *)object
                         calendarId:(NSString *)calendarId
                            eventId:(NSString *)eventId;
=======
//   supportsAttachments: Whether API client performing operation supports event
//     attachments. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (instancetype)queryForEventsPatchWithObject:(GTLCalendarEvent *)object
                                   calendarId:(NSString *)calendarId
                                      eventId:(NSString *)eventId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.quickAdd
// Creates an event based on a simple text string.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   text: The text describing the event to be created.
//  Optional:
//   sendNotifications: Whether to send notifications about the creation of the
//     event. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
<<<<<<< HEAD
+ (id)queryForEventsQuickAddWithCalendarId:(NSString *)calendarId
                                      text:(NSString *)text;
=======
+ (instancetype)queryForEventsQuickAddWithCalendarId:(NSString *)calendarId
                                                text:(NSString *)text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.update
// Updates an event.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   eventId: Event identifier.
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   sendNotifications: Whether to send notifications about the event update
//     (e.g. attendee's responses, title changes, etc.). Optional. The default
//     is False.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (id)queryForEventsUpdateWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId
                             eventId:(NSString *)eventId;
=======
//   supportsAttachments: Whether API client performing operation supports event
//     attachments. Optional. The default is False.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
// Fetches a GTLCalendarEvent.
+ (instancetype)queryForEventsUpdateWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId
                                       eventId:(NSString *)eventId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.events.watch
// Watch for changes to Events resources.
//  Required:
<<<<<<< HEAD
//   calendarId: Calendar identifier.
=======
//   calendarId: Calendar identifier. To retrieve calendar IDs call the
//     calendarList.list method. If you want to access the primary calendar of
//     the currently logged in user, use the "primary" keyword.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   alwaysIncludeEmail: Whether to always include a value in the email field
//     for the organizer, creator and attendees, even if no real email is
//     available (i.e. a generated, non-working value will be provided). The use
//     of this option is discouraged and should only be used by clients which
//     cannot handle the absence of an email address value in the mentioned
//     places. Optional. The default is False.
//   iCalUID: Specifies event ID in the iCalendar format to be included in the
//     response. Optional.
//   maxAttendees: The maximum number of attendees to include in the response.
//     If there are more than the specified number of attendees, only the
//     participant is returned. Optional.
//   maxResults: Maximum number of events returned on one result page. By
//     default the value is 250 events. The page size can never be larger than
//     2500 events. Optional.
//   orderBy: The order of the events returned in the result. Optional. The
//     default is an unspecified, stable order.
//      kGTLCalendarOrderByStartTime: Order by the start date/time (ascending).
//        This is only available when querying single events (i.e. the parameter
//        singleEvents is True)
//      kGTLCalendarOrderByUpdated: Order by last modification time (ascending).
//   pageToken: Token specifying which result page to return. Optional.
//   privateExtendedProperty: Extended properties constraint specified as
//     propertyName=value. Matches only private properties. This parameter might
//     be repeated multiple times to return events that match all given
//     constraints.
//   q: Free text search terms to find events that match these terms in any
//     field, except for extended properties. Optional.
//   sharedExtendedProperty: Extended properties constraint specified as
//     propertyName=value. Matches only shared properties. This parameter might
//     be repeated multiple times to return events that match all given
//     constraints.
//   showDeleted: Whether to include deleted events (with status equals
//     "cancelled") in the result. Cancelled instances of recurring events (but
//     not the underlying recurring event) will still be included if showDeleted
//     and singleEvents are both False. If showDeleted and singleEvents are both
//     True, only single instances of deleted events (but not the underlying
//     recurring events) are returned. Optional. The default is False.
//   showHiddenInvitations: Whether to include hidden invitations in the result.
//     Optional. The default is False.
//   singleEvents: Whether to expand recurring events into instances and only
//     return single one-off events and instances of recurring events, but not
//     the underlying recurring events themselves. Optional. The default is
//     False.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then. All
//     events deleted since the previous list request will always be in the
//     result set and it is not allowed to set showDeleted to False.
//     There are several query parameters that cannot be specified together with
//     nextSyncToken to ensure consistency of the client state.
//     These are:
//     - iCalUID
//     - orderBy
//     - privateExtendedProperty
//     - q
//     - sharedExtendedProperty
//     - timeMin
//     - timeMax
//     - updatedMin If the syncToken expires, the server will respond with a 410
//     GONE response code and the client should clear its storage and perform a
//     full synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//   timeMax: Upper bound (exclusive) for an event's start time to filter by.
<<<<<<< HEAD
//     Optional. The default is not to filter by start time.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time.
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//   updatedMin: Lower bound for an event's last modification time (as a RFC
//     3339 timestamp) to filter by. When specified, entries deleted since this
//     time will always be included regardless of showDeleted. Optional. The
//     default is not to filter by last modification time.
=======
//     Optional. The default is not to filter by start time. Must be an RFC3339
//     timestamp with mandatory time zone offset, e.g.,
//     2011-06-03T10:00:00-07:00, 2011-06-03T10:00:00Z. Milliseconds may be
//     provided but will be ignored.
//   timeMin: Lower bound (inclusive) for an event's end time to filter by.
//     Optional. The default is not to filter by end time. Must be an RFC3339
//     timestamp with mandatory time zone offset, e.g.,
//     2011-06-03T10:00:00-07:00, 2011-06-03T10:00:00Z. Milliseconds may be
//     provided but will be ignored.
//   timeZone: Time zone used in the response. Optional. The default is the time
//     zone of the calendar.
//   updatedMin: Lower bound for an event's last modification time (as a RFC3339
//     timestamp) to filter by. When specified, entries deleted since this time
//     will always be included regardless of showDeleted. Optional. The default
//     is not to filter by last modification time.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarChannel.
<<<<<<< HEAD
+ (id)queryForEventsWatchWithObject:(GTLCalendarChannel *)object
                         calendarId:(NSString *)calendarId;

#pragma mark -
#pragma mark "freebusy" methods
=======
+ (instancetype)queryForEventsWatchWithObject:(GTLCalendarChannel *)object
                                   calendarId:(NSString *)calendarId;

#pragma mark - "freebusy" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.freebusy.query
// Returns free/busy information for a set of calendars.
//  Optional:
//   calendarExpansionMax: Maximal number of calendars for which FreeBusy
//     information is to be provided. Optional.
//   groupExpansionMax: Maximal number of calendar identifiers to be provided
//     for a single group. Optional. An error will be returned for a group with
//     more members than this value.
//   items: List of calendars and/or groups to query.
//   timeMax: The end of the interval for the query.
//   timeMin: The start of the interval for the query.
//   timeZone: Time zone used in the response. Optional. The default is UTC.
//     (Default UTC)
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarFreeBusyResponse.
<<<<<<< HEAD
+ (id)queryForFreebusyQuery;

#pragma mark -
#pragma mark "settings" methods
=======
+ (instancetype)queryForFreebusyQuery;

#pragma mark - "settings" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryCalendar object.

// Method: calendar.settings.get
// Returns a single user setting.
//  Required:
//   setting: The id of the user setting.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarSetting.
<<<<<<< HEAD
+ (id)queryForSettingsGetWithSetting:(NSString *)setting;
=======
+ (instancetype)queryForSettingsGetWithSetting:(NSString *)setting;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.settings.list
// Returns all user settings for the authenticated user.
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   pageToken: Token specifying which result page to return. Optional.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarSettings.
<<<<<<< HEAD
+ (id)queryForSettingsList;
=======
+ (instancetype)queryForSettingsList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: calendar.settings.watch
// Watch for changes to Settings resources.
//  Optional:
//   maxResults: Maximum number of entries returned on one result page. By
//     default the value is 100 entries. The page size can never be larger than
//     250 entries. Optional.
//   pageToken: Token specifying which result page to return. Optional.
//   syncToken: Token obtained from the nextSyncToken field returned on the last
//     page of results from the previous list request. It makes the result of
//     this list request contain only entries that have changed since then.
//     If the syncToken expires, the server will respond with a 410 GONE
//     response code and the client should clear its storage and perform a full
//     synchronization without any syncToken.
//     Learn more about incremental synchronization.
//     Optional. The default is to return all entries.
//  Authorization scope(s):
//   kGTLAuthScopeCalendar
//   kGTLAuthScopeCalendarReadonly
// Fetches a GTLCalendarChannel.
<<<<<<< HEAD
+ (id)queryForSettingsWatchWithObject:(GTLCalendarChannel *)object;
=======
+ (instancetype)queryForSettingsWatchWithObject:(GTLCalendarChannel *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
