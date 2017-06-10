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
//  GTLCalendarFreeBusyGroup.h
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
//   GTLCalendarFreeBusyGroup (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCalendarError;

// ----------------------------------------------------------------------------
//
//   GTLCalendarFreeBusyGroup
//

@interface GTLCalendarFreeBusyGroup : GTLObject

// List of calendars' identifiers within a group.
<<<<<<< HEAD
@property (retain) NSArray *calendars;  // of NSString

// Optional error(s) (if computation for the group failed).
@property (retain) NSArray *errors;  // of GTLCalendarError
=======
@property (nonatomic, retain) NSArray *calendars;  // of NSString

// Optional error(s) (if computation for the group failed).
@property (nonatomic, retain) NSArray *errors;  // of GTLCalendarError
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
