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
//  GTLDriveAbout.m
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

#import "GTLDriveAbout.h"

#import "GTLDriveUser.h"

// ----------------------------------------------------------------------------
//
//   GTLDriveAbout
//

@implementation GTLDriveAbout
<<<<<<< HEAD
@dynamic additionalRoleInfo, domainSharingPolicy, ETag, exportFormats, features,
         importFormats, isCurrentAppInstalled, kind, languageCode,
         largestChangeId, maxUploadSizes, name, permissionId,
         quotaBytesByService, quotaBytesTotal, quotaBytesUsed,
         quotaBytesUsedAggregate, quotaBytesUsedInTrash, quotaType,
         remainingChangeIds, rootFolderId, selfLink, user;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"etag"
                                forKey:@"ETag"];
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLDriveAboutAdditionalRoleInfoItem class], @"additionalRoleInfo",
      [GTLDriveAboutExportFormatsItem class], @"exportFormats",
      [GTLDriveAboutFeaturesItem class], @"features",
      [GTLDriveAboutImportFormatsItem class], @"importFormats",
      [GTLDriveAboutMaxUploadSizesItem class], @"maxUploadSizes",
      [GTLDriveAboutQuotaBytesByServiceItem class], @"quotaBytesByService",
      nil];
=======
@dynamic appInstalled, exportFormats, folderColorPalette, importFormats, kind,
         maxImportSizes, maxUploadSize, storageQuota, user;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map = @{
    @"folderColorPalette" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"drive#about"];
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutAdditionalRoleInfoItem
//

@implementation GTLDriveAboutAdditionalRoleInfoItem
@dynamic roleSets, type;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem class]
                                forKey:@"roleSets"];
  return map;
=======
//   GTLDriveAboutExportFormats
//

@implementation GTLDriveAboutExportFormats

+ (Class)classForAdditionalProperties {
  return [NSString class];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutExportFormatsItem
//

@implementation GTLDriveAboutExportFormatsItem
@dynamic source, targets;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"targets"];
  return map;
=======
//   GTLDriveAboutImportFormats
//

@implementation GTLDriveAboutImportFormats

+ (Class)classForAdditionalProperties {
  return [NSString class];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutFeaturesItem
//

@implementation GTLDriveAboutFeaturesItem
@dynamic featureName, featureRate;
@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutImportFormatsItem
//

@implementation GTLDriveAboutImportFormatsItem
@dynamic source, targets;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"targets"];
  return map;
=======
//   GTLDriveAboutMaxImportSizes
//

@implementation GTLDriveAboutMaxImportSizes

+ (Class)classForAdditionalProperties {
  return [NSNumber class];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveAboutMaxUploadSizesItem
//

@implementation GTLDriveAboutMaxUploadSizesItem
@dynamic size, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutQuotaBytesByServiceItem
//

@implementation GTLDriveAboutQuotaBytesByServiceItem
@dynamic bytesUsed, serviceName;
@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem
//

@implementation GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem
@dynamic additionalRoles, primaryRole;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[NSString class]
                                forKey:@"additionalRoles"];
  return map;
}

=======
//   GTLDriveAboutStorageQuota
//

@implementation GTLDriveAboutStorageQuota
@dynamic limit, usage, usageInDrive, usageInDriveTrash;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
