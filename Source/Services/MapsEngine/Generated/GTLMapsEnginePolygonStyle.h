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
//  GTLMapsEnginePolygonStyle.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Maps Engine API (mapsengine/v1)
// Description:
//   The Google Maps Engine API allows developers to store and query geospatial
//   vector and raster data.
// Documentation:
//   https://developers.google.com/maps-engine/
// Classes:
<<<<<<< HEAD
//   GTLMapsEnginePolygonStyle (0 custom class methods, 2 custom properties)
=======
//   GTLMapsEnginePolygonStyle (0 custom class methods, 3 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineBorder;
@class GTLMapsEngineColor;
<<<<<<< HEAD
=======
@class GTLMapsEngineLabelStyle;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// ----------------------------------------------------------------------------
//
//   GTLMapsEnginePolygonStyle
//

// Style for polygons.

@interface GTLMapsEnginePolygonStyle : GTLObject

// Fill color of the polygon. If not provided, the polygon will be transparent
// and not visible if there is no border.
<<<<<<< HEAD
@property (retain) GTLMapsEngineColor *fill;

// Border of the polygon. 0 < border.width <= 10.
@property (retain) GTLMapsEngineBorder *stroke;
=======
@property (nonatomic, retain) GTLMapsEngineColor *fill;

// Label style for the polygon.
@property (nonatomic, retain) GTLMapsEngineLabelStyle *label;

// Border of the polygon. 0 < border.width <= 10.
@property (nonatomic, retain) GTLMapsEngineBorder *stroke;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
