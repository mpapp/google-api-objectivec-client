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
//  GTLAnalyticsProfile.m
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
//   GTLAnalyticsProfile (0 custom class methods, 23 custom properties)
=======
//   Views and manages your Google Analytics data.
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsProfile (0 custom class methods, 26 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLAnalyticsProfileChildLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsProfileParentLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsProfilePermissions (0 custom class methods, 1 custom properties)

#import "GTLAnalyticsProfile.h"

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsProfile
//

@implementation GTLAnalyticsProfile
<<<<<<< HEAD
@dynamic accountId, childLink, created, currency, defaultPage,
         eCommerceTracking, excludeQueryParameters, identifier,
         internalWebPropertyId, kind, name, parentLink, permissions, selfLink,
         siteSearchCategoryParameters, siteSearchQueryParameters,
         stripSiteSearchCategoryParameters, stripSiteSearchQueryParameters,
         timezone, type, updated, webPropertyId, websiteUrl;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
@dynamic accountId, botFilteringEnabled, childLink, created, currency,
         defaultPage, eCommerceTracking, enhancedECommerceTracking,
         excludeQueryParameters, identifier, internalWebPropertyId, kind, name,
         parentLink, permissions, selfLink, siteSearchCategoryParameters,
         siteSearchQueryParameters, starred, stripSiteSearchCategoryParameters,
         stripSiteSearchQueryParameters, timezone, type, updated, webPropertyId,
         websiteUrl;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"analytics#profile"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsProfileChildLink
//

@implementation GTLAnalyticsProfileChildLink
@dynamic href, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsProfileParentLink
//

@implementation GTLAnalyticsProfileParentLink
@dynamic href, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsProfilePermissions
//

@implementation GTLAnalyticsProfilePermissions
@dynamic effective;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"effective"];
=======
  NSDictionary *map = @{
    @"effective" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

@end
