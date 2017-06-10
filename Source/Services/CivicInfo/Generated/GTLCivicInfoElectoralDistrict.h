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
//  GTLCivicInfoElectoralDistrict.h
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
//   GTLCivicInfoElectoralDistrict (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoElectoralDistrict
//

// Describes the geographic scope of a contest.

@interface GTLCivicInfoElectoralDistrict : GTLObject

// An identifier for this district, relative to its scope. For example, the 34th
// State Senate district would have id "34" and a scope of stateUpper.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// The name of the district.
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *identifier;

// The name of the district.
@property (nonatomic, copy) NSString *name;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The geographic scope of this district. If unspecified the district's
// geography is not known. One of: national, statewide, congressional,
// stateUpper, stateLower, countywide, judicial, schoolBoard, cityWide,
// township, countyCouncil, cityCouncil, ward, special
<<<<<<< HEAD
@property (copy) NSString *scope;
=======
@property (nonatomic, copy) NSString *scope;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
