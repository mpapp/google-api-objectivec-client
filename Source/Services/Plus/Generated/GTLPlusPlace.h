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
//  GTLPlusPlace.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLPlusPlace (0 custom class methods, 5 custom properties)
//   GTLPlusPlaceAddress (0 custom class methods, 1 custom properties)
//   GTLPlusPlacePosition (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusPlaceAddress;
@class GTLPlusPlacePosition;

// ----------------------------------------------------------------------------
//
//   GTLPlusPlace
//

@interface GTLPlusPlace : GTLObject

// The physical address of the place.
<<<<<<< HEAD
@property (retain) GTLPlusPlaceAddress *address;

// The display name of the place.
@property (copy) NSString *displayName;

// The id of the place.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Identifies this resource as a place. Value: "plus#place".
@property (copy) NSString *kind;

// The position of the place.
@property (retain) GTLPlusPlacePosition *position;
=======
@property (nonatomic, retain) GTLPlusPlaceAddress *address;

// The display name of the place.
@property (nonatomic, copy) NSString *displayName;

// The id of the place.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies this resource as a place. Value: "plus#place".
@property (nonatomic, copy) NSString *kind;

// The position of the place.
@property (nonatomic, retain) GTLPlusPlacePosition *position;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPlaceAddress
//

@interface GTLPlusPlaceAddress : GTLObject

// The formatted address for display.
<<<<<<< HEAD
@property (copy) NSString *formatted;
=======
@property (nonatomic, copy) NSString *formatted;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPlacePosition
//

@interface GTLPlusPlacePosition : GTLObject

// The latitude of this position.
<<<<<<< HEAD
@property (retain) NSNumber *latitude;  // doubleValue

// The longitude of this position.
@property (retain) NSNumber *longitude;  // doubleValue
=======
@property (nonatomic, retain) NSNumber *latitude;  // doubleValue

// The longitude of this position.
@property (nonatomic, retain) NSNumber *longitude;  // doubleValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
