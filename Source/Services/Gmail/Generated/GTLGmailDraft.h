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
//  GTLGmailDraft.h
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
//   GTLGmailDraft (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLGmailMessage;

// ----------------------------------------------------------------------------
//
//   GTLGmailDraft
//

// A draft email in the user's mailbox.

@interface GTLGmailDraft : GTLObject

// The immutable ID of the draft.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
<<<<<<< HEAD
@property (copy) NSString *identifier;

// The message content of the draft.
@property (retain) GTLGmailMessage *message;
=======
@property (nonatomic, copy) NSString *identifier;

// The message content of the draft.
@property (nonatomic, retain) GTLGmailMessage *message;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
