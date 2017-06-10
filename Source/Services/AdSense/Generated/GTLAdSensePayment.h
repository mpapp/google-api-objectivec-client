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
//  GTLAdSensePayment.h
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
//   GTLAdSensePayment (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAdSensePayment
//

@interface GTLAdSensePayment : GTLObject

// Unique identifier of this Payment.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// Kind of resource this is, in this case adsense#payment.
@property (copy) NSString *kind;

// The amount to be paid.
@property (copy) NSString *paymentAmount;

// The currency code for the amount to be paid.
@property (copy) NSString *paymentAmountCurrencyCode;

// The date this payment was/will be credited to the user, or none if the
// payment threshold has not been met.
@property (copy) NSString *paymentDate;
=======
@property (nonatomic, copy) NSString *identifier;

// Kind of resource this is, in this case adsense#payment.
@property (nonatomic, copy) NSString *kind;

// The amount to be paid.
@property (nonatomic, copy) NSString *paymentAmount;

// The currency code for the amount to be paid.
@property (nonatomic, copy) NSString *paymentAmountCurrencyCode;

// The date this payment was/will be credited to the user, or none if the
// payment threshold has not been met.
@property (nonatomic, copy) NSString *paymentDate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
