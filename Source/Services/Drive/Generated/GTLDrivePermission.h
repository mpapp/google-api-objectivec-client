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
//  GTLDrivePermission.h
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
//   GTLDrivePermission (0 custom class methods, 14 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDrivePermission (0 custom class methods, 9 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLDrivePermission
//

<<<<<<< HEAD
// A permission for a file.

@interface GTLDrivePermission : GTLObject

// Additional roles for this user. Only commenter is currently allowed.
@property (retain) NSArray *additionalRoles;  // of NSString

// The authkey parameter required for this permission.
@property (copy) NSString *authKey;

// The domain name of the entity this permission refers to. This is an
// output-only field which is present when the permission type is user, group or
// domain.
@property (copy) NSString *domain;

// The email address of the user this permission refers to. This is an
// output-only field which is present when the permission type is user and the
// given user's Google+ profile privacy settings allow exposing their email
// address.
@property (copy) NSString *emailAddress;

// The ETag of the permission.
@property (copy) NSString *ETag;

// The ID of the user this permission refers to, and identical to the
// permissionId in the About and Files resources. When making a
// drive.permissions.insert request, exactly one of the id or value fields must
// be specified.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// This is always drive#permission.
@property (copy) NSString *kind;

// The name for this permission.
@property (copy) NSString *name;

// A link to the profile photo, if available.
@property (copy) NSString *photoLink;

// The primary role for this user. Allowed values are:
// - owner
// - reader
// - writer
@property (copy) NSString *role;

// A link back to this permission.
@property (copy) NSString *selfLink;

// The account type. Allowed values are:
=======
// A permission for a file. A permission grants a user, group, domain or the
// world access to a file or a folder hierarchy.

@interface GTLDrivePermission : GTLObject

// Whether the permission allows the file to be discovered through search. This
// is only applicable for permissions of type domain or anyone.
@property (nonatomic, retain) NSNumber *allowFileDiscovery;  // boolValue

// A displayable name for users, groups or domains.
@property (nonatomic, copy) NSString *displayName;

// The domain to which this permission refers.
@property (nonatomic, copy) NSString *domain;

// The email address of the user or group to which this permission refers.
@property (nonatomic, copy) NSString *emailAddress;

// The ID of this permission. This is a unique identifier for the grantee, and
// is published in User resources as permissionId.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// This is always drive#permission.
@property (nonatomic, copy) NSString *kind;

// A link to the user's profile photo, if available.
@property (nonatomic, copy) NSString *photoLink;

// The role granted by this permission. Valid values are:
// - owner
// - writer
// - commenter
// - reader
@property (nonatomic, copy) NSString *role;

// The type of the grantee. Valid values are:
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// - user
// - group
// - domain
// - anyone
<<<<<<< HEAD
@property (copy) NSString *type;

// The email address or domain name for the entity. This is used during inserts
// and is not populated in responses. When making a drive.permissions.insert
// request, exactly one of the id or value fields must be specified.
@property (copy) NSString *value;

// Whether the link is required for this permission.
@property (retain) NSNumber *withLink;  // boolValue
=======
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
