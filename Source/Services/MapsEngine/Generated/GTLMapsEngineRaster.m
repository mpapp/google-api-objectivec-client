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
//  GTLMapsEngineRaster.m
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
//   GTLMapsEngineRaster (0 custom class methods, 16 custom properties)
=======
//   GTLMapsEngineRaster (0 custom class methods, 19 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLMapsEngineRaster.h"

#import "GTLMapsEngineAcquisitionTime.h"
#import "GTLMapsEngineFile.h"

// ----------------------------------------------------------------------------
//
//   GTLMapsEngineRaster
//

@implementation GTLMapsEngineRaster
<<<<<<< HEAD
@dynamic acquisitionTime, attribution, bbox, creationTime, descriptionProperty,
         draftAccessList, ETag, files, identifier, lastModifiedTime, maskType,
         name, processingStatus, projectId, rasterType, tags;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
@dynamic acquisitionTime, attribution, bbox, creationTime, creatorEmail,
         descriptionProperty, draftAccessList, ETag, files, identifier,
         lastModifiedTime, lastModifierEmail, maskType, name, processingStatus,
         projectId, rasterType, tags, writersCanEditPermissions;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
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
      [NSNumber class], @"bbox",
      [GTLMapsEngineFile class], @"files",
      [NSString class], @"tags",
      nil];
=======
  NSDictionary *map = @{
    @"bbox" : [NSNumber class],
    @"files" : [GTLMapsEngineFile class],
    @"tags" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
