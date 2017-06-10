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
//  GTLMapsEngineIconStyle.h
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
//   GTLMapsEngineIconStyle (0 custom class methods, 2 custom properties)
=======
//   GTLMapsEngineIconStyle (0 custom class methods, 4 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
=======
@class GTLMapsEngineScaledShape;
@class GTLMapsEngineScalingFunction;

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// ----------------------------------------------------------------------------
//
//   GTLMapsEngineIconStyle
//

// Style for icon, this is part of point style.

@interface GTLMapsEngineIconStyle : GTLObject

// Custom icon id.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;
=======
@property (nonatomic, copy) NSString *identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Stock icon name. To use a stock icon, prefix it with 'gx_'. See Stock icon
// names for valid icon names. For example, to specify small_red, set name to
// 'gx_small_red'.
<<<<<<< HEAD
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *name;

// A scalable shape.
@property (nonatomic, retain) GTLMapsEngineScaledShape *scaledShape;

// The function used to scale shapes. Required when a scaledShape is specified.
@property (nonatomic, retain) GTLMapsEngineScalingFunction *scalingFunction;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
