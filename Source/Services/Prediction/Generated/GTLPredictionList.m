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
//  GTLPredictionList.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Prediction API (prediction/v1.6)
// Description:
//   Lets you access a cloud hosted machine learning service that makes it easy
//   to build smart apps
// Documentation:
//   https://developers.google.com/prediction/docs/developer-guide
// Classes:
//   GTLPredictionList (0 custom class methods, 4 custom properties)

#import "GTLPredictionList.h"

#import "GTLPredictionInsert2.h"

// ----------------------------------------------------------------------------
//
//   GTLPredictionList
//

@implementation GTLPredictionList
@dynamic items, kind, nextPageToken, selfLink;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLPredictionInsert2 class]
                                forKey:@"items"];
=======
  NSDictionary *map = @{
    @"items" : [GTLPredictionInsert2 class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"prediction#list"];
}

@end
