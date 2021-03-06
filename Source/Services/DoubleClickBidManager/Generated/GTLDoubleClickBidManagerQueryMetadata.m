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
//  GTLDoubleClickBidManagerQueryMetadata.m
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
<<<<<<< HEAD
//   GTLDoubleClickBidManagerQueryMetadata (0 custom class methods, 10 custom properties)
=======
//   GTLDoubleClickBidManagerQueryMetadata (0 custom class methods, 11 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLDoubleClickBidManagerQueryMetadata.h"

// ----------------------------------------------------------------------------
//
//   GTLDoubleClickBidManagerQueryMetadata
//

@implementation GTLDoubleClickBidManagerQueryMetadata
@dynamic dataRange, format, googleCloudStoragePathForLatestReport,
<<<<<<< HEAD
         googleDrivePathForLatestReport, latestReportRunTimeMs, reportCount,
         running, sendNotification, shareEmailAddress, title;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"shareEmailAddress"];
=======
         googleDrivePathForLatestReport, latestReportRunTimeMs, locale,
         reportCount, running, sendNotification, shareEmailAddress, title;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"shareEmailAddress" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
