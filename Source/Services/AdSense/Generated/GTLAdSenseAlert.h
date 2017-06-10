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
//  GTLAdSenseAlert.h
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
//   GTLAdSenseAlert (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAdSenseAlert
//

@interface GTLAdSenseAlert : GTLObject

// Unique identifier of this alert. This should be considered an opaque
// identifier; it is not safe to rely on it being in any particular format.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// Whether this alert can be dismissed.
@property (retain) NSNumber *isDismissible;  // boolValue

// Kind of resource this is, in this case adsense#alert.
@property (copy) NSString *kind;

// The localized alert message.
@property (copy) NSString *message;

// Severity of this alert. Possible values: INFO, WARNING, SEVERE.
@property (copy) NSString *severity;
=======
@property (nonatomic, copy) NSString *identifier;

// Whether this alert can be dismissed.
@property (nonatomic, retain) NSNumber *isDismissible;  // boolValue

// Kind of resource this is, in this case adsense#alert.
@property (nonatomic, copy) NSString *kind;

// The localized alert message.
@property (nonatomic, copy) NSString *message;

// Severity of this alert. Possible values: INFO, WARNING, SEVERE.
@property (nonatomic, copy) NSString *severity;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Type of this alert. Possible values: SELF_HOLD, MIGRATED_TO_BILLING3,
// ADDRESS_PIN_VERIFICATION, PHONE_PIN_VERIFICATION, CORPORATE_ENTITY,
// GRAYLISTED_PUBLISHER, API_HOLD.
<<<<<<< HEAD
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
