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
//  GTLQuery.h
//

// Query documentation:
// https://code.google.com/p/google-api-objectivec-client/wiki/Introduction#Query_Operations

#import "GTLObject.h"
#import "GTLUploadParameters.h"

<<<<<<< HEAD
=======
// This protocol is just to support passing of either a batch or a single query
// to a GTLService instance. The library does not expect or support other
// implementations of the protocol.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@protocol GTLQueryProtocol <NSObject, NSCopying>
- (BOOL)isBatchQuery;
- (BOOL)shouldSkipAuthorization;
- (void)executionDidStop;
<<<<<<< HEAD
- (NSDictionary *)additionalHTTPHeaders;
- (NSDictionary *)urlQueryParameters;
=======
- (GTL_NSDictionaryOf(NSString *, NSString *) *)additionalHTTPHeaders;
- (GTL_NSDictionaryOf(NSString *, NSString *) *)urlQueryParameters;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
- (GTLUploadParameters *)uploadParameters;
@end

@protocol GTLQueryCollectionProtocol
@optional
@property (retain) NSString *pageToken;
@property (retain) NSNumber *startIndex;
@end

@class GTLServiceTicket;
<<<<<<< HEAD
=======
@class GTLQuery;

// The test block enables testing of query execution without any network activity.
//
// The test block must finish by calling the response block, passing either an object
// (GTLObject or GTLBatchResult) or an NSError.
//
// The query is available to the test block code as ticket.originalQuery.
//
// Because query execution is asynchronous, the test code must wait for a callback,
// either with GTLService's waitForTicket:timeout:fetchedObject:error: or with XCTestCase's
// waitForExpectationsWithTimeout:
//
// Example usage is available in GTLServiceTest.
typedef void (^GTLQueryTestResponse)(id object, NSError *error);
typedef void (^GTLQueryTestBlock)(GTLServiceTicket *testTicket, GTLQueryTestResponse testResponse);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@interface GTLQuery : NSObject <GTLQueryProtocol> {
 @private
  NSString *methodName_;
  NSMutableDictionary *json_;
  GTLObject *bodyObject_;
  NSMutableDictionary *childCache_;
  NSString *requestID_;
  GTLUploadParameters *uploadParameters_;
  NSDictionary *urlQueryParameters_;
  NSDictionary *additionalHTTPHeaders_;
  Class expectedObjectClass_;
  BOOL skipAuthorization_;
  void (^completionBlock_)(GTLServiceTicket *ticket, id object, NSError *error);
<<<<<<< HEAD
=======
  GTLQueryTestBlock testBlock_;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

// The rpc method name.
@property (readonly) NSString *methodName;

// The JSON dictionary of all the parameters set on this query.
@property (retain) NSMutableDictionary *JSON;

// The object set to be uploaded with the query.
@property (retain) GTLObject *bodyObject;

// Each query must have a request ID string. The user may replace the
// default assigned request ID with a custom string, provided that if
// used in a batch query, all request IDs in the batch must be unique.
@property (copy) NSString *requestID;

// For queries which support file upload, the MIME type and file handle
// or data must be provided.
@property (copy) GTLUploadParameters *uploadParameters;

// Any URL query parameters to add to the query (useful for debugging with some
// services).
<<<<<<< HEAD
@property (copy) NSDictionary *urlQueryParameters;
=======
@property (copy) GTL_NSDictionaryOf(NSString *, NSString *) *urlQueryParameters;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Any additional HTTP headers for this query.  Not valid when this query
// is added to a batch.
//
// These headers override the same keys from the service object's
// additionalHTTPHeaders.
<<<<<<< HEAD
@property (copy) NSDictionary *additionalHTTPHeaders;
=======
@property (copy) GTL_NSDictionaryOf(NSString *, NSString *) *additionalHTTPHeaders;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The GTLObject subclass expected for results (used if the result doesn't
// include a kind attribute).
@property (assign) Class expectedObjectClass;

// Clients may set this to YES to disallow authorization. Defaults to NO.
@property (assign) BOOL shouldSkipAuthorization;

// Clients may provide an optional callback block to be called immediately
// before the executeQuery: callback.
//
// The completionBlock property is particularly useful for queries executed
// in a batch.
//
// Errors passed to the completionBlock will have an "underlying" GTLErrorObject
// when the server returned an error for this specific query:
//
//   GTLErrorObject *errorObj = [GTLErrorObject underlyingObjectForError:error];
//   if (errorObj) {
//     // the server returned this error for this specific query
//   } else {
//     // the batch execution failed
//   }
@property (copy) void (^completionBlock)(GTLServiceTicket *ticket, id object, NSError *error);

<<<<<<< HEAD
// methodName is the RPC method name to use.
+ (id)queryWithMethodName:(NSString *)methodName GTL_NONNULL((1));

// methodName is the RPC method name to use.
- (id)initWithMethodName:(NSString *)method GTL_NONNULL((1));
=======
// Apps may provide a test block on the query or service to avoid network activity
// during testing.  See the description above for GTLQueryTestBlock.
@property (copy) GTLQueryTestBlock testBlock;

// methodName is the RPC method name to use.
+ (instancetype)queryWithMethodName:(NSString *)methodName GTL_NONNULL((1));

// methodName is the RPC method name to use.
- (instancetype)initWithMethodName:(NSString *)method GTL_NONNULL((1));
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// If you need to set a parameter that is not listed as a property for a
// query class, you can do so via this api.  If you need to clear it after
// setting, pass nil for obj.
- (void)setCustomParameter:(id)obj forKey:(NSString *)key GTL_NONNULL((2));

// Auto-generated request IDs
+ (NSString *)nextRequestID;

// Methods for subclasses to override.
+ (NSDictionary *)parameterNameMap;
+ (NSDictionary *)arrayPropertyToClassMap;
@end

// The library doesn't use GTLQueryCollectionImpl, but it provides a concrete implementation
<<<<<<< HEAD
// of the protocol so the methods do not cause a private method error in Xcode.
=======
// the protocol so the methods do not cause private method errors in Xcode/AppStore review.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@interface GTLQueryCollectionImpl : GTLQuery <GTLQueryCollectionProtocol>
@end
