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
//  GTLQueryBigquery.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLBigqueryDataset;
@class GTLBigqueryDatasetReference;
@class GTLBigqueryJob;
<<<<<<< HEAD
=======
@class GTLBigqueryJsonObject;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLBigqueryTable;
@class GTLBigqueryTabledataInsertAllRowsItem;

@interface GTLQueryBigquery : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (assign) BOOL all;
@property (assign) BOOL allUsers;
@property (copy) NSString *datasetId;
@property (retain) GTLBigqueryDatasetReference *defaultDataset;
@property (assign) BOOL deleteContents;
@property (assign) BOOL dryRun;
@property (copy) NSString *jobId;
@property (copy) NSString *kind;
@property (assign) NSUInteger maxResults;
@property (copy) NSString *pageToken;
@property (assign) BOOL preserveNulls;
@property (copy) NSString *projectId;
@property (copy) NSString *projection;
@property (copy) NSString *query;
@property (retain) NSArray *rows;  // of GTLBigqueryTabledataInsertAllRowsItem
@property (assign) unsigned long long startIndex;
@property (retain) NSArray *stateFilter;  // of NSString
@property (copy) NSString *tableId;
@property (assign) NSUInteger timeoutMs;
@property (assign) BOOL useQueryCache;

#pragma mark -
#pragma mark "datasets" methods
=======
@property (nonatomic, assign) BOOL all;
@property (nonatomic, assign) BOOL allUsers;
@property (nonatomic, copy) NSString *datasetId;
@property (nonatomic, retain) GTLBigqueryDatasetReference *defaultDataset;
@property (nonatomic, assign) BOOL deleteContents;
@property (nonatomic, assign) BOOL dryRun;
@property (nonatomic, assign) BOOL ignoreUnknownValues;
@property (nonatomic, copy) NSString *jobId;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, assign) NSUInteger maxResults;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, assign) BOOL preserveNulls;
@property (nonatomic, copy) NSString *projectId;
@property (nonatomic, copy) NSString *projection;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) NSArray *rows;  // of GTLBigqueryTabledataInsertAllRowsItem
@property (nonatomic, assign) BOOL skipInvalidRows;
@property (nonatomic, assign) unsigned long long startIndex;
@property (nonatomic, retain) NSArray *stateFilter;  // of NSString
@property (nonatomic, copy) NSString *tableId;
@property (nonatomic, copy) NSString *templateSuffix;
@property (nonatomic, assign) NSUInteger timeoutMs;
@property (nonatomic, assign) BOOL useLegacySql;
@property (nonatomic, assign) BOOL useQueryCache;

#pragma mark - "datasets" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryBigquery object.

// Method: bigquery.datasets.delete
// Deletes the dataset specified by the datasetId value. Before you can delete a
// dataset, you must delete all its tables, either manually or by specifying
// deleteContents. Immediately after deletion, you can create another dataset
// with the same name.
//  Required:
//   projectId: Project ID of the dataset being deleted
//   datasetId: Dataset ID of dataset being deleted
//  Optional:
//   deleteContents: If True, delete all the tables in the dataset. If False and
//     the dataset contains tables, the request will fail. Default is False
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
+ (id)queryForDatasetsDeleteWithProjectId:(NSString *)projectId
                                datasetId:(NSString *)datasetId;
=======
+ (instancetype)queryForDatasetsDeleteWithProjectId:(NSString *)projectId
                                          datasetId:(NSString *)datasetId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.datasets.get
// Returns the dataset specified by datasetID.
//  Required:
//   projectId: Project ID of the requested dataset
//   datasetId: Dataset ID of the requested dataset
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryDataset.
+ (id)queryForDatasetsGetWithProjectId:(NSString *)projectId
                             datasetId:(NSString *)datasetId;
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryDataset.
+ (instancetype)queryForDatasetsGetWithProjectId:(NSString *)projectId
                                       datasetId:(NSString *)datasetId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.datasets.insert
// Creates a new empty dataset.
//  Optional:
//   projectId: Project ID of the new dataset
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryDataset.
<<<<<<< HEAD
+ (id)queryForDatasetsInsertWithObject:(GTLBigqueryDataset *)object;

// Method: bigquery.datasets.list
// Lists all the datasets in the specified project to which the caller has read
// access; however, a project owner can list (but not necessarily get) all
// datasets in his project.
=======
+ (instancetype)queryForDatasetsInsertWithObject:(GTLBigqueryDataset *)object;

// Method: bigquery.datasets.list
// Lists all datasets in the specified project to which you have been granted
// the READER dataset role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   projectId: Project ID of the datasets to be listed
//  Optional:
//   all: Whether to list all datasets, including hidden ones
//   maxResults: The maximum number of results to return
//   pageToken: Page token, returned by a previous call, to request the next
//     page of results
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryDatasetList.
+ (id)queryForDatasetsListWithProjectId:(NSString *)projectId;
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryDatasetList.
+ (instancetype)queryForDatasetsListWithProjectId:(NSString *)projectId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.datasets.patch
// Updates information in an existing dataset. The update method replaces the
// entire dataset resource, whereas the patch method only replaces fields that
// are provided in the submitted dataset resource. This method supports patch
// semantics.
//  Required:
//   projectId: Project ID of the dataset being updated
//   datasetId: Dataset ID of the dataset being updated
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryDataset.
<<<<<<< HEAD
+ (id)queryForDatasetsPatchWithObject:(GTLBigqueryDataset *)object
                            projectId:(NSString *)projectId
                            datasetId:(NSString *)datasetId;
=======
+ (instancetype)queryForDatasetsPatchWithObject:(GTLBigqueryDataset *)object
                                      projectId:(NSString *)projectId
                                      datasetId:(NSString *)datasetId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.datasets.update
// Updates information in an existing dataset. The update method replaces the
// entire dataset resource, whereas the patch method only replaces fields that
// are provided in the submitted dataset resource.
//  Optional:
//   datasetId: Dataset ID of the dataset being updated
//   projectId: Project ID of the dataset being updated
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryDataset.
<<<<<<< HEAD
+ (id)queryForDatasetsUpdateWithObject:(GTLBigqueryDataset *)object;

#pragma mark -
#pragma mark "jobs" methods
// These create a GTLQueryBigquery object.

// Method: bigquery.jobs.get
// Retrieves the specified job by ID.
//  Required:
//   projectId: Project ID of the requested job
//   jobId: Job ID of the requested job
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryJob.
+ (id)queryForJobsGetWithProjectId:(NSString *)projectId
                             jobId:(NSString *)jobId;
=======
+ (instancetype)queryForDatasetsUpdateWithObject:(GTLBigqueryDataset *)object;

#pragma mark - "jobs" methods
// These create a GTLQueryBigquery object.

// Method: bigquery.jobs.cancel
// Requests that a job be cancelled. This call will return immediately, and the
// client will need to poll for the job status to see if the cancel completed
// successfully. Cancelled jobs may still incur costs.
//  Required:
//   projectId: [Required] Project ID of the job to cancel
//   jobId: [Required] Job ID of the job to cancel
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryJobCancelResponse.
+ (instancetype)queryForJobsCancelWithProjectId:(NSString *)projectId
                                          jobId:(NSString *)jobId;

// Method: bigquery.jobs.get
// Returns information about a specific job. Job information is available for a
// six month period after creation. Requires that you're the person who ran the
// job, or have the Is Owner project role.
//  Required:
//   projectId: [Required] Project ID of the requested job
//   jobId: [Required] Job ID of the requested job
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryJob.
+ (instancetype)queryForJobsGetWithProjectId:(NSString *)projectId
                                       jobId:(NSString *)jobId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.jobs.getQueryResults
// Retrieves the results of a query job.
//  Required:
<<<<<<< HEAD
//   projectId: Project ID of the query job
//   jobId: Job ID of the query job
=======
//   projectId: [Required] Project ID of the query job
//   jobId: [Required] Job ID of the query job
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   maxResults: Maximum number of results to read
//   pageToken: Page token, returned by a previous call, to request the next
//     page of results
//   startIndex: Zero-based index of the starting row
//   timeoutMs: How long to wait for the query to complete, in milliseconds,
<<<<<<< HEAD
//     before returning. Default is to return immediately. If the timeout passes
//     before the job completes, the request will fail with a TIMEOUT error
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryGetQueryResultsResponse.
+ (id)queryForJobsGetQueryResultsWithProjectId:(NSString *)projectId
                                         jobId:(NSString *)jobId;

// Method: bigquery.jobs.insert
// Starts a new asynchronous job.
=======
//     before returning. Default is 10 seconds. If the timeout passes before the
//     job completes, the 'jobComplete' field in the response will be false
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryGetQueryResultsResponse.
+ (instancetype)queryForJobsGetQueryResultsWithProjectId:(NSString *)projectId
                                                   jobId:(NSString *)jobId;

// Method: bigquery.jobs.insert
// Starts a new asynchronous job. Requires the Can View project role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   projectId: Project ID of the project that will be billed for the job
//  Upload Parameters:
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
//   kGTLAuthScopeBigqueryDevstorageFullControl
//   kGTLAuthScopeBigqueryDevstorageReadOnly
//   kGTLAuthScopeBigqueryDevstorageReadWrite
// Fetches a GTLBigqueryJob.
<<<<<<< HEAD
+ (id)queryForJobsInsertWithObject:(GTLBigqueryJob *)object
                  uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: bigquery.jobs.list
// Lists all the Jobs in the specified project that were started by the user.
=======
+ (instancetype)queryForJobsInsertWithObject:(GTLBigqueryJob *)object
                            uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: bigquery.jobs.list
// Lists all jobs that you started in the specified project. Job information is
// available for a six month period after creation. The job list is sorted in
// reverse chronological order, by job creation time. Requires the Can View
// project role, or the Is Owner project role if you set the allUsers property.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   projectId: Project ID of the jobs to list
//  Optional:
//   allUsers: Whether to display jobs owned by all users in the project.
//     Default false
//   maxResults: Maximum number of results to return
//   pageToken: Page token, returned by a previous call, to request the next
//     page of results
//   projection: Restrict information returned to a set of selected fields
//      kGTLBigqueryProjectionFull: Includes all job data
//      kGTLBigqueryProjectionMinimal: Does not include the job configuration
//   stateFilter: Filter for job state
//      kGTLBigqueryStateFilterDone: Finished jobs
//      kGTLBigqueryStateFilterPending: Pending jobs
//      kGTLBigqueryStateFilterRunning: Running jobs
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryJobList.
+ (id)queryForJobsListWithProjectId:(NSString *)projectId;
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryJobList.
+ (instancetype)queryForJobsListWithProjectId:(NSString *)projectId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.jobs.query
// Runs a BigQuery SQL query synchronously and returns query results if the
// query completes within a specified timeout.
//  Required:
//   projectId: Project ID of the project billed for the query
//   query: [Required] A query string, following the BigQuery query syntax, of
//     the query to execute. Example: "SELECT count(f1) FROM
//     [myProjectId:myDatasetId.myTableId]".
//  Optional:
//   defaultDataset: [Optional] Specifies the default datasetId and projectId to
//     assume for any unqualified table names in the query. If not set, all
//     table names in the query string must be qualified in the format
//     'datasetId.tableId'.
<<<<<<< HEAD
//   dryRun: [Optional] If set, don't actually run the query. A valid query will
//     return an empty response, while an invalid query will return the same
//     error it would if it wasn't a dry run. The default value is false.
=======
//   dryRun: [Optional] If set to true, BigQuery doesn't run the job. Instead,
//     if the query is valid, BigQuery returns statistics about the job such as
//     how many bytes would be processed. If the query is invalid, an error
//     returns. The default value is false.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   kind: The resource type of the request. (Default bigquery#queryRequest)
//   maxResults: [Optional] The maximum number of rows of data to return per
//     page of results. Setting this flag to a small value such as 1000 and then
//     paging through results might improve reliability when the query result
//     set is large. In addition to this limit, responses are also limited to 10
//     MB. By default, there is no maximum row count, and only the byte limit
//     applies.
<<<<<<< HEAD
//   preserveNulls: [Deprecated] If set to false, maps null values in the query
//     response to the column's default value. Only specify if you have older
//     code that can not handle null values in the query response. The default
//     value is true. This flag is deprecated and will be ignored in a future
//     version of BigQuery.
=======
//   preserveNulls: [Deprecated] This property is deprecated.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   timeoutMs: [Optional] How long to wait for the query to complete, in
//     milliseconds, before the request times out and returns. Note that this is
//     only a timeout for the request, not the query. If the query takes longer
//     to run than the timeout value, the call returns without any results and
//     with the 'jobComplete' flag set to false. You can call GetQueryResults()
//     to wait for the query to complete and read the results. The default value
//     is 10000 milliseconds (10 seconds).
<<<<<<< HEAD
//   useQueryCache: [Optional] Whether to look for the result in the query
//     cache. The query cache is a best-effort cache that will be flushed
//     whenever tables in the query are modified. The default value is true.
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryQueryResponse.
+ (id)queryForJobsQueryWithProjectId:(NSString *)projectId
                               query:(NSString *)query;

#pragma mark -
#pragma mark "projects" methods
// These create a GTLQueryBigquery object.

// Method: bigquery.projects.list
// Lists the projects to which you have at least read access.
=======
//   useLegacySql: [Experimental] Specifies whether to use BigQuery's legacy SQL
//     dialect for this query. The default value is true. If set to false, the
//     query will use BigQuery's standard SQL:
//     https://cloud.google.com/bigquery/sql-reference/ When useLegacySql is set
//     to false, the values of allowLargeResults and flattenResults are ignored;
//     query will be run as if allowLargeResults is true and flattenResults is
//     false.
//   useQueryCache: [Optional] Whether to look for the result in the query
//     cache. The query cache is a best-effort cache that will be flushed
//     whenever tables in the query are modified. The default value is true.
//     (Default true)
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryQueryResponse.
+ (instancetype)queryForJobsQueryWithProjectId:(NSString *)projectId
                                         query:(NSString *)query;

#pragma mark - "projects" methods
// These create a GTLQueryBigquery object.

// Method: bigquery.projects.list
// Lists all projects to which you have been granted any project role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Optional:
//   maxResults: Maximum number of results to return
//   pageToken: Page token, returned by a previous call, to request the next
//     page of results
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryProjectList.
+ (id)queryForProjectsList;

#pragma mark -
#pragma mark "tabledata" methods
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryProjectList.
+ (instancetype)queryForProjectsList;

#pragma mark - "tabledata" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryBigquery object.

// Method: bigquery.tabledata.insertAll
// Streams data into BigQuery one record at a time without needing to run a load
<<<<<<< HEAD
// job.
=======
// job. Requires the WRITER dataset role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   projectId: Project ID of the destination table.
//   datasetId: Dataset ID of the destination table.
//   tableId: Table ID of the destination table.
//  Optional:
<<<<<<< HEAD
//   kind: The resource type of the response. (Default
//     bigquery#tableDataInsertAllRequest)
//   rows: The rows to insert.
=======
//   ignoreUnknownValues: [Optional] Accept rows that contain values that do not
//     match the schema. The unknown values are ignored. Default is false, which
//     treats unknown values as errors.
//   kind: The resource type of the response. (Default
//     bigquery#tableDataInsertAllRequest)
//   rows: The rows to insert.
//   skipInvalidRows: [Optional] Insert all valid rows of a request, even if
//     invalid rows exist. The default value is false, which causes the entire
//     request to fail if any invalid rows exist.
//   templateSuffix: [Experimental] If specified, treats the destination table
//     as a base template, and inserts the rows into an instance table named
//     "{destination}{templateSuffix}". BigQuery will manage creation of the
//     instance table, using the schema of the base template table. See
//     https://cloud.google.com/bigquery/streaming-data-into-bigquery#template-tables
//     for considerations when working with templates tables.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
//   kGTLAuthScopeBigqueryInsertdata
// Fetches a GTLBigqueryTableDataInsertAllResponse.
<<<<<<< HEAD
+ (id)queryForTabledataInsertAllWithProjectId:(NSString *)projectId
                                    datasetId:(NSString *)datasetId
                                      tableId:(NSString *)tableId;

// Method: bigquery.tabledata.list
// Retrieves table data from a specified set of rows.
=======
+ (instancetype)queryForTabledataInsertAllWithProjectId:(NSString *)projectId
                                              datasetId:(NSString *)datasetId
                                                tableId:(NSString *)tableId;

// Method: bigquery.tabledata.list
// Retrieves table data from a specified set of rows. Requires the READER
// dataset role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   projectId: Project ID of the table to read
//   datasetId: Dataset ID of the table to read
//   tableId: Table ID of the table to read
//  Optional:
//   maxResults: Maximum number of results to return
//   pageToken: Page token, returned by a previous call, identifying the result
//     set
//   startIndex: Zero-based index of the starting row to read
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryTableDataList.
+ (id)queryForTabledataListWithProjectId:(NSString *)projectId
                               datasetId:(NSString *)datasetId
                                 tableId:(NSString *)tableId;

#pragma mark -
#pragma mark "tables" methods
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryTableDataList.
+ (instancetype)queryForTabledataListWithProjectId:(NSString *)projectId
                                         datasetId:(NSString *)datasetId
                                           tableId:(NSString *)tableId;

#pragma mark - "tables" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryBigquery object.

// Method: bigquery.tables.delete
// Deletes the table specified by tableId from the dataset. If the table
// contains data, all the data will be deleted.
//  Required:
//   projectId: Project ID of the table to delete
//   datasetId: Dataset ID of the table to delete
//   tableId: Table ID of the table to delete
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
+ (id)queryForTablesDeleteWithProjectId:(NSString *)projectId
                              datasetId:(NSString *)datasetId
                                tableId:(NSString *)tableId;
=======
+ (instancetype)queryForTablesDeleteWithProjectId:(NSString *)projectId
                                        datasetId:(NSString *)datasetId
                                          tableId:(NSString *)tableId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.tables.get
// Gets the specified table resource by table ID. This method does not return
// the data in the table, it only returns the table resource, which describes
// the structure of this table.
//  Required:
//   projectId: Project ID of the requested table
//   datasetId: Dataset ID of the requested table
//   tableId: Table ID of the requested table
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryTable.
+ (id)queryForTablesGetWithProjectId:(NSString *)projectId
                           datasetId:(NSString *)datasetId
                             tableId:(NSString *)tableId;
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryTable.
+ (instancetype)queryForTablesGetWithProjectId:(NSString *)projectId
                                     datasetId:(NSString *)datasetId
                                       tableId:(NSString *)tableId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.tables.insert
// Creates a new, empty table in the dataset.
//  Optional:
//   datasetId: Dataset ID of the new table
//   projectId: Project ID of the new table
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryTable.
<<<<<<< HEAD
+ (id)queryForTablesInsertWithObject:(GTLBigqueryTable *)object;

// Method: bigquery.tables.list
// Lists all tables in the specified dataset.
=======
+ (instancetype)queryForTablesInsertWithObject:(GTLBigqueryTable *)object;

// Method: bigquery.tables.list
// Lists all tables in the specified dataset. Requires the READER dataset role.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   projectId: Project ID of the tables to list
//   datasetId: Dataset ID of the tables to list
//  Optional:
//   maxResults: Maximum number of results to return
//   pageToken: Page token, returned by a previous call, to request the next
//     page of results
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
<<<<<<< HEAD
// Fetches a GTLBigqueryTableList.
+ (id)queryForTablesListWithProjectId:(NSString *)projectId
                            datasetId:(NSString *)datasetId;
=======
//   kGTLAuthScopeBigqueryCloudPlatformReadOnly
// Fetches a GTLBigqueryTableList.
+ (instancetype)queryForTablesListWithProjectId:(NSString *)projectId
                                      datasetId:(NSString *)datasetId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.tables.patch
// Updates information in an existing table. The update method replaces the
// entire table resource, whereas the patch method only replaces fields that are
// provided in the submitted table resource. This method supports patch
// semantics.
//  Required:
//   projectId: Project ID of the table to update
//   datasetId: Dataset ID of the table to update
//   tableId: Table ID of the table to update
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryTable.
<<<<<<< HEAD
+ (id)queryForTablesPatchWithObject:(GTLBigqueryTable *)object
                          projectId:(NSString *)projectId
                          datasetId:(NSString *)datasetId
                            tableId:(NSString *)tableId;
=======
+ (instancetype)queryForTablesPatchWithObject:(GTLBigqueryTable *)object
                                    projectId:(NSString *)projectId
                                    datasetId:(NSString *)datasetId
                                      tableId:(NSString *)tableId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: bigquery.tables.update
// Updates information in an existing table. The update method replaces the
// entire table resource, whereas the patch method only replaces fields that are
// provided in the submitted table resource.
//  Optional:
//   datasetId: Dataset ID of the table to update
//   projectId: Project ID of the table to update
//   tableId: Table ID of the table to update
//  Authorization scope(s):
//   kGTLAuthScopeBigquery
//   kGTLAuthScopeBigqueryCloudPlatform
// Fetches a GTLBigqueryTable.
<<<<<<< HEAD
+ (id)queryForTablesUpdateWithObject:(GTLBigqueryTable *)object;

@end

#pragma mark -
#pragma mark method parameter objects
// These object are used only to pass a collection of parameters to a
// method as a single item.

@class GTLBigqueryJsonObject;

=======
+ (instancetype)queryForTablesUpdateWithObject:(GTLBigqueryTable *)object;

@end

#pragma mark - method parameter objects
// These object are used only to pass a collection of parameters to a
// method as a single item.

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// ----------------------------------------------------------------------------
//
//   GTLBigqueryTabledataInsertAllRowsItem
//

<<<<<<< HEAD
// Used for 'item' parameter on '(null)'.
=======
// Used for 'rows' parameter on 'bigquery.tabledata.insertAll'.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@interface GTLBigqueryTabledataInsertAllRowsItem : GTLObject

// [Optional] A unique ID for each row. BigQuery uses this property to detect
// duplicate insertion requests on a best-effort basis.
<<<<<<< HEAD
@property (copy) NSString *insertId;

// [Required] A JSON object that contains a row of data. The object's properties
// and values must match the destination table's schema.
@property (retain) GTLBigqueryJsonObject *json;
=======
@property (nonatomic, copy) NSString *insertId;

// [Required] A JSON object that contains a row of data. The object's properties
// and values must match the destination table's schema.
@property (nonatomic, retain) GTLBigqueryJsonObject *json;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
