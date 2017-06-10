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
//  GTLCivicInfoVoterInfoResponse.h
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
//   GTLCivicInfoVoterInfoResponse (0 custom class methods, 8 custom properties)
=======
//   GTLCivicInfoVoterInfoResponse (0 custom class methods, 11 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCivicInfoAdministrationRegion;
@class GTLCivicInfoContest;
@class GTLCivicInfoElection;
@class GTLCivicInfoPollingLocation;
@class GTLCivicInfoSimpleAddressType;

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoVoterInfoResponse
//

// The result of a voter info lookup query.

@interface GTLCivicInfoVoterInfoResponse : GTLObject

<<<<<<< HEAD
// Contests that will appear on the voter's ballot
@property (retain) NSArray *contests;  // of GTLCivicInfoContest

// Locations where the voter is eligible to vote early, prior to election day
@property (retain) NSArray *earlyVoteSites;  // of GTLCivicInfoPollingLocation

// The election that was queried.
@property (retain) GTLCivicInfoElection *election;

// Identifies what kind of resource this is. Value: the fixed string
// "civicinfo#voterInfoResponse".
@property (copy) NSString *kind;

// The normalized version of the requested address
@property (retain) GTLCivicInfoSimpleAddressType *normalizedInput;

// Locations where the voter is eligible to vote on election day. For states
// with mail-in voting only, these locations will be nearby drop box locations.
// Drop box locations are free to the voter and may be used instead of placing
// the ballot in the mail.
@property (retain) NSArray *pollingLocations;  // of GTLCivicInfoPollingLocation

// Local Election Information for the state that the voter votes in. For the US,
// there will only be one element in this array.
@property (retain) NSArray *state;  // of GTLCivicInfoAdministrationRegion

// The result of the request. One of: success, noStreetSegmentFound,
// addressUnparseable, noAddressParameter, multipleStreetSegmentsFound,
// electionOver, electionUnknown, internalLookupFailure
@property (copy) NSString *status;
=======
// Contests that will appear on the voter's ballot.
@property (nonatomic, retain) NSArray *contests;  // of GTLCivicInfoContest

// Locations where a voter is eligible to drop off a completed ballot. The voter
// must have received and completed a ballot prior to arriving at the location.
// The location may not have ballots available on the premises. These locations
// could be open on or before election day as indicated in the pollingHours
// field.
@property (nonatomic, retain) NSArray *dropOffLocations;  // of GTLCivicInfoPollingLocation

// Locations where the voter is eligible to vote early, prior to election day.
@property (nonatomic, retain) NSArray *earlyVoteSites;  // of GTLCivicInfoPollingLocation

// The election that was queried.
@property (nonatomic, retain) GTLCivicInfoElection *election;

// Identifies what kind of resource this is. Value: the fixed string
// "civicinfo#voterInfoResponse".
@property (nonatomic, copy) NSString *kind;

// Specifies whether voters in the precinct vote only by mailing their ballots
// (with the possible option of dropping off their ballots as well).
@property (nonatomic, retain) NSNumber *mailOnly;  // boolValue

// The normalized version of the requested address
@property (nonatomic, retain) GTLCivicInfoSimpleAddressType *normalizedInput;

// If no election ID was specified in the query, and there was more than one
// election with data for the given voter, this will contain information about
// the other elections that could apply.
@property (nonatomic, retain) NSArray *otherElections;  // of GTLCivicInfoElection

// Locations where the voter is eligible to vote on election day.
@property (nonatomic, retain) NSArray *pollingLocations;  // of GTLCivicInfoPollingLocation

@property (nonatomic, copy) NSString *precinctId;

// Local Election Information for the state that the voter votes in. For the US,
// there will only be one element in this array.
@property (nonatomic, retain) NSArray *state;  // of GTLCivicInfoAdministrationRegion
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
