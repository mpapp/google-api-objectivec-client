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
//  GTLDiscoveryRestMethod.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   APIs Discovery Service (discovery/v1)
// Description:
//   Lets you discover information about other Google APIs, such as what APIs
//   are available, the resource and method details for each API.
// Documentation:
//   https://developers.google.com/discovery/
// Classes:
<<<<<<< HEAD
//   GTLDiscoveryRestMethod (0 custom class methods, 14 custom properties)
=======
//   GTLDiscoveryRestMethod (0 custom class methods, 15 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLDiscoveryRestMethodMediaUpload (0 custom class methods, 3 custom properties)
//   GTLDiscoveryRestMethodParameters (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRestMethodRequest (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRestMethodResponse (0 custom class methods, 1 custom properties)
//   GTLDiscoveryRestMethodMediaUploadProtocols (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRestMethodMediaUploadProtocolsResumable (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRestMethodMediaUploadProtocolsSimple (0 custom class methods, 2 custom properties)

#import "GTLDiscoveryRestMethod.h"

#import "GTLDiscoveryJsonSchema.h"

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethod
//

@implementation GTLDiscoveryRestMethod
@dynamic descriptionProperty, etagRequired, httpMethod, identifier, mediaUpload,
         parameterOrder, parameters, path, request, response, scopes,
<<<<<<< HEAD
         supportsMediaDownload, supportsMediaUpload, supportsSubscription;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"id", @"identifier",
      nil];
=======
         supportsMediaDownload, supportsMediaUpload, supportsSubscription,
         useMediaDownloadService;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"parameterOrder",
      [NSString class], @"scopes",
      nil];
=======
  NSDictionary *map = @{
    @"parameterOrder" : [NSString class],
    @"scopes" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodMediaUpload
//

@implementation GTLDiscoveryRestMethodMediaUpload
@dynamic accept, maxSize, protocols;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"accept"];
=======
  NSDictionary *map = @{
    @"accept" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodParameters
//

@implementation GTLDiscoveryRestMethodParameters

+ (Class)classForAdditionalProperties {
  return [GTLDiscoveryJsonSchema class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodRequest
//

@implementation GTLDiscoveryRestMethodRequest
@dynamic xRef, parameterName;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"$ref"
                                forKey:@"xRef"];
=======
  NSDictionary *map = @{
    @"xRef" : @"$ref"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodResponse
//

@implementation GTLDiscoveryRestMethodResponse
@dynamic xRef;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"$ref"
                                forKey:@"xRef"];
=======
  NSDictionary *map = @{
    @"xRef" : @"$ref"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodMediaUploadProtocols
//

@implementation GTLDiscoveryRestMethodMediaUploadProtocols
@dynamic resumable, simple;
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodMediaUploadProtocolsResumable
//

@implementation GTLDiscoveryRestMethodMediaUploadProtocolsResumable
@dynamic multipart, path;
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRestMethodMediaUploadProtocolsSimple
//

@implementation GTLDiscoveryRestMethodMediaUploadProtocolsSimple
@dynamic multipart, path;
@end
