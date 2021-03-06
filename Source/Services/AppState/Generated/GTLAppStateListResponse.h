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
//  GTLAppStateListResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google App State API (appstate/v1)
// Description:
//   The Google App State API.
// Documentation:
//   https://developers.google.com/games/services/web/api/states
// Classes:
//   GTLAppStateListResponse (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAppStateGetResponse;

// ----------------------------------------------------------------------------
//
//   GTLAppStateListResponse
//

// This is a JSON template to convert a list-response for app state.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLAppStateListResponse : GTLCollectionObject

// The app state data.
<<<<<<< HEAD
@property (retain) NSArray *items;  // of GTLAppStateGetResponse

// Uniquely identifies the type of this resource. Value is always the fixed
// string appstate#listResponse.
@property (copy) NSString *kind;

// The maximum number of keys allowed for this user.
@property (retain) NSNumber *maximumKeyCount;  // intValue
=======
@property (nonatomic, retain) NSArray *items;  // of GTLAppStateGetResponse

// Uniquely identifies the type of this resource. Value is always the fixed
// string appstate#listResponse.
@property (nonatomic, copy) NSString *kind;

// The maximum number of keys allowed for this user.
@property (nonatomic, retain) NSNumber *maximumKeyCount;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
