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
//  GTLQueryAppState.m
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
//   GTLQueryAppState (5 custom class methods, 5 custom properties)

#import "GTLQueryAppState.h"

#import "GTLAppStateGetResponse.h"
#import "GTLAppStateListResponse.h"
#import "GTLAppStateUpdateRequest.h"
#import "GTLAppStateWriteResult.h"

@implementation GTLQueryAppState

@dynamic currentDataVersion, currentStateVersion, fields, includeData, stateKey;

<<<<<<< HEAD
#pragma mark -
#pragma mark "states" methods
// These create a GTLQueryAppState object.

+ (id)queryForStatesClearWithStateKey:(NSInteger)stateKey {
=======
#pragma mark - "states" methods
// These create a GTLQueryAppState object.

+ (instancetype)queryForStatesClearWithStateKey:(NSInteger)stateKey {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"appstate.states.clear";
  GTLQueryAppState *query = [self queryWithMethodName:methodName];
  query.stateKey = stateKey;
  query.expectedObjectClass = [GTLAppStateWriteResult class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForStatesDeleteWithStateKey:(NSInteger)stateKey {
=======
+ (instancetype)queryForStatesDeleteWithStateKey:(NSInteger)stateKey {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"appstate.states.delete";
  GTLQueryAppState *query = [self queryWithMethodName:methodName];
  query.stateKey = stateKey;
  return query;
}

<<<<<<< HEAD
+ (id)queryForStatesGetWithStateKey:(NSInteger)stateKey {
=======
+ (instancetype)queryForStatesGetWithStateKey:(NSInteger)stateKey {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"appstate.states.get";
  GTLQueryAppState *query = [self queryWithMethodName:methodName];
  query.stateKey = stateKey;
  query.expectedObjectClass = [GTLAppStateGetResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForStatesList {
=======
+ (instancetype)queryForStatesList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"appstate.states.list";
  GTLQueryAppState *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAppStateListResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForStatesUpdateWithObject:(GTLAppStateUpdateRequest *)object
                            stateKey:(NSInteger)stateKey {
=======
+ (instancetype)queryForStatesUpdateWithObject:(GTLAppStateUpdateRequest *)object
                                      stateKey:(NSInteger)stateKey {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"appstate.states.update";
  GTLQueryAppState *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.stateKey = stateKey;
  query.expectedObjectClass = [GTLAppStateWriteResult class];
  return query;
}

@end
