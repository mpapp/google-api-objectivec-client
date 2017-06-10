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
//  GTLAnalyticsFilterExpression.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterExpression
//

// JSON template for an Analytics filter expression.

@interface GTLAnalyticsFilterExpression : GTLObject

// Determines if the filter is case sensitive.
<<<<<<< HEAD
@property (retain) NSNumber *caseSensitive;  // boolValue

// Filter expression value
@property (copy) NSString *expressionValue;

// Field to filter. Possible values:
// - Reserved
// - UNUSED,
=======
@property (nonatomic, retain) NSNumber *caseSensitive;  // boolValue

// Filter expression value
@property (nonatomic, copy) NSString *expressionValue;

// Field to filter. Possible values:
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// - Content and Traffic
// - PAGE_REQUEST_URI,
// - PAGE_HOSTNAME,
// - PAGE_TITLE,
// - REFERRAL,
// - COST_DATA_URI (Campaign target URL),
// - HIT_TYPE,
// - INTERNAL_SEARCH_TERM,
// - INTERNAL_SEARCH_TYPE,
// - SOURCE_PROPERTY_TRACKING_ID,
// - Campaign or AdGroup
// - CAMPAIGN_SOURCE,
// - CAMPAIGN_MEDIUM,
// - CAMPAIGN_NAME,
// - CAMPAIGN_AD_GROUP,
// - CAMPAIGN_TERM,
// - CAMPAIGN_CONTENT,
// - CAMPAIGN_CODE,
// - CAMPAIGN_REFERRAL_PATH,
// - E-Commerce
// - TRANSACTION_COUNTRY,
// - TRANSACTION_REGION,
// - TRANSACTION_CITY,
// - TRANSACTION_AFFILIATION (Store or order location),
// - ITEM_NAME,
// - ITEM_CODE,
// - ITEM_VARIATION,
// - TRANSACTION_ID,
// - TRANSACTION_CURRENCY_CODE,
// - PRODUCT_ACTION_TYPE,
// - Audience/Users
// - BROWSER,
// - BROWSER_VERSION,
// - BROWSER_SIZE,
// - PLATFORM,
// - PLATFORM_VERSION,
// - LANGUAGE,
// - SCREEN_RESOLUTION,
// - SCREEN_COLORS,
<<<<<<< HEAD
// - JAVA_ENABLED,
=======
// - JAVA_ENABLED (Boolean Field),
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// - FLASH_VERSION,
// - GEO_SPEED (Connection speed),
// - VISITOR_TYPE,
// - GEO_ORGANIZATION (ISP organization),
// - GEO_DOMAIN,
// - GEO_IP_ADDRESS,
// - GEO_IP_VERSION,
// - Location
// - GEO_COUNTRY,
// - GEO_REGION,
// - GEO_CITY,
// - Event
// - EVENT_CATEGORY,
// - EVENT_ACTION,
// - EVENT_LABEL,
// - Other
// - CUSTOM_FIELD_1,
// - CUSTOM_FIELD_2,
// - USER_DEFINED_VALUE,
// - Application
// - APP_ID,
// - APP_INSTALLER_ID,
// - APP_NAME,
// - APP_VERSION,
// - SCREEN,
<<<<<<< HEAD
// - IS_APP,
// - IS_FATAL_EXCEPTION,
// - EXCEPTION_DESCRIPTION,
// - Mobile device
// - IS_MOBILE,
// - IS_TABLET,
// - MOBILE_HAS_QWERTY_KEYBOARD,
// - MOBILE_HAS_NFC_SUPPORT,
// - MOBILE_HAS_CELLULAR_RADIO,
// - MOBILE_HAS_WIFI_SUPPORT,
=======
// - IS_APP (Boolean Field),
// - IS_FATAL_EXCEPTION (Boolean Field),
// - EXCEPTION_DESCRIPTION,
// - Mobile device
// - IS_MOBILE (Boolean Field, Deprecated. Use DEVICE_CATEGORY=mobile),
// - IS_TABLET (Boolean Field, Deprecated. Use DEVICE_CATEGORY=tablet),
// - DEVICE_CATEGORY,
// - MOBILE_HAS_QWERTY_KEYBOARD (Boolean Field),
// - MOBILE_HAS_NFC_SUPPORT (Boolean Field),
// - MOBILE_HAS_CELLULAR_RADIO (Boolean Field),
// - MOBILE_HAS_WIFI_SUPPORT (Boolean Field),
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// - MOBILE_BRAND_NAME,
// - MOBILE_MODEL_NAME,
// - MOBILE_MARKETING_NAME,
// - MOBILE_POINTING_METHOD,
// - Social
// - SOCIAL_NETWORK,
// - SOCIAL_ACTION,
// - SOCIAL_ACTION_TARGET,
<<<<<<< HEAD
@property (copy) NSString *field;

// Kind value for filter expression
@property (copy) NSString *kind;

// Match type for this filter. Possible values are BEGINS_WITH, EQUAL,
// ENDS_WITH, CONTAINS, MATCHES. Include and Exclude filters can use any match
// type. Match type is not applicable to Upper case and Lower case filters.
// Search and Replace expressions in the Search and Replace filter and all
// filter expressions in the Advanced filter default to MATCHES. User should not
// set match type for those filters.
@property (copy) NSString *matchType;
=======
// - Custom dimension
// - CUSTOM_DIMENSION (See accompanying field index),
@property (nonatomic, copy) NSString *field;

// The Index of the custom dimension. Set only if the field is a is
// CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldIndex;  // intValue

// Kind value for filter expression
@property (nonatomic, copy) NSString *kind;

// Match type for this filter. Possible values are BEGINS_WITH, EQUAL,
// ENDS_WITH, CONTAINS, or MATCHES. GEO_DOMAIN, GEO_IP_ADDRESS,
// PAGE_REQUEST_URI, or PAGE_HOSTNAME filters can use any match type; all other
// filters must use MATCHES.
@property (nonatomic, copy) NSString *matchType;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
