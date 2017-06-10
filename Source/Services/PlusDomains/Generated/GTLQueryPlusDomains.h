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
//  GTLQueryPlusDomains.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform for Google Apps Domains.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLQueryPlusDomains (20 custom class methods, 12 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLPlusDomainsActivity;
@class GTLPlusDomainsCircle;
@class GTLPlusDomainsComment;
@class GTLPlusDomainsMedia;

@interface GTLQueryPlusDomains : GTLQuery

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
@property (copy) NSString *activityId;
@property (copy) NSString *circleId;
@property (copy) NSString *collection;
@property (copy) NSString *commentId;
@property (retain) NSArray *email;  // of NSString
@property (assign) NSUInteger maxResults;
@property (copy) NSString *orderBy;
@property (copy) NSString *pageToken;
@property (assign) BOOL preview;
@property (copy) NSString *sortOrder;
// "userId" has different types for some query methods; see the documentation
// for the right type for each query method.
@property (retain) id userId;

#pragma mark -
#pragma mark "activities" methods
=======
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, copy) NSString *circleId;
@property (nonatomic, copy) NSString *collection;
@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, retain) NSArray *email;  // of NSString
@property (nonatomic, assign) NSUInteger maxResults;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, assign) BOOL preview;
@property (nonatomic, copy) NSString *sortOrder;
// "userId" has different types for some query methods; see the documentation
// for the right type for each query method.
@property (nonatomic, retain) id userId;

#pragma mark - "activities" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.activities.get
// Get an activity.
//  Required:
//   activityId: The ID of the activity to get.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
//   kGTLAuthScopePlusDomainsPlusStreamRead
// Fetches a GTLPlusDomainsActivity.
<<<<<<< HEAD
+ (id)queryForActivitiesGetWithActivityId:(NSString *)activityId;
=======
+ (instancetype)queryForActivitiesGetWithActivityId:(NSString *)activityId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.activities.insert
// Create a new activity for the authenticated user.
//  Required:
//   userId: The ID of the user to create the activity on behalf of. Its value
//     should be "me", to indicate the authenticated user.
//  Optional:
//   preview: If "true", extract the potential media attachments for a URL. The
//     response will include all possible attachments for a URL, including
//     video, photos, and articles based on the content of the page.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
//   kGTLAuthScopePlusDomainsPlusStreamWrite
// Fetches a GTLPlusDomainsActivity.
<<<<<<< HEAD
+ (id)queryForActivitiesInsertWithObject:(GTLPlusDomainsActivity *)object
                                  userId:(NSString *)userId;
=======
+ (instancetype)queryForActivitiesInsertWithObject:(GTLPlusDomainsActivity *)object
                                            userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.activities.list
// List all of the activities in the specified collection for a particular user.
//  Required:
//   userId: The ID of the user to get activities for. The special value "me"
//     can be used to indicate the authenticated user.
//   collection: The collection of activities to list.
//      kGTLPlusDomainsCollectionUser: All activities created by the specified
//        user that the authenticated user is authorized to view.
//  Optional:
//   maxResults: The maximum number of activities to include in the response,
//     which is used for paging. For any response, the actual number returned
//     might be less than the specified maxResults. (1..100, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
//   kGTLAuthScopePlusDomainsPlusStreamRead
// Fetches a GTLPlusDomainsActivityFeed.
<<<<<<< HEAD
+ (id)queryForActivitiesListWithUserId:(NSString *)userId
                            collection:(NSString *)collection;

#pragma mark -
#pragma mark "audiences" methods
=======
+ (instancetype)queryForActivitiesListWithUserId:(NSString *)userId
                                      collection:(NSString *)collection;

#pragma mark - "audiences" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.audiences.list
// List all of the audiences to which a user can share.
//  Required:
//   userId: The ID of the user to get audiences for. The special value "me" can
//     be used to indicate the authenticated user.
//  Optional:
//   maxResults: The maximum number of circles to include in the response, which
//     is used for paging. For any response, the actual number returned might be
//     less than the specified maxResults. (1..100, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesRead
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
// Fetches a GTLPlusDomainsAudiencesFeed.
<<<<<<< HEAD
+ (id)queryForAudiencesListWithUserId:(NSString *)userId;

#pragma mark -
#pragma mark "circles" methods
=======
+ (instancetype)queryForAudiencesListWithUserId:(NSString *)userId;

#pragma mark - "circles" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.circles.addPeople
// Add a person to a circle. Google+ limits certain circle operations, including
// the number of circle adds. Learn More.
//  Required:
//   circleId: The ID of the circle to add the person to.
//  Optional:
//   email: Email of the people to add to the circle. Optional, can be repeated.
//   userId: IDs of the people to add to the circle. Optional, can be repeated.
<<<<<<< HEAD
//     Note: For this method, "userId" should be of type NSArray.
=======
//     Note: For this method, "userId" should be of type NSArray<NSString>.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
// Fetches a GTLPlusDomainsCircle.
<<<<<<< HEAD
+ (id)queryForCirclesAddPeopleWithCircleId:(NSString *)circleId;
=======
+ (instancetype)queryForCirclesAddPeopleWithCircleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.get
// Get a circle.
//  Required:
//   circleId: The ID of the circle to get.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesRead
//   kGTLAuthScopePlusDomainsPlusLogin
// Fetches a GTLPlusDomainsCircle.
<<<<<<< HEAD
+ (id)queryForCirclesGetWithCircleId:(NSString *)circleId;
=======
+ (instancetype)queryForCirclesGetWithCircleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.insert
// Create a new circle for the authenticated user.
//  Required:
//   userId: The ID of the user to create the circle on behalf of. The value
//     "me" can be used to indicate the authenticated user.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
// Fetches a GTLPlusDomainsCircle.
<<<<<<< HEAD
+ (id)queryForCirclesInsertWithObject:(GTLPlusDomainsCircle *)object
                               userId:(NSString *)userId;
=======
+ (instancetype)queryForCirclesInsertWithObject:(GTLPlusDomainsCircle *)object
                                         userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.list
// List all of the circles for a user.
//  Required:
//   userId: The ID of the user to get circles for. The special value "me" can
//     be used to indicate the authenticated user.
//  Optional:
//   maxResults: The maximum number of circles to include in the response, which
//     is used for paging. For any response, the actual number returned might be
//     less than the specified maxResults. (1..100, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesRead
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
// Fetches a GTLPlusDomainsCircleFeed.
<<<<<<< HEAD
+ (id)queryForCirclesListWithUserId:(NSString *)userId;
=======
+ (instancetype)queryForCirclesListWithUserId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.patch
// Update a circle's description. This method supports patch semantics.
//  Required:
//   circleId: The ID of the circle to update.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
// Fetches a GTLPlusDomainsCircle.
<<<<<<< HEAD
+ (id)queryForCirclesPatchWithObject:(GTLPlusDomainsCircle *)object
                            circleId:(NSString *)circleId;
=======
+ (instancetype)queryForCirclesPatchWithObject:(GTLPlusDomainsCircle *)object
                                      circleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.remove
// Delete a circle.
//  Required:
//   circleId: The ID of the circle to delete.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
<<<<<<< HEAD
+ (id)queryForCirclesRemoveWithCircleId:(NSString *)circleId;
=======
+ (instancetype)queryForCirclesRemoveWithCircleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.removePeople
// Remove a person from a circle.
//  Required:
//   circleId: The ID of the circle to remove the person from.
//  Optional:
//   email: Email of the people to add to the circle. Optional, can be repeated.
//   userId: IDs of the people to remove from the circle. Optional, can be
//     repeated.
<<<<<<< HEAD
//     Note: For this method, "userId" should be of type NSArray.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
+ (id)queryForCirclesRemovePeopleWithCircleId:(NSString *)circleId;
=======
//     Note: For this method, "userId" should be of type NSArray<NSString>.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
+ (instancetype)queryForCirclesRemovePeopleWithCircleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.circles.update
// Update a circle's description.
//  Required:
//   circleId: The ID of the circle to update.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesWrite
//   kGTLAuthScopePlusDomainsPlusLogin
// Fetches a GTLPlusDomainsCircle.
<<<<<<< HEAD
+ (id)queryForCirclesUpdateWithObject:(GTLPlusDomainsCircle *)object
                             circleId:(NSString *)circleId;

#pragma mark -
#pragma mark "comments" methods
=======
+ (instancetype)queryForCirclesUpdateWithObject:(GTLPlusDomainsCircle *)object
                                       circleId:(NSString *)circleId;

#pragma mark - "comments" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.comments.get
// Get a comment.
//  Required:
//   commentId: The ID of the comment to get.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusStreamRead
// Fetches a GTLPlusDomainsComment.
<<<<<<< HEAD
+ (id)queryForCommentsGetWithCommentId:(NSString *)commentId;
=======
+ (instancetype)queryForCommentsGetWithCommentId:(NSString *)commentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.comments.insert
// Create a new comment in reply to an activity.
//  Required:
//   activityId: The ID of the activity to reply to.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusStreamWrite
// Fetches a GTLPlusDomainsComment.
<<<<<<< HEAD
+ (id)queryForCommentsInsertWithObject:(GTLPlusDomainsComment *)object
                            activityId:(NSString *)activityId;
=======
+ (instancetype)queryForCommentsInsertWithObject:(GTLPlusDomainsComment *)object
                                      activityId:(NSString *)activityId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.comments.list
// List all of the comments for an activity.
//  Required:
//   activityId: The ID of the activity to get comments for.
//  Optional:
//   maxResults: The maximum number of comments to include in the response,
//     which is used for paging. For any response, the actual number returned
//     might be less than the specified maxResults. (0..500, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//   sortOrder: The order in which to sort the list of comments. (Default
//     kGTLPlusDomainsSortOrderAscending)
//      kGTLPlusDomainsSortOrderAscending: Sort oldest comments first.
//      kGTLPlusDomainsSortOrderDescending: Sort newest comments first.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusStreamRead
// Fetches a GTLPlusDomainsCommentFeed.
<<<<<<< HEAD
+ (id)queryForCommentsListWithActivityId:(NSString *)activityId;

#pragma mark -
#pragma mark "media" methods
=======
+ (instancetype)queryForCommentsListWithActivityId:(NSString *)activityId;

#pragma mark - "media" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.media.insert
// Add a new media item to an album. The current upload size limitations are
// 36MB for a photo and 1GB for a video. Uploads do not count against quota if
// photos are less than 2048 pixels on their longest side or videos are less
// than 15 minutes in length.
//  Required:
//   userId: The ID of the user to create the activity on behalf of.
//   collection:
//      kGTLPlusDomainsCollectionCloud: Upload the media to share on Google+.
//  Upload Parameters:
//   Accepted MIME type(s): image/*, video/*
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
<<<<<<< HEAD
//   kGTLAuthScopePlusDomainsPlusMediaUpload
// Fetches a GTLPlusDomainsMedia.
+ (id)queryForMediaInsertWithObject:(GTLPlusDomainsMedia *)object
                             userId:(NSString *)userId
                         collection:(NSString *)collection
                   uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark -
#pragma mark "people" methods
=======
//   kGTLAuthScopePlusDomainsPlusMe
//   kGTLAuthScopePlusDomainsPlusMediaUpload
// Fetches a GTLPlusDomainsMedia.
+ (instancetype)queryForMediaInsertWithObject:(GTLPlusDomainsMedia *)object
                                       userId:(NSString *)userId
                                   collection:(NSString *)collection
                             uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark - "people" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryPlusDomains object.

// Method: plusDomains.people.get
// Get a person's profile.
//  Required:
//   userId: The ID of the person to get the profile for. The special value "me"
//     can be used to indicate the authenticated user.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
//   kGTLAuthScopePlusDomainsPlusProfilesRead
//   kGTLAuthScopePlusDomainsUserinfoEmail
//   kGTLAuthScopePlusDomainsUserinfoProfile
// Fetches a GTLPlusDomainsPerson.
<<<<<<< HEAD
+ (id)queryForPeopleGetWithUserId:(NSString *)userId;
=======
+ (instancetype)queryForPeopleGetWithUserId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.people.list
// List all of the people in the specified collection.
//  Required:
//   userId: Get the collection of people for the person identified. Use "me" to
//     indicate the authenticated user.
//   collection: The collection of people to list.
//      kGTLPlusDomainsCollectionCircled: The list of people who this user has
//        added to one or more circles.
//  Optional:
//   maxResults: The maximum number of people to include in the response, which
//     is used for paging. For any response, the actual number returned might be
//     less than the specified maxResults. (1..100, default 100)
//   orderBy: The order to return people in.
//      kGTLPlusDomainsOrderByAlphabetical: Order the people by their display
//        name.
//      kGTLPlusDomainsOrderByBest: Order people based on the relevence to the
//        viewer.
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesRead
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusMe
// Fetches a GTLPlusDomainsPeopleFeed.
<<<<<<< HEAD
+ (id)queryForPeopleListWithUserId:(NSString *)userId
                        collection:(NSString *)collection;
=======
+ (instancetype)queryForPeopleListWithUserId:(NSString *)userId
                                  collection:(NSString *)collection;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.people.listByActivity
// List all of the people in the specified collection for a particular activity.
//  Required:
//   activityId: The ID of the activity to get the list of people for.
//   collection: The collection of people to list.
//      kGTLPlusDomainsCollectionPlusoners: List all people who have +1'd this
//        activity.
//      kGTLPlusDomainsCollectionResharers: List all people who have reshared
//        this activity.
//      kGTLPlusDomainsCollectionSharedto: List all people who this activity was
//        shared to.
//  Optional:
//   maxResults: The maximum number of people to include in the response, which
//     is used for paging. For any response, the actual number returned might be
//     less than the specified maxResults. (1..100, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusLogin
//   kGTLAuthScopePlusDomainsPlusStreamRead
// Fetches a GTLPlusDomainsPeopleFeed.
<<<<<<< HEAD
+ (id)queryForPeopleListByActivityWithActivityId:(NSString *)activityId
                                      collection:(NSString *)collection;
=======
+ (instancetype)queryForPeopleListByActivityWithActivityId:(NSString *)activityId
                                                collection:(NSString *)collection;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: plusDomains.people.listByCircle
// List all of the people who are members of a circle.
//  Required:
//   circleId: The ID of the circle to get the members of.
//  Optional:
//   maxResults: The maximum number of people to include in the response, which
//     is used for paging. For any response, the actual number returned might be
//     less than the specified maxResults. (1..100, default 20)
//   pageToken: The continuation token, which is used to page through large
//     result sets. To get the next page of results, set this parameter to the
//     value of "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusDomainsPlusCirclesRead
//   kGTLAuthScopePlusDomainsPlusLogin
// Fetches a GTLPlusDomainsPeopleFeed.
<<<<<<< HEAD
+ (id)queryForPeopleListByCircleWithCircleId:(NSString *)circleId;
=======
+ (instancetype)queryForPeopleListByCircleWithCircleId:(NSString *)circleId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
