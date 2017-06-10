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
//  GTLQueryDoubleClickBidManager.m
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
//   GTLQueryDoubleClickBidManager (8 custom class methods, 12 custom properties)
=======
//   GTLQueryDoubleClickBidManager (9 custom class methods, 18 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryDoubleClickBidManager.h"

#import "GTLDoubleClickBidManagerDownloadLineItemsResponse.h"
#import "GTLDoubleClickBidManagerListQueriesResponse.h"
#import "GTLDoubleClickBidManagerListReportsResponse.h"
<<<<<<< HEAD
=======
#import "GTLDoubleClickBidManagerNote.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLDoubleClickBidManagerQuery.h"
#import "GTLDoubleClickBidManagerUploadLineItemsResponse.h"

@implementation GTLQueryDoubleClickBidManager

<<<<<<< HEAD
@dynamic dataRange, dryRun, fields, filterIds, filterType, format, lineItems,
         query, queryId, reportDataEndTimeMs, reportDataStartTimeMs,
         timezoneCode;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSNumber class]
                                forKey:@"filterIds"];
  return map;
}

#pragma mark -
#pragma mark "lineitems" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (id)queryForLineitemsDownloadlineitems {
=======
@dynamic action, dataRange, dryRun, fields, fileSpec, filterIds, filterType,
         format, href, identifier, lineItems, notes, query, queryId,
         reportDataEndTimeMs, reportDataStartTimeMs, timezoneCode, token;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"filterIds" : [NSNumber class],
    @"notes" : [GTLDoubleClickBidManagerNote class]
  };
  return map;
}

#pragma mark - "lineitems" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (instancetype)queryForLineitemsDownloadlineitems {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.lineitems.downloadlineitems";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLDoubleClickBidManagerDownloadLineItemsResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLineitemsUploadlineitems {
=======
+ (instancetype)queryForLineitemsUploadlineitems {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.lineitems.uploadlineitems";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLDoubleClickBidManagerUploadLineItemsResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "queries" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (id)queryForQueriesCreatequery {
=======
#pragma mark - "queries" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (instancetype)queryForQueriesCreatequery {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.queries.createquery";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLDoubleClickBidManagerQuery class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForQueriesDeletequeryWithQueryId:(long long)queryId {
=======
+ (instancetype)queryForQueriesDeletequeryWithQueryId:(long long)queryId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.queries.deletequery";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.queryId = queryId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForQueriesGetqueryWithQueryId:(long long)queryId {
=======
+ (instancetype)queryForQueriesGetqueryWithQueryId:(long long)queryId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.queries.getquery";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.queryId = queryId;
  query.expectedObjectClass = [GTLDoubleClickBidManagerQuery class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForQueriesListqueries {
=======
+ (instancetype)queryForQueriesListqueries {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.queries.listqueries";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLDoubleClickBidManagerListQueriesResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForQueriesRunqueryWithQueryId:(long long)queryId {
=======
+ (instancetype)queryForQueriesRunqueryWithQueryId:(long long)queryId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.queries.runquery";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.queryId = queryId;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "reports" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (id)queryForReportsListreportsWithQueryId:(long long)queryId {
=======
#pragma mark - "reports" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (instancetype)queryForReportsListreportsWithQueryId:(long long)queryId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"doubleclickbidmanager.reports.listreports";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  query.queryId = queryId;
  query.expectedObjectClass = [GTLDoubleClickBidManagerListReportsResponse class];
  return query;
}

<<<<<<< HEAD
=======
#pragma mark - "rubicon" methods
// These create a GTLQueryDoubleClickBidManager object.

+ (instancetype)queryForRubiconNotifyproposalchange {
  NSString *methodName = @"doubleclickbidmanager.rubicon.notifyproposalchange";
  GTLQueryDoubleClickBidManager *query = [self queryWithMethodName:methodName];
  return query;
}

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
