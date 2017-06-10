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
//  GTLDiscoveryRpcDescription.m
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
//   GTLDiscoveryRpcDescription (0 custom class methods, 25 custom properties)
=======
//   GTLDiscoveryRpcDescription (0 custom class methods, 26 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLDiscoveryRpcDescriptionAuth (0 custom class methods, 1 custom properties)
//   GTLDiscoveryRpcDescriptionIcons (0 custom class methods, 2 custom properties)
//   GTLDiscoveryRpcDescriptionMethods (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcDescriptionParameters (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcDescriptionSchemas (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcDescriptionAuthOauth2 (0 custom class methods, 1 custom properties)
//   GTLDiscoveryRpcDescriptionAuthOauth2Scopes (0 custom class methods, 0 custom properties)
//   GTLDiscoveryRpcDescriptionAuthOauth2ScopesScope (0 custom class methods, 1 custom properties)

#import "GTLDiscoveryRpcDescription.h"

#import "GTLDiscoveryJsonSchema.h"
#import "GTLDiscoveryRpcMethod.h"

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescription
//

@implementation GTLDiscoveryRpcDescription
@dynamic auth, canonicalName, descriptionProperty, discoveryVersion,
<<<<<<< HEAD
         documentationLink, ETag, features, icons, identifier, kind, labels,
         methods, name, ownerDomain, ownerName, packagePath, parameters,
         protocol, revision, rootUrl, rpcPath, rpcUrl, schemas, title, version;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
         documentationLink, ETag, exponentialBackoffDefault, features, icons,
         identifier, kind, labels, methods, name, ownerDomain, ownerName,
         packagePath, parameters, protocol, revision, rootUrl, rpcPath, rpcUrl,
         schemas, title, version;

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
      [NSString class], @"features",
      [NSString class], @"labels",
      nil];
=======
  NSDictionary *map = @{
    @"features" : [NSString class],
    @"labels" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"discovery#rpcDescription"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionAuth
//

@implementation GTLDiscoveryRpcDescriptionAuth
@dynamic oauth2;
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionIcons
//

@implementation GTLDiscoveryRpcDescriptionIcons
@dynamic x16, x32;
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionMethods
//

@implementation GTLDiscoveryRpcDescriptionMethods

+ (Class)classForAdditionalProperties {
  return [GTLDiscoveryRpcMethod class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionParameters
//

@implementation GTLDiscoveryRpcDescriptionParameters

+ (Class)classForAdditionalProperties {
  return [GTLDiscoveryJsonSchema class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionSchemas
//

@implementation GTLDiscoveryRpcDescriptionSchemas

+ (Class)classForAdditionalProperties {
  return [GTLDiscoveryJsonSchema class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionAuthOauth2
//

@implementation GTLDiscoveryRpcDescriptionAuthOauth2
@dynamic scopes;
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionAuthOauth2Scopes
//

@implementation GTLDiscoveryRpcDescriptionAuthOauth2Scopes

+ (Class)classForAdditionalProperties {
  return [GTLDiscoveryRpcDescriptionAuthOauth2ScopesScope class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryRpcDescriptionAuthOauth2ScopesScope
//

@implementation GTLDiscoveryRpcDescriptionAuthOauth2ScopesScope
@dynamic descriptionProperty;

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
