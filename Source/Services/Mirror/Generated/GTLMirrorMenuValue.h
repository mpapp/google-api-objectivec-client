<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLMirrorMenuValue.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Mirror API (mirror/v1)
// Description:
//   API for interacting with Glass users via the timeline.
// Documentation:
//   https://developers.google.com/glass
// Classes:
//   GTLMirrorMenuValue (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLMirrorMenuValue
//

// A single value that is part of a MenuItem.

@interface GTLMirrorMenuValue : GTLObject

// The name to display for the menu item. If you specify this property for a
// built-in menu item, the default contextual voice command for that menu item
// is not shown.
<<<<<<< HEAD
@property (copy) NSString *displayName;

// URL of an icon to display with the menu item.
@property (copy) NSString *iconUrl;
=======
@property (nonatomic, copy) NSString *displayName;

// URL of an icon to display with the menu item.
@property (nonatomic, copy) NSString *iconUrl;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The state that this value applies to. Allowed values are:
// - DEFAULT - Default value shown when displayed in the menuItems list.
// - PENDING - Value shown when the menuItem has been selected by the user but
// can still be cancelled.
// - CONFIRMED - Value shown when the menuItem has been selected by the user and
// can no longer be cancelled.
<<<<<<< HEAD
@property (copy) NSString *state;
=======
@property (nonatomic, copy) NSString *state;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
