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
//  GTLBooksOffers.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Books API (books/v1)
// Description:
//   Lets you search for books and manage your Google Books library.
// Documentation:
//   https://developers.google.com/books/docs/v1/getting_started
// Classes:
//   GTLBooksOffers (0 custom class methods, 2 custom properties)
<<<<<<< HEAD
//   GTLBooksOffersItemsItem (0 custom class methods, 3 custom properties)
=======
//   GTLBooksOffersItemsItem (0 custom class methods, 4 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLBooksOffersItemsItemItemsItem (0 custom class methods, 6 custom properties)

#import "GTLBooksOffers.h"

// ----------------------------------------------------------------------------
//
//   GTLBooksOffers
//

@implementation GTLBooksOffers
@dynamic items, kind;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBooksOffersItemsItem class]
                                forKey:@"items"];
=======
  NSDictionary *map = @{
    @"items" : [GTLBooksOffersItemsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"promooffer#offers"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksOffersItemsItem
//

@implementation GTLBooksOffersItemsItem
<<<<<<< HEAD
@dynamic artUrl, identifier, items;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic artUrl, gservicesKey, identifier, items;

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
    [NSDictionary dictionaryWithObject:[GTLBooksOffersItemsItemItemsItem class]
                                forKey:@"items"];
=======
  NSDictionary *map = @{
    @"items" : [GTLBooksOffersItemsItemItemsItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksOffersItemsItemItemsItem
//

@implementation GTLBooksOffersItemsItemItemsItem
@dynamic author, canonicalVolumeLink, coverUrl, descriptionProperty, title,
         volumeId;

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
