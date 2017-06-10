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
//  GTLBooksVolume.m
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
//   GTLBooksVolume (0 custom class methods, 11 custom properties)
//   GTLBooksVolumeAccessInfo (0 custom class methods, 14 custom properties)
//   GTLBooksVolumeLayerInfo (0 custom class methods, 1 custom properties)
//   GTLBooksVolumeRecommendedInfo (0 custom class methods, 1 custom properties)
//   GTLBooksVolumeSaleInfo (0 custom class methods, 8 custom properties)
//   GTLBooksVolumeSearchInfo (0 custom class methods, 1 custom properties)
<<<<<<< HEAD
//   GTLBooksVolumeUserInfo (0 custom class methods, 11 custom properties)
//   GTLBooksVolumeVolumeInfo (0 custom class methods, 22 custom properties)
=======
//   GTLBooksVolumeUserInfo (0 custom class methods, 13 custom properties)
//   GTLBooksVolumeVolumeInfo (0 custom class methods, 25 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLBooksVolumeAccessInfoEpub (0 custom class methods, 3 custom properties)
//   GTLBooksVolumeAccessInfoPdf (0 custom class methods, 3 custom properties)
//   GTLBooksVolumeLayerInfoLayersItem (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeSaleInfoListPrice (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeSaleInfoOffersItem (0 custom class methods, 4 custom properties)
//   GTLBooksVolumeSaleInfoRetailPrice (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeUserInfoCopy (0 custom class methods, 4 custom properties)
//   GTLBooksVolumeUserInfoRentalPeriod (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeUserInfoUserUploadedVolumeInfo (0 custom class methods, 1 custom properties)
//   GTLBooksVolumeVolumeInfoDimensions (0 custom class methods, 3 custom properties)
//   GTLBooksVolumeVolumeInfoImageLinks (0 custom class methods, 6 custom properties)
//   GTLBooksVolumeVolumeInfoIndustryIdentifiersItem (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeSaleInfoOffersItemListPrice (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeSaleInfoOffersItemRentalDuration (0 custom class methods, 2 custom properties)
//   GTLBooksVolumeSaleInfoOffersItemRetailPrice (0 custom class methods, 2 custom properties)

#import "GTLBooksVolume.h"

#import "GTLBooksDownloadAccessRestriction.h"
#import "GTLBooksReadingPosition.h"
#import "GTLBooksReview.h"

// ----------------------------------------------------------------------------
//
//   GTLBooksVolume
//

@implementation GTLBooksVolume
@dynamic accessInfo, ETag, identifier, kind, layerInfo, recommendedInfo,
         saleInfo, searchInfo, selfLink, userInfo, volumeInfo;

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

+ (void)load {
  [self registerObjectClassForKind:@"books#volume"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeAccessInfo
//

@implementation GTLBooksVolumeAccessInfo
@dynamic accessViewStatus, country, downloadAccess, driveImportedContentLink,
         embeddable, epub, explicitOfflineLicenseManagement, pdf, publicDomain,
         quoteSharingAllowed, textToSpeechPermission, viewability, viewOrderUrl,
         webReaderLink;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeLayerInfo
//

@implementation GTLBooksVolumeLayerInfo
@dynamic layers;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBooksVolumeLayerInfoLayersItem class]
                                forKey:@"layers"];
=======
  NSDictionary *map = @{
    @"layers" : [GTLBooksVolumeLayerInfoLayersItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeRecommendedInfo
//

@implementation GTLBooksVolumeRecommendedInfo
@dynamic explanation;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfo
//

@implementation GTLBooksVolumeSaleInfo
@dynamic buyLink, country, isEbook, listPrice, offers, onSaleDate, retailPrice,
         saleability;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLBooksVolumeSaleInfoOffersItem class]
                                forKey:@"offers"];
=======
  NSDictionary *map = @{
    @"offers" : [GTLBooksVolumeSaleInfoOffersItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSearchInfo
//

@implementation GTLBooksVolumeSearchInfo
@dynamic textSnippet;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeUserInfo
//

@implementation GTLBooksVolumeUserInfo
<<<<<<< HEAD
@dynamic copyProperty, isInMyBooks, isPreordered, isPurchased, isUploaded,
         readingPosition, rentalPeriod, rentalState, review, updated,
         userUploadedVolumeInfo;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"copy"
                                forKey:@"copyProperty"];
=======
@dynamic acquisitionType, copyProperty, entitlementType, isInMyBooks,
         isPreordered, isPurchased, isUploaded, readingPosition, rentalPeriod,
         rentalState, review, updated, userUploadedVolumeInfo;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"copyProperty" : @"copy"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeVolumeInfo
//

@implementation GTLBooksVolumeVolumeInfo
<<<<<<< HEAD
@dynamic authors, averageRating, canonicalVolumeLink, categories,
         contentVersion, descriptionProperty, dimensions, imageLinks,
         industryIdentifiers, infoLink, language, mainCategory, pageCount,
         previewLink, printedPageCount, printType, publishedDate, publisher,
         ratingsCount, readingModes, subtitle, title;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"description"
                                forKey:@"descriptionProperty"];
=======
@dynamic allowAnonLogging, authors, averageRating, canonicalVolumeLink,
         categories, contentVersion, descriptionProperty, dimensions,
         imageLinks, industryIdentifiers, infoLink, language, mainCategory,
         maturityRating, pageCount, previewLink, printedPageCount, printType,
         publishedDate, publisher, ratingsCount, readingModes, samplePageCount,
         subtitle, title;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"authors",
      [NSString class], @"categories",
      [GTLBooksVolumeVolumeInfoIndustryIdentifiersItem class], @"industryIdentifiers",
      nil];
=======
  NSDictionary *map = @{
    @"authors" : [NSString class],
    @"categories" : [NSString class],
    @"industryIdentifiers" : [GTLBooksVolumeVolumeInfoIndustryIdentifiersItem class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeAccessInfoEpub
//

@implementation GTLBooksVolumeAccessInfoEpub
@dynamic acsTokenLink, downloadLink, isAvailable;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeAccessInfoPdf
//

@implementation GTLBooksVolumeAccessInfoPdf
@dynamic acsTokenLink, downloadLink, isAvailable;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeLayerInfoLayersItem
//

@implementation GTLBooksVolumeLayerInfoLayersItem
@dynamic layerId, volumeAnnotationsVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoListPrice
//

@implementation GTLBooksVolumeSaleInfoListPrice
@dynamic amount, currencyCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoOffersItem
//

@implementation GTLBooksVolumeSaleInfoOffersItem
@dynamic finskyOfferType, listPrice, rentalDuration, retailPrice;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoRetailPrice
//

@implementation GTLBooksVolumeSaleInfoRetailPrice
@dynamic amount, currencyCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeUserInfoCopy
//

@implementation GTLBooksVolumeUserInfoCopy
@dynamic allowedCharacterCount, limitType, remainingCharacterCount, updated;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeUserInfoRentalPeriod
//

@implementation GTLBooksVolumeUserInfoRentalPeriod
@dynamic endUtcSec, startUtcSec;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeUserInfoUserUploadedVolumeInfo
//

@implementation GTLBooksVolumeUserInfoUserUploadedVolumeInfo
@dynamic processingState;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeVolumeInfoDimensions
//

@implementation GTLBooksVolumeVolumeInfoDimensions
@dynamic height, thickness, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeVolumeInfoImageLinks
//

@implementation GTLBooksVolumeVolumeInfoImageLinks
@dynamic extraLarge, large, medium, small, smallThumbnail, thumbnail;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeVolumeInfoIndustryIdentifiersItem
//

@implementation GTLBooksVolumeVolumeInfoIndustryIdentifiersItem
@dynamic identifierProperty, type;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"identifier"
                                forKey:@"identifierProperty"];
=======
  NSDictionary *map = @{
    @"identifierProperty" : @"identifier"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoOffersItemListPrice
//

@implementation GTLBooksVolumeSaleInfoOffersItemListPrice
@dynamic amountInMicros, currencyCode;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoOffersItemRentalDuration
//

@implementation GTLBooksVolumeSaleInfoOffersItemRentalDuration
@dynamic count, unit;
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksVolumeSaleInfoOffersItemRetailPrice
//

@implementation GTLBooksVolumeSaleInfoOffersItemRetailPrice
@dynamic amountInMicros, currencyCode;
@end
