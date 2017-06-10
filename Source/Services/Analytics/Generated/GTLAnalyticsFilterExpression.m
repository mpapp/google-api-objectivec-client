<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2016 Google Inc.
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
//  GTLAnalyticsFilterExpression.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsFilterExpression (0 custom class methods, 5 custom properties)
=======
//   Views and manages your Google Analytics data.
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsFilterExpression (0 custom class methods, 6 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLAnalyticsFilterExpression.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterExpression
//

@implementation GTLAnalyticsFilterExpression
<<<<<<< HEAD
@dynamic caseSensitive, expressionValue, field, kind, matchType;
=======
@dynamic caseSensitive, expressionValue, field, fieldIndex, kind, matchType;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

+ (void)load {
  [self registerObjectClassForKind:@"analytics#filterExpression"];
}

@end
