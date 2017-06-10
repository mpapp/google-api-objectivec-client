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
//  GTLPlusDomainsPlace.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform for Google Apps Domains.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLPlusDomainsPlace (0 custom class methods, 5 custom properties)
//   GTLPlusDomainsPlaceAddress (0 custom class methods, 1 custom properties)
//   GTLPlusDomainsPlacePosition (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusDomainsPlaceAddress;
@class GTLPlusDomainsPlacePosition;

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPlace
//

@interface GTLPlusDomainsPlace : GTLObject

// The physical address of the place.
<<<<<<< HEAD
@property (retain) GTLPlusDomainsPlaceAddress *address;

// The display name of the place.
@property (copy) NSString *displayName;

// The id of the place.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Identifies this resource as a place. Value: "plus#place".
@property (copy) NSString *kind;

// The position of the place.
@property (retain) GTLPlusDomainsPlacePosition *position;
=======
@property (nonatomic, retain) GTLPlusDomainsPlaceAddress *address;

// The display name of the place.
@property (nonatomic, copy) NSString *displayName;

// The id of the place.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies this resource as a place. Value: "plus#place".
@property (nonatomic, copy) NSString *kind;

// The position of the place.
@property (nonatomic, retain) GTLPlusDomainsPlacePosition *position;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPlaceAddress
//

@interface GTLPlusDomainsPlaceAddress : GTLObject

// The formatted address for display.
<<<<<<< HEAD
@property (copy) NSString *formatted;
=======
@property (nonatomic, copy) NSString *formatted;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPlacePosition
//

@interface GTLPlusDomainsPlacePosition : GTLObject

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
