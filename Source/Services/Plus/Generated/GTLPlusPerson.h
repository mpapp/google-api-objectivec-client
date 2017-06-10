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
//  GTLPlusPerson.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusPersonAgeRange;
@class GTLPlusPersonCover;
@class GTLPlusPersonCoverCoverInfo;
@class GTLPlusPersonCoverCoverPhoto;
@class GTLPlusPersonEmailsItem;
@class GTLPlusPersonImage;
@class GTLPlusPersonName;
@class GTLPlusPersonOrganizationsItem;
@class GTLPlusPersonPlacesLivedItem;
@class GTLPlusPersonUrlsItem;

// ----------------------------------------------------------------------------
//
//   GTLPlusPerson
//

@interface GTLPlusPerson : GTLObject

// A short biography for this person.
<<<<<<< HEAD
@property (copy) NSString *aboutMe;
=======
@property (nonatomic, copy) NSString *aboutMe;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The age range of the person. Valid ranges are 17 or younger, 18 to 20, and 21
// or older. Age is determined from the user's birthday using Western age
// reckoning.
<<<<<<< HEAD
@property (retain) GTLPlusPersonAgeRange *ageRange;

// The person's date of birth, represented as YYYY-MM-DD.
@property (copy) NSString *birthday;

// The "bragging rights" line of this person.
@property (copy) NSString *braggingRights;

// For followers who are visible, the number of people who have added this
// person or page to a circle.
@property (retain) NSNumber *circledByCount;  // intValue

// The cover photo content.
@property (retain) GTLPlusPersonCover *cover;

// (this field is not currently used)
@property (copy) NSString *currentLocation;

// The name of this person, which is suitable for display.
@property (copy) NSString *displayName;
=======
@property (nonatomic, retain) GTLPlusPersonAgeRange *ageRange;

// The person's date of birth, represented as YYYY-MM-DD.
@property (nonatomic, copy) NSString *birthday;

// The "bragging rights" line of this person.
@property (nonatomic, copy) NSString *braggingRights;

// For followers who are visible, the number of people who have added this
// person or page to a circle.
@property (nonatomic, retain) NSNumber *circledByCount;  // intValue

// The cover photo content.
@property (nonatomic, retain) GTLPlusPersonCover *cover;

// (this field is not currently used)
@property (nonatomic, copy) NSString *currentLocation;

// The name of this person, which is suitable for display.
@property (nonatomic, copy) NSString *displayName;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The hosted domain name for the user's Google Apps account. For instance,
// example.com. The plus.profile.emails.read or email scope is needed to get
// this domain name.
<<<<<<< HEAD
@property (copy) NSString *domain;
=======
@property (nonatomic, copy) NSString *domain;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// A list of email addresses that this person has, including their Google
// account email address, and the public verified email addresses on their
// Google+ profile. The plus.profile.emails.read scope is needed to retrieve
// these email addresses, or the email scope can be used to retrieve just the
// Google account email address.
<<<<<<< HEAD
@property (retain) NSArray *emails;  // of GTLPlusPersonEmailsItem

// ETag of this response for caching purposes.
@property (copy) NSString *ETag;
=======
@property (nonatomic, retain) NSArray *emails;  // of GTLPlusPersonEmailsItem

// ETag of this response for caching purposes.
@property (nonatomic, copy) NSString *ETag;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The person's gender. Possible values include, but are not limited to, the
// following values:
// - "male" - Male gender.
// - "female" - Female gender.
// - "other" - Other.
<<<<<<< HEAD
@property (copy) NSString *gender;

// The ID of this person.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The representation of the person's profile photo.
@property (retain) GTLPlusPersonImage *image;

// Whether this user has signed up for Google+.
@property (retain) NSNumber *isPlusUser;  // boolValue

// Identifies this resource as a person. Value: "plus#person".
@property (copy) NSString *kind;

// The user's preferred language for rendering.
@property (copy) NSString *language;

// An object representation of the individual components of a person's name.
@property (retain) GTLPlusPersonName *name;

// The nickname of this person.
@property (copy) NSString *nickname;
=======
@property (nonatomic, copy) NSString *gender;

// The ID of this person.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The representation of the person's profile photo.
@property (nonatomic, retain) GTLPlusPersonImage *image;

// Whether this user has signed up for Google+.
@property (nonatomic, retain) NSNumber *isPlusUser;  // boolValue

// Identifies this resource as a person. Value: "plus#person".
@property (nonatomic, copy) NSString *kind;

// The user's preferred language for rendering.
@property (nonatomic, copy) NSString *language;

// An object representation of the individual components of a person's name.
@property (nonatomic, retain) GTLPlusPersonName *name;

// The nickname of this person.
@property (nonatomic, copy) NSString *nickname;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Type of person within Google+. Possible values include, but are not limited
// to, the following values:
// - "person" - represents an actual person.
// - "page" - represents a page.
<<<<<<< HEAD
@property (copy) NSString *objectType;

// The occupation of this person.
@property (copy) NSString *occupation;

// A list of current or past organizations with which this person is associated.
@property (retain) NSArray *organizations;  // of GTLPlusPersonOrganizationsItem

// A list of places where this person has lived.
@property (retain) NSArray *placesLived;  // of GTLPlusPersonPlacesLivedItem

// If a Google+ Page, the number of people who have +1'd this page.
@property (retain) NSNumber *plusOneCount;  // intValue
=======
@property (nonatomic, copy) NSString *objectType;

// The occupation of this person.
@property (nonatomic, copy) NSString *occupation;

// A list of current or past organizations with which this person is associated.
@property (nonatomic, retain) NSArray *organizations;  // of GTLPlusPersonOrganizationsItem

// A list of places where this person has lived.
@property (nonatomic, retain) NSArray *placesLived;  // of GTLPlusPersonPlacesLivedItem

// If a Google+ Page, the number of people who have +1'd this page.
@property (nonatomic, retain) NSNumber *plusOneCount;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The person's relationship status. Possible values include, but are not
// limited to, the following values:
// - "single" - Person is single.
// - "in_a_relationship" - Person is in a relationship.
// - "engaged" - Person is engaged.
// - "married" - Person is married.
// - "its_complicated" - The relationship is complicated.
// - "open_relationship" - Person is in an open relationship.
// - "widowed" - Person is widowed.
// - "in_domestic_partnership" - Person is in a domestic partnership.
// - "in_civil_union" - Person is in a civil union.
<<<<<<< HEAD
@property (copy) NSString *relationshipStatus;

// The person's skills.
@property (copy) NSString *skills;

// The brief description (tagline) of this person.
@property (copy) NSString *tagline;

// The URL of this person's profile.
@property (copy) NSString *url;

// A list of URLs for this person.
@property (retain) NSArray *urls;  // of GTLPlusPersonUrlsItem

// Whether the person or Google+ Page has been verified.
@property (retain) NSNumber *verified;  // boolValue
=======
@property (nonatomic, copy) NSString *relationshipStatus;

// The person's skills.
@property (nonatomic, copy) NSString *skills;

// The brief description (tagline) of this person.
@property (nonatomic, copy) NSString *tagline;

// The URL of this person's profile.
@property (nonatomic, copy) NSString *url;

// A list of URLs for this person.
@property (nonatomic, retain) NSArray *urls;  // of GTLPlusPersonUrlsItem

// Whether the person or Google+ Page has been verified.
@property (nonatomic, retain) NSNumber *verified;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonAgeRange
//

@interface GTLPlusPersonAgeRange : GTLObject

// The age range's upper bound, if any. Possible values include, but are not
// limited to, the following:
// - "17" - for age 17
// - "20" - for age 20
<<<<<<< HEAD
@property (retain) NSNumber *max;  // intValue
=======
@property (nonatomic, retain) NSNumber *max;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The age range's lower bound, if any. Possible values include, but are not
// limited to, the following:
// - "21" - for age 21
// - "18" - for age 18
<<<<<<< HEAD
@property (retain) NSNumber *min;  // intValue
=======
@property (nonatomic, retain) NSNumber *min;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCover
//

@interface GTLPlusPersonCover : GTLObject

// Extra information about the cover photo.
<<<<<<< HEAD
@property (retain) GTLPlusPersonCoverCoverInfo *coverInfo;

// The person's primary cover image.
@property (retain) GTLPlusPersonCoverCoverPhoto *coverPhoto;
=======
@property (nonatomic, retain) GTLPlusPersonCoverCoverInfo *coverInfo;

// The person's primary cover image.
@property (nonatomic, retain) GTLPlusPersonCoverCoverPhoto *coverPhoto;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The layout of the cover art. Possible values include, but are not limited to,
// the following values:
// - "banner" - One large image banner.
<<<<<<< HEAD
@property (copy) NSString *layout;
=======
@property (nonatomic, copy) NSString *layout;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonEmailsItem
//

@interface GTLPlusPersonEmailsItem : GTLObject

// The type of address. Possible values include, but are not limited to, the
// following values:
// - "account" - Google account email address.
// - "home" - Home email address.
// - "work" - Work email address.
// - "other" - Other.
<<<<<<< HEAD
@property (copy) NSString *type;

// The email address.
@property (copy) NSString *value;
=======
@property (nonatomic, copy) NSString *type;

// The email address.
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonImage
//

@interface GTLPlusPersonImage : GTLObject

// Whether the person's profile photo is the default one
<<<<<<< HEAD
@property (retain) NSNumber *isDefault;  // boolValue
=======
@property (nonatomic, retain) NSNumber *isDefault;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The URL of the person's profile photo. To resize the image and crop it to a
// square, append the query string ?sz=x, where x is the dimension in pixels of
// each side.
<<<<<<< HEAD
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonName
//

@interface GTLPlusPersonName : GTLObject

// The family name (last name) of this person.
<<<<<<< HEAD
@property (copy) NSString *familyName;

// The full name of this person, including middle names, suffixes, etc.
@property (copy) NSString *formatted;

// The given name (first name) of this person.
@property (copy) NSString *givenName;

// The honorific prefixes (such as "Dr." or "Mrs.") for this person.
@property (copy) NSString *honorificPrefix;

// The honorific suffixes (such as "Jr.") for this person.
@property (copy) NSString *honorificSuffix;

// The middle name of this person.
@property (copy) NSString *middleName;
=======
@property (nonatomic, copy) NSString *familyName;

// The full name of this person, including middle names, suffixes, etc.
@property (nonatomic, copy) NSString *formatted;

// The given name (first name) of this person.
@property (nonatomic, copy) NSString *givenName;

// The honorific prefixes (such as "Dr." or "Mrs.") for this person.
@property (nonatomic, copy) NSString *honorificPrefix;

// The honorific suffixes (such as "Jr.") for this person.
@property (nonatomic, copy) NSString *honorificSuffix;

// The middle name of this person.
@property (nonatomic, copy) NSString *middleName;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonOrganizationsItem
//

@interface GTLPlusPersonOrganizationsItem : GTLObject

// The department within the organization. Deprecated.
<<<<<<< HEAD
@property (copy) NSString *department;

// A short description of the person's role in this organization. Deprecated.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// The date that the person left this organization.
@property (copy) NSString *endDate;

// The location of this organization. Deprecated.
@property (copy) NSString *location;

// The name of the organization.
@property (copy) NSString *name;

// If "true", indicates this organization is the person's primary one, which is
// typically interpreted as the current one.
@property (retain) NSNumber *primary;  // boolValue

// The date that the person joined this organization.
@property (copy) NSString *startDate;

// The person's job title or role within the organization.
@property (copy) NSString *title;
=======
@property (nonatomic, copy) NSString *department;

// A short description of the person's role in this organization. Deprecated.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// The date that the person left this organization.
@property (nonatomic, copy) NSString *endDate;

// The location of this organization. Deprecated.
@property (nonatomic, copy) NSString *location;

// The name of the organization.
@property (nonatomic, copy) NSString *name;

// If "true", indicates this organization is the person's primary one, which is
// typically interpreted as the current one.
@property (nonatomic, retain) NSNumber *primary;  // boolValue

// The date that the person joined this organization.
@property (nonatomic, copy) NSString *startDate;

// The person's job title or role within the organization.
@property (nonatomic, copy) NSString *title;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The type of organization. Possible values include, but are not limited to,
// the following values:
// - "work" - Work.
// - "school" - School.
<<<<<<< HEAD
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonPlacesLivedItem
//

@interface GTLPlusPersonPlacesLivedItem : GTLObject

// If "true", this place of residence is this person's primary residence.
<<<<<<< HEAD
@property (retain) NSNumber *primary;  // boolValue

// A place where this person has lived. For example: "Seattle, WA", "Near
// Toronto".
@property (copy) NSString *value;
=======
@property (nonatomic, retain) NSNumber *primary;  // boolValue

// A place where this person has lived. For example: "Seattle, WA", "Near
// Toronto".
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonUrlsItem
//

@interface GTLPlusPersonUrlsItem : GTLObject

// The label of the URL.
<<<<<<< HEAD
@property (copy) NSString *label;
=======
@property (nonatomic, copy) NSString *label;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The type of URL. Possible values include, but are not limited to, the
// following values:
// - "otherProfile" - URL for another profile.
// - "contributor" - URL to a site for which this person is a contributor.
// - "website" - URL for this Google+ Page's primary website.
// - "other" - Other URL.
<<<<<<< HEAD
@property (copy) NSString *type;

// The URL value.
@property (copy) NSString *value;
=======
@property (nonatomic, copy) NSString *type;

// The URL value.
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCoverCoverInfo
//

@interface GTLPlusPersonCoverCoverInfo : GTLObject

// The difference between the left position of the cover image and the actual
// displayed cover image. Only valid for banner layout.
<<<<<<< HEAD
@property (retain) NSNumber *leftImageOffset;  // intValue

// The difference between the top position of the cover image and the actual
// displayed cover image. Only valid for banner layout.
@property (retain) NSNumber *topImageOffset;  // intValue
=======
@property (nonatomic, retain) NSNumber *leftImageOffset;  // intValue

// The difference between the top position of the cover image and the actual
// displayed cover image. Only valid for banner layout.
@property (nonatomic, retain) NSNumber *topImageOffset;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusPersonCoverCoverPhoto
//

@interface GTLPlusPersonCoverCoverPhoto : GTLObject

// The height of the image.
<<<<<<< HEAD
@property (retain) NSNumber *height;  // intValue

// The URL of the image.
@property (copy) NSString *url;

// The width of the image.
@property (retain) NSNumber *width;  // intValue
=======
@property (nonatomic, retain) NSNumber *height;  // intValue

// The URL of the image.
@property (nonatomic, copy) NSString *url;

// The width of the image.
@property (nonatomic, retain) NSNumber *width;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
