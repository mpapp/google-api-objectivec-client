<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLAdSenseAdsenseReportsGenerateResponse.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   AdSense Management API (adsense/v1.4)
// Description:
<<<<<<< HEAD
//   Gives AdSense publishers access to their inventory and the ability to
//   generate reports
=======
//   Accesses AdSense publishers' inventory and generates performance reports.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/adsense/management/
// Classes:
//   GTLAdSenseAdsenseReportsGenerateResponse (0 custom class methods, 9 custom properties)
//   GTLAdSenseAdsenseReportsGenerateResponseHeadersItem (0 custom class methods, 3 custom properties)

#import "GTLAdSenseAdsenseReportsGenerateResponse.h"

// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdsenseReportsGenerateResponse
//

@implementation GTLAdSenseAdsenseReportsGenerateResponse
@dynamic averages, endDate, headers, kind, rows, startDate, totalMatchedRows,
         totals, warnings;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"averages",
      [GTLAdSenseAdsenseReportsGenerateResponseHeadersItem class], @"headers",
      [NSString class], @"rows",
      [NSString class], @"totals",
      [NSString class], @"warnings",
      nil];
=======
  NSDictionary *map = @{
    @"averages" : [NSString class],
    @"headers" : [GTLAdSenseAdsenseReportsGenerateResponseHeadersItem class],
    @"rows" : [NSString class],
    @"totals" : [NSString class],
    @"warnings" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"adsense#report"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdsenseReportsGenerateResponseHeadersItem
//

@implementation GTLAdSenseAdsenseReportsGenerateResponseHeadersItem
@dynamic currency, name, type;
@end
