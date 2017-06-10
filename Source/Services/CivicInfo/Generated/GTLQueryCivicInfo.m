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
//  GTLQueryCivicInfo.m
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
//   GTLQueryCivicInfo (4 custom class methods, 8 custom properties)
=======
//   GTLQueryCivicInfo (5 custom class methods, 10 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryCivicInfo.h"

#import "GTLCivicInfoDivisionSearchResponse.h"
#import "GTLCivicInfoElectionsQueryResponse.h"
<<<<<<< HEAD
=======
#import "GTLCivicInfoRepresentativeInfoData.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLCivicInfoRepresentativeInfoResponse.h"
#import "GTLCivicInfoVoterInfoResponse.h"

@implementation GTLQueryCivicInfo

<<<<<<< HEAD
@dynamic address, electionId, fields, includeOffices, ocdId, officialOnly,
         query, recursive;

#pragma mark -
#pragma mark "divisions" methods
// These create a GTLQueryCivicInfo object.

+ (id)queryForDivisionsSearch {
=======
@dynamic address, electionId, fields, includeOffices, levels, ocdId,
         officialOnly, query, recursive, roles;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"levels" : [NSString class],
    @"roles" : [NSString class]
  };
  return map;
}

#pragma mark - "divisions" methods
// These create a GTLQueryCivicInfo object.

+ (instancetype)queryForDivisionsSearch {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"civicinfo.divisions.search";
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCivicInfoDivisionSearchResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "elections" methods
// These create a GTLQueryCivicInfo object.

+ (id)queryForElectionsElectionQuery {
=======
#pragma mark - "elections" methods
// These create a GTLQueryCivicInfo object.

+ (instancetype)queryForElectionsElectionQuery {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"civicinfo.elections.electionQuery";
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCivicInfoElectionsQueryResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForElectionsVoterInfoQueryWithElectionId:(long long)electionId {
  NSString *methodName = @"civicinfo.elections.voterInfoQuery";
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.electionId = electionId;
=======
+ (instancetype)queryForElectionsVoterInfoQueryWithAddress:(NSString *)address {
  NSString *methodName = @"civicinfo.elections.voterInfoQuery";
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.address = address;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  query.expectedObjectClass = [GTLCivicInfoVoterInfoResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "representatives" methods
// These create a GTLQueryCivicInfo object.

+ (id)queryForRepresentativesRepresentativeInfoQuery {
  NSString *methodName = @"civicinfo.representatives.representativeInfoQuery";
=======
#pragma mark - "representatives" methods
// These create a GTLQueryCivicInfo object.

+ (instancetype)queryForRepresentativesRepresentativeInfoByAddress {
  NSString *methodName = @"civicinfo.representatives.representativeInfoByAddress";
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLCivicInfoRepresentativeInfoResponse class];
  return query;
}

<<<<<<< HEAD
=======
+ (instancetype)queryForRepresentativesRepresentativeInfoByDivisionWithOcdId:(NSString *)ocdId {
  NSString *methodName = @"civicinfo.representatives.representativeInfoByDivision";
  GTLQueryCivicInfo *query = [self queryWithMethodName:methodName];
  query.ocdId = ocdId;
  query.expectedObjectClass = [GTLCivicInfoRepresentativeInfoData class];
  return query;
}

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
