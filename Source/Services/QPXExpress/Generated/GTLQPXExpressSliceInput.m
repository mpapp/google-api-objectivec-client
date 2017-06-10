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
//  GTLQPXExpressSliceInput.m
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
//   GTLQPXExpressSliceInput (0 custom class methods, 11 custom properties)

#import "GTLQPXExpressSliceInput.h"

#import "GTLQPXExpressTimeOfDayRange.h"

// ----------------------------------------------------------------------------
//
//   GTLQPXExpressSliceInput
//

@implementation GTLQPXExpressSliceInput
@dynamic alliance, date, destination, kind, maxConnectionDuration, maxStops,
         origin, permittedCarrier, permittedDepartureTime, preferredCabin,
         prohibitedCarrier;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"permittedCarrier",
      [NSString class], @"prohibitedCarrier",
      nil];
=======
  NSDictionary *map = @{
    @"permittedCarrier" : [NSString class],
    @"prohibitedCarrier" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"qpxexpress#sliceInput"];
}

@end
