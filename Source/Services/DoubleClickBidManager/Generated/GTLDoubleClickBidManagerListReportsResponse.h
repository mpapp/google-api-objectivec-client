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
//  GTLDoubleClickBidManagerListReportsResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   DoubleClick Bid Manager API (doubleclickbidmanager/v1)
// Description:
//   API for viewing and managing your reports in DoubleClick Bid Manager.
// Documentation:
//   https://developers.google.com/bid-manager/
// Classes:
//   GTLDoubleClickBidManagerListReportsResponse (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDoubleClickBidManagerReport;

// ----------------------------------------------------------------------------
//
//   GTLDoubleClickBidManagerListReportsResponse
//

// List reports response.

@interface GTLDoubleClickBidManagerListReportsResponse : GTLObject

// Identifies what kind of resource this is. Value: the fixed string
// "doubleclickbidmanager#listReportsResponse".
<<<<<<< HEAD
@property (copy) NSString *kind;

// Retrieved reports.
@property (retain) NSArray *reports;  // of GTLDoubleClickBidManagerReport
=======
@property (nonatomic, copy) NSString *kind;

// Retrieved reports.
@property (nonatomic, retain) NSArray *reports;  // of GTLDoubleClickBidManagerReport
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
