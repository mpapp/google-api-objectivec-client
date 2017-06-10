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
//  GTLPlusPerson.m
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
//   GTLPlusPerson (0 custom class methods, 30 custom properties)
//   GTLPlusPersonAgeRange (0 custom class methods, 2 custom properties)
//   GTLPlusPersonCover (0 custom class methods, 3 custom properties)
//   GTLPlusPersonEmailsItem (0 custom class methods, 2 custom properties)
//   GTLPlusPersonImage (0 custom class methods, 2 custom properties)
//   GTLPlusPersonName (0 custom class methods, 6 custom properties)
//   GTLPlusPersonOrganizationsItem (0 custom class methods, 9 custom properties)
//   GTLPlusPersonPlacesLivedItem (0 custom class methods, 2 custom properties)
//   GTLPlusPersonUrlsItem (0 custom class methods, 3 custom properties)
//   GTLPlusPersonCoverCoverInfo (0 custom class methods, 2 custom properties)
//   GTLPlusPersonCoverCoverPhoto (0 custom class methods, 3 custom properties)

#import "GTLPlusPerson.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusPerson
//

@implementation GTLPlusPerson
@dynamic aboutMe, ageRange, birthday, braggingRights, circledByCount, cover,
         currentLocation, displayName, domain, emails, ETag, gender, identifier,
         image, isPlusUser, kind, language, name, nickname, objectType,
         occupation, organizations, placesLived, plusOneCount,
         relationshipStatus, skills, tagline, url, urls, verified;

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
      [GTLPlusPersonEmailsItem class], @"emails",
      [GTLPlusPersonOrganizationsItem class], @"organizations",
      [GTLPlusPersonPlacesLivedItem class], @"placesLived",
      [GTLPlusPersonUrlsItem class], @"urls",
      nil];
=======
  NSDictionary *map = @{
    @"emails" : [GTLPlusPersonEmailsItem class],
    @"organizations" : [GTLPlusPersonOrganizationsItem class],
    @"placesLived" : [GTLPlusPersonPlacesLivedItem class],
    @"urls" : [GTLPlusPersonUrlsItem class]
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
//   GTLPlusPersonAgeRange
//

@implementation GTLPlusPersonAgeRange
@dynamic max, min;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCover
//

@implementation GTLPlusPersonCover
@dynamic coverInfo, coverPhoto, layout;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonEmailsItem
//

@implementation GTLPlusPersonEmailsItem
@dynamic type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonImage
//

@implementation GTLPlusPersonImage
@dynamic isDefault, url;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonName
//

@implementation GTLPlusPersonName
@dynamic familyName, formatted, givenName, honorificPrefix, honorificSuffix,
         middleName;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonOrganizationsItem
//

@implementation GTLPlusPersonOrganizationsItem
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
//   GTLPlusPersonPlacesLivedItem
//

@implementation GTLPlusPersonPlacesLivedItem
@dynamic primary, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonUrlsItem
//

@implementation GTLPlusPersonUrlsItem
@dynamic label, type, value;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCoverCoverInfo
//

@implementation GTLPlusPersonCoverCoverInfo
@dynamic leftImageOffset, topImageOffset;
@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCoverCoverPhoto
//

@implementation GTLPlusPersonCoverCoverPhoto
@dynamic height, url, width;
@end
