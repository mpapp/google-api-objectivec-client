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
//  GTLAdSenseSavedAdStyle.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   AdSense Management API (adsense/v1.4)
// Description:
<<<<<<< HEAD
//   Gives AdSense publishers access to their inventory and the ability to
//   generate reports
=======
//   Accesses AdSense publishers' inventory and generates performance reports.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/adsense/management/
// Classes:
//   GTLAdSenseSavedAdStyle (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAdSenseAdStyle;

// ----------------------------------------------------------------------------
//
//   GTLAdSenseSavedAdStyle
//

@interface GTLAdSenseSavedAdStyle : GTLObject

// The AdStyle itself.
<<<<<<< HEAD
@property (retain) GTLAdSenseAdStyle *adStyle;
=======
@property (nonatomic, retain) GTLAdSenseAdStyle *adStyle;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Unique identifier of this saved ad style. This should be considered an opaque
// identifier; it is not safe to rely on it being in any particular format.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// Kind of resource this is, in this case adsense#savedAdStyle.
@property (copy) NSString *kind;

// The user selected name of this SavedAdStyle.
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *identifier;

// Kind of resource this is, in this case adsense#savedAdStyle.
@property (nonatomic, copy) NSString *kind;

// The user selected name of this SavedAdStyle.
@property (nonatomic, copy) NSString *name;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
