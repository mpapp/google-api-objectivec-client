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
//  GTLCalendarNotification.h
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
//   GTLCalendarNotification (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCalendarNotification
//

@interface GTLCalendarNotification : GTLObject

// The method used to deliver the notification. Possible values are:
// - "email" - Reminders are sent via email.
// - "sms" - Reminders are sent via SMS. This value is read-only and is ignored
<<<<<<< HEAD
// on inserts and updates.
@property (copy) NSString *method;
=======
// on inserts and updates. SMS reminders are only available for Google Apps for
// Work, Education, and Government customers.
@property (nonatomic, copy) NSString *method;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The type of notification. Possible values are:
// - "eventCreation" - Notification sent when a new event is put on the
// calendar.
// - "eventChange" - Notification sent when an event is changed.
// - "eventCancellation" - Notification sent when an event is cancelled.
// - "eventResponse" - Notification sent when an event is changed.
// - "agenda" - An agenda with the events of the day (sent out in the morning).
<<<<<<< HEAD
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
