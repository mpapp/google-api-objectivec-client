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
//  GTLCivicInfoContest.m
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
//   GTLCivicInfoContest (0 custom class methods, 16 custom properties)
=======
//   GTLCivicInfoContest (0 custom class methods, 24 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLCivicInfoContest.h"

#import "GTLCivicInfoCandidate.h"
#import "GTLCivicInfoElectoralDistrict.h"
#import "GTLCivicInfoSource.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoContest
//

@implementation GTLCivicInfoContest
@dynamic ballotPlacement, candidates, district, electorateSpecifications,
         identifier, level, numberElected, numberVotingFor, office,
<<<<<<< HEAD
         primaryParty, referendumSubtitle, referendumTitle, referendumUrl,
         sources, special, type;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
         primaryParty, referendumBallotResponses, referendumBrief,
         referendumConStatement, referendumEffectOfAbstain,
         referendumPassageThreshold, referendumProStatement, referendumSubtitle,
         referendumText, referendumTitle, referendumUrl, roles, sources,
         special, type;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLCivicInfoCandidate class], @"candidates",
      [GTLCivicInfoSource class], @"sources",
      nil];
=======
  NSDictionary *map = @{
    @"candidates" : [GTLCivicInfoCandidate class],
    @"level" : [NSString class],
    @"referendumBallotResponses" : [NSString class],
    @"roles" : [NSString class],
    @"sources" : [GTLCivicInfoSource class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
