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
//  GTLQueryCalendar.m
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

#import "GTLQueryCalendar.h"

#import "GTLCalendarAcl.h"
#import "GTLCalendarAclRule.h"
#import "GTLCalendarCalendar.h"
#import "GTLCalendarCalendarList.h"
#import "GTLCalendarCalendarListEntry.h"
#import "GTLCalendarChannel.h"
#import "GTLCalendarColors.h"
#import "GTLCalendarEvent.h"
#import "GTLCalendarEvents.h"
#import "GTLCalendarFreeBusyRequestItem.h"
#import "GTLCalendarFreeBusyResponse.h"
#import "GTLCalendarSetting.h"
#import "GTLCalendarSettings.h"

@implementation GTLQueryCalendar

@dynamic alwaysIncludeEmail, calendarExpansionMax, calendarId, colorRgbFormat,
         destination, eventId, fields, groupExpansionMax, iCalUID, items,
         maxAttendees, maxResults, minAccessRole, orderBy, originalStart,
         pageToken, privateExtendedProperty, q, ruleId, sendNotifications,
         setting, sharedExtendedProperty, showDeleted, showHidden,
<<<<<<< HEAD
         showHiddenInvitations, singleEvents, syncToken, text, timeMax, timeMin,
         timeZone, updatedMin;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLCalendarFreeBusyRequestItem class], @"items",
      [NSString class], @"privateExtendedProperty",
      [NSString class], @"sharedExtendedProperty",
      nil];
  return map;
}

#pragma mark -
#pragma mark "acl" methods
// These create a GTLQueryCalendar object.

+ (id)queryForAclDeleteWithCalendarId:(NSString *)calendarId
                               ruleId:(NSString *)ruleId {
=======
         showHiddenInvitations, singleEvents, supportsAttachments, syncToken,
         text, timeMax, timeMin, timeZone, updatedMin;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"items" : [GTLCalendarFreeBusyRequestItem class],
    @"privateExtendedProperty" : [NSString class],
    @"sharedExtendedProperty" : [NSString class]
  };
  return map;
}

#pragma mark - "acl" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForAclDeleteWithCalendarId:(NSString *)calendarId
                                         ruleId:(NSString *)ruleId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.acl.delete";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.ruleId = ruleId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclGetWithCalendarId:(NSString *)calendarId
                            ruleId:(NSString *)ruleId {
=======
+ (instancetype)queryForAclGetWithCalendarId:(NSString *)calendarId
                                      ruleId:(NSString *)ruleId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.acl.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.ruleId = ruleId;
  query.expectedObjectClass = [GTLCalendarAclRule class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclInsertWithObject:(GTLCalendarAclRule *)object
                       calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForAclInsertWithObject:(GTLCalendarAclRule *)object
                                 calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.acl.insert";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarAclRule class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclListWithCalendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForAclListWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.acl.list";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarAcl class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclPatchWithObject:(GTLCalendarAclRule *)object
                      calendarId:(NSString *)calendarId
                          ruleId:(NSString *)ruleId {
=======
+ (instancetype)queryForAclPatchWithObject:(GTLCalendarAclRule *)object
                                calendarId:(NSString *)calendarId
                                    ruleId:(NSString *)ruleId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.acl.patch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.ruleId = ruleId;
  query.expectedObjectClass = [GTLCalendarAclRule class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclUpdateWithObject:(GTLCalendarAclRule *)object
                       calendarId:(NSString *)calendarId
                           ruleId:(NSString *)ruleId {
=======
+ (instancetype)queryForAclUpdateWithObject:(GTLCalendarAclRule *)object
                                 calendarId:(NSString *)calendarId
                                     ruleId:(NSString *)ruleId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.acl.update";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.ruleId = ruleId;
  query.expectedObjectClass = [GTLCalendarAclRule class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForAclWatchWithObject:(GTLCalendarChannel *)object
                      calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForAclWatchWithObject:(GTLCalendarChannel *)object
                                calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.acl.watch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarChannel class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "calendarList" methods
// These create a GTLQueryCalendar object.

+ (id)queryForCalendarListDeleteWithCalendarId:(NSString *)calendarId {
=======
#pragma mark - "calendarList" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForCalendarListDeleteWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendarList.delete";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListGetWithCalendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarListGetWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendarList.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendarListEntry class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListInsertWithObject:(GTLCalendarCalendarListEntry *)object {
=======
+ (instancetype)queryForCalendarListInsertWithObject:(GTLCalendarCalendarListEntry *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendarList.insert";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLCalendarCalendarListEntry class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListList {
=======
+ (instancetype)queryForCalendarListList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendarList.list";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCalendarCalendarList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListPatchWithObject:(GTLCalendarCalendarListEntry *)object
                               calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarListPatchWithObject:(GTLCalendarCalendarListEntry *)object
                                         calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendarList.patch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendarListEntry class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListUpdateWithObject:(GTLCalendarCalendarListEntry *)object
                                calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarListUpdateWithObject:(GTLCalendarCalendarListEntry *)object
                                          calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendarList.update";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendarListEntry class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarListWatchWithObject:(GTLCalendarChannel *)object {
=======
+ (instancetype)queryForCalendarListWatchWithObject:(GTLCalendarChannel *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendarList.watch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLCalendarChannel class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "calendars" methods
// These create a GTLQueryCalendar object.

+ (id)queryForCalendarsClearWithCalendarId:(NSString *)calendarId {
=======
#pragma mark - "calendars" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForCalendarsClearWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendars.clear";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarsDeleteWithCalendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarsDeleteWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendars.delete";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarsGetWithCalendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarsGetWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.calendars.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendar class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarsInsertWithObject:(GTLCalendarCalendar *)object {
=======
+ (instancetype)queryForCalendarsInsertWithObject:(GTLCalendarCalendar *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendars.insert";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLCalendarCalendar class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarsPatchWithObject:(GTLCalendarCalendar *)object
                            calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarsPatchWithObject:(GTLCalendarCalendar *)object
                                      calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendars.patch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendar class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCalendarsUpdateWithObject:(GTLCalendarCalendar *)object
                             calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForCalendarsUpdateWithObject:(GTLCalendarCalendar *)object
                                       calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.calendars.update";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarCalendar class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "channels" methods
// These create a GTLQueryCalendar object.

+ (id)queryForChannelsStopWithObject:(GTLCalendarChannel *)object {
=======
#pragma mark - "channels" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForChannelsStopWithObject:(GTLCalendarChannel *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.channels.stop";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "colors" methods
// These create a GTLQueryCalendar object.

+ (id)queryForColorsGet {
=======
#pragma mark - "colors" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForColorsGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.colors.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCalendarColors class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "events" methods
// These create a GTLQueryCalendar object.

+ (id)queryForEventsDeleteWithCalendarId:(NSString *)calendarId
                                 eventId:(NSString *)eventId {
=======
#pragma mark - "events" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForEventsDeleteWithCalendarId:(NSString *)calendarId
                                           eventId:(NSString *)eventId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.delete";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.eventId = eventId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsGetWithCalendarId:(NSString *)calendarId
                              eventId:(NSString *)eventId {
=======
+ (instancetype)queryForEventsGetWithCalendarId:(NSString *)calendarId
                                        eventId:(NSString *)eventId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.eventId = eventId;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsImportWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForEventsImportWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.events.import";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsInsertWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForEventsInsertWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.events.insert";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsInstancesWithCalendarId:(NSString *)calendarId
                                    eventId:(NSString *)eventId {
=======
+ (instancetype)queryForEventsInstancesWithCalendarId:(NSString *)calendarId
                                              eventId:(NSString *)eventId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.instances";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.eventId = eventId;
  query.expectedObjectClass = [GTLCalendarEvents class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsListWithCalendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForEventsListWithCalendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.list";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarEvents class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsMoveWithCalendarId:(NSString *)calendarId
                               eventId:(NSString *)eventId
                           destination:(NSString *)destination {
=======
+ (instancetype)queryForEventsMoveWithCalendarId:(NSString *)calendarId
                                         eventId:(NSString *)eventId
                                     destination:(NSString *)destination {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.move";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.eventId = eventId;
  query.destination = destination;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsPatchWithObject:(GTLCalendarEvent *)object
                         calendarId:(NSString *)calendarId
                            eventId:(NSString *)eventId {
=======
+ (instancetype)queryForEventsPatchWithObject:(GTLCalendarEvent *)object
                                   calendarId:(NSString *)calendarId
                                      eventId:(NSString *)eventId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.events.patch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.eventId = eventId;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsQuickAddWithCalendarId:(NSString *)calendarId
                                      text:(NSString *)text {
=======
+ (instancetype)queryForEventsQuickAddWithCalendarId:(NSString *)calendarId
                                                text:(NSString *)text {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.events.quickAdd";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.calendarId = calendarId;
  query.text = text;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsUpdateWithObject:(GTLCalendarEvent *)object
                          calendarId:(NSString *)calendarId
                             eventId:(NSString *)eventId {
=======
+ (instancetype)queryForEventsUpdateWithObject:(GTLCalendarEvent *)object
                                    calendarId:(NSString *)calendarId
                                       eventId:(NSString *)eventId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.events.update";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.eventId = eventId;
  query.expectedObjectClass = [GTLCalendarEvent class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForEventsWatchWithObject:(GTLCalendarChannel *)object
                         calendarId:(NSString *)calendarId {
=======
+ (instancetype)queryForEventsWatchWithObject:(GTLCalendarChannel *)object
                                   calendarId:(NSString *)calendarId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.events.watch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.calendarId = calendarId;
  query.expectedObjectClass = [GTLCalendarChannel class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "freebusy" methods
// These create a GTLQueryCalendar object.

+ (id)queryForFreebusyQuery {
=======
#pragma mark - "freebusy" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForFreebusyQuery {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.freebusy.query";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCalendarFreeBusyResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "settings" methods
// These create a GTLQueryCalendar object.

+ (id)queryForSettingsGetWithSetting:(NSString *)setting {
=======
#pragma mark - "settings" methods
// These create a GTLQueryCalendar object.

+ (instancetype)queryForSettingsGetWithSetting:(NSString *)setting {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.settings.get";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.setting = setting;
  query.expectedObjectClass = [GTLCalendarSetting class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForSettingsList {
=======
+ (instancetype)queryForSettingsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"calendar.settings.list";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCalendarSettings class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForSettingsWatchWithObject:(GTLCalendarChannel *)object {
=======
+ (instancetype)queryForSettingsWatchWithObject:(GTLCalendarChannel *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"calendar.settings.watch";
  GTLQueryCalendar *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLCalendarChannel class];
  return query;
}

@end
