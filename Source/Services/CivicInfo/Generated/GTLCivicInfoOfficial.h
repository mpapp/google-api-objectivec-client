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
//  GTLCivicInfoOfficial.h
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
//   GTLCivicInfoOfficial (0 custom class methods, 8 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCivicInfoChannel;
@class GTLCivicInfoSimpleAddressType;

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoOfficial
//

<<<<<<< HEAD
// Information about a official holding an elected office.
=======
// Information about a person holding an elected office.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@interface GTLCivicInfoOfficial : GTLObject

// Addresses at which to contact the official.
<<<<<<< HEAD
@property (retain) NSArray *address;  // of GTLCivicInfoSimpleAddressType

// A list of known (social) media channels for this official.
@property (retain) NSArray *channels;  // of GTLCivicInfoChannel

// The direct email addresses for the official.
@property (retain) NSArray *emails;  // of NSString

// The official's name.
@property (copy) NSString *name;

// The full name of the party the official belongs to.
@property (copy) NSString *party;

// The official's public contact phone numbers.
@property (retain) NSArray *phones;  // of NSString

// A URL for a photo of the official.
@property (copy) NSString *photoUrl;

// The official's public website URLs.
@property (retain) NSArray *urls;  // of NSString
=======
@property (nonatomic, retain) NSArray *address;  // of GTLCivicInfoSimpleAddressType

// A list of known (social) media channels for this official.
@property (nonatomic, retain) NSArray *channels;  // of GTLCivicInfoChannel

// The direct email addresses for the official.
@property (nonatomic, retain) NSArray *emails;  // of NSString

// The official's name.
@property (nonatomic, copy) NSString *name;

// The full name of the party the official belongs to.
@property (nonatomic, copy) NSString *party;

// The official's public contact phone numbers.
@property (nonatomic, retain) NSArray *phones;  // of NSString

// A URL for a photo of the official.
@property (nonatomic, copy) NSString *photoUrl;

// The official's public website URLs.
@property (nonatomic, retain) NSArray *urls;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
