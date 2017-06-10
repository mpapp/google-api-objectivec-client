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
//  GTLAnalyticsCustomDataSource.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
=======
//   Views and manages your Google Analytics data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsCustomDataSource (0 custom class methods, 15 custom properties)
//   GTLAnalyticsCustomDataSourceChildLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsCustomDataSourceParentLink (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsCustomDataSourceChildLink;
@class GTLAnalyticsCustomDataSourceParentLink;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsCustomDataSource
//

// JSON template for an Analytics custom data source.

@interface GTLAnalyticsCustomDataSource : GTLObject

// Account ID to which this custom data source belongs.
<<<<<<< HEAD
@property (copy) NSString *accountId;

@property (retain) GTLAnalyticsCustomDataSourceChildLink *childLink;

// Time this custom data source was created.
@property (retain) GTLDateTime *created;

// Description of custom data source.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Custom data source ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

@property (copy) NSString *importBehavior;

// Resource type for Analytics custom data source.
@property (copy) NSString *kind;

// Name of this custom data source.
@property (copy) NSString *name;

// Parent link for this custom data source. Points to the web property to which
// this custom data source belongs.
@property (retain) GTLAnalyticsCustomDataSourceParentLink *parentLink;

// IDs of views (profiles) linked to the custom data source.
@property (retain) NSArray *profilesLinked;  // of NSString

// Link for this Analytics custom data source.
@property (copy) NSString *selfLink;

// Type of the custom data source.
@property (copy) NSString *type;

// Time this custom data source was last modified.
@property (retain) GTLDateTime *updated;

@property (copy) NSString *uploadType;

// Web property ID of the form UA-XXXXX-YY to which this custom data source
// belongs.
@property (copy) NSString *webPropertyId;
=======
@property (nonatomic, copy) NSString *accountId;

@property (nonatomic, retain) GTLAnalyticsCustomDataSourceChildLink *childLink;

// Time this custom data source was created.
@property (nonatomic, retain) GTLDateTime *created;

// Description of custom data source.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Custom data source ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

@property (nonatomic, copy) NSString *importBehavior;

// Resource type for Analytics custom data source.
@property (nonatomic, copy) NSString *kind;

// Name of this custom data source.
@property (nonatomic, copy) NSString *name;

// Parent link for this custom data source. Points to the web property to which
// this custom data source belongs.
@property (nonatomic, retain) GTLAnalyticsCustomDataSourceParentLink *parentLink;

// IDs of views (profiles) linked to the custom data source.
@property (nonatomic, retain) NSArray *profilesLinked;  // of NSString

// Link for this Analytics custom data source.
@property (nonatomic, copy) NSString *selfLink;

// Type of the custom data source.
@property (nonatomic, copy) NSString *type;

// Time this custom data source was last modified.
@property (nonatomic, retain) GTLDateTime *updated;

@property (nonatomic, copy) NSString *uploadType;

// Web property ID of the form UA-XXXXX-YY to which this custom data source
// belongs.
@property (nonatomic, copy) NSString *webPropertyId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsCustomDataSourceChildLink
//

@interface GTLAnalyticsCustomDataSourceChildLink : GTLObject

// Link to the list of daily uploads for this custom data source. Link to the
// list of uploads for this custom data source.
<<<<<<< HEAD
@property (copy) NSString *href;

// Value is "analytics#dailyUploads". Value is "analytics#uploads".
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *href;

// Value is "analytics#dailyUploads". Value is "analytics#uploads".
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsCustomDataSourceParentLink
//

@interface GTLAnalyticsCustomDataSourceParentLink : GTLObject

// Link to the web property to which this custom data source belongs.
<<<<<<< HEAD
@property (copy) NSString *href;

// Value is "analytics#webproperty".
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *href;

// Value is "analytics#webproperty".
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
