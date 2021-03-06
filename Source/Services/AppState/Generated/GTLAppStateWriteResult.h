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
//  GTLAppStateWriteResult.h
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
//   GTLAppStateWriteResult (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAppStateWriteResult
//

// This is a JSON template for an app state write result.

@interface GTLAppStateWriteResult : GTLObject

// The version of the data for this key on the server.
<<<<<<< HEAD
@property (copy) NSString *currentStateVersion;

// Uniquely identifies the type of this resource. Value is always the fixed
// string appstate#writeResult.
@property (copy) NSString *kind;

// The written key.
@property (retain) NSNumber *stateKey;  // intValue
=======
@property (nonatomic, copy) NSString *currentStateVersion;

// Uniquely identifies the type of this resource. Value is always the fixed
// string appstate#writeResult.
@property (nonatomic, copy) NSString *kind;

// The written key.
@property (nonatomic, retain) NSNumber *stateKey;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
