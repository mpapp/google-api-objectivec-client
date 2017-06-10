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
//  GTLGmailConstants.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Gmail API (gmail/v1)
// Description:
<<<<<<< HEAD
//   The Gmail REST API.
=======
//   Access Gmail mailboxes including sending user email.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/gmail/api/

#import "GTLGmailConstants.h"

// Authorization scope
NSString * const kGTLAuthScopeGmail         = @"https://mail.google.com/";
NSString * const kGTLAuthScopeGmailCompose  = @"https://www.googleapis.com/auth/gmail.compose";
<<<<<<< HEAD
NSString * const kGTLAuthScopeGmailModify   = @"https://www.googleapis.com/auth/gmail.modify";
NSString * const kGTLAuthScopeGmailReadonly = @"https://www.googleapis.com/auth/gmail.readonly";
=======
NSString * const kGTLAuthScopeGmailInsert   = @"https://www.googleapis.com/auth/gmail.insert";
NSString * const kGTLAuthScopeGmailLabels   = @"https://www.googleapis.com/auth/gmail.labels";
NSString * const kGTLAuthScopeGmailModify   = @"https://www.googleapis.com/auth/gmail.modify";
NSString * const kGTLAuthScopeGmailReadonly = @"https://www.googleapis.com/auth/gmail.readonly";
NSString * const kGTLAuthScopeGmailSend     = @"https://www.googleapis.com/auth/gmail.send";
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// GTLGmailLabel - LabelListVisibility
NSString * const kGTLGmailLabel_LabelListVisibility_LabelHide  = @"labelHide";
NSString * const kGTLGmailLabel_LabelListVisibility_LabelShow  = @"labelShow";
NSString * const kGTLGmailLabel_LabelListVisibility_LabelShowIfUnread = @"labelShowIfUnread";

// GTLGmailLabel - MessageListVisibility
NSString * const kGTLGmailLabel_MessageListVisibility_Hide = @"hide";
NSString * const kGTLGmailLabel_MessageListVisibility_Show = @"show";

// GTLGmailLabel - Type
NSString * const kGTLGmailLabel_Type_System = @"system";
NSString * const kGTLGmailLabel_Type_User   = @"user";

// GTLQueryGmail - Format
<<<<<<< HEAD
NSString * const kGTLGmailFormatFull    = @"full";
NSString * const kGTLGmailFormatMinimal = @"minimal";
NSString * const kGTLGmailFormatRaw     = @"raw";
=======
NSString * const kGTLGmailFormatFull     = @"full";
NSString * const kGTLGmailFormatMetadata = @"metadata";
NSString * const kGTLGmailFormatMinimal  = @"minimal";
NSString * const kGTLGmailFormatRaw      = @"raw";

// GTLQueryGmail - InternalDateSource
NSString * const kGTLGmailInternalDateSourceDateHeader   = @"dateHeader";
NSString * const kGTLGmailInternalDateSourceReceivedTime = @"receivedTime";

// GTLQueryGmail - LabelFilterAction
NSString * const kGTLGmailLabelFilterActionExclude = @"exclude";
NSString * const kGTLGmailLabelFilterActionInclude = @"include";
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
