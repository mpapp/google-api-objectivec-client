<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLCivicInfoGeographicDivision.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
<<<<<<< HEAD
//   Google Civic Information API (civicinfo/v1)
=======
//   Google Civic Information API (civicinfo/v2)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Description:
//   An API for accessing civic information.
// Documentation:
//   https://developers.google.com/civic-information
// Classes:
<<<<<<< HEAD
//   GTLCivicInfoGeographicDivision (0 custom class methods, 4 custom properties)
=======
//   GTLCivicInfoGeographicDivision (0 custom class methods, 3 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoGeographicDivision
//

// Describes a political geography.

@interface GTLCivicInfoGeographicDivision : GTLObject

<<<<<<< HEAD
// Any other valid OCD IDs that refer to the same division. For example, if this
// division's OCD ID is ocd-division/country:us/district:dc, this will contain
// ocd-division/country:us/state:dc.
@property (retain) NSArray *alsoKnownAs;  // of NSString

// The name of the division.
@property (copy) NSString *name;

// List of keys in the offices object, one for each office elected from this
// division. Will only be present if includeOffices was true (or absent) in the
// request.
@property (retain) NSArray *officeIds;  // of NSString

// The geographic scope of the division. If unspecified, the division's
// geography is not known. One of: national, statewide, congressional,
// stateUpper, stateLower, countywide, judicial, schoolBoard, cityWide,
// township, countyCouncil, cityCouncil, ward, special
@property (copy) NSString *scope;
=======
// Any other valid OCD IDs that refer to the same division.
// Because OCD IDs are meant to be human-readable and at least somewhat
// predictable, there are occasionally several identifiers for a single
// division. These identifiers are defined to be equivalent to one another, and
// one is always indicated as the primary identifier. The primary identifier
// will be returned in ocd_id above, and any other equivalent valid identifiers
// will be returned in this list.
// For example, if this division's OCD ID is
// ocd-division/country:us/district:dc, this will contain
// ocd-division/country:us/state:dc.
@property (nonatomic, retain) NSArray *alsoKnownAs;  // of NSString

// The name of the division.
@property (nonatomic, copy) NSString *name;

// List of indices in the offices array, one for each office elected from this
// division. Will only be present if includeOffices was true (or absent) in the
// request.
@property (nonatomic, retain) NSArray *officeIndices;  // of NSNumber (unsignedIntValue)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
