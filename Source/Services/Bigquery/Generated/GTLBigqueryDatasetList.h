<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
=======
/* Copyright (c) 2015 Google Inc.
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
//  GTLBigqueryDatasetList.h
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
//   GTLBigqueryDatasetList (0 custom class methods, 4 custom properties)
//   GTLBigqueryDatasetListDatasetsItem (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryDatasetListDatasetsItem;
@class GTLBigqueryDatasetReference;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryDatasetList
//

@interface GTLBigqueryDatasetList : GTLObject

// An array of the dataset resources in the project. Each resource contains
// basic information. For full information about a particular dataset resource,
// use the Datasets: get method. This property is omitted when there are no
// datasets in the project.
<<<<<<< HEAD
@property (retain) NSArray *datasets;  // of GTLBigqueryDatasetListDatasetsItem

// A hash value of the results page. You can use this property to determine if
// the page has changed since the last request.
@property (copy) NSString *ETag;

// The list type. This property always returns the value "bigquery#datasetList".
@property (copy) NSString *kind;

// A token that can be used to request the next results page. This property is
// omitted on the final results page.
@property (copy) NSString *nextPageToken;
=======
@property (nonatomic, retain) NSArray *datasets;  // of GTLBigqueryDatasetListDatasetsItem

// A hash value of the results page. You can use this property to determine if
// the page has changed since the last request.
@property (nonatomic, copy) NSString *ETag;

// The list type. This property always returns the value "bigquery#datasetList".
@property (nonatomic, copy) NSString *kind;

// A token that can be used to request the next results page. This property is
// omitted on the final results page.
@property (nonatomic, copy) NSString *nextPageToken;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBigqueryDatasetListDatasetsItem
//

@interface GTLBigqueryDatasetListDatasetsItem : GTLObject

// The dataset reference. Use this property to access specific parts of the
// dataset's ID, such as project ID or dataset ID.
<<<<<<< HEAD
@property (retain) GTLBigqueryDatasetReference *datasetReference;

// A descriptive name for the dataset, if one exists.
@property (copy) NSString *friendlyName;

// The fully-qualified, unique, opaque ID of the dataset.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The resource type. This property always returns the value "bigquery#dataset".
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) GTLBigqueryDatasetReference *datasetReference;

// A descriptive name for the dataset, if one exists.
@property (nonatomic, copy) NSString *friendlyName;

// The fully-qualified, unique, opaque ID of the dataset.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The resource type. This property always returns the value "bigquery#dataset".
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
