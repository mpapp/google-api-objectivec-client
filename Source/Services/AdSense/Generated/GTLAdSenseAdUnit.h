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
//  GTLAdSenseAdUnit.h
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
//   GTLAdSenseAdUnit (0 custom class methods, 10 custom properties)
//   GTLAdSenseAdUnitContentAdsSettings (0 custom class methods, 3 custom properties)
//   GTLAdSenseAdUnitFeedAdsSettings (0 custom class methods, 4 custom properties)
//   GTLAdSenseAdUnitMobileContentAdsSettings (0 custom class methods, 4 custom properties)
//   GTLAdSenseAdUnitContentAdsSettingsBackupOption (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAdSenseAdStyle;
@class GTLAdSenseAdUnitContentAdsSettings;
@class GTLAdSenseAdUnitContentAdsSettingsBackupOption;
@class GTLAdSenseAdUnitFeedAdsSettings;
@class GTLAdSenseAdUnitMobileContentAdsSettings;

// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdUnit
//

@interface GTLAdSenseAdUnit : GTLObject

// Identity code of this ad unit, not necessarily unique across ad clients.
<<<<<<< HEAD
@property (copy) NSString *code;

// Settings specific to content ads (AFC) and highend mobile content ads (AFMC).
@property (retain) GTLAdSenseAdUnitContentAdsSettings *contentAdsSettings;

// Custom style information specific to this ad unit.
@property (retain) GTLAdSenseAdStyle *customStyle;

// Settings specific to feed ads (AFF).
@property (retain) GTLAdSenseAdUnitFeedAdsSettings *feedAdsSettings;
=======
@property (nonatomic, copy) NSString *code;

// Settings specific to content ads (AFC) and highend mobile content ads (AFMC -
// deprecated).
@property (nonatomic, retain) GTLAdSenseAdUnitContentAdsSettings *contentAdsSettings;

// Custom style information specific to this ad unit.
@property (nonatomic, retain) GTLAdSenseAdStyle *customStyle;

// Settings specific to feed ads (AFF) - deprecated.
@property (nonatomic, retain) GTLAdSenseAdUnitFeedAdsSettings *feedAdsSettings;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Unique identifier of this ad unit. This should be considered an opaque
// identifier; it is not safe to rely on it being in any particular format.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// Kind of resource this is, in this case adsense#adUnit.
@property (copy) NSString *kind;

// Settings specific to WAP mobile content ads (AFMC).
@property (retain) GTLAdSenseAdUnitMobileContentAdsSettings *mobileContentAdsSettings;

// Name of this ad unit.
@property (copy) NSString *name;

// ID of the saved ad style which holds this ad unit's style information.
@property (copy) NSString *savedStyleId;
=======
@property (nonatomic, copy) NSString *identifier;

// Kind of resource this is, in this case adsense#adUnit.
@property (nonatomic, copy) NSString *kind;

// Settings specific to WAP mobile content ads (AFMC) - deprecated.
@property (nonatomic, retain) GTLAdSenseAdUnitMobileContentAdsSettings *mobileContentAdsSettings;

// Name of this ad unit.
@property (nonatomic, copy) NSString *name;

// ID of the saved ad style which holds this ad unit's style information.
@property (nonatomic, copy) NSString *savedStyleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Status of this ad unit. Possible values are:
// NEW: Indicates that the ad unit was created within the last seven days and
// does not yet have any activity associated with it.
// ACTIVE: Indicates that there has been activity on this ad unit in the last
// seven days.
// INACTIVE: Indicates that there has been no activity on this ad unit in the
// last seven days.
<<<<<<< HEAD
@property (copy) NSString *status;
=======
@property (nonatomic, copy) NSString *status;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdUnitContentAdsSettings
//

@interface GTLAdSenseAdUnitContentAdsSettings : GTLObject

// The backup option to be used in instances where no ad is available.
<<<<<<< HEAD
@property (retain) GTLAdSenseAdUnitContentAdsSettingsBackupOption *backupOption;

// Size of this ad unit.
@property (copy) NSString *size;

// Type of this ad unit.
@property (copy) NSString *type;
=======
@property (nonatomic, retain) GTLAdSenseAdUnitContentAdsSettingsBackupOption *backupOption;

// Size of this ad unit.
@property (nonatomic, copy) NSString *size;

// Type of this ad unit.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdUnitFeedAdsSettings
//

@interface GTLAdSenseAdUnitFeedAdsSettings : GTLObject

// The position of the ads relative to the feed entries.
<<<<<<< HEAD
@property (copy) NSString *adPosition;

// The frequency at which ads should appear in the feed (i.e. every N entries).
@property (retain) NSNumber *frequency;  // intValue

// The minimum length an entry should be in order to have attached ads.
@property (retain) NSNumber *minimumWordCount;  // intValue

// The type of ads which should appear.
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *adPosition;

// The frequency at which ads should appear in the feed (i.e. every N entries).
@property (nonatomic, retain) NSNumber *frequency;  // intValue

// The minimum length an entry should be in order to have attached ads.
@property (nonatomic, retain) NSNumber *minimumWordCount;  // intValue

// The type of ads which should appear.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdUnitMobileContentAdsSettings
//

@interface GTLAdSenseAdUnitMobileContentAdsSettings : GTLObject

// The markup language to use for this ad unit.
<<<<<<< HEAD
@property (copy) NSString *markupLanguage;

// The scripting language to use for this ad unit.
@property (copy) NSString *scriptingLanguage;

// Size of this ad unit.
@property (copy) NSString *size;

// Type of this ad unit.
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *markupLanguage;

// The scripting language to use for this ad unit.
@property (nonatomic, copy) NSString *scriptingLanguage;

// Size of this ad unit.
@property (nonatomic, copy) NSString *size;

// Type of this ad unit.
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdUnitContentAdsSettingsBackupOption
//

@interface GTLAdSenseAdUnitContentAdsSettingsBackupOption : GTLObject

// Color to use when type is set to COLOR.
<<<<<<< HEAD
@property (copy) NSString *color;

// Type of the backup option. Possible values are BLANK, COLOR and URL.
@property (copy) NSString *type;

// URL to use when type is set to URL.
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *color;

// Type of the backup option. Possible values are BLANK, COLOR and URL.
@property (nonatomic, copy) NSString *type;

// URL to use when type is set to URL.
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
