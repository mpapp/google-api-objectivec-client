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
//  GTLQueryGmail.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Gmail API (gmail/v1)
// Description:
<<<<<<< HEAD
//   The Gmail REST API.
// Documentation:
//   https://developers.google.com/gmail/api/
// Classes:
//   GTLQueryGmail (29 custom class methods, 17 custom properties)
=======
//   Access Gmail mailboxes including sending user email.
// Documentation:
//   https://developers.google.com/gmail/api/
// Classes:
//   GTLQueryGmail (33 custom class methods, 25 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryGmail.h"

#import "GTLGmailDraft.h"
#import "GTLGmailLabel.h"
#import "GTLGmailListDraftsResponse.h"
#import "GTLGmailListHistoryResponse.h"
#import "GTLGmailListLabelsResponse.h"
#import "GTLGmailListMessagesResponse.h"
#import "GTLGmailListThreadsResponse.h"
#import "GTLGmailMessage.h"
#import "GTLGmailMessagePartBody.h"
<<<<<<< HEAD
#import "GTLGmailThread.h"

@implementation GTLQueryGmail

@dynamic addLabelIds, draft, fields, format, identifier, includeSpamTrash,
         label, labelId, labelIds, maxResults, message, messageId, pageToken, q,
         removeLabelIds, startHistoryId, userId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
=======
#import "GTLGmailProfile.h"
#import "GTLGmailThread.h"
#import "GTLGmailWatchResponse.h"

@implementation GTLQueryGmail

@dynamic addLabelIds, deleted, draft, fields, format, identifier, ids,
         includeSpamTrash, internalDateSource, label, labelFilterAction,
         labelId, labelIds, maxResults, message, messageId, metadataHeaders,
         neverMarkSpam, pageToken, processForCalendar, q, removeLabelIds,
         startHistoryId, topicName, userId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"addLabelIds",
      [NSString class], @"labelIds",
      [NSString class], @"removeLabelIds",
      nil];
  return map;
}

#pragma mark -
#pragma mark "users.drafts" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersDraftsCreateWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
  NSDictionary *map = @{
    @"addLabelIds" : [NSString class],
    @"ids" : [NSString class],
    @"labelIds" : [NSString class],
    @"metadataHeaders" : [NSString class],
    @"removeLabelIds" : [NSString class]
  };
  return map;
}

#pragma mark - "users.drafts" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersDraftsCreateWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.create";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailDraft class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersDraftsDelete {
=======
+ (instancetype)queryForUsersDraftsDelete {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.delete";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersDraftsGet {
=======
+ (instancetype)queryForUsersDraftsGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.get";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailDraft class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersDraftsList {
=======
+ (instancetype)queryForUsersDraftsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.list";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailListDraftsResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersDraftsSendWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForUsersDraftsSendWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.send";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersDraftsUpdateWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForUsersDraftsUpdateWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.drafts.update";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailDraft class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "users.history" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersHistoryList {
=======
#pragma mark - "users" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersGetProfile {
  NSString *methodName = @"gmail.users.getProfile";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailProfile class];
  return query;
}

#pragma mark - "users.history" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersHistoryList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.history.list";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailListHistoryResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "users.labels" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersLabelsCreate {
=======
#pragma mark - "users.labels" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersLabelsCreate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.create";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailLabel class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersLabelsDelete {
=======
+ (instancetype)queryForUsersLabelsDelete {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.delete";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersLabelsGet {
=======
+ (instancetype)queryForUsersLabelsGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.get";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailLabel class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersLabelsList {
=======
+ (instancetype)queryForUsersLabelsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.list";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailListLabelsResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersLabelsPatch {
=======
+ (instancetype)queryForUsersLabelsPatch {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.patch";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailLabel class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersLabelsUpdate {
=======
+ (instancetype)queryForUsersLabelsUpdate {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.labels.update";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailLabel class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "users.messages.attachments" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersMessagesAttachmentsGet {
=======
#pragma mark - "users.messages.attachments" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersMessagesAttachmentsGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.attachments.get";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailMessagePartBody class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "users.messages" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersMessagesDelete {
=======
#pragma mark - "users.messages" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersMessagesBatchDelete {
  NSString *methodName = @"gmail.users.messages.batchDelete";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

+ (instancetype)queryForUsersMessagesDelete {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.delete";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesGet {
=======
+ (instancetype)queryForUsersMessagesGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.get";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesImportWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForUsersMessagesImportWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.import";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesInsertWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForUsersMessagesInsertWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.insert";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesList {
=======
+ (instancetype)queryForUsersMessagesList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.list";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailListMessagesResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesModify {
=======
+ (instancetype)queryForUsersMessagesModify {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.modify";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesSendWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
=======
+ (instancetype)queryForUsersMessagesSendWithUploadParameters:(GTLUploadParameters *)uploadParametersOrNil {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.send";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.uploadParameters = uploadParametersOrNil;
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesTrash {
=======
+ (instancetype)queryForUsersMessagesTrash {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.trash";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersMessagesUntrash {
=======
+ (instancetype)queryForUsersMessagesUntrash {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.messages.untrash";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailMessage class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "users.threads" methods
// These create a GTLQueryGmail object.

+ (id)queryForUsersThreadsDelete {
=======
#pragma mark - "users" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersStop {
  NSString *methodName = @"gmail.users.stop";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

#pragma mark - "users.threads" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersThreadsDelete {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.delete";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersThreadsGet {
=======
+ (instancetype)queryForUsersThreadsGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.get";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailThread class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersThreadsList {
=======
+ (instancetype)queryForUsersThreadsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.list";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailListThreadsResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersThreadsModify {
=======
+ (instancetype)queryForUsersThreadsModify {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.modify";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailThread class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersThreadsTrash {
=======
+ (instancetype)queryForUsersThreadsTrash {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.trash";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailThread class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForUsersThreadsUntrash {
=======
+ (instancetype)queryForUsersThreadsUntrash {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"gmail.users.threads.untrash";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailThread class];
  return query;
}

<<<<<<< HEAD
=======
#pragma mark - "users" methods
// These create a GTLQueryGmail object.

+ (instancetype)queryForUsersWatch {
  NSString *methodName = @"gmail.users.watch";
  GTLQueryGmail *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLGmailWatchResponse class];
  return query;
}

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
