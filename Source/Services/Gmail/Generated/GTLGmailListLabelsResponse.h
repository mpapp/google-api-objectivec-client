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
//  GTLGmailListLabelsResponse.h
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
//   GTLGmailListLabelsResponse (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLGmailLabel;

// ----------------------------------------------------------------------------
//
//   GTLGmailListLabelsResponse
//

@interface GTLGmailListLabelsResponse : GTLObject

// List of labels.
<<<<<<< HEAD
@property (retain) NSArray *labels;  // of GTLGmailLabel
=======
@property (nonatomic, retain) NSArray *labels;  // of GTLGmailLabel
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
