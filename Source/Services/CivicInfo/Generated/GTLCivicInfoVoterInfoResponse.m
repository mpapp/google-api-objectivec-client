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
//  GTLCivicInfoVoterInfoResponse.m
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

#import "GTLCivicInfoVoterInfoResponse.h"

#import "GTLCivicInfoAdministrationRegion.h"
#import "GTLCivicInfoContest.h"
#import "GTLCivicInfoElection.h"
#import "GTLCivicInfoPollingLocation.h"
#import "GTLCivicInfoSimpleAddressType.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoVoterInfoResponse
//

@implementation GTLCivicInfoVoterInfoResponse
<<<<<<< HEAD
@dynamic contests, earlyVoteSites, election, kind, normalizedInput,
         pollingLocations, state, status;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLCivicInfoContest class], @"contests",
      [GTLCivicInfoPollingLocation class], @"earlyVoteSites",
      [GTLCivicInfoPollingLocation class], @"pollingLocations",
      [GTLCivicInfoAdministrationRegion class], @"state",
      nil];
=======
@dynamic contests, dropOffLocations, earlyVoteSites, election, kind, mailOnly,
         normalizedInput, otherElections, pollingLocations, precinctId, state;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"contests" : [GTLCivicInfoContest class],
    @"dropOffLocations" : [GTLCivicInfoPollingLocation class],
    @"earlyVoteSites" : [GTLCivicInfoPollingLocation class],
    @"otherElections" : [GTLCivicInfoElection class],
    @"pollingLocations" : [GTLCivicInfoPollingLocation class],
    @"state" : [GTLCivicInfoAdministrationRegion class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"civicinfo#voterInfoResponse"];
}

@end
