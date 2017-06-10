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
//  GTLQueryBigquery.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Description:
//   A data platform for customers to create, manage, share and query data.
// Documentation:
<<<<<<< HEAD
//   https://developers.google.com/bigquery/docs/overview
// Classes:
//   GTLQueryBigquery (20 custom class methods, 21 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLQueryBigquery (21 custom class methods, 25 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLBigqueryTabledataInsertAllRowsItem (0 custom class methods, 2 custom properties)

#import "GTLQueryBigquery.h"

#import "GTLBigqueryDataset.h"
#import "GTLBigqueryDatasetList.h"
#import "GTLBigqueryDatasetReference.h"
#import "GTLBigqueryGetQueryResultsResponse.h"
#import "GTLBigqueryJob.h"
<<<<<<< HEAD
#import "GTLBigqueryJobList.h"
=======
#import "GTLBigqueryJobCancelResponse.h"
#import "GTLBigqueryJobList.h"
#import "GTLBigqueryJsonObject.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLBigqueryProjectList.h"
#import "GTLBigqueryQueryResponse.h"
#import "GTLBigqueryTable.h"
#import "GTLBigqueryTableDataInsertAllResponse.h"
#import "GTLBigqueryTableDataList.h"
#import "GTLBigqueryTableList.h"

@implementation GTLQueryBigquery

@dynamic all, allUsers, datasetId, defaultDataset, deleteContents, dryRun,
<<<<<<< HEAD
         fields, jobId, kind, maxResults, pageToken, preserveNulls, projectId,
         projection, query, rows, startIndex, stateFilter, tableId, timeoutMs,
         useQueryCache;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLBigqueryTabledataInsertAllRowsItem class], @"rows",
      [NSString class], @"stateFilter",
      nil];
  return map;
}

#pragma mark -
#pragma mark "datasets" methods
// These create a GTLQueryBigquery object.

+ (id)queryForDatasetsDeleteWithProjectId:(NSString *)projectId
                                datasetId:(NSString *)datasetId {
=======
         fields, ignoreUnknownValues, jobId, kind, maxResults, pageToken,
         preserveNulls, projectId, projection, query, rows, skipInvalidRows,
         startIndex, stateFilter, tableId, templateSuffix, timeoutMs,
         useLegacySql, useQueryCache;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"rows" : [GTLBigqueryTabledataInsertAllRowsItem class],
    @"stateFilter" : [NSString class]
  };
  return map;
}

#pragma mark - "datasets" methods
// These create a GTLQueryBigquery object.

+ (instancetype)queryForDatasetsDeleteWithProjectId:(NSString *)projectId
                                          datasetId:(NSString *)datasetId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.datasets.delete";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForDatasetsGetWithProjectId:(NSString *)projectId
                             datasetId:(NSString *)datasetId {
=======
+ (instancetype)queryForDatasetsGetWithProjectId:(NSString *)projectId
                                       datasetId:(NSString *)datasetId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.datasets.get";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLBigqueryDataset class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDatasetsInsertWithObject:(GTLBigqueryDataset *)object {
=======
+ (instancetype)queryForDatasetsInsertWithObject:(GTLBigqueryDataset *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.datasets.insert";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBigqueryDataset class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDatasetsListWithProjectId:(NSString *)projectId {
=======
+ (instancetype)queryForDatasetsListWithProjectId:(NSString *)projectId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.datasets.list";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLBigqueryDatasetList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDatasetsPatchWithObject:(GTLBigqueryDataset *)object
                            projectId:(NSString *)projectId
                            datasetId:(NSString *)datasetId {
=======
+ (instancetype)queryForDatasetsPatchWithObject:(GTLBigqueryDataset *)object
                                      projectId:(NSString *)projectId
                                      datasetId:(NSString *)datasetId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.datasets.patch";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLBigqueryDataset class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForDatasetsUpdateWithObject:(GTLBigqueryDataset *)object {
=======
+ (instancetype)queryForDatasetsUpdateWithObject:(GTLBigqueryDataset *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.datasets.update";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBigqueryDataset class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "jobs" methods
// These create a GTLQueryBigquery object.

+ (id)queryForJobsGetWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId {
=======
#pragma mark - "jobs" methods
// These create a GTLQueryBigquery object.

+ (instancetype)queryForJobsCancelWithProjectId:(NSString *)projectId
                                          jobId:(NSString *)jobId {
  NSString *methodName = @"bigquery.jobs.cancel";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.jobId = jobId;
  query.expectedObjectClass = [GTLBigqueryJobCancelResponse class];
  return query;
}

+ (instancetype)queryForJobsGetWithProjectId:(NSString *)projectId
                                       jobId:(NSString *)jobId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.jobs.get";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.jobId = jobId;
  query.expectedObjectClass = [GTLBigqueryJob class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForJobsGetQueryResultsWithProjectId:(NSString *)projectId
                                         jobId:(NSString *)jobId {
=======
+ (instancetype)queryForJobsGetQueryResultsWithProjectId:(NSString *)projectId
                                                   jobId:(NSString *)jobId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.jobs.getQueryResults";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.jobId = jobId;
  query.expectedObjectClass = [GTLBigqueryGetQueryResultsResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForJobsInsertWithObject:(GTLBigqueryJob *)object
                  uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForJobsInsertWithObject:(GTLBigqueryJob *)object
                            uploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.jobs.insert";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLBigqueryJob class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForJobsListWithProjectId:(NSString *)projectId {
=======
+ (instancetype)queryForJobsListWithProjectId:(NSString *)projectId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.jobs.list";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLBigqueryJobList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForJobsQueryWithProjectId:(NSString *)projectId
                               query:(NSString *)query_param {
=======
+ (instancetype)queryForJobsQueryWithProjectId:(NSString *)projectId
                                         query:(NSString *)query_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.jobs.query";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.query = query_param;
  query.expectedObjectClass = [GTLBigqueryQueryResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "projects" methods
// These create a GTLQueryBigquery object.

+ (id)queryForProjectsList {
=======
#pragma mark - "projects" methods
// These create a GTLQueryBigquery object.

+ (instancetype)queryForProjectsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.projects.list";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBigqueryProjectList class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tabledata" methods
// These create a GTLQueryBigquery object.

+ (id)queryForTabledataInsertAllWithProjectId:(NSString *)projectId
                                    datasetId:(NSString *)datasetId
                                      tableId:(NSString *)tableId {
=======
#pragma mark - "tabledata" methods
// These create a GTLQueryBigquery object.

+ (instancetype)queryForTabledataInsertAllWithProjectId:(NSString *)projectId
                                              datasetId:(NSString *)datasetId
                                                tableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.tabledata.insertAll";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLBigqueryTableDataInsertAllResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTabledataListWithProjectId:(NSString *)projectId
                               datasetId:(NSString *)datasetId
                                 tableId:(NSString *)tableId {
=======
+ (instancetype)queryForTabledataListWithProjectId:(NSString *)projectId
                                         datasetId:(NSString *)datasetId
                                           tableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.tabledata.list";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLBigqueryTableDataList class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "tables" methods
// These create a GTLQueryBigquery object.

+ (id)queryForTablesDeleteWithProjectId:(NSString *)projectId
                              datasetId:(NSString *)datasetId
                                tableId:(NSString *)tableId {
=======
#pragma mark - "tables" methods
// These create a GTLQueryBigquery object.

+ (instancetype)queryForTablesDeleteWithProjectId:(NSString *)projectId
                                        datasetId:(NSString *)datasetId
                                          tableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.tables.delete";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesGetWithProjectId:(NSString *)projectId
                           datasetId:(NSString *)datasetId
                             tableId:(NSString *)tableId {
=======
+ (instancetype)queryForTablesGetWithProjectId:(NSString *)projectId
                                     datasetId:(NSString *)datasetId
                                       tableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.tables.get";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLBigqueryTable class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesInsertWithObject:(GTLBigqueryTable *)object {
=======
+ (instancetype)queryForTablesInsertWithObject:(GTLBigqueryTable *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.tables.insert";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBigqueryTable class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesListWithProjectId:(NSString *)projectId
                            datasetId:(NSString *)datasetId {
=======
+ (instancetype)queryForTablesListWithProjectId:(NSString *)projectId
                                      datasetId:(NSString *)datasetId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"bigquery.tables.list";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.expectedObjectClass = [GTLBigqueryTableList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesPatchWithObject:(GTLBigqueryTable *)object
                          projectId:(NSString *)projectId
                          datasetId:(NSString *)datasetId
                            tableId:(NSString *)tableId {
=======
+ (instancetype)queryForTablesPatchWithObject:(GTLBigqueryTable *)object
                                    projectId:(NSString *)projectId
                                    datasetId:(NSString *)datasetId
                                      tableId:(NSString *)tableId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.tables.patch";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.projectId = projectId;
  query.datasetId = datasetId;
  query.tableId = tableId;
  query.expectedObjectClass = [GTLBigqueryTable class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForTablesUpdateWithObject:(GTLBigqueryTable *)object {
=======
+ (instancetype)queryForTablesUpdateWithObject:(GTLBigqueryTable *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"bigquery.tables.update";
  GTLQueryBigquery *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBigqueryTable class];
  return query;
}

@end

<<<<<<< HEAD
#pragma mark -
#pragma mark method parameter objects
=======
#pragma mark - method parameter objects
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These object are used only to pass a collection of parameters to a
// method as a single item.

// ----------------------------------------------------------------------------
//
//   GTLBigqueryTabledataInsertAllRowsItem
//

@implementation GTLBigqueryTabledataInsertAllRowsItem
@dynamic insertId, json;
@end
