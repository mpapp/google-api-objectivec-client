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
//  GTLMapsEngineLineStyle.h
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
//   GTLMapsEngineLineStyle (0 custom class methods, 4 custom properties)
//   GTLMapsEngineLineStyleStroke (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMapsEngineBorder;
@class GTLMapsEngineLabelStyle;
@class GTLMapsEngineLineStyleStroke;

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineLineStyle
//

// Style for lines.

@interface GTLMapsEngineLineStyle : GTLObject

// Border of the line. 0 < border.width <= 5.
<<<<<<< HEAD
@property (retain) GTLMapsEngineBorder *border;
=======
@property (nonatomic, retain) GTLMapsEngineBorder *border;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Dash defines the pattern of the line, the values are pixel lengths of
// alternating dash and gap. If dash is not provided, then it means a solid
// line. Dash can contain up to 10 values and must contain even number of
// values.
<<<<<<< HEAD
@property (retain) NSArray *dash;  // of NSNumber (doubleValue)

// Label style for the line.
@property (retain) GTLMapsEngineLabelStyle *label;

// Stroke of the line.
@property (retain) GTLMapsEngineLineStyleStroke *stroke;
=======
@property (nonatomic, retain) NSArray *dash;  // of NSNumber (doubleValue)

// Label style for the line.
@property (nonatomic, retain) GTLMapsEngineLabelStyle *label;

// Stroke of the line.
@property (nonatomic, retain) GTLMapsEngineLineStyleStroke *stroke;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLMapsEngineLineStyleStroke
//

@interface GTLMapsEngineLineStyleStroke : GTLObject

// Color of the line.
<<<<<<< HEAD
@property (copy) NSString *color;

// Opacity of the line.
@property (retain) NSNumber *opacity;  // doubleValue

// Width of the line, in pixels. 0 <= width <= 10. If width is set to 0, the
// line will be invisible.
@property (retain) NSNumber *width;  // doubleValue
=======
@property (nonatomic, copy) NSString *color;

// Opacity of the line.
@property (nonatomic, retain) NSNumber *opacity;  // doubleValue

// Width of the line, in pixels. 0 <= width <= 10. If width is set to 0, the
// line will be invisible.
@property (nonatomic, retain) NSNumber *width;  // doubleValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
