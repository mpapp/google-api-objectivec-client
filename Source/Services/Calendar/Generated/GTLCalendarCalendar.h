<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLCalendarCalendar.h
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
//   GTLCalendarCalendar (0 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCalendarCalendar
//

@interface GTLCalendarCalendar : GTLObject

// Description of the calendar. Optional.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
<<<<<<< HEAD
@property (copy) NSString *descriptionProperty;

// ETag of the resource.
@property (copy) NSString *ETag;

// Identifier of the calendar.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Type of the resource ("calendar#calendar").
@property (copy) NSString *kind;

// Geographic location of the calendar as free-form text. Optional.
@property (copy) NSString *location;

// Title of the calendar.
@property (copy) NSString *summary;

// The time zone of the calendar. Optional.
@property (copy) NSString *timeZone;
=======
@property (nonatomic, copy) NSString *descriptionProperty;

// ETag of the resource.
@property (nonatomic, copy) NSString *ETag;

// Identifier of the calendar. To retrieve IDs call the calendarList.list()
// method.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Type of the resource ("calendar#calendar").
@property (nonatomic, copy) NSString *kind;

// Geographic location of the calendar as free-form text. Optional.
@property (nonatomic, copy) NSString *location;

// Title of the calendar.
@property (nonatomic, copy) NSString *summary;

// The time zone of the calendar. (Formatted as an IANA Time Zone Database name,
// e.g. "Europe/Zurich".) Optional.
@property (nonatomic, copy) NSString *timeZone;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
