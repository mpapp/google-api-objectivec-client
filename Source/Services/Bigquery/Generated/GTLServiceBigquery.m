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
//  GTLServiceBigquery.m
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
=======
//   https://cloud.google.com/bigquery/
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Classes:
//   GTLServiceBigquery (0 custom class methods, 0 custom properties)

#import "GTLBigquery.h"

@implementation GTLServiceBigquery

#if DEBUG
// Method compiled in debug builds just to check that all the needed support
// classes are present at link time.
+ (NSArray *)checkClasses {
<<<<<<< HEAD
  NSArray *classes = [NSArray arrayWithObjects:
                      [GTLQueryBigquery class],
                      [GTLBigqueryDataset class],
                      [GTLBigqueryDatasetList class],
                      [GTLBigqueryDatasetReference class],
                      [GTLBigqueryErrorProto class],
                      [GTLBigqueryGetQueryResultsResponse class],
                      [GTLBigqueryJob class],
                      [GTLBigqueryJobConfiguration class],
                      [GTLBigqueryJobConfigurationExtract class],
                      [GTLBigqueryJobConfigurationLink class],
                      [GTLBigqueryJobConfigurationLoad class],
                      [GTLBigqueryJobConfigurationQuery class],
                      [GTLBigqueryJobConfigurationTableCopy class],
                      [GTLBigqueryJobList class],
                      [GTLBigqueryJobReference class],
                      [GTLBigqueryJobStatistics class],
                      [GTLBigqueryJobStatistics2 class],
                      [GTLBigqueryJobStatistics3 class],
                      [GTLBigqueryJobStatus class],
                      [GTLBigqueryJsonObject class],
                      [GTLBigqueryProjectList class],
                      [GTLBigqueryProjectReference class],
                      [GTLBigqueryQueryResponse class],
                      [GTLBigqueryTable class],
                      [GTLBigqueryTableCell class],
                      [GTLBigqueryTableDataInsertAllResponse class],
                      [GTLBigqueryTableDataList class],
                      [GTLBigqueryTableFieldSchema class],
                      [GTLBigqueryTableList class],
                      [GTLBigqueryTableReference class],
                      [GTLBigqueryTableRow class],
                      [GTLBigqueryTableSchema class],
                      [GTLBigqueryViewDefinition class],
                      nil];
=======
  NSArray *classes = @[
    [GTLQueryBigquery class],
    [GTLBigqueryBigtableColumn class],
    [GTLBigqueryBigtableColumnFamily class],
    [GTLBigqueryBigtableOptions class],
    [GTLBigqueryCsvOptions class],
    [GTLBigqueryDataset class],
    [GTLBigqueryDatasetList class],
    [GTLBigqueryDatasetReference class],
    [GTLBigqueryErrorProto class],
    [GTLBigqueryExplainQueryStage class],
    [GTLBigqueryExplainQueryStep class],
    [GTLBigqueryExternalDataConfiguration class],
    [GTLBigqueryGetQueryResultsResponse class],
    [GTLBigqueryGoogleSheetsOptions class],
    [GTLBigqueryJob class],
    [GTLBigqueryJobCancelResponse class],
    [GTLBigqueryJobConfiguration class],
    [GTLBigqueryJobConfigurationExtract class],
    [GTLBigqueryJobConfigurationLoad class],
    [GTLBigqueryJobConfigurationQuery class],
    [GTLBigqueryJobConfigurationTableCopy class],
    [GTLBigqueryJobList class],
    [GTLBigqueryJobReference class],
    [GTLBigqueryJobStatistics class],
    [GTLBigqueryJobStatistics2 class],
    [GTLBigqueryJobStatistics3 class],
    [GTLBigqueryJobStatistics4 class],
    [GTLBigqueryJobStatus class],
    [GTLBigqueryJsonObject class],
    [GTLBigqueryProjectList class],
    [GTLBigqueryProjectReference class],
    [GTLBigqueryQueryResponse class],
    [GTLBigqueryStreamingbuffer class],
    [GTLBigqueryTable class],
    [GTLBigqueryTableCell class],
    [GTLBigqueryTableDataInsertAllResponse class],
    [GTLBigqueryTableDataList class],
    [GTLBigqueryTableFieldSchema class],
    [GTLBigqueryTableList class],
    [GTLBigqueryTableReference class],
    [GTLBigqueryTableRow class],
    [GTLBigqueryTableSchema class],
    [GTLBigqueryTimePartitioning class],
    [GTLBigqueryUserDefinedFunctionResource class],
    [GTLBigqueryViewDefinition class]
  ];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return classes;
}
#endif  // DEBUG

<<<<<<< HEAD
- (id)init {
=======
- (instancetype)init {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  self = [super init];
  if (self) {
    // Version from discovery.
    self.apiVersion = @"v2";

    // From discovery.  Where to send JSON-RPC.
    // Turn off prettyPrint for this service to save bandwidth (especially on
    // mobile). The fetcher logging will pretty print.
    self.rpcURL = [NSURL URLWithString:@"https://www.googleapis.com/rpc?prettyPrint=false"];
    self.rpcUploadURL = [NSURL URLWithString:@"https://www.googleapis.com/upload/rpc?uploadType=resumable&prettyPrint=false"];
  }
  return self;
}

@end
