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
//  GTLAnalyticsRealtimeData.h
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
//   GTLAnalyticsRealtimeData (0 custom class methods, 9 custom properties)
//   GTLAnalyticsRealtimeDataColumnHeadersItem (0 custom class methods, 3 custom properties)
//   GTLAnalyticsRealtimeDataProfileInfo (0 custom class methods, 6 custom properties)
//   GTLAnalyticsRealtimeDataQuery (0 custom class methods, 6 custom properties)
//   GTLAnalyticsRealtimeDataTotalsForAllResults (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsRealtimeDataColumnHeadersItem;
@class GTLAnalyticsRealtimeDataProfileInfo;
@class GTLAnalyticsRealtimeDataQuery;
@class GTLAnalyticsRealtimeDataTotalsForAllResults;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeData
//

// Real time data for a given view (profile).

@interface GTLAnalyticsRealtimeData : GTLObject

// Column headers that list dimension names followed by the metric names. The
// order of dimensions and metrics is same as specified in the request.
<<<<<<< HEAD
@property (retain) NSArray *columnHeaders;  // of GTLAnalyticsRealtimeDataColumnHeadersItem

// Unique ID for this data response.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Resource type.
@property (copy) NSString *kind;

// Information for the view (profile), for which the real time data was
// requested.
@property (retain) GTLAnalyticsRealtimeDataProfileInfo *profileInfo;

// Real time data request query parameters.
@property (retain) GTLAnalyticsRealtimeDataQuery *query;
=======
@property (nonatomic, retain) NSArray *columnHeaders;  // of GTLAnalyticsRealtimeDataColumnHeadersItem

// Unique ID for this data response.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Resource type.
@property (nonatomic, copy) NSString *kind;

// Information for the view (profile), for which the real time data was
// requested.
@property (nonatomic, retain) GTLAnalyticsRealtimeDataProfileInfo *profileInfo;

// Real time data request query parameters.
@property (nonatomic, retain) GTLAnalyticsRealtimeDataQuery *query;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Real time data rows, where each row contains a list of dimension values
// followed by the metric values. The order of dimensions and metrics is same as
// specified in the request.
<<<<<<< HEAD
@property (retain) NSArray *rows;  // of NSArray of NSString

// Link to this page.
@property (copy) NSString *selfLink;

// The total number of rows for the query, regardless of the number of rows in
// the response.
@property (retain) NSNumber *totalResults;  // intValue
=======
@property (nonatomic, retain) NSArray *rows;  // of NSArray of NSString

// Link to this page.
@property (nonatomic, copy) NSString *selfLink;

// The total number of rows for the query, regardless of the number of rows in
// the response.
@property (nonatomic, retain) NSNumber *totalResults;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Total values for the requested metrics over all the results, not just the
// results returned in this response. The order of the metric totals is same as
// the metric order specified in the request.
<<<<<<< HEAD
@property (retain) GTLAnalyticsRealtimeDataTotalsForAllResults *totalsForAllResults;
=======
@property (nonatomic, retain) GTLAnalyticsRealtimeDataTotalsForAllResults *totalsForAllResults;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataColumnHeadersItem
//

@interface GTLAnalyticsRealtimeDataColumnHeadersItem : GTLObject

// Column Type. Either DIMENSION or METRIC.
<<<<<<< HEAD
@property (copy) NSString *columnType;
=======
@property (nonatomic, copy) NSString *columnType;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Data type. Dimension column headers have only STRING as the data type. Metric
// column headers have data types for metric values such as INTEGER, DOUBLE,
// CURRENCY etc.
<<<<<<< HEAD
@property (copy) NSString *dataType;

// Column name.
@property (copy) NSString *name;
=======
@property (nonatomic, copy) NSString *dataType;

// Column name.
@property (nonatomic, copy) NSString *name;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataProfileInfo
//

@interface GTLAnalyticsRealtimeDataProfileInfo : GTLObject

// Account ID to which this view (profile) belongs.
<<<<<<< HEAD
@property (copy) NSString *accountId;

// Internal ID for the web property to which this view (profile) belongs.
@property (copy) NSString *internalWebPropertyId;

// View (Profile) ID.
@property (copy) NSString *profileId;

// View (Profile) name.
@property (copy) NSString *profileName;

// Table ID for view (profile).
@property (copy) NSString *tableId;

// Web Property ID to which this view (profile) belongs.
@property (copy) NSString *webPropertyId;
=======
@property (nonatomic, copy) NSString *accountId;

// Internal ID for the web property to which this view (profile) belongs.
@property (nonatomic, copy) NSString *internalWebPropertyId;

// View (Profile) ID.
@property (nonatomic, copy) NSString *profileId;

// View (Profile) name.
@property (nonatomic, copy) NSString *profileName;

// Table ID for view (profile).
@property (nonatomic, copy) NSString *tableId;

// Web Property ID to which this view (profile) belongs.
@property (nonatomic, copy) NSString *webPropertyId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataQuery
//

@interface GTLAnalyticsRealtimeDataQuery : GTLObject

// List of real time dimensions.
<<<<<<< HEAD
@property (copy) NSString *dimensions;

// Comma-separated list of dimension or metric filters.
@property (copy) NSString *filters;

// Unique table ID.
@property (copy) NSString *ids;

// Maximum results per page.
@property (retain) NSNumber *maxResults;  // intValue

// List of real time metrics.
@property (retain) NSArray *metrics;  // of NSString

// List of dimensions or metrics based on which real time data is sorted.
@property (retain) NSArray *sort;  // of NSString
=======
@property (nonatomic, copy) NSString *dimensions;

// Comma-separated list of dimension or metric filters.
@property (nonatomic, copy) NSString *filters;

// Unique table ID.
@property (nonatomic, copy) NSString *ids;

// Maximum results per page.
@property (nonatomic, retain) NSNumber *maxResults;  // intValue

// List of real time metrics.
@property (nonatomic, retain) NSArray *metrics;  // of NSString

// List of dimensions or metrics based on which real time data is sorted.
@property (nonatomic, retain) NSArray *sort;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsRealtimeDataTotalsForAllResults
//

@interface GTLAnalyticsRealtimeDataTotalsForAllResults : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end
