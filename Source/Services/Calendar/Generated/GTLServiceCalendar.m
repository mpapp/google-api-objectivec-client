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
//  GTLServiceCalendar.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Description:
<<<<<<< HEAD
//   Lets you manipulate events and other calendar data.
=======
//   Manipulates events and other calendar data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp
// Classes:
//   GTLServiceCalendar (0 custom class methods, 0 custom properties)

#import "GTLCalendar.h"

@implementation GTLServiceCalendar

#if DEBUG
// Method compiled in debug builds just to check that all the needed support
// classes are present at link time.
+ (NSArray *)checkClasses {
<<<<<<< HEAD
  NSArray *classes = [NSArray arrayWithObjects:
                      [GTLQueryCalendar class],
                      [GTLCalendarAcl class],
                      [GTLCalendarAclRule class],
                      [GTLCalendarCalendar class],
                      [GTLCalendarCalendarList class],
                      [GTLCalendarCalendarListEntry class],
                      [GTLCalendarChannel class],
                      [GTLCalendarColorDefinition class],
                      [GTLCalendarColors class],
                      [GTLCalendarError class],
                      [GTLCalendarEvent class],
                      [GTLCalendarEventAttendee class],
                      [GTLCalendarEventDateTime class],
                      [GTLCalendarEventReminder class],
                      [GTLCalendarEvents class],
                      [GTLCalendarFreeBusyCalendar class],
                      [GTLCalendarFreeBusyGroup class],
                      [GTLCalendarFreeBusyRequestItem class],
                      [GTLCalendarFreeBusyResponse class],
                      [GTLCalendarNotification class],
                      [GTLCalendarSetting class],
                      [GTLCalendarSettings class],
                      [GTLCalendarTimePeriod class],
                      nil];
=======
  NSArray *classes = @[
    [GTLQueryCalendar class],
    [GTLCalendarAcl class],
    [GTLCalendarAclRule class],
    [GTLCalendarCalendar class],
    [GTLCalendarCalendarList class],
    [GTLCalendarCalendarListEntry class],
    [GTLCalendarChannel class],
    [GTLCalendarColorDefinition class],
    [GTLCalendarColors class],
    [GTLCalendarError class],
    [GTLCalendarEvent class],
    [GTLCalendarEventAttachment class],
    [GTLCalendarEventAttendee class],
    [GTLCalendarEventDateTime class],
    [GTLCalendarEventReminder class],
    [GTLCalendarEvents class],
    [GTLCalendarFreeBusyCalendar class],
    [GTLCalendarFreeBusyGroup class],
    [GTLCalendarFreeBusyRequestItem class],
    [GTLCalendarFreeBusyResponse class],
    [GTLCalendarNotification class],
    [GTLCalendarSetting class],
    [GTLCalendarSettings class],
    [GTLCalendarTimePeriod class]
  ];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return classes;
}
#endif  // DEBUG

<<<<<<< HEAD
- (id)init {
=======
- (instancetype)init {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  self = [super init];
  if (self) {
    // Version from discovery.
    self.apiVersion = @"v3";

    // From discovery.  Where to send JSON-RPC.
    // Turn off prettyPrint for this service to save bandwidth (especially on
    // mobile). The fetcher logging will pretty print.
    self.rpcURL = [NSURL URLWithString:@"https://www.googleapis.com/rpc?prettyPrint=false"];
  }
  return self;
}

@end
