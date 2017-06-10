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
//  GTLDrivePermissionList.h
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
//   GTLDrivePermissionList (0 custom class methods, 4 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDrivePermissionList (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDrivePermission;

// ----------------------------------------------------------------------------
//
//   GTLDrivePermissionList
//

<<<<<<< HEAD
// A list of permissions associated with a file.

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLDrivePermissionList : GTLCollectionObject

// The ETag of the list.
@property (copy) NSString *ETag;

// The actual list of permissions.
@property (retain) NSArray *items;  // of GTLDrivePermission

// This is always drive#permissionList.
@property (copy) NSString *kind;

// A link back to this list.
@property (copy) NSString *selfLink;
=======
// A list of permissions for a file.

@interface GTLDrivePermissionList : GTLObject

// This is always drive#permissionList.
@property (nonatomic, copy) NSString *kind;

// The full list of permissions.
@property (nonatomic, retain) NSArray *permissions;  // of GTLDrivePermission
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
