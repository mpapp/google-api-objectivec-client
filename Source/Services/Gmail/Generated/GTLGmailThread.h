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
//  GTLGmailThread.h
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
// Classes:
//   GTLGmailThread (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLGmailMessage;

// ----------------------------------------------------------------------------
//
//   GTLGmailThread
//

// A collection of messages representing a conversation.

@interface GTLGmailThread : GTLObject

// The ID of the last history record that modified this thread.
<<<<<<< HEAD
@property (retain) NSNumber *historyId;  // unsignedLongLongValue

// The unique ID of the thread.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// The list of messages in the thread.
@property (retain) NSArray *messages;  // of GTLGmailMessage

// A short part of the message text.
@property (copy) NSString *snippet;
=======
@property (nonatomic, retain) NSNumber *historyId;  // unsignedLongLongValue

// The unique ID of the thread.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// The list of messages in the thread.
@property (nonatomic, retain) NSArray *messages;  // of GTLGmailMessage

// A short part of the message text.
@property (nonatomic, copy) NSString *snippet;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
