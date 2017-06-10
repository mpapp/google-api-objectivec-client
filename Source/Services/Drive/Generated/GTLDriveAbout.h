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
//  GTLDriveAbout.h
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
//   GTLDriveAbout (0 custom class methods, 23 custom properties)
//   GTLDriveAboutAdditionalRoleInfoItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutExportFormatsItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutFeaturesItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutImportFormatsItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutMaxUploadSizesItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutQuotaBytesByServiceItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem (0 custom class methods, 2 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveAbout (0 custom class methods, 9 custom properties)
//   GTLDriveAboutExportFormats (0 custom class methods, 0 custom properties)
//   GTLDriveAboutImportFormats (0 custom class methods, 0 custom properties)
//   GTLDriveAboutMaxImportSizes (0 custom class methods, 0 custom properties)
//   GTLDriveAboutStorageQuota (0 custom class methods, 4 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
@class GTLDriveAboutAdditionalRoleInfoItem;
@class GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem;
@class GTLDriveAboutExportFormatsItem;
@class GTLDriveAboutFeaturesItem;
@class GTLDriveAboutImportFormatsItem;
@class GTLDriveAboutMaxUploadSizesItem;
@class GTLDriveAboutQuotaBytesByServiceItem;
=======
@class GTLDriveAboutExportFormats;
@class GTLDriveAboutImportFormats;
@class GTLDriveAboutMaxImportSizes;
@class GTLDriveAboutStorageQuota;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLDriveUser;

// ----------------------------------------------------------------------------
//
//   GTLDriveAbout
//

<<<<<<< HEAD
// An item with user information and settings.

@interface GTLDriveAbout : GTLObject

// Information about supported additional roles per file type. The most specific
// type takes precedence.
@property (retain) NSArray *additionalRoleInfo;  // of GTLDriveAboutAdditionalRoleInfoItem

// The domain sharing policy for the current user.
@property (copy) NSString *domainSharingPolicy;

// The ETag of the item.
@property (copy) NSString *ETag;

// The allowable export formats.
@property (retain) NSArray *exportFormats;  // of GTLDriveAboutExportFormatsItem

// List of additional features enabled on this account.
@property (retain) NSArray *features;  // of GTLDriveAboutFeaturesItem

// The allowable import formats.
@property (retain) NSArray *importFormats;  // of GTLDriveAboutImportFormatsItem

// A boolean indicating whether the authenticated app is installed by the
// authenticated user.
@property (retain) NSNumber *isCurrentAppInstalled;  // boolValue

// This is always drive#about.
@property (copy) NSString *kind;

// The user's language or locale code, as defined by BCP 47, with some
// extensions from Unicode's LDML format (http://www.unicode.org/reports/tr35/).
@property (copy) NSString *languageCode;

// The largest change id.
@property (retain) NSNumber *largestChangeId;  // longLongValue

// List of max upload sizes for each file type. The most specific type takes
// precedence.
@property (retain) NSArray *maxUploadSizes;  // of GTLDriveAboutMaxUploadSizesItem

// The name of the current user.
@property (copy) NSString *name;

// The current user's ID as visible in the permissions collection.
@property (copy) NSString *permissionId;

// The amount of storage quota used by different Google services.
@property (retain) NSArray *quotaBytesByService;  // of GTLDriveAboutQuotaBytesByServiceItem

// The total number of quota bytes.
@property (retain) NSNumber *quotaBytesTotal;  // longLongValue

// The number of quota bytes used by Google Drive.
@property (retain) NSNumber *quotaBytesUsed;  // longLongValue

// The number of quota bytes used by all Google apps (Drive, Picasa, etc.).
@property (retain) NSNumber *quotaBytesUsedAggregate;  // longLongValue

// The number of quota bytes used by trashed items.
@property (retain) NSNumber *quotaBytesUsedInTrash;  // longLongValue

// The type of the user's storage quota. Possible values are:
// - LIMITED
// - UNLIMITED
@property (copy) NSString *quotaType;

// The number of remaining change ids.
@property (retain) NSNumber *remainingChangeIds;  // longLongValue

// The id of the root folder.
@property (copy) NSString *rootFolderId;

// A link back to this item.
@property (copy) NSString *selfLink;

// The authenticated user.
@property (retain) GTLDriveUser *user;
=======
// Information about the user, the user's Drive, and system capabilities.

@interface GTLDriveAbout : GTLObject

// Whether the user has installed the requesting app.
@property (nonatomic, retain) NSNumber *appInstalled;  // boolValue

// A map of source MIME type to possible targets for all supported exports.
@property (nonatomic, retain) GTLDriveAboutExportFormats *exportFormats;

// The currently supported folder colors as RGB hex strings.
@property (nonatomic, retain) NSArray *folderColorPalette;  // of NSString

// A map of source MIME type to possible targets for all supported imports.
@property (nonatomic, retain) GTLDriveAboutImportFormats *importFormats;

// This is always drive#about.
@property (nonatomic, copy) NSString *kind;

// A map of maximum import sizes by MIME type, in bytes.
@property (nonatomic, retain) GTLDriveAboutMaxImportSizes *maxImportSizes;

// The maximum upload size in bytes.
@property (nonatomic, retain) NSNumber *maxUploadSize;  // longLongValue

// The user's storage quota limits and usage. All fields are measured in bytes.
@property (nonatomic, retain) GTLDriveAboutStorageQuota *storageQuota;

// The authenticated user.
@property (nonatomic, retain) GTLDriveUser *user;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutAdditionalRoleInfoItem
//

@interface GTLDriveAboutAdditionalRoleInfoItem : GTLObject

// The supported additional roles per primary role.
@property (retain) NSArray *roleSets;  // of GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem

// The content type that this additional role info applies to.
@property (copy) NSString *type;

=======
//   GTLDriveAboutExportFormats
//

@interface GTLDriveAboutExportFormats : GTLObject
// This object is documented as having more properties that are NSArrays of
// NSString. Use -additionalJSONKeys and -additionalPropertyForName: to get the
// list of properties and then fetch them; or -additionalProperties to fetch
// them all at once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutExportFormatsItem
//

@interface GTLDriveAboutExportFormatsItem : GTLObject

// The content type to convert from.
@property (copy) NSString *source;

// The possible content types to convert to.
@property (retain) NSArray *targets;  // of NSString

=======
//   GTLDriveAboutImportFormats
//

@interface GTLDriveAboutImportFormats : GTLObject
// This object is documented as having more properties that are NSArrays of
// NSString. Use -additionalJSONKeys and -additionalPropertyForName: to get the
// list of properties and then fetch them; or -additionalProperties to fetch
// them all at once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutFeaturesItem
//

@interface GTLDriveAboutFeaturesItem : GTLObject

// The name of the feature.
@property (copy) NSString *featureName;

// The request limit rate for this feature, in queries per second.
@property (retain) NSNumber *featureRate;  // doubleValue

=======
//   GTLDriveAboutMaxImportSizes
//

@interface GTLDriveAboutMaxImportSizes : GTLObject
// This object is documented as having more properties that are NSNumber
// (longLongValue). Use -additionalJSONKeys and -additionalPropertyForName: to
// get the list of properties and then fetch them; or -additionalProperties to
// fetch them all at once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutImportFormatsItem
//

@interface GTLDriveAboutImportFormatsItem : GTLObject

// The imported file's content type to convert from.
@property (copy) NSString *source;

// The possible content types to convert to.
@property (retain) NSArray *targets;  // of NSString

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutMaxUploadSizesItem
//

@interface GTLDriveAboutMaxUploadSizesItem : GTLObject

// The max upload size for this type.
@property (retain) NSNumber *size;  // longLongValue

// The file type.
@property (copy) NSString *type;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutQuotaBytesByServiceItem
//

@interface GTLDriveAboutQuotaBytesByServiceItem : GTLObject

// The storage quota bytes used by the service.
@property (retain) NSNumber *bytesUsed;  // longLongValue

// The service's name, e.g. DRIVE, GMAIL, or PHOTOS.
@property (copy) NSString *serviceName;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem
//

@interface GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem : GTLObject

// The supported additional roles with the primary role.
@property (retain) NSArray *additionalRoles;  // of NSString

// A primary permission role.
@property (copy) NSString *primaryRole;
=======
//   GTLDriveAboutStorageQuota
//

@interface GTLDriveAboutStorageQuota : GTLObject

// The usage limit, if applicable. This will not be present if the user has
// unlimited storage.
@property (nonatomic, retain) NSNumber *limit;  // longLongValue

// The total usage across all services.
@property (nonatomic, retain) NSNumber *usage;  // longLongValue

// The usage by all files in Google Drive.
@property (nonatomic, retain) NSNumber *usageInDrive;  // longLongValue

// The usage by trashed files in Google Drive.
@property (nonatomic, retain) NSNumber *usageInDriveTrash;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
