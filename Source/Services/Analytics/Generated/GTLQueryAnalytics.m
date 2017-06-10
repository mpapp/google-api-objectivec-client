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
//  GTLQueryAnalytics.m
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
//   GTLQueryAnalytics (72 custom class methods, 30 custom properties)
=======
//   Views and manages your Google Analytics data.
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLQueryAnalytics (79 custom class methods, 30 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryAnalytics.h"

#import "GTLAnalyticsAccounts.h"
#import "GTLAnalyticsAccountSummaries.h"
#import "GTLAnalyticsAccountTicket.h"
#import "GTLAnalyticsColumns.h"
#import "GTLAnalyticsCustomDataSources.h"
<<<<<<< HEAD
#import "GTLAnalyticsDailyUploadAppend.h"
#import "GTLAnalyticsDailyUploads.h"
=======
#import "GTLAnalyticsCustomDimension.h"
#import "GTLAnalyticsCustomDimensions.h"
#import "GTLAnalyticsCustomMetric.h"
#import "GTLAnalyticsCustomMetrics.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLAnalyticsEntityAdWordsLink.h"
#import "GTLAnalyticsEntityAdWordsLinks.h"
#import "GTLAnalyticsEntityUserLink.h"
#import "GTLAnalyticsEntityUserLinks.h"
#import "GTLAnalyticsExperiment.h"
#import "GTLAnalyticsExperiments.h"
#import "GTLAnalyticsFilter.h"
#import "GTLAnalyticsFilters.h"
#import "GTLAnalyticsGaData.h"
#import "GTLAnalyticsGoal.h"
#import "GTLAnalyticsGoals.h"
#import "GTLAnalyticsMcfData.h"
#import "GTLAnalyticsProfile.h"
#import "GTLAnalyticsProfileFilterLink.h"
#import "GTLAnalyticsProfileFilterLinks.h"
#import "GTLAnalyticsProfiles.h"
#import "GTLAnalyticsRealtimeData.h"
#import "GTLAnalyticsSegments.h"
#import "GTLAnalyticsUnsampledReport.h"
#import "GTLAnalyticsUnsampledReports.h"
#import "GTLAnalyticsUpload.h"
#import "GTLAnalyticsUploads.h"
#import "GTLAnalyticsWebproperties.h"
#import "GTLAnalyticsWebproperty.h"

@implementation GTLQueryAnalytics

<<<<<<< HEAD
@dynamic accountId, appendNumber, customDataImportUids, customDataSourceId,
         date, dimensions, endDate, experimentId, fields, filterId, filters,
         goalId, ids, linkId, maxResults, metrics, output, profileId,
         reportType, reset, samplingLevel, segment, sort, startDate, startIndex,
         type, unsampledReportId, uploadId, webPropertyAdWordsLinkId,
         webPropertyId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"end-date", @"endDate",
      @"max-results", @"maxResults",
      @"start-date", @"startDate",
      @"start-index", @"startIndex",
      nil];
=======
@dynamic accountId, customDataImportUids, customDataSourceId, customDimensionId,
         customMetricId, dimensions, endDate, experimentId, fields, filterId,
         filters, goalId, ids, ignoreCustomDataSourceLinks, includeEmptyRows,
         linkId, maxResults, metrics, output, profileId, reportType,
         samplingLevel, segment, sort, startDate, startIndex, unsampledReportId,
         uploadId, webPropertyAdWordsLinkId, webPropertyId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"endDate" : @"end-date",
    @"includeEmptyRows" : @"include-empty-rows",
    @"maxResults" : @"max-results",
    @"startDate" : @"start-date",
    @"startIndex" : @"start-index"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"customDataImportUids"];
  return map;
}

#pragma mark -
#pragma mark "data.ga" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForDataGaGetWithIds:(NSString *)ids
                     startDate:(NSString *)startDate
                       endDate:(NSString *)endDate
                       metrics:(NSString *)metrics {
=======
  NSDictionary *map = @{
    @"customDataImportUids" : [NSString class]
  };
  return map;
}

#pragma mark - "data.ga" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForDataGaGetWithIds:(NSString *)ids
                               startDate:(NSString *)startDate
                                 endDate:(NSString *)endDate
                                 metrics:(NSString *)metrics {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.data.ga.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.ids = ids;
  query.startDate = startDate;
  query.endDate = endDate;
  query.metrics = metrics;
  query.expectedObjectClass = [GTLAnalyticsGaData class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "data.mcf" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForDataMcfGetWithIds:(NSString *)ids
                      startDate:(NSString *)startDate
                        endDate:(NSString *)endDate
                        metrics:(NSString *)metrics {
=======
#pragma mark - "data.mcf" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForDataMcfGetWithIds:(NSString *)ids
                                startDate:(NSString *)startDate
                                  endDate:(NSString *)endDate
                                  metrics:(NSString *)metrics {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.data.mcf.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.ids = ids;
  query.startDate = startDate;
  query.endDate = endDate;
  query.metrics = metrics;
  query.expectedObjectClass = [GTLAnalyticsMcfData class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "data.realtime" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForDataRealtimeGetWithIds:(NSString *)ids
                             metrics:(NSString *)metrics {
=======
#pragma mark - "data.realtime" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForDataRealtimeGetWithIds:(NSString *)ids
                                       metrics:(NSString *)metrics {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.data.realtime.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.ids = ids;
  query.metrics = metrics;
  query.expectedObjectClass = [GTLAnalyticsRealtimeData class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.accounts" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementAccountsList {
=======
#pragma mark - "management.accounts" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementAccountsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.accounts.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAnalyticsAccounts class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.accountSummaries" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementAccountSummariesList {
=======
#pragma mark - "management.accountSummaries" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementAccountSummariesList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.accountSummaries.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAnalyticsAccountSummaries class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.accountUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementAccountUserLinksDeleteWithAccountId:(NSString *)accountId
                                                     linkId:(NSString *)linkId {
=======
#pragma mark - "management.accountUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementAccountUserLinksDeleteWithAccountId:(NSString *)accountId
                                                               linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.accountUserLinks.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.linkId = linkId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementAccountUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                               accountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementAccountUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                                         accountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.accountUserLinks.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementAccountUserLinksListWithAccountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementAccountUserLinksListWithAccountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.accountUserLinks.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLinks class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementAccountUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                               accountId:(NSString *)accountId
                                                  linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementAccountUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                                         accountId:(NSString *)accountId
                                                            linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.accountUserLinks.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.customDataSources" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementCustomDataSourcesListWithAccountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId {
=======
#pragma mark - "management.customDataSources" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementCustomDataSourcesListWithAccountId:(NSString *)accountId
                                                       webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.customDataSources.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsCustomDataSources class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.dailyUploads" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementDailyUploadsDeleteWithAccountId:(NSString *)accountId
                                          webPropertyId:(NSString *)webPropertyId
                                     customDataSourceId:(NSString *)customDataSourceId
                                                   date:(NSString *)date
                                                   type:(NSString *)type {
  NSString *methodName = @"analytics.management.dailyUploads.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.date = date;
  query.type = type;
  return query;
}

+ (id)queryForManagementDailyUploadsListWithAccountId:(NSString *)accountId
                                        webPropertyId:(NSString *)webPropertyId
                                   customDataSourceId:(NSString *)customDataSourceId
                                            startDate:(NSString *)startDate
                                              endDate:(NSString *)endDate {
  NSString *methodName = @"analytics.management.dailyUploads.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.startDate = startDate;
  query.endDate = endDate;
  query.expectedObjectClass = [GTLAnalyticsDailyUploads class];
  return query;
}

+ (id)queryForManagementDailyUploadsUploadWithAccountId:(NSString *)accountId
                                          webPropertyId:(NSString *)webPropertyId
                                     customDataSourceId:(NSString *)customDataSourceId
                                                   date:(NSString *)date
                                           appendNumber:(NSInteger)appendNumber
                                                   type:(NSString *)type
                                       uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
  NSString *methodName = @"analytics.management.dailyUploads.upload";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.date = date;
  query.appendNumber = appendNumber;
  query.type = type;
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLAnalyticsDailyUploadAppend class];
  return query;
}

#pragma mark -
#pragma mark "management.experiments" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementExperimentsDeleteWithAccountId:(NSString *)accountId
                                         webPropertyId:(NSString *)webPropertyId
                                             profileId:(NSString *)profileId
                                          experimentId:(NSString *)experimentId {
=======
#pragma mark - "management.customDimensions" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementCustomDimensionsGetWithAccountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                 customDimensionId:(NSString *)customDimensionId {
  NSString *methodName = @"analytics.management.customDimensions.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDimensionId = customDimensionId;
  query.expectedObjectClass = [GTLAnalyticsCustomDimension class];
  return query;
}

+ (instancetype)queryForManagementCustomDimensionsInsertWithObject:(GTLAnalyticsCustomDimension *)object
                                                         accountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customDimensions.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsCustomDimension class];
  return query;
}

+ (instancetype)queryForManagementCustomDimensionsListWithAccountId:(NSString *)accountId
                                                      webPropertyId:(NSString *)webPropertyId {
  NSString *methodName = @"analytics.management.customDimensions.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsCustomDimensions class];
  return query;
}

+ (instancetype)queryForManagementCustomDimensionsPatchWithObject:(GTLAnalyticsCustomDimension *)object
                                                        accountId:(NSString *)accountId
                                                    webPropertyId:(NSString *)webPropertyId
                                                customDimensionId:(NSString *)customDimensionId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customDimensions.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDimensionId = customDimensionId;
  query.expectedObjectClass = [GTLAnalyticsCustomDimension class];
  return query;
}

+ (instancetype)queryForManagementCustomDimensionsUpdateWithObject:(GTLAnalyticsCustomDimension *)object
                                                         accountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                 customDimensionId:(NSString *)customDimensionId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customDimensions.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDimensionId = customDimensionId;
  query.expectedObjectClass = [GTLAnalyticsCustomDimension class];
  return query;
}

#pragma mark - "management.customMetrics" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementCustomMetricsGetWithAccountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId
                                                 customMetricId:(NSString *)customMetricId {
  NSString *methodName = @"analytics.management.customMetrics.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customMetricId = customMetricId;
  query.expectedObjectClass = [GTLAnalyticsCustomMetric class];
  return query;
}

+ (instancetype)queryForManagementCustomMetricsInsertWithObject:(GTLAnalyticsCustomMetric *)object
                                                      accountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customMetrics.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsCustomMetric class];
  return query;
}

+ (instancetype)queryForManagementCustomMetricsListWithAccountId:(NSString *)accountId
                                                   webPropertyId:(NSString *)webPropertyId {
  NSString *methodName = @"analytics.management.customMetrics.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsCustomMetrics class];
  return query;
}

+ (instancetype)queryForManagementCustomMetricsPatchWithObject:(GTLAnalyticsCustomMetric *)object
                                                     accountId:(NSString *)accountId
                                                 webPropertyId:(NSString *)webPropertyId
                                                customMetricId:(NSString *)customMetricId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customMetrics.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customMetricId = customMetricId;
  query.expectedObjectClass = [GTLAnalyticsCustomMetric class];
  return query;
}

+ (instancetype)queryForManagementCustomMetricsUpdateWithObject:(GTLAnalyticsCustomMetric *)object
                                                      accountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId
                                                 customMetricId:(NSString *)customMetricId {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.customMetrics.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customMetricId = customMetricId;
  query.expectedObjectClass = [GTLAnalyticsCustomMetric class];
  return query;
}

#pragma mark - "management.experiments" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementExperimentsDeleteWithAccountId:(NSString *)accountId
                                                   webPropertyId:(NSString *)webPropertyId
                                                       profileId:(NSString *)profileId
                                                    experimentId:(NSString *)experimentId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.experiments.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.experimentId = experimentId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementExperimentsGetWithAccountId:(NSString *)accountId
                                      webPropertyId:(NSString *)webPropertyId
                                          profileId:(NSString *)profileId
                                       experimentId:(NSString *)experimentId {
=======
+ (instancetype)queryForManagementExperimentsGetWithAccountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                                    profileId:(NSString *)profileId
                                                 experimentId:(NSString *)experimentId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.experiments.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.experimentId = experimentId;
  query.expectedObjectClass = [GTLAnalyticsExperiment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementExperimentsInsertWithObject:(GTLAnalyticsExperiment *)object
                                          accountId:(NSString *)accountId
                                      webPropertyId:(NSString *)webPropertyId
                                          profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementExperimentsInsertWithObject:(GTLAnalyticsExperiment *)object
                                                    accountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                                    profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.experiments.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsExperiment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementExperimentsListWithAccountId:(NSString *)accountId
                                       webPropertyId:(NSString *)webPropertyId
                                           profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementExperimentsListWithAccountId:(NSString *)accountId
                                                 webPropertyId:(NSString *)webPropertyId
                                                     profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.experiments.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsExperiments class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementExperimentsPatchWithObject:(GTLAnalyticsExperiment *)object
                                         accountId:(NSString *)accountId
                                     webPropertyId:(NSString *)webPropertyId
                                         profileId:(NSString *)profileId
                                      experimentId:(NSString *)experimentId {
=======
+ (instancetype)queryForManagementExperimentsPatchWithObject:(GTLAnalyticsExperiment *)object
                                                   accountId:(NSString *)accountId
                                               webPropertyId:(NSString *)webPropertyId
                                                   profileId:(NSString *)profileId
                                                experimentId:(NSString *)experimentId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.experiments.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.experimentId = experimentId;
  query.expectedObjectClass = [GTLAnalyticsExperiment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementExperimentsUpdateWithObject:(GTLAnalyticsExperiment *)object
                                          accountId:(NSString *)accountId
                                      webPropertyId:(NSString *)webPropertyId
                                          profileId:(NSString *)profileId
                                       experimentId:(NSString *)experimentId {
=======
+ (instancetype)queryForManagementExperimentsUpdateWithObject:(GTLAnalyticsExperiment *)object
                                                    accountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                                    profileId:(NSString *)profileId
                                                 experimentId:(NSString *)experimentId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.experiments.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.experimentId = experimentId;
  query.expectedObjectClass = [GTLAnalyticsExperiment class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.filters" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementFiltersDeleteWithAccountId:(NSString *)accountId
                                          filterId:(NSString *)filterId {
=======
#pragma mark - "management.filters" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementFiltersDeleteWithAccountId:(NSString *)accountId
                                                    filterId:(NSString *)filterId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.filters.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.filterId = filterId;
  query.expectedObjectClass = [GTLAnalyticsFilter class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementFiltersGetWithAccountId:(NSString *)accountId
                                       filterId:(NSString *)filterId {
=======
+ (instancetype)queryForManagementFiltersGetWithAccountId:(NSString *)accountId
                                                 filterId:(NSString *)filterId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.filters.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.filterId = filterId;
  query.expectedObjectClass = [GTLAnalyticsFilter class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementFiltersInsertWithObject:(GTLAnalyticsFilter *)object
                                      accountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementFiltersInsertWithObject:(GTLAnalyticsFilter *)object
                                                accountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.filters.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsFilter class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementFiltersListWithAccountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementFiltersListWithAccountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.filters.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsFilters class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementFiltersPatchWithObject:(GTLAnalyticsFilter *)object
                                     accountId:(NSString *)accountId
                                      filterId:(NSString *)filterId {
=======
+ (instancetype)queryForManagementFiltersPatchWithObject:(GTLAnalyticsFilter *)object
                                               accountId:(NSString *)accountId
                                                filterId:(NSString *)filterId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.filters.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.filterId = filterId;
  query.expectedObjectClass = [GTLAnalyticsFilter class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementFiltersUpdateWithObject:(GTLAnalyticsFilter *)object
                                      accountId:(NSString *)accountId
                                       filterId:(NSString *)filterId {
=======
+ (instancetype)queryForManagementFiltersUpdateWithObject:(GTLAnalyticsFilter *)object
                                                accountId:(NSString *)accountId
                                                 filterId:(NSString *)filterId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.filters.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.filterId = filterId;
  query.expectedObjectClass = [GTLAnalyticsFilter class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.goals" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementGoalsGetWithAccountId:(NSString *)accountId
                                webPropertyId:(NSString *)webPropertyId
                                    profileId:(NSString *)profileId
                                       goalId:(NSString *)goalId {
=======
#pragma mark - "management.goals" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementGoalsGetWithAccountId:(NSString *)accountId
                                          webPropertyId:(NSString *)webPropertyId
                                              profileId:(NSString *)profileId
                                                 goalId:(NSString *)goalId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.goals.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.goalId = goalId;
  query.expectedObjectClass = [GTLAnalyticsGoal class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementGoalsInsertWithObject:(GTLAnalyticsGoal *)object
                                    accountId:(NSString *)accountId
                                webPropertyId:(NSString *)webPropertyId
                                    profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementGoalsInsertWithObject:(GTLAnalyticsGoal *)object
                                              accountId:(NSString *)accountId
                                          webPropertyId:(NSString *)webPropertyId
                                              profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.goals.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsGoal class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementGoalsListWithAccountId:(NSString *)accountId
                                 webPropertyId:(NSString *)webPropertyId
                                     profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementGoalsListWithAccountId:(NSString *)accountId
                                           webPropertyId:(NSString *)webPropertyId
                                               profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.goals.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsGoals class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementGoalsPatchWithObject:(GTLAnalyticsGoal *)object
                                   accountId:(NSString *)accountId
                               webPropertyId:(NSString *)webPropertyId
                                   profileId:(NSString *)profileId
                                      goalId:(NSString *)goalId {
=======
+ (instancetype)queryForManagementGoalsPatchWithObject:(GTLAnalyticsGoal *)object
                                             accountId:(NSString *)accountId
                                         webPropertyId:(NSString *)webPropertyId
                                             profileId:(NSString *)profileId
                                                goalId:(NSString *)goalId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.goals.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.goalId = goalId;
  query.expectedObjectClass = [GTLAnalyticsGoal class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementGoalsUpdateWithObject:(GTLAnalyticsGoal *)object
                                    accountId:(NSString *)accountId
                                webPropertyId:(NSString *)webPropertyId
                                    profileId:(NSString *)profileId
                                       goalId:(NSString *)goalId {
=======
+ (instancetype)queryForManagementGoalsUpdateWithObject:(GTLAnalyticsGoal *)object
                                              accountId:(NSString *)accountId
                                          webPropertyId:(NSString *)webPropertyId
                                              profileId:(NSString *)profileId
                                                 goalId:(NSString *)goalId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.goals.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.goalId = goalId;
  query.expectedObjectClass = [GTLAnalyticsGoal class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.profileFilterLinks" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementProfileFilterLinksDeleteWithAccountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                                    profileId:(NSString *)profileId
                                                       linkId:(NSString *)linkId {
=======
#pragma mark - "management.profileFilterLinks" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementProfileFilterLinksDeleteWithAccountId:(NSString *)accountId
                                                          webPropertyId:(NSString *)webPropertyId
                                                              profileId:(NSString *)profileId
                                                                 linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profileFilterLinks.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileFilterLinksGetWithAccountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                                 profileId:(NSString *)profileId
                                                    linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementProfileFilterLinksGetWithAccountId:(NSString *)accountId
                                                       webPropertyId:(NSString *)webPropertyId
                                                           profileId:(NSString *)profileId
                                                              linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profileFilterLinks.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsProfileFilterLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileFilterLinksInsertWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                 accountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                                 profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfileFilterLinksInsertWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                           accountId:(NSString *)accountId
                                                       webPropertyId:(NSString *)webPropertyId
                                                           profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profileFilterLinks.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsProfileFilterLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileFilterLinksListWithAccountId:(NSString *)accountId
                                              webPropertyId:(NSString *)webPropertyId
                                                  profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfileFilterLinksListWithAccountId:(NSString *)accountId
                                                        webPropertyId:(NSString *)webPropertyId
                                                            profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profileFilterLinks.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsProfileFilterLinks class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileFilterLinksPatchWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                accountId:(NSString *)accountId
                                            webPropertyId:(NSString *)webPropertyId
                                                profileId:(NSString *)profileId
                                                   linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementProfileFilterLinksPatchWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                          accountId:(NSString *)accountId
                                                      webPropertyId:(NSString *)webPropertyId
                                                          profileId:(NSString *)profileId
                                                             linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profileFilterLinks.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsProfileFilterLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileFilterLinksUpdateWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                 accountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                                 profileId:(NSString *)profileId
                                                    linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementProfileFilterLinksUpdateWithObject:(GTLAnalyticsProfileFilterLink *)object
                                                           accountId:(NSString *)accountId
                                                       webPropertyId:(NSString *)webPropertyId
                                                           profileId:(NSString *)profileId
                                                              linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profileFilterLinks.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsProfileFilterLink class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.profiles" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementProfilesDeleteWithAccountId:(NSString *)accountId
                                      webPropertyId:(NSString *)webPropertyId
                                          profileId:(NSString *)profileId {
=======
#pragma mark - "management.profiles" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementProfilesDeleteWithAccountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                                    profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profiles.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfilesGetWithAccountId:(NSString *)accountId
                                   webPropertyId:(NSString *)webPropertyId
                                       profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfilesGetWithAccountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                                 profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profiles.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsProfile class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfilesInsertWithObject:(GTLAnalyticsProfile *)object
                                       accountId:(NSString *)accountId
                                   webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementProfilesInsertWithObject:(GTLAnalyticsProfile *)object
                                                 accountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profiles.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsProfile class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfilesListWithAccountId:(NSString *)accountId
                                    webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementProfilesListWithAccountId:(NSString *)accountId
                                              webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profiles.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsProfiles class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfilesPatchWithObject:(GTLAnalyticsProfile *)object
                                      accountId:(NSString *)accountId
                                  webPropertyId:(NSString *)webPropertyId
                                      profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfilesPatchWithObject:(GTLAnalyticsProfile *)object
                                                accountId:(NSString *)accountId
                                            webPropertyId:(NSString *)webPropertyId
                                                profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profiles.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsProfile class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfilesUpdateWithObject:(GTLAnalyticsProfile *)object
                                       accountId:(NSString *)accountId
                                   webPropertyId:(NSString *)webPropertyId
                                       profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfilesUpdateWithObject:(GTLAnalyticsProfile *)object
                                                 accountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                                 profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profiles.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsProfile class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.profileUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementProfileUserLinksDeleteWithAccountId:(NSString *)accountId
                                              webPropertyId:(NSString *)webPropertyId
                                                  profileId:(NSString *)profileId
                                                     linkId:(NSString *)linkId {
=======
#pragma mark - "management.profileUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementProfileUserLinksDeleteWithAccountId:(NSString *)accountId
                                                        webPropertyId:(NSString *)webPropertyId
                                                            profileId:(NSString *)profileId
                                                               linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profileUserLinks.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                               accountId:(NSString *)accountId
                                           webPropertyId:(NSString *)webPropertyId
                                               profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfileUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                                         accountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                         profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profileUserLinks.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileUserLinksListWithAccountId:(NSString *)accountId
                                            webPropertyId:(NSString *)webPropertyId
                                                profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementProfileUserLinksListWithAccountId:(NSString *)accountId
                                                      webPropertyId:(NSString *)webPropertyId
                                                          profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.profileUserLinks.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLinks class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementProfileUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                               accountId:(NSString *)accountId
                                           webPropertyId:(NSString *)webPropertyId
                                               profileId:(NSString *)profileId
                                                  linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementProfileUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                                         accountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                         profileId:(NSString *)profileId
                                                            linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.profileUserLinks.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.segments" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementSegmentsList {
=======
#pragma mark - "management.segments" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementSegmentsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.segments.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAnalyticsSegments class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.unsampledReports" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementUnsampledReportsGetWithAccountId:(NSString *)accountId
                                           webPropertyId:(NSString *)webPropertyId
                                               profileId:(NSString *)profileId
                                       unsampledReportId:(NSString *)unsampledReportId {
=======
#pragma mark - "management.unsampledReports" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementUnsampledReportsDeleteWithAccountId:(NSString *)accountId
                                                        webPropertyId:(NSString *)webPropertyId
                                                            profileId:(NSString *)profileId
                                                    unsampledReportId:(NSString *)unsampledReportId {
  NSString *methodName = @"analytics.management.unsampledReports.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.unsampledReportId = unsampledReportId;
  return query;
}

+ (instancetype)queryForManagementUnsampledReportsGetWithAccountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                         profileId:(NSString *)profileId
                                                 unsampledReportId:(NSString *)unsampledReportId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.unsampledReports.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.unsampledReportId = unsampledReportId;
  query.expectedObjectClass = [GTLAnalyticsUnsampledReport class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementUnsampledReportsInsertWithObject:(GTLAnalyticsUnsampledReport *)object
                                               accountId:(NSString *)accountId
                                           webPropertyId:(NSString *)webPropertyId
                                               profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementUnsampledReportsInsertWithObject:(GTLAnalyticsUnsampledReport *)object
                                                         accountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                                         profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.unsampledReports.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsUnsampledReport class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementUnsampledReportsListWithAccountId:(NSString *)accountId
                                            webPropertyId:(NSString *)webPropertyId
                                                profileId:(NSString *)profileId {
=======
+ (instancetype)queryForManagementUnsampledReportsListWithAccountId:(NSString *)accountId
                                                      webPropertyId:(NSString *)webPropertyId
                                                          profileId:(NSString *)profileId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.unsampledReports.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsUnsampledReports class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.uploads" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementUploadsDeleteUploadDataWithAccountId:(NSString *)accountId
                                               webPropertyId:(NSString *)webPropertyId
                                          customDataSourceId:(NSString *)customDataSourceId {
=======
#pragma mark - "management.uploads" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementUploadsDeleteUploadDataWithAccountId:(NSString *)accountId
                                                         webPropertyId:(NSString *)webPropertyId
                                                    customDataSourceId:(NSString *)customDataSourceId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.uploads.deleteUploadData";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementUploadsGetWithAccountId:(NSString *)accountId
                                  webPropertyId:(NSString *)webPropertyId
                             customDataSourceId:(NSString *)customDataSourceId
                                       uploadId:(NSString *)uploadId {
=======
+ (instancetype)queryForManagementUploadsGetWithAccountId:(NSString *)accountId
                                            webPropertyId:(NSString *)webPropertyId
                                       customDataSourceId:(NSString *)customDataSourceId
                                                 uploadId:(NSString *)uploadId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.uploads.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.uploadId = uploadId;
  query.expectedObjectClass = [GTLAnalyticsUpload class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementUploadsListWithAccountId:(NSString *)accountId
                                   webPropertyId:(NSString *)webPropertyId
                              customDataSourceId:(NSString *)customDataSourceId {
=======
+ (instancetype)queryForManagementUploadsListWithAccountId:(NSString *)accountId
                                             webPropertyId:(NSString *)webPropertyId
                                        customDataSourceId:(NSString *)customDataSourceId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.uploads.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.expectedObjectClass = [GTLAnalyticsUploads class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementUploadsMigrateDataImportWithAccountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId
                                           customDataSourceId:(NSString *)customDataSourceId {
  NSString *methodName = @"analytics.management.uploads.migrateDataImport";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  return query;
}

+ (id)queryForManagementUploadsUploadDataWithAccountId:(NSString *)accountId
                                         webPropertyId:(NSString *)webPropertyId
                                    customDataSourceId:(NSString *)customDataSourceId
                                      uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForManagementUploadsUploadDataWithAccountId:(NSString *)accountId
                                                   webPropertyId:(NSString *)webPropertyId
                                              customDataSourceId:(NSString *)customDataSourceId
                                                uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.uploads.uploadData";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.customDataSourceId = customDataSourceId;
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLAnalyticsUpload class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.webproperties" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementWebpropertiesGetWithAccountId:(NSString *)accountId
                                        webPropertyId:(NSString *)webPropertyId {
=======
#pragma mark - "management.webproperties" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementWebpropertiesGetWithAccountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webproperties.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsWebproperty class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertiesInsertWithObject:(GTLAnalyticsWebproperty *)object
                                            accountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementWebpropertiesInsertWithObject:(GTLAnalyticsWebproperty *)object
                                                      accountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webproperties.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsWebproperty class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertiesListWithAccountId:(NSString *)accountId {
=======
+ (instancetype)queryForManagementWebpropertiesListWithAccountId:(NSString *)accountId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webproperties.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsWebproperties class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertiesPatchWithObject:(GTLAnalyticsWebproperty *)object
                                           accountId:(NSString *)accountId
                                       webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebpropertiesPatchWithObject:(GTLAnalyticsWebproperty *)object
                                                     accountId:(NSString *)accountId
                                                 webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webproperties.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsWebproperty class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertiesUpdateWithObject:(GTLAnalyticsWebproperty *)object
                                            accountId:(NSString *)accountId
                                        webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebpropertiesUpdateWithObject:(GTLAnalyticsWebproperty *)object
                                                      accountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webproperties.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsWebproperty class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.webPropertyAdWordsLinks" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementWebPropertyAdWordsLinksDeleteWithAccountId:(NSString *)accountId
                                                     webPropertyId:(NSString *)webPropertyId
                                          webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
=======
#pragma mark - "management.webPropertyAdWordsLinks" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementWebPropertyAdWordsLinksDeleteWithAccountId:(NSString *)accountId
                                                               webPropertyId:(NSString *)webPropertyId
                                                    webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.webPropertyAdWordsLinkId = webPropertyAdWordsLinkId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebPropertyAdWordsLinksGetWithAccountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId
                                       webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
=======
+ (instancetype)queryForManagementWebPropertyAdWordsLinksGetWithAccountId:(NSString *)accountId
                                                            webPropertyId:(NSString *)webPropertyId
                                                 webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.get";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.webPropertyAdWordsLinkId = webPropertyAdWordsLinkId;
  query.expectedObjectClass = [GTLAnalyticsEntityAdWordsLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebPropertyAdWordsLinksInsertWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                      accountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebPropertyAdWordsLinksInsertWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                                accountId:(NSString *)accountId
                                                            webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsEntityAdWordsLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebPropertyAdWordsLinksListWithAccountId:(NSString *)accountId
                                                   webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebPropertyAdWordsLinksListWithAccountId:(NSString *)accountId
                                                             webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsEntityAdWordsLinks class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebPropertyAdWordsLinksPatchWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                     accountId:(NSString *)accountId
                                                 webPropertyId:(NSString *)webPropertyId
                                      webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
=======
+ (instancetype)queryForManagementWebPropertyAdWordsLinksPatchWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                               accountId:(NSString *)accountId
                                                           webPropertyId:(NSString *)webPropertyId
                                                webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.patch";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.webPropertyAdWordsLinkId = webPropertyAdWordsLinkId;
  query.expectedObjectClass = [GTLAnalyticsEntityAdWordsLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebPropertyAdWordsLinksUpdateWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                      accountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId
                                       webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
=======
+ (instancetype)queryForManagementWebPropertyAdWordsLinksUpdateWithObject:(GTLAnalyticsEntityAdWordsLink *)object
                                                                accountId:(NSString *)accountId
                                                            webPropertyId:(NSString *)webPropertyId
                                                 webPropertyAdWordsLinkId:(NSString *)webPropertyAdWordsLinkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webPropertyAdWordsLinks.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.webPropertyAdWordsLinkId = webPropertyAdWordsLinkId;
  query.expectedObjectClass = [GTLAnalyticsEntityAdWordsLink class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "management.webpropertyUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementWebpropertyUserLinksDeleteWithAccountId:(NSString *)accountId
                                                  webPropertyId:(NSString *)webPropertyId
                                                         linkId:(NSString *)linkId {
=======
#pragma mark - "management.webpropertyUserLinks" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForManagementWebpropertyUserLinksDeleteWithAccountId:(NSString *)accountId
                                                            webPropertyId:(NSString *)webPropertyId
                                                                   linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webpropertyUserLinks.delete";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.linkId = linkId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertyUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                                   accountId:(NSString *)accountId
                                               webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebpropertyUserLinksInsertWithObject:(GTLAnalyticsEntityUserLink *)object
                                                             accountId:(NSString *)accountId
                                                         webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webpropertyUserLinks.insert";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertyUserLinksListWithAccountId:(NSString *)accountId
                                                webPropertyId:(NSString *)webPropertyId {
=======
+ (instancetype)queryForManagementWebpropertyUserLinksListWithAccountId:(NSString *)accountId
                                                          webPropertyId:(NSString *)webPropertyId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.management.webpropertyUserLinks.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLinks class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForManagementWebpropertyUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                                   accountId:(NSString *)accountId
                                               webPropertyId:(NSString *)webPropertyId
                                                      linkId:(NSString *)linkId {
=======
+ (instancetype)queryForManagementWebpropertyUserLinksUpdateWithObject:(GTLAnalyticsEntityUserLink *)object
                                                             accountId:(NSString *)accountId
                                                         webPropertyId:(NSString *)webPropertyId
                                                                linkId:(NSString *)linkId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.management.webpropertyUserLinks.update";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.linkId = linkId;
  query.expectedObjectClass = [GTLAnalyticsEntityUserLink class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "metadata.columns" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForMetadataColumnsListWithReportType:(NSString *)reportType {
=======
#pragma mark - "metadata.columns" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForMetadataColumnsListWithReportType:(NSString *)reportType {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"analytics.metadata.columns.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.reportType = reportType;
  query.expectedObjectClass = [GTLAnalyticsColumns class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "provisioning" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForProvisioningCreateAccountTicketWithObject:(GTLAnalyticsAccountTicket *)object {
=======
#pragma mark - "provisioning" methods
// These create a GTLQueryAnalytics object.

+ (instancetype)queryForProvisioningCreateAccountTicketWithObject:(GTLAnalyticsAccountTicket *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"analytics.provisioning.createAccountTicket";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLAnalyticsAccountTicket class];
  return query;
}

@end
