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
//  GTLMirrorContact.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Mirror API (mirror/v1)
// Description:
//   API for interacting with Glass users via the timeline.
// Documentation:
//   https://developers.google.com/glass
// Classes:
//   GTLMirrorContact (0 custom class methods, 12 custom properties)

#import "GTLMirrorContact.h"

#import "GTLMirrorCommand.h"

// ----------------------------------------------------------------------------
//
//   GTLMirrorContact
//

@implementation GTLMirrorContact
@dynamic acceptCommands, acceptTypes, displayName, identifier, imageUrls, kind,
         phoneNumber, priority, sharingFeatures, source, speakableName, type;

+ (NSDictionary *)propertyToJSONKeyMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLMirrorCommand class], @"acceptCommands",
      [NSString class], @"acceptTypes",
      [NSString class], @"imageUrls",
      [NSString class], @"sharingFeatures",
      nil];
=======
  NSDictionary *map = @{
    @"acceptCommands" : [GTLMirrorCommand class],
    @"acceptTypes" : [NSString class],
    @"imageUrls" : [NSString class],
    @"sharingFeatures" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"mirror#contact"];
}

@end
