/* Copyright (c) 2011 Google Inc.
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
//  GTLBatchQuery.h
//

//  Batch query documentation:
//  https://code.google.com/p/google-api-objectivec-client/wiki/Introduction#Batch_Operations

#import "GTLQuery.h"

@interface GTLBatchQuery : NSObject <GTLQueryProtocol> {
 @private
  NSMutableArray *queries_;
  NSMutableDictionary *requestIDMap_;
  BOOL skipAuthorization_;
  NSDictionary *additionalHTTPHeaders_;
  NSDictionary *urlQueryParameters_;
<<<<<<< HEAD
}

// Queries included in this batch.  Each query should have a unique requestID.
@property (retain) NSArray *queries;
=======
  GTLQueryTestBlock testBlock_;
}

// Queries included in this batch.  Each query should have a unique requestID.
@property (retain) GTL_NSArrayOf(GTLQuery *) *queries;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Clients may set this to YES to disallow authorization. Defaults to NO.
@property (assign) BOOL shouldSkipAuthorization;

// Any additional HTTP headers for this batch.
//
// These headers override the same keys from the service object's
// additionalHTTPHeaders.
<<<<<<< HEAD
@property (copy) NSDictionary *additionalHTTPHeaders;

// Any URL query parameters to add to the query (useful for debugging with some
// services).
@property (copy) NSDictionary *urlQueryParameters;

+ (id)batchQuery;
+ (id)batchQueryWithQueries:(NSArray *)array;
=======
@property (copy) GTL_NSDictionaryOf(NSString *, NSString *) *additionalHTTPHeaders;

// Any URL query parameters to add to the query (useful for debugging with some
// services).
@property (copy) GTL_NSDictionaryOf(NSString *, NSString *) *urlQueryParameters;

// Apps may provide a test block on the query or service to avoid network activity
// during testing.
//
// See the description of GTLQueryTestBlock for additional details.
@property (copy) GTLQueryTestBlock testBlock;

+ (instancetype)batchQuery;
+ (instancetype)batchQueryWithQueries:(GTL_NSArrayOf(GTLQuery *) *)array;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

- (void)addQuery:(GTLQuery *)query GTL_NONNULL((1));

- (GTLQuery *)queryForRequestID:(NSString *)requestID GTL_NONNULL((1));

@end
