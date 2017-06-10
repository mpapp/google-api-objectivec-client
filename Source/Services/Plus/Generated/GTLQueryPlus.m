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
//  GTLQueryPlus.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLQueryPlus (12 custom class methods, 15 custom properties)
=======
//   Builds on top of the Google+ platform.
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLQueryPlus (9 custom class methods, 11 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryPlus.h"

#import "GTLPlusActivity.h"
#import "GTLPlusActivityFeed.h"
#import "GTLPlusComment.h"
#import "GTLPlusCommentFeed.h"
<<<<<<< HEAD
#import "GTLPlusMoment.h"
#import "GTLPlusMomentsFeed.h"
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLPlusPeopleFeed.h"
#import "GTLPlusPerson.h"

@implementation GTLQueryPlus

<<<<<<< HEAD
@dynamic activityId, collection, commentId, debug, fields, identifier, language,
         maxResults, orderBy, pageToken, query, sortOrder, targetUrl, type,
         userId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

#pragma mark -
#pragma mark "activities" methods
// These create a GTLQueryPlus object.

+ (id)queryForActivitiesGetWithActivityId:(NSString *)activityId {
=======
@dynamic activityId, collection, commentId, fields, language, maxResults,
         orderBy, pageToken, query, sortOrder, userId;

#pragma mark - "activities" methods
// These create a GTLQueryPlus object.

+ (instancetype)queryForActivitiesGetWithActivityId:(NSString *)activityId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.activities.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.expectedObjectClass = [GTLPlusActivity class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForActivitiesListWithUserId:(NSString *)userId
                            collection:(NSString *)collection {
=======
+ (instancetype)queryForActivitiesListWithUserId:(NSString *)userId
                                      collection:(NSString *)collection {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.activities.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusActivityFeed class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForActivitiesSearchWithQuery:(NSString *)query_param {
=======
+ (instancetype)queryForActivitiesSearchWithQuery:(NSString *)query_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.activities.search";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.query = query_param;
  query.expectedObjectClass = [GTLPlusActivityFeed class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "comments" methods
// These create a GTLQueryPlus object.

+ (id)queryForCommentsGetWithCommentId:(NSString *)commentId {
=======
#pragma mark - "comments" methods
// These create a GTLQueryPlus object.

+ (instancetype)queryForCommentsGetWithCommentId:(NSString *)commentId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.comments.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.commentId = commentId;
  query.expectedObjectClass = [GTLPlusComment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCommentsListWithActivityId:(NSString *)activityId {
=======
+ (instancetype)queryForCommentsListWithActivityId:(NSString *)activityId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.comments.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.expectedObjectClass = [GTLPlusCommentFeed class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "moments" methods
// These create a GTLQueryPlus object.

+ (id)queryForMomentsInsertWithObject:(GTLPlusMoment *)object
                               userId:(NSString *)userId
                           collection:(NSString *)collection {
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"plus.moments.insert";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.userId = userId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusMoment class];
  return query;
}

+ (id)queryForMomentsListWithUserId:(NSString *)userId
                         collection:(NSString *)collection {
  NSString *methodName = @"plus.moments.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusMomentsFeed class];
  return query;
}

+ (id)queryForMomentsRemoveWithIdentifier:(NSString *)identifier {
  NSString *methodName = @"plus.moments.remove";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.identifier = identifier;
  return query;
}

#pragma mark -
#pragma mark "people" methods
// These create a GTLQueryPlus object.

+ (id)queryForPeopleGetWithUserId:(NSString *)userId {
=======
#pragma mark - "people" methods
// These create a GTLQueryPlus object.

+ (instancetype)queryForPeopleGetWithUserId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.people.get";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.expectedObjectClass = [GTLPlusPerson class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPeopleListWithUserId:(NSString *)userId
                        collection:(NSString *)collection {
=======
+ (instancetype)queryForPeopleListWithUserId:(NSString *)userId
                                  collection:(NSString *)collection {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.people.list";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusPeopleFeed class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPeopleListByActivityWithActivityId:(NSString *)activityId
                                      collection:(NSString *)collection {
=======
+ (instancetype)queryForPeopleListByActivityWithActivityId:(NSString *)activityId
                                                collection:(NSString *)collection {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.people.listByActivity";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.activityId = activityId;
  query.collection = collection;
  query.expectedObjectClass = [GTLPlusPeopleFeed class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPeopleSearchWithQuery:(NSString *)query_param {
=======
+ (instancetype)queryForPeopleSearchWithQuery:(NSString *)query_param {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"plus.people.search";
  GTLQueryPlus *query = [self queryWithMethodName:methodName];
  query.query = query_param;
  query.expectedObjectClass = [GTLPlusPeopleFeed class];
  return query;
}

@end
