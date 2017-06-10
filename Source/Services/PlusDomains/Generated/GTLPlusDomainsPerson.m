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
//  GTLPlusDomainsPerson.m
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
//   GTLPlusDomainsPerson (0 custom class methods, 28 custom properties)
//   GTLPlusDomainsPersonCover (0 custom class methods, 3 custom properties)
//   GTLPlusDomainsPersonEmailsItem (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsPersonImage (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsPersonName (0 custom class methods, 6 custom properties)
//   GTLPlusDomainsPersonOrganizationsItem (0 custom class methods, 9 custom properties)
//   GTLPlusDomainsPersonPlacesLivedItem (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsPersonUrlsItem (0 custom class methods, 3 custom properties)
//   GTLPlusDomainsPersonCoverCoverInfo (0 custom class methods, 2 custom properties)
//   GTLPlusDomainsPersonCoverCoverPhoto (0 custom class methods, 3 custom properties)

#import "GTLPlusDomainsPerson.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPerson
//

@implementation GTLPlusDomainsPerson
@dynamic aboutMe, birthday, braggingRights, circledByCount, cover,
         currentLocation, displayName, domain, emails, ETag, gender, identifier,
         image, isPlusUser, kind, name, nickname, objectType, occupation,
         organizations, placesLived, plusOneCount, relationshipStatus, skills,
         tagline, url, urls, verified;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
  NSDictionary *map = @{
    @"ETag" : @"etag",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLPlusDomainsPersonEmailsItem class], @"emails",
      [GTLPlusDomainsPersonOrganizationsItem class], @"organizations",
      [GTLPlusDomainsPersonPlacesLivedItem class], @"placesLived",
      [GTLPlusDomainsPersonUrlsItem class], @"urls",
      nil];
=======
  NSDictionary *map = @{
    @"emails" : [GTLPlusDomainsPersonEmailsItem class],
    @"organizations" : [GTLPlusDomainsPersonOrganizationsItem class],
    @"placesLived" : [GTLPlusDomainsPersonPlacesLivedItem class],
    @"urls" : [GTLPlusDomainsPersonUrlsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"plus#person"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonCover
//

@implementation GTLPlusDomainsPersonCover
@dynamic coverInfo, coverPhoto, layout;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonEmailsItem
//

@implementation GTLPlusDomainsPersonEmailsItem
@dynamic type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonImage
//

@implementation GTLPlusDomainsPersonImage
@dynamic isDefault, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonName
//

@implementation GTLPlusDomainsPersonName
@dynamic familyName, formatted, givenName, honorificPrefix, honorificSuffix,
         middleName;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonOrganizationsItem
//

@implementation GTLPlusDomainsPersonOrganizationsItem
@dynamic department, descriptionProperty, endDate, location, name, primary,
         startDate, title, type;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"description"
                                forKey:@"descriptionProperty"];
=======
  NSDictionary *map = @{
    @"descriptionProperty" : @"description"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonPlacesLivedItem
//

@implementation GTLPlusDomainsPersonPlacesLivedItem
@dynamic primary, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonUrlsItem
//

@implementation GTLPlusDomainsPersonUrlsItem
@dynamic label, type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonCoverCoverInfo
//

@implementation GTLPlusDomainsPersonCoverCoverInfo
@dynamic leftImageOffset, topImageOffset;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusDomainsPersonCoverCoverPhoto
//

@implementation GTLPlusDomainsPersonCoverCoverPhoto
@dynamic height, url, width;
@end
