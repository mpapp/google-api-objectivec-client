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
//  GTLGmailMessagePartBody.h
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
//   GTLGmailMessagePartBody (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLGmailMessagePartBody
//

// The body of a single MIME message part.

@interface GTLGmailMessagePartBody : GTLObject

// When present, contains the ID of an external attachment that can be retrieved
// in a separate messages.attachments.get request. When not present, the entire
// content of the message part body is contained in the data field.
<<<<<<< HEAD
@property (copy) NSString *attachmentId;
=======
@property (nonatomic, copy) NSString *attachmentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The body data of a MIME message part. May be empty for MIME container types
// that have no message body or when the body data is sent as a separate
// attachment. An attachment ID is present if the body data is contained in a
// separate attachment.
<<<<<<< HEAD
@property (copy) NSString *data;  // GTLBase64 can encode/decode (probably web-safe format)

// Total number of bytes in the body of the message part.
@property (retain) NSNumber *size;  // intValue
=======
@property (nonatomic, copy) NSString *data;  // GTLBase64 can encode/decode (probably web-safe format)

// Total number of bytes in the body of the message part.
@property (nonatomic, retain) NSNumber *size;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
