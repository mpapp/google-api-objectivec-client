<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLQueryMirror.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Mirror API (mirror/v1)
// Description:
//   API for interacting with Glass users via the timeline.
// Documentation:
//   https://developers.google.com/glass
// Classes:
//   GTLQueryMirror (24 custom class methods, 14 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLMirrorAccount;
@class GTLMirrorContact;
@class GTLMirrorSubscription;
@class GTLMirrorTimelineItem;

@interface GTLQueryMirror : GTLQuery

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
@property (copy) NSString *accountName;
@property (copy) NSString *accountType;
@property (copy) NSString *attachmentId;
@property (copy) NSString *bundleId;
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;
@property (assign) BOOL includeDeleted;
@property (copy) NSString *itemId;
@property (assign) NSUInteger maxResults;
@property (copy) NSString *orderBy;
@property (copy) NSString *pageToken;
@property (assign) BOOL pinnedOnly;
@property (copy) NSString *sourceItemId;
@property (copy) NSString *userToken;

#pragma mark -
#pragma mark "accounts" methods
=======
@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *accountType;
@property (nonatomic, copy) NSString *attachmentId;
@property (nonatomic, copy) NSString *bundleId;
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, assign) BOOL includeDeleted;
@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, assign) NSUInteger maxResults;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, assign) BOOL pinnedOnly;
@property (nonatomic, copy) NSString *sourceItemId;
@property (nonatomic, copy) NSString *userToken;

#pragma mark - "accounts" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.accounts.insert
// Inserts a new account for a user
//  Required:
//   userToken: The ID for the user.
//   accountType: Account type to be passed to Android Account Manager.
//   accountName: The name of the account to be passed to the Android Account
//     Manager.
// Fetches a GTLMirrorAccount.
<<<<<<< HEAD
+ (id)queryForAccountsInsertWithObject:(GTLMirrorAccount *)object
                             userToken:(NSString *)userToken
                           accountType:(NSString *)accountType
                           accountName:(NSString *)accountName;

#pragma mark -
#pragma mark "contacts" methods
=======
+ (instancetype)queryForAccountsInsertWithObject:(GTLMirrorAccount *)object
                                       userToken:(NSString *)userToken
                                     accountType:(NSString *)accountType
                                     accountName:(NSString *)accountName;

#pragma mark - "contacts" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.contacts.delete
// Deletes a contact.
//  Required:
//   identifier: The ID of the contact.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
<<<<<<< HEAD
+ (id)queryForContactsDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForContactsDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.contacts.get
// Gets a single contact by ID.
//  Required:
//   identifier: The ID of the contact.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorContact.
<<<<<<< HEAD
+ (id)queryForContactsGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForContactsGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.contacts.insert
// Inserts a new contact.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorContact.
<<<<<<< HEAD
+ (id)queryForContactsInsertWithObject:(GTLMirrorContact *)object;
=======
+ (instancetype)queryForContactsInsertWithObject:(GTLMirrorContact *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.contacts.list
// Retrieves a list of contacts for the authenticated user.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorContactsListResponse.
<<<<<<< HEAD
+ (id)queryForContactsList;
=======
+ (instancetype)queryForContactsList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.contacts.patch
// Updates a contact in place. This method supports patch semantics.
//  Required:
//   identifier: The ID of the contact.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorContact.
<<<<<<< HEAD
+ (id)queryForContactsPatchWithObject:(GTLMirrorContact *)object
                           identifier:(NSString *)identifier;
=======
+ (instancetype)queryForContactsPatchWithObject:(GTLMirrorContact *)object
                                     identifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.contacts.update
// Updates a contact in place.
//  Required:
//   identifier: The ID of the contact.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorContact.
<<<<<<< HEAD
+ (id)queryForContactsUpdateWithObject:(GTLMirrorContact *)object
                            identifier:(NSString *)identifier;

#pragma mark -
#pragma mark "locations" methods
=======
+ (instancetype)queryForContactsUpdateWithObject:(GTLMirrorContact *)object
                                      identifier:(NSString *)identifier;

#pragma mark - "locations" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.locations.get
// Gets a single location by ID.
//  Required:
//   identifier: The ID of the location or latest for the last known location.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorLocation.
<<<<<<< HEAD
+ (id)queryForLocationsGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForLocationsGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.locations.list
// Retrieves a list of locations for the user.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorLocationsListResponse.
<<<<<<< HEAD
+ (id)queryForLocationsList;

#pragma mark -
#pragma mark "settings" methods
=======
+ (instancetype)queryForLocationsList;

#pragma mark - "settings" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.settings.get
// Gets a single setting by ID.
//  Required:
//   identifier: The ID of the setting. The following IDs are valid:
//     - locale - The key to the user’s language/locale (BCP 47 identifier) that
//     Glassware should use to render localized content.
<<<<<<< HEAD
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorSetting.
+ (id)queryForSettingsGetWithIdentifier:(NSString *)identifier;

#pragma mark -
#pragma mark "subscriptions" methods
=======
//     - timezone - The key to the user’s current time zone region as defined in
//     the tz database. Example: America/Los_Angeles.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorSetting.
+ (instancetype)queryForSettingsGetWithIdentifier:(NSString *)identifier;

#pragma mark - "subscriptions" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.subscriptions.delete
// Deletes a subscription.
//  Required:
//   identifier: The ID of the subscription.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
<<<<<<< HEAD
+ (id)queryForSubscriptionsDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForSubscriptionsDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.subscriptions.insert
// Creates a new subscription.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorSubscription.
<<<<<<< HEAD
+ (id)queryForSubscriptionsInsertWithObject:(GTLMirrorSubscription *)object;
=======
+ (instancetype)queryForSubscriptionsInsertWithObject:(GTLMirrorSubscription *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.subscriptions.list
// Retrieves a list of subscriptions for the authenticated user and service.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorSubscriptionsListResponse.
<<<<<<< HEAD
+ (id)queryForSubscriptionsList;
=======
+ (instancetype)queryForSubscriptionsList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.subscriptions.update
// Updates an existing subscription in place.
//  Required:
//   identifier: The ID of the subscription.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorSubscription.
<<<<<<< HEAD
+ (id)queryForSubscriptionsUpdateWithObject:(GTLMirrorSubscription *)object
                                 identifier:(NSString *)identifier;

#pragma mark -
#pragma mark "timeline.attachments" methods
=======
+ (instancetype)queryForSubscriptionsUpdateWithObject:(GTLMirrorSubscription *)object
                                           identifier:(NSString *)identifier;

#pragma mark - "timeline.attachments" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.timeline.attachments.delete
// Deletes an attachment from a timeline item.
//  Required:
//   itemId: The ID of the timeline item the attachment belongs to.
//   attachmentId: The ID of the attachment.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
<<<<<<< HEAD
+ (id)queryForTimelineAttachmentsDeleteWithItemId:(NSString *)itemId
                                     attachmentId:(NSString *)attachmentId;
=======
+ (instancetype)queryForTimelineAttachmentsDeleteWithItemId:(NSString *)itemId
                                               attachmentId:(NSString *)attachmentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.attachments.get
// Retrieves an attachment on a timeline item by item ID and attachment ID.
//  Required:
//   itemId: The ID of the timeline item the attachment belongs to.
//   attachmentId: The ID of the attachment.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorAttachment.
<<<<<<< HEAD
+ (id)queryForTimelineAttachmentsGetWithItemId:(NSString *)itemId
                                  attachmentId:(NSString *)attachmentId;
=======
+ (instancetype)queryForTimelineAttachmentsGetWithItemId:(NSString *)itemId
                                            attachmentId:(NSString *)attachmentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.attachments.insert
// Adds a new attachment to a timeline item.
//  Required:
//   itemId: The ID of the timeline item the attachment belongs to.
//  Upload Parameters:
//   Maximum size: 10MB
//   Accepted MIME type(s): audio/*, image/*, video/*
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorAttachment.
<<<<<<< HEAD
+ (id)queryForTimelineAttachmentsInsertWithItemId:(NSString *)itemId
                                 uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
=======
+ (instancetype)queryForTimelineAttachmentsInsertWithItemId:(NSString *)itemId
                                           uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.attachments.list
// Returns a list of attachments for a timeline item.
//  Required:
//   itemId: The ID of the timeline item whose attachments should be listed.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorAttachmentsListResponse.
<<<<<<< HEAD
+ (id)queryForTimelineAttachmentsListWithItemId:(NSString *)itemId;

#pragma mark -
#pragma mark "timeline" methods
=======
+ (instancetype)queryForTimelineAttachmentsListWithItemId:(NSString *)itemId;

#pragma mark - "timeline" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryMirror object.

// Method: mirror.timeline.delete
// Deletes a timeline item.
//  Required:
//   identifier: The ID of the timeline item.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
<<<<<<< HEAD
+ (id)queryForTimelineDeleteWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForTimelineDeleteWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.get
// Gets a single timeline item by ID.
//  Required:
//   identifier: The ID of the timeline item.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorTimelineItem.
<<<<<<< HEAD
+ (id)queryForTimelineGetWithIdentifier:(NSString *)identifier;
=======
+ (instancetype)queryForTimelineGetWithIdentifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.insert
// Inserts a new item into the timeline.
//  Upload Parameters:
//   Maximum size: 10MB
//   Accepted MIME type(s): audio/*, image/*, video/*
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorTimelineItem.
<<<<<<< HEAD
+ (id)queryForTimelineInsertWithObject:(GTLMirrorTimelineItem *)object
                      uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
=======
+ (instancetype)queryForTimelineInsertWithObject:(GTLMirrorTimelineItem *)object
                                uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.list
// Retrieves a list of timeline items for the authenticated user.
//  Optional:
//   bundleId: If provided, only items with the given bundleId will be returned.
//   includeDeleted: If true, tombstone records for deleted items will be
//     returned.
//   maxResults: The maximum number of items to include in the response, used
//     for paging.
//   orderBy: Controls the order in which timeline items are returned.
//      kGTLMirrorOrderByDisplayTime: Results will be ordered by displayTime
//        (default). This is the same ordering as is used in the timeline on the
//        device.
//      kGTLMirrorOrderByWriteTime: Results will be ordered by the time at which
//        they were last written to the data store.
//   pageToken: Token for the page of results to return.
//   pinnedOnly: If true, only pinned items will be returned.
//   sourceItemId: If provided, only items with the given sourceItemId will be
//     returned.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorTimelineListResponse.
<<<<<<< HEAD
+ (id)queryForTimelineList;
=======
+ (instancetype)queryForTimelineList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.patch
// Updates a timeline item in place. This method supports patch semantics.
//  Required:
//   identifier: The ID of the timeline item.
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorTimelineItem.
<<<<<<< HEAD
+ (id)queryForTimelinePatchWithObject:(GTLMirrorTimelineItem *)object
                           identifier:(NSString *)identifier;
=======
+ (instancetype)queryForTimelinePatchWithObject:(GTLMirrorTimelineItem *)object
                                     identifier:(NSString *)identifier;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: mirror.timeline.update
// Updates a timeline item in place.
//  Required:
//   identifier: The ID of the timeline item.
//  Upload Parameters:
//   Maximum size: 10MB
//   Accepted MIME type(s): audio/*, image/*, video/*
//  Authorization scope(s):
//   kGTLAuthScopeMirrorGlassLocation
//   kGTLAuthScopeMirrorGlassTimeline
// Fetches a GTLMirrorTimelineItem.
<<<<<<< HEAD
+ (id)queryForTimelineUpdateWithObject:(GTLMirrorTimelineItem *)object
                            identifier:(NSString *)identifier
                      uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
=======
+ (instancetype)queryForTimelineUpdateWithObject:(GTLMirrorTimelineItem *)object
                                      identifier:(NSString *)identifier
                                uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
