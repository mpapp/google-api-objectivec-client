<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLBooksGeolayerdata.h
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
//   GTLBooksGeolayerdata (0 custom class methods, 3 custom properties)
//   GTLBooksGeolayerdataCommon (0 custom class methods, 5 custom properties)
//   GTLBooksGeolayerdataGeo (0 custom class methods, 8 custom properties)
//   GTLBooksGeolayerdataGeoBoundaryItem (0 custom class methods, 2 custom properties)
//   GTLBooksGeolayerdataGeoViewport (0 custom class methods, 2 custom properties)
//   GTLBooksGeolayerdataGeoViewportHi (0 custom class methods, 2 custom properties)
//   GTLBooksGeolayerdataGeoViewportLo (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBooksGeolayerdataCommon;
@class GTLBooksGeolayerdataGeo;
@class GTLBooksGeolayerdataGeoBoundaryItem;
@class GTLBooksGeolayerdataGeoViewport;
@class GTLBooksGeolayerdataGeoViewportHi;
@class GTLBooksGeolayerdataGeoViewportLo;

// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdata
//

@interface GTLBooksGeolayerdata : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksGeolayerdataCommon *common;
@property (retain) GTLBooksGeolayerdataGeo *geo;
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) GTLBooksGeolayerdataCommon *common;
@property (nonatomic, retain) GTLBooksGeolayerdataGeo *geo;
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataCommon
//

@interface GTLBooksGeolayerdataCommon : GTLObject

// The language of the information url and description.
<<<<<<< HEAD
@property (copy) NSString *lang;

// The URL for the preview image information.
@property (copy) NSString *previewImageUrl;

// The description for this location.
@property (copy) NSString *snippet;

// The URL for information for this location. Ex: wikipedia link.
@property (copy) NSString *snippetUrl;

// The display title and localized canonical name to use when searching for this
// entity on Google search.
@property (copy) NSString *title;
=======
@property (nonatomic, copy) NSString *lang;

// The URL for the preview image information.
@property (nonatomic, copy) NSString *previewImageUrl;

// The description for this location.
@property (nonatomic, copy) NSString *snippet;

// The URL for information for this location. Ex: wikipedia link.
@property (nonatomic, copy) NSString *snippetUrl;

// The display title and localized canonical name to use when searching for this
// entity on Google search.
@property (nonatomic, copy) NSString *title;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataGeo
//

@interface GTLBooksGeolayerdataGeo : GTLObject

// The boundary of the location as a set of loops containing pairs of latitude,
// longitude coordinates.
<<<<<<< HEAD
@property (retain) NSArray *boundary;  // of NSArray of GTLBooksGeolayerdataGeoBoundaryItem

// The cache policy active for this data. EX: UNRESTRICTED, RESTRICTED, NEVER
@property (copy) NSString *cachePolicy;

// The country code of the location.
@property (copy) NSString *countryCode;

// The latitude of the location.
@property (retain) NSNumber *latitude;  // doubleValue

// The longitude of the location.
@property (retain) NSNumber *longitude;  // doubleValue

// The type of map that should be used for this location. EX: HYBRID, ROADMAP,
// SATELLITE, TERRAIN
@property (copy) NSString *mapType;

// The viewport for showing this location. This is a latitude, longitude
// rectangle.
@property (retain) GTLBooksGeolayerdataGeoViewport *viewport;
=======
@property (nonatomic, retain) NSArray *boundary;  // of NSArray of GTLBooksGeolayerdataGeoBoundaryItem

// The cache policy active for this data. EX: UNRESTRICTED, RESTRICTED, NEVER
@property (nonatomic, copy) NSString *cachePolicy;

// The country code of the location.
@property (nonatomic, copy) NSString *countryCode;

// The latitude of the location.
@property (nonatomic, retain) NSNumber *latitude;  // doubleValue

// The longitude of the location.
@property (nonatomic, retain) NSNumber *longitude;  // doubleValue

// The type of map that should be used for this location. EX: HYBRID, ROADMAP,
// SATELLITE, TERRAIN
@property (nonatomic, copy) NSString *mapType;

// The viewport for showing this location. This is a latitude, longitude
// rectangle.
@property (nonatomic, retain) GTLBooksGeolayerdataGeoViewport *viewport;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The Zoom level to use for the map. Zoom levels between 0 (the lowest zoom
// level, in which the entire world can be seen on one map) to 21+ (down to
// individual buildings). See:
// https://developers.google.com/maps/documentation/staticmaps/#Zoomlevels
<<<<<<< HEAD
@property (retain) NSNumber *zoom;  // intValue
=======
@property (nonatomic, retain) NSNumber *zoom;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataGeoBoundaryItem
//

@interface GTLBooksGeolayerdataGeoBoundaryItem : GTLObject
<<<<<<< HEAD
@property (retain) NSNumber *latitude;  // unsignedIntValue
@property (retain) NSNumber *longitude;  // unsignedIntValue
=======
@property (nonatomic, retain) NSNumber *latitude;  // unsignedIntValue
@property (nonatomic, retain) NSNumber *longitude;  // unsignedIntValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataGeoViewport
//

@interface GTLBooksGeolayerdataGeoViewport : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksGeolayerdataGeoViewportHi *hi;
@property (retain) GTLBooksGeolayerdataGeoViewportLo *lo;
=======
@property (nonatomic, retain) GTLBooksGeolayerdataGeoViewportHi *hi;
@property (nonatomic, retain) GTLBooksGeolayerdataGeoViewportLo *lo;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataGeoViewportHi
//

@interface GTLBooksGeolayerdataGeoViewportHi : GTLObject
<<<<<<< HEAD
@property (retain) NSNumber *latitude;  // doubleValue
@property (retain) NSNumber *longitude;  // doubleValue
=======
@property (nonatomic, retain) NSNumber *latitude;  // doubleValue
@property (nonatomic, retain) NSNumber *longitude;  // doubleValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksGeolayerdataGeoViewportLo
//

@interface GTLBooksGeolayerdataGeoViewportLo : GTLObject
<<<<<<< HEAD
@property (retain) NSNumber *latitude;  // doubleValue
@property (retain) NSNumber *longitude;  // doubleValue
=======
@property (nonatomic, retain) NSNumber *latitude;  // doubleValue
@property (nonatomic, retain) NSNumber *longitude;  // doubleValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
