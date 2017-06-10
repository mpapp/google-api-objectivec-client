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
//  GTLDriveFile.m
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
//   GTLDriveFile (0 custom class methods, 49 custom properties)
//   GTLDriveFileExportLinks (0 custom class methods, 0 custom properties)
//   GTLDriveFileImageMediaMetadata (0 custom class methods, 21 custom properties)
//   GTLDriveFileIndexableText (0 custom class methods, 1 custom properties)
//   GTLDriveFileLabels (0 custom class methods, 5 custom properties)
//   GTLDriveFileOpenWithLinks (0 custom class methods, 0 custom properties)
//   GTLDriveFileThumbnail (0 custom class methods, 2 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveFile (0 custom class methods, 44 custom properties)
//   GTLDriveFileAppProperties (0 custom class methods, 0 custom properties)
//   GTLDriveFileCapabilities (0 custom class methods, 5 custom properties)
//   GTLDriveFileContentHints (0 custom class methods, 2 custom properties)
//   GTLDriveFileImageMediaMetadata (0 custom class methods, 21 custom properties)
//   GTLDriveFileProperties (0 custom class methods, 0 custom properties)
//   GTLDriveFileVideoMediaMetadata (0 custom class methods, 3 custom properties)
//   GTLDriveFileContentHintsThumbnail (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLDriveFileImageMediaMetadataLocation (0 custom class methods, 3 custom properties)

#import "GTLDriveFile.h"

<<<<<<< HEAD
#import "GTLDriveParentReference.h"
#import "GTLDrivePermission.h"
#import "GTLDriveProperty.h"
=======
#import "GTLDrivePermission.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLDriveUser.h"

// ----------------------------------------------------------------------------
//
//   GTLDriveFile
//

@implementation GTLDriveFile
<<<<<<< HEAD
@dynamic alternateLink, appDataContents, copyable, createdDate,
         defaultOpenWithLink, descriptionProperty, downloadUrl, editable,
         embedLink, ETag, explicitlyTrashed, exportLinks, fileExtension,
         fileSize, headRevisionId, iconLink, identifier, imageMediaMetadata,
         indexableText, kind, labels, lastModifyingUser, lastModifyingUserName,
         lastViewedByMeDate, markedViewedByMeDate, md5Checksum, mimeType,
         modifiedByMeDate, modifiedDate, openWithLinks, originalFilename,
         ownerNames, owners, parents, permissions, properties, quotaBytesUsed,
         selfLink, shared, sharedWithMeDate, sharingUser, thumbnail,
         thumbnailLink, title, userPermission, version, webContentLink,
         webViewLink, writersCanShare;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"description", @"descriptionProperty",
      @"etag", @"ETag",
      @"id", @"identifier",
      nil];
=======
@dynamic appProperties, capabilities, contentHints, createdTime,
         descriptionProperty, explicitlyTrashed, fileExtension, folderColorRgb,
         fullFileExtension, headRevisionId, iconLink, identifier,
         imageMediaMetadata, isAppAuthorized, kind, lastModifyingUser,
         md5Checksum, mimeType, modifiedByMeTime, modifiedTime, name,
         originalFilename, ownedByMe, owners, parents, permissions, properties,
         quotaBytesUsed, shared, sharedWithMeTime, sharingUser, size, spaces,
         starred, thumbnailLink, trashed, version, videoMediaMetadata,
         viewedByMe, viewedByMeTime, viewersCanCopyContent, webContentLink,
         webViewLink, writersCanShare;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map = @{
    @"descriptionProperty" : @"description",
    @"identifier" : @"id"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"ownerNames",
      [GTLDriveUser class], @"owners",
      [GTLDriveParentReference class], @"parents",
      [GTLDrivePermission class], @"permissions",
      [GTLDriveProperty class], @"properties",
      nil];
=======
  NSDictionary *map = @{
    @"owners" : [GTLDriveUser class],
    @"parents" : [NSString class],
    @"permissions" : [GTLDrivePermission class],
    @"spaces" : [NSString class]
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"drive#file"];
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileExportLinks
//

@implementation GTLDriveFileExportLinks
=======
//   GTLDriveFileAppProperties
//

@implementation GTLDriveFileAppProperties
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileImageMediaMetadata
//

@implementation GTLDriveFileImageMediaMetadata
@dynamic aperture, cameraMake, cameraModel, colorSpace, date, exposureBias,
         exposureMode, exposureTime, flashUsed, focalLength, height, isoSpeed,
         lens, location, maxApertureValue, meteringMode, rotation, sensor,
         subjectDistance, whiteBalance, width;
=======
//   GTLDriveFileCapabilities
//

@implementation GTLDriveFileCapabilities
@dynamic canComment, canCopy, canEdit, canReadRevisions, canShare;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileIndexableText
//

@implementation GTLDriveFileIndexableText
@dynamic text;
=======
//   GTLDriveFileContentHints
//

@implementation GTLDriveFileContentHints
@dynamic indexableText, thumbnail;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileLabels
//

@implementation GTLDriveFileLabels
@dynamic hidden, restricted, starred, trashed, viewed;
=======
//   GTLDriveFileImageMediaMetadata
//

@implementation GTLDriveFileImageMediaMetadata
@dynamic aperture, cameraMake, cameraModel, colorSpace, exposureBias,
         exposureMode, exposureTime, flashUsed, focalLength, height, isoSpeed,
         lens, location, maxApertureValue, meteringMode, rotation, sensor,
         subjectDistance, time, whiteBalance, width;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileOpenWithLinks
//

@implementation GTLDriveFileOpenWithLinks
=======
//   GTLDriveFileProperties
//

@implementation GTLDriveFileProperties
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileThumbnail
//

@implementation GTLDriveFileThumbnail
=======
//   GTLDriveFileVideoMediaMetadata
//

@implementation GTLDriveFileVideoMediaMetadata
@dynamic durationMillis, height, width;
@end


// ----------------------------------------------------------------------------
//
//   GTLDriveFileContentHintsThumbnail
//

@implementation GTLDriveFileContentHintsThumbnail
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@dynamic image, mimeType;
@end


// ----------------------------------------------------------------------------
//
//   GTLDriveFileImageMediaMetadataLocation
//

@implementation GTLDriveFileImageMediaMetadataLocation
@dynamic altitude, latitude, longitude;
@end
