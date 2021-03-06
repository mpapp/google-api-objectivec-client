<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLDriveChangeList.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
<<<<<<< HEAD
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveChangeList (0 custom class methods, 7 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveChangeList (0 custom class methods, 4 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDriveChange;

// ----------------------------------------------------------------------------
//
//   GTLDriveChangeList
//

// A list of changes for a user.

<<<<<<< HEAD
// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLDriveChangeList : GTLCollectionObject

// The ETag of the list.
@property (copy) NSString *ETag;

// The actual list of changes.
@property (retain) NSArray *items;  // of GTLDriveChange

// This is always drive#changeList.
@property (copy) NSString *kind;

// The current largest change ID.
@property (retain) NSNumber *largestChangeId;  // longLongValue

// A link to the next page of changes.
@property (copy) NSString *nextLink;

// The page token for the next page of changes.
@property (copy) NSString *nextPageToken;

// A link back to this list.
@property (copy) NSString *selfLink;
=======
@interface GTLDriveChangeList : GTLObject

// The page of changes.
@property (nonatomic, retain) NSArray *changes;  // of GTLDriveChange

// This is always drive#changeList.
@property (nonatomic, copy) NSString *kind;

// The starting page token for future changes. This will be present only if the
// end of the current changes list has been reached.
@property (nonatomic, copy) NSString *newStartPageToken NS_RETURNS_NOT_RETAINED;

// The page token for the next page of changes. This will be absent if the end
// of the current changes list has been reached.
@property (nonatomic, copy) NSString *nextPageToken;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
