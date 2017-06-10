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
//  GTLBigqueryJobConfigurationLoad.h
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
//   GTLBigqueryJobConfigurationLoad (0 custom class methods, 16 custom properties)
=======
//   https://cloud.google.com/bigquery/
// Classes:
//   GTLBigqueryJobConfigurationLoad (0 custom class methods, 18 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBigqueryTableReference;
@class GTLBigqueryTableSchema;

// ----------------------------------------------------------------------------
//
//   GTLBigqueryJobConfigurationLoad
//

@interface GTLBigqueryJobConfigurationLoad : GTLObject

// [Optional] Accept rows that are missing trailing optional columns. The
<<<<<<< HEAD
// missing values are treated as nulls. Default is false which treats short rows
// as errors. Only applicable to CSV, ignored for other formats.
@property (retain) NSNumber *allowJaggedRows;  // boolValue

// Indicates if BigQuery should allow quoted data sections that contain newline
// characters in a CSV file. The default value is false.
@property (retain) NSNumber *allowQuotedNewlines;  // boolValue
=======
// missing values are treated as nulls. If false, records with missing trailing
// columns are treated as bad records, and if there are too many bad records, an
// invalid error is returned in the job result. The default value is false. Only
// applicable to CSV, ignored for other formats.
@property (nonatomic, retain) NSNumber *allowJaggedRows;  // boolValue

// Indicates if BigQuery should allow quoted data sections that contain newline
// characters in a CSV file. The default value is false.
@property (nonatomic, retain) NSNumber *allowQuotedNewlines;  // boolValue

// [Experimental] Indicates if we should automatically infer the options and
// schema for CSV and JSON sources.
@property (nonatomic, retain) NSNumber *autodetect;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] Specifies whether the job is allowed to create new tables. The
// following values are supported: CREATE_IF_NEEDED: If the table does not
// exist, BigQuery creates the table. CREATE_NEVER: The table must already
// exist. If it does not, a 'notFound' error is returned in the job result. The
// default value is CREATE_IF_NEEDED. Creation, truncation and append actions
// occur as one atomic update upon job completion.
<<<<<<< HEAD
@property (copy) NSString *createDisposition;

// [Required] The destination table to load the data into.
@property (retain) GTLBigqueryTableReference *destinationTable;
=======
@property (nonatomic, copy) NSString *createDisposition;

// [Required] The destination table to load the data into.
@property (nonatomic, retain) GTLBigqueryTableReference *destinationTable;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] The character encoding of the data. The supported values are UTF-8
// or ISO-8859-1. The default value is UTF-8. BigQuery decodes the data after
// the raw, binary data has been split using the values of the quote and
// fieldDelimiter properties.
<<<<<<< HEAD
@property (copy) NSString *encoding;

// [Optional] The separator for fields in a CSV file. BigQuery converts the
// string to ISO-8859-1 encoding, and then uses the first byte of the encoded
// string to split the data in its raw, binary state. BigQuery also supports the
// escape sequence "\t" to specify a tab separator. The default value is a comma
// (',').
@property (copy) NSString *fieldDelimiter;

// [Optional] Accept rows that contain values that do not match the schema. The
// unknown values are ignored. Default is false which treats unknown values as
// errors. For CSV this ignores extra values at the end of a line. For JSON this
// ignores named values that do not match any column name.
@property (retain) NSNumber *ignoreUnknownValues;  // boolValue

// [Optional] The maximum number of bad records that BigQuery can ignore when
// running the job. If the number of bad records exceeds this value, an
// 'invalid' error is returned in the job result and the job fails. The default
// value is 0, which requires that all records are valid.
@property (retain) NSNumber *maxBadRecords;  // intValue
=======
@property (nonatomic, copy) NSString *encoding;

// [Optional] The separator for fields in a CSV file. The separator can be any
// ISO-8859-1 single-byte character. To use a character in the range 128-255,
// you must encode the character as UTF8. BigQuery converts the string to
// ISO-8859-1 encoding, and then uses the first byte of the encoded string to
// split the data in its raw, binary state. BigQuery also supports the escape
// sequence "\t" to specify a tab separator. The default value is a comma (',').
@property (nonatomic, copy) NSString *fieldDelimiter;

// [Optional] Indicates if BigQuery should allow extra values that are not
// represented in the table schema. If true, the extra values are ignored. If
// false, records with extra columns are treated as bad records, and if there
// are too many bad records, an invalid error is returned in the job result. The
// default value is false. The sourceFormat property determines what BigQuery
// treats as an extra value: CSV: Trailing columns JSON: Named values that don't
// match any column names
@property (nonatomic, retain) NSNumber *ignoreUnknownValues;  // boolValue

// [Optional] The maximum number of bad records that BigQuery can ignore when
// running the job. If the number of bad records exceeds this value, an invalid
// error is returned in the job result. The default value is 0, which requires
// that all records are valid.
@property (nonatomic, retain) NSNumber *maxBadRecords;  // intValue

// [Experimental] If sourceFormat is set to "DATASTORE_BACKUP", indicates which
// entity properties to load into BigQuery from a Cloud Datastore backup.
// Property names are case sensitive and must be top-level properties. If no
// properties are specified, BigQuery loads all properties. If any named
// property isn't found in the Cloud Datastore backup, an invalid error is
// returned in the job result.
@property (nonatomic, retain) NSArray *projectionFields;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] The value that is used to quote data sections in a CSV file.
// BigQuery converts the string to ISO-8859-1 encoding, and then uses the first
// byte of the encoded string to split the data in its raw, binary state. The
// default value is a double-quote ('"'). If your data does not contain quoted
// sections, set the property value to an empty string. If your data contains
// quoted newline characters, you must also set the allowQuotedNewlines property
// to true.
<<<<<<< HEAD
@property (copy) NSString *quote;

// [Optional] The schema for the destination table. The schema can be omitted if
// the destination table already exists or if the schema can be inferred from
// the loaded data.
@property (retain) GTLBigqueryTableSchema *schema;
=======
@property (nonatomic, copy) NSString *quote;

// [Optional] The schema for the destination table. The schema can be omitted if
// the destination table already exists, or if you're loading data from Google
// Cloud Datastore.
@property (nonatomic, retain) GTLBigqueryTableSchema *schema;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Deprecated] The inline schema. For CSV schemas, specify as
// "Field1:Type1[,Field2:Type2]*". For example, "foo:STRING, bar:INTEGER,
// baz:FLOAT".
<<<<<<< HEAD
@property (copy) NSString *schemaInline;

// [Deprecated] The format of the schemaInline property.
@property (copy) NSString *schemaInlineFormat;
=======
@property (nonatomic, copy) NSString *schemaInline;

// [Deprecated] The format of the schemaInline property.
@property (nonatomic, copy) NSString *schemaInlineFormat;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] The number of rows at the top of a CSV file that BigQuery will
// skip when loading the data. The default value is 0. This property is useful
// if you have header rows in the file that should be skipped.
<<<<<<< HEAD
@property (retain) NSNumber *skipLeadingRows;  // intValue

// [Optional] The format of the data files. For CSV files, specify "CSV". For
// datastore backups, specify "DATASTORE_BACKUP". For newline-delimited JSON,
// specify "NEWLINE_DELIMITED_JSON". The default value is CSV.
@property (copy) NSString *sourceFormat;

// [Required] The fully-qualified URIs that point to your data on Google Cloud
// Storage.
@property (retain) NSArray *sourceUris;  // of NSString
=======
@property (nonatomic, retain) NSNumber *skipLeadingRows;  // intValue

// [Optional] The format of the data files. For CSV files, specify "CSV". For
// datastore backups, specify "DATASTORE_BACKUP". For newline-delimited JSON,
// specify "NEWLINE_DELIMITED_JSON". For Avro, specify "AVRO". The default value
// is CSV.
@property (nonatomic, copy) NSString *sourceFormat;

// [Required] The fully-qualified URIs that point to your data in Google Cloud
// Storage. Each URI can contain one '*' wildcard character and it must come
// after the 'bucket' name.
@property (nonatomic, retain) NSArray *sourceUris;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// [Optional] Specifies the action that occurs if the destination table already
// exists. The following values are supported: WRITE_TRUNCATE: If the table
// already exists, BigQuery overwrites the table data. WRITE_APPEND: If the
// table already exists, BigQuery appends the data to the table. WRITE_EMPTY: If
// the table already exists and contains data, a 'duplicate' error is returned
<<<<<<< HEAD
// in the job result. The default value is WRITE_EMPTY. Each action is atomic
// and only occurs if BigQuery is able to complete the job successfully.
// Creation, truncation and append actions occur as one atomic update upon job
// completion.
@property (copy) NSString *writeDisposition;
=======
// in the job result. The default value is WRITE_APPEND. Each action is atomic
// and only occurs if BigQuery is able to complete the job successfully.
// Creation, truncation and append actions occur as one atomic update upon job
// completion.
@property (nonatomic, copy) NSString *writeDisposition;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
