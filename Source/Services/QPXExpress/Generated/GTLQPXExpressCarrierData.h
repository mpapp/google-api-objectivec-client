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
//  GTLQPXExpressCarrierData.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   QPX Express API (qpxExpress/v1)
// Description:
<<<<<<< HEAD
//   Lets you find the least expensive flights between an origin and a
//   destination.
=======
//   Finds the least expensive flights between an origin and a destination.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   http://developers.google.com/qpx-express
// Classes:
//   GTLQPXExpressCarrierData (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLQPXExpressCarrierData
//

// Information about a carrier (ie. an airline, bus line, railroad, etc) that
// might be useful to display to an end-user.

@interface GTLQPXExpressCarrierData : GTLObject

// The IATA designator of a carrier (airline, etc). For example, for American
// Airlines, the code is AA.
<<<<<<< HEAD
@property (copy) NSString *code;

// Identifies this as a kind of carrier (ie. an airline, bus line, railroad,
// etc). Value: the fixed string qpxexpress#carrierData.
@property (copy) NSString *kind;

// The long, full name of a carrier. For example: American Airlines.
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *code;

// Identifies this as a kind of carrier (ie. an airline, bus line, railroad,
// etc). Value: the fixed string qpxexpress#carrierData.
@property (nonatomic, copy) NSString *kind;

// The long, full name of a carrier. For example: American Airlines.
@property (nonatomic, copy) NSString *name;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
