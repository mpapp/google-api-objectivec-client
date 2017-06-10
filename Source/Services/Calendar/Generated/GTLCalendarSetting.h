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
//  GTLCalendarSetting.h
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
//   GTLCalendarSetting (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCalendarSetting
//

@interface GTLCalendarSetting : GTLObject

// ETag of the resource.
<<<<<<< HEAD
@property (copy) NSString *ETag;

// The id of the user setting.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Type of the resource ("calendar#setting").
@property (copy) NSString *kind;

// Value of the user setting. The format of the value depends on the ID of the
// setting. It must always be a UTF-8 string of length up to 1024 characters.
@property (copy) NSString *value;
=======
@property (nonatomic, copy) NSString *ETag;

// The id of the user setting.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Type of the resource ("calendar#setting").
@property (nonatomic, copy) NSString *kind;

// Value of the user setting. The format of the value depends on the ID of the
// setting. It must always be a UTF-8 string of length up to 1024 characters.
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
