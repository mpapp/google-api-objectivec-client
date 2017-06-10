<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLDriveRevision.h
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
//   GTLDriveRevision (0 custom class methods, 18 custom properties)
//   GTLDriveRevisionExportLinks (0 custom class methods, 0 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveRevision (0 custom class methods, 12 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
@class GTLDriveRevisionExportLinks;
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLDriveUser;

// ----------------------------------------------------------------------------
//
//   GTLDriveRevision
//

<<<<<<< HEAD
// A revision of a file.

@interface GTLDriveRevision : GTLObject

// Short term download URL for the file. This will only be populated on files
// with content stored in Drive.
@property (copy) NSString *downloadUrl;

// The ETag of the revision.
@property (copy) NSString *ETag;

// Links for exporting Google Docs to specific formats.
@property (retain) GTLDriveRevisionExportLinks *exportLinks;

// The size of the revision in bytes. This will only be populated on files with
// content stored in Drive.
@property (retain) NSNumber *fileSize;  // longLongValue

// The ID of the revision.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// This is always drive#revision.
@property (copy) NSString *kind;

// The last user to modify this revision.
@property (retain) GTLDriveUser *lastModifyingUser;

// Name of the last user to modify this revision.
@property (copy) NSString *lastModifyingUserName;

// An MD5 checksum for the content of this revision. This will only be populated
// on files with content stored in Drive.
@property (copy) NSString *md5Checksum;

// The MIME type of the revision.
@property (copy) NSString *mimeType;

// Last time this revision was modified (formatted RFC 3339 timestamp).
@property (retain) GTLDateTime *modifiedDate;

// The original filename when this revision was created. This will only be
// populated on files with content stored in Drive.
@property (copy) NSString *originalFilename;

// Whether this revision is pinned to prevent automatic purging. This will only
// be populated and can only be modified on files with content stored in Drive
// which are not Google Docs. Revisions can also be pinned when they are created
// through the drive.files.insert/update/copy by using the pinned query
// parameter.
@property (retain) NSNumber *pinned;  // boolValue

// Whether subsequent revisions will be automatically republished. This is only
// populated and can only be modified for Google Docs.
@property (retain) NSNumber *publishAuto;  // boolValue

// Whether this revision is published. This is only populated and can only be
// modified for Google Docs.
@property (retain) NSNumber *published;  // boolValue

// A link to the published revision.
@property (copy) NSString *publishedLink;

// Whether this revision is published outside the domain. This is only populated
// and can only be modified for Google Docs.
@property (retain) NSNumber *publishedOutsideDomain;  // boolValue

// A link back to this revision.
@property (copy) NSString *selfLink;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveRevisionExportLinks
//

@interface GTLDriveRevisionExportLinks : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
=======
// The metadata for a revision to a file.

@interface GTLDriveRevision : GTLObject

// The ID of the revision.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Whether to keep this revision forever, even if it is no longer the head
// revision. If not set, the revision will be automatically purged 30 days after
// newer content is uploaded. This can be set on a maximum of 200 revisions for
// a file.
// This field is only applicable to files with binary content in Drive.
@property (nonatomic, retain) NSNumber *keepForever;  // boolValue

// This is always drive#revision.
@property (nonatomic, copy) NSString *kind;

// The last user to modify this revision.
@property (nonatomic, retain) GTLDriveUser *lastModifyingUser;

// The MD5 checksum of the revision's content. This is only applicable to files
// with binary content in Drive.
@property (nonatomic, copy) NSString *md5Checksum;

// The MIME type of the revision.
@property (nonatomic, copy) NSString *mimeType;

// The last time the revision was modified (RFC 3339 date-time).
@property (nonatomic, retain) GTLDateTime *modifiedTime;

// The original filename used to create this revision. This is only applicable
// to files with binary content in Drive.
@property (nonatomic, copy) NSString *originalFilename;

// Whether subsequent revisions will be automatically republished. This is only
// applicable to Google Docs.
@property (nonatomic, retain) NSNumber *publishAuto;  // boolValue

// Whether this revision is published. This is only applicable to Google Docs.
@property (nonatomic, retain) NSNumber *published;  // boolValue

// Whether this revision is published outside the domain. This is only
// applicable to Google Docs.
@property (nonatomic, retain) NSNumber *publishedOutsideDomain;  // boolValue

// The size of the revision's content in bytes. This is only applicable to files
// with binary content in Drive.
@property (nonatomic, retain) NSNumber *size;  // longLongValue

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
