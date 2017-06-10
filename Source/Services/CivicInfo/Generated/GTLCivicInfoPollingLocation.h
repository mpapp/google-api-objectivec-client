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
//  GTLCivicInfoPollingLocation.h
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
//   GTLCivicInfoPollingLocation (0 custom class methods, 9 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCivicInfoSimpleAddressType;
@class GTLCivicInfoSource;

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoPollingLocation
//

<<<<<<< HEAD
// A location where a voter can vote. This may be an early vote site or an
// election day voting location.

@interface GTLCivicInfoPollingLocation : GTLObject

// The address of the location
@property (retain) GTLCivicInfoSimpleAddressType *address;

// The last date that this early vote site may be used. This field is not
// populated for polling locations.
@property (copy) NSString *endDate;
=======
// A location where a voter can vote. This may be an early vote site, an
// election day voting location, or a drop off location for a completed ballot.

@interface GTLCivicInfoPollingLocation : GTLObject

// The address of the location.
@property (nonatomic, retain) GTLCivicInfoSimpleAddressType *address;

// The last date that this early vote site or drop off location may be used.
// This field is not populated for polling locations.
@property (nonatomic, copy) NSString *endDate;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An ID for this object. IDs may change in future requests and should not be
// cached. Access to this field requires special access that can be requested
// from the Request more link on the Quotas page.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// The name of the early vote site. This field is not populated for polling
// locations.
@property (copy) NSString *name;

// Notes about this location (e.g. accessibility ramp or entrance to use)
@property (copy) NSString *notes;

// A description of when this location is open.
@property (copy) NSString *pollingHours;

// A list of sources for this location. If multiple sources are listed the data
// has been aggregated from those sources.
@property (retain) NSArray *sources;  // of GTLCivicInfoSource

// The first date that this early vote site may be used. This field is not
// populated for polling locations.
@property (copy) NSString *startDate;

// The services provided by this early vote site. This field is not populated
// for polling locations.
@property (copy) NSString *voterServices;
=======
@property (nonatomic, copy) NSString *identifier;

// The name of the early vote site or drop off location. This field is not
// populated for polling locations.
@property (nonatomic, copy) NSString *name;

// Notes about this location (e.g. accessibility ramp or entrance to use).
@property (nonatomic, copy) NSString *notes;

// A description of when this location is open.
@property (nonatomic, copy) NSString *pollingHours;

// A list of sources for this location. If multiple sources are listed the data
// has been aggregated from those sources.
@property (nonatomic, retain) NSArray *sources;  // of GTLCivicInfoSource

// The first date that this early vote site or drop off location may be used.
// This field is not populated for polling locations.
@property (nonatomic, copy) NSString *startDate;

// The services provided by this early vote site or drop off location. This
// field is not populated for polling locations.
@property (nonatomic, copy) NSString *voterServices;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
