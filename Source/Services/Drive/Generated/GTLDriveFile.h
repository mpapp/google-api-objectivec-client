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
//  GTLDriveFile.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

<<<<<<< HEAD
@class GTLDriveFileExportLinks;
@class GTLDriveFileImageMediaMetadata;
@class GTLDriveFileImageMediaMetadataLocation;
@class GTLDriveFileIndexableText;
@class GTLDriveFileLabels;
@class GTLDriveFileOpenWithLinks;
@class GTLDriveFileThumbnail;
@class GTLDriveParentReference;
@class GTLDrivePermission;
@class GTLDriveProperty;
=======
@class GTLDriveFileAppProperties;
@class GTLDriveFileCapabilities;
@class GTLDriveFileContentHints;
@class GTLDriveFileContentHintsThumbnail;
@class GTLDriveFileImageMediaMetadata;
@class GTLDriveFileImageMediaMetadataLocation;
@class GTLDriveFileProperties;
@class GTLDriveFileVideoMediaMetadata;
@class GTLDrivePermission;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLDriveUser;

// ----------------------------------------------------------------------------
//
//   GTLDriveFile
//

// The metadata for a file.

@interface GTLDriveFile : GTLObject

<<<<<<< HEAD
// A link for opening the file in using a relevant Google editor or viewer.
@property (copy) NSString *alternateLink;

// Whether this file is in the appdata folder.
@property (retain) NSNumber *appDataContents;  // boolValue

// Whether the file can be copied by the current user.
@property (retain) NSNumber *copyable;  // boolValue

// Create time for this file (formatted ISO8601 timestamp).
@property (retain) GTLDateTime *createdDate;

// A link to open this file with the user's default app for this file. Only
// populated when the drive.apps.readonly scope is used.
@property (copy) NSString *defaultOpenWithLink;

// A short description of the file.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Short lived download URL for the file. This is only populated for files with
// content stored in Drive.
@property (copy) NSString *downloadUrl;

// Whether the file can be edited by the current user.
@property (retain) NSNumber *editable;  // boolValue

// A link for embedding the file.
@property (copy) NSString *embedLink;

// ETag of the file.
@property (copy) NSString *ETag;

// Whether this file has been explicitly trashed, as opposed to recursively
// trashed. This will only be populated if the file is trashed.
@property (retain) NSNumber *explicitlyTrashed;  // boolValue

// Links for exporting Google Docs to specific formats.
@property (retain) GTLDriveFileExportLinks *exportLinks;

// The file extension used when downloading this file. This field is read only.
// To set the extension, include it in the title when creating the file. This is
// only populated for files with content stored in Drive.
@property (copy) NSString *fileExtension;

// The size of the file in bytes. This is only populated for files with content
// stored in Drive.
@property (retain) NSNumber *fileSize;  // longLongValue

// The ID of the file's head revision. This will only be populated for files
// with content stored in Drive.
@property (copy) NSString *headRevisionId;

// A link to the file's icon.
@property (copy) NSString *iconLink;

// The ID of the file.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Metadata about image media. This will only be present for image types, and
// its contents will depend on what can be parsed from the image content.
@property (retain) GTLDriveFileImageMediaMetadata *imageMediaMetadata;

// Indexable text attributes for the file (can only be written)
@property (retain) GTLDriveFileIndexableText *indexableText;

// The type of file. This is always drive#file.
@property (copy) NSString *kind;

// A group of labels for the file.
@property (retain) GTLDriveFileLabels *labels;

// The last user to modify this file.
@property (retain) GTLDriveUser *lastModifyingUser;

// Name of the last user to modify this file.
@property (copy) NSString *lastModifyingUserName;

// Last time this file was viewed by the user (formatted RFC 3339 timestamp).
@property (retain) GTLDateTime *lastViewedByMeDate;

// Time this file was explicitly marked viewed by the user (formatted RFC 3339
// timestamp).
@property (retain) GTLDateTime *markedViewedByMeDate;

// An MD5 checksum for the content of this file. This is populated only for
// files with content stored in Drive.
@property (copy) NSString *md5Checksum;

// The MIME type of the file. This is only mutable on update when uploading new
// content. This field can be left blank, and the mimetype will be determined
// from the uploaded content's MIME type.
@property (copy) NSString *mimeType;

// Last time this file was modified by the user (formatted RFC 3339 timestamp).
// Note that setting modifiedDate will also update the modifiedByMe date for the
// user which set the date.
@property (retain) GTLDateTime *modifiedByMeDate;

// Last time this file was modified by anyone (formatted RFC 3339 timestamp).
// This is only mutable on update when the setModifiedDate parameter is set.
@property (retain) GTLDateTime *modifiedDate;

// A map of the id of each of the user's apps to a link to open this file with
// that app. Only populated when the drive.apps.readonly scope is used.
@property (retain) GTLDriveFileOpenWithLinks *openWithLinks;

// The original filename if the file was uploaded manually, or the original
// title if the file was inserted through the API. Note that renames of the
// title will not change the original filename. This will only be populated on
// files with content stored in Drive.
@property (copy) NSString *originalFilename;

// Name(s) of the owner(s) of this file.
@property (retain) NSArray *ownerNames;  // of NSString

// The owner(s) of this file.
@property (retain) NSArray *owners;  // of GTLDriveUser

// Collection of parent folders which contain this file.
// Setting this field will put the file in all of the provided folders. On
// insert, if no folders are provided, the file will be placed in the default
// root folder.
@property (retain) NSArray *parents;  // of GTLDriveParentReference

// The list of permissions for users with access to this file.
@property (retain) NSArray *permissions;  // of GTLDrivePermission

// The list of properties.
@property (retain) NSArray *properties;  // of GTLDriveProperty

// The number of quota bytes used by this file.
@property (retain) NSNumber *quotaBytesUsed;  // longLongValue

// A link back to this file.
@property (copy) NSString *selfLink;

// Whether the file has been shared.
@property (retain) NSNumber *shared;  // boolValue

// Time at which this file was shared with the user (formatted RFC 3339
// timestamp).
@property (retain) GTLDateTime *sharedWithMeDate;

// User that shared the item with the current user, if available.
@property (retain) GTLDriveUser *sharingUser;

// Thumbnail for the file. Only accepted on upload and for files that are not
// already thumbnailed by Google.
@property (retain) GTLDriveFileThumbnail *thumbnail;

// A link to the file's thumbnail.
@property (copy) NSString *thumbnailLink;

// The title of this file.
@property (copy) NSString *title;

// The permissions for the authenticated user on this file.
@property (retain) GTLDrivePermission *userPermission;

// A monotonically increasing version number for the file. This reflects every
// change made to the file on the server, even those not visible to the
// requesting user.
@property (retain) NSNumber *version;  // longLongValue

// A link for downloading the content of the file in a browser using cookie
// based authentication. In cases where the content is shared publicly, the
// content can be downloaded without any credentials.
@property (copy) NSString *webContentLink;

// A link only available on public folders for viewing their static web assets
// (HTML, CSS, JS, etc) via Google Drive's Website Hosting.
@property (copy) NSString *webViewLink;

// Whether writers can share the document with other users.
@property (retain) NSNumber *writersCanShare;  // boolValue
=======
// A collection of arbitrary key-value pairs which are private to the requesting
// app.
// Entries with null values are cleared in update and copy requests.
@property (nonatomic, retain) GTLDriveFileAppProperties *appProperties;

// Capabilities the current user has on the file.
@property (nonatomic, retain) GTLDriveFileCapabilities *capabilities;

// Additional information about the content of the file. These fields are never
// populated in responses.
@property (nonatomic, retain) GTLDriveFileContentHints *contentHints;

// The time at which the file was created (RFC 3339 date-time).
@property (nonatomic, retain) GTLDateTime *createdTime;

// A short description of the file.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Whether the file has been explicitly trashed, as opposed to recursively
// trashed from a parent folder.
@property (nonatomic, retain) NSNumber *explicitlyTrashed;  // boolValue

// The final component of fullFileExtension. This is only available for files
// with binary content in Drive.
@property (nonatomic, copy) NSString *fileExtension;

// The color for a folder as an RGB hex string. The supported colors are
// published in the folderColorPalette field of the About resource.
// If an unsupported color is specified, the closest color in the palette will
// be used instead.
@property (nonatomic, copy) NSString *folderColorRgb;

// The full file extension extracted from the name field. May contain multiple
// concatenated extensions, such as "tar.gz". This is only available for files
// with binary content in Drive.
// This is automatically updated when the name field changes, however it is not
// cleared if the new name does not contain a valid extension.
@property (nonatomic, copy) NSString *fullFileExtension;

// The ID of the file's head revision. This is currently only available for
// files with binary content in Drive.
@property (nonatomic, copy) NSString *headRevisionId;

// A static, unauthenticated link to the file's icon.
@property (nonatomic, copy) NSString *iconLink;

// The ID of the file.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Additional metadata about image media, if available.
@property (nonatomic, retain) GTLDriveFileImageMediaMetadata *imageMediaMetadata;

// Whether the file was created or opened by the requesting app.
@property (nonatomic, retain) NSNumber *isAppAuthorized;  // boolValue

// This is always drive#file.
@property (nonatomic, copy) NSString *kind;

// The last user to modify the file.
@property (nonatomic, retain) GTLDriveUser *lastModifyingUser;

// The MD5 checksum for the content of the file. This is only applicable to
// files with binary content in Drive.
@property (nonatomic, copy) NSString *md5Checksum;

// The MIME type of the file.
// Drive will attempt to automatically detect an appropriate value from uploaded
// content if no value is provided. The value cannot be changed unless a new
// revision is uploaded.
// If a file is created with a Google Doc MIME type, the uploaded content will
// be imported if possible. The supported import formats are published in the
// About resource.
@property (nonatomic, copy) NSString *mimeType;

// The last time the file was modified by the user (RFC 3339 date-time).
@property (nonatomic, retain) GTLDateTime *modifiedByMeTime;

// The last time the file was modified by anyone (RFC 3339 date-time).
// Note that setting modifiedTime will also update modifiedByMeTime for the
// user.
@property (nonatomic, retain) GTLDateTime *modifiedTime;

// The name of the file. This is not necessarily unique within a folder.
@property (nonatomic, copy) NSString *name;

// The original filename of the uploaded content if available, or else the
// original value of the name field. This is only available for files with
// binary content in Drive.
@property (nonatomic, copy) NSString *originalFilename;

// Whether the user owns the file.
@property (nonatomic, retain) NSNumber *ownedByMe;  // boolValue

// The owners of the file. Currently, only certain legacy files may have more
// than one owner.
@property (nonatomic, retain) NSArray *owners;  // of GTLDriveUser

// The IDs of the parent folders which contain the file.
// If not specified as part of a create request, the file will be placed
// directly in the My Drive folder. Update requests must use the addParents and
// removeParents parameters to modify the values.
@property (nonatomic, retain) NSArray *parents;  // of NSString

// The full list of permissions for the file. This is only available if the
// requesting user can share the file.
@property (nonatomic, retain) NSArray *permissions;  // of GTLDrivePermission

// A collection of arbitrary key-value pairs which are visible to all apps.
// Entries with null values are cleared in update and copy requests.
@property (nonatomic, retain) GTLDriveFileProperties *properties;

// The number of storage quota bytes used by the file. This includes the head
// revision as well as previous revisions with keepForever enabled.
@property (nonatomic, retain) NSNumber *quotaBytesUsed;  // longLongValue

// Whether the file has been shared.
@property (nonatomic, retain) NSNumber *shared;  // boolValue

// The time at which the file was shared with the user, if applicable (RFC 3339
// date-time).
@property (nonatomic, retain) GTLDateTime *sharedWithMeTime;

// The user who shared the file with the requesting user, if applicable.
@property (nonatomic, retain) GTLDriveUser *sharingUser;

// The size of the file's content in bytes. This is only applicable to files
// with binary content in Drive.
@property (nonatomic, retain) NSNumber *size;  // longLongValue

// The list of spaces which contain the file. The currently supported values are
// 'drive', 'appDataFolder' and 'photos'.
@property (nonatomic, retain) NSArray *spaces;  // of NSString

// Whether the user has starred the file.
@property (nonatomic, retain) NSNumber *starred;  // boolValue

// A short-lived link to the file's thumbnail, if available. Typically lasts on
// the order of hours.
@property (nonatomic, copy) NSString *thumbnailLink;

// Whether the file has been trashed, either explicitly or from a trashed parent
// folder. Only the owner may trash a file, and other users cannot see files in
// the owner's trash.
@property (nonatomic, retain) NSNumber *trashed;  // boolValue

// A monotonically increasing version number for the file. This reflects every
// change made to the file on the server, even those not visible to the user.
@property (nonatomic, retain) NSNumber *version;  // longLongValue

// Additional metadata about video media. This may not be available immediately
// upon upload.
@property (nonatomic, retain) GTLDriveFileVideoMediaMetadata *videoMediaMetadata;

// Whether the file has been viewed by this user.
@property (nonatomic, retain) NSNumber *viewedByMe;  // boolValue

// The last time the file was viewed by the user (RFC 3339 date-time).
@property (nonatomic, retain) GTLDateTime *viewedByMeTime;

// Whether users with only reader or commenter permission can copy the file's
// content. This affects copy, download, and print operations.
@property (nonatomic, retain) NSNumber *viewersCanCopyContent;  // boolValue

// A link for downloading the content of the file in a browser. This is only
// available for files with binary content in Drive.
@property (nonatomic, copy) NSString *webContentLink;

// A link for opening the file in a relevant Google editor or viewer in a
// browser.
@property (nonatomic, copy) NSString *webViewLink;

// Whether users with only writer permission can modify the file's permissions.
@property (nonatomic, retain) NSNumber *writersCanShare;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileExportLinks
//

@interface GTLDriveFileExportLinks : GTLObject
=======
//   GTLDriveFileAppProperties
//

@interface GTLDriveFileAppProperties : GTLObject
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
=======
//   GTLDriveFileCapabilities
//

@interface GTLDriveFileCapabilities : GTLObject

// Whether the user can comment on the file.
@property (nonatomic, retain) NSNumber *canComment;  // boolValue

// Whether the user can copy the file.
@property (nonatomic, retain) NSNumber *canCopy;  // boolValue

// Whether the user can edit the file's content.
@property (nonatomic, retain) NSNumber *canEdit;  // boolValue

// Whether the current user has read access to the Revisions resource of the
// file.
@property (nonatomic, retain) NSNumber *canReadRevisions;  // boolValue

// Whether the user can modify the file's permissions and sharing settings.
@property (nonatomic, retain) NSNumber *canShare;  // boolValue

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveFileContentHints
//

@interface GTLDriveFileContentHints : GTLObject

// Text to be indexed for the file to improve fullText queries. This is limited
// to 128KB in length and may contain HTML elements.
@property (nonatomic, copy) NSString *indexableText;

// A thumbnail for the file. This will only be used if Drive cannot generate a
// standard thumbnail.
@property (nonatomic, retain) GTLDriveFileContentHintsThumbnail *thumbnail;

@end


// ----------------------------------------------------------------------------
//
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//   GTLDriveFileImageMediaMetadata
//

@interface GTLDriveFileImageMediaMetadata : GTLObject

// The aperture used to create the photo (f-number).
<<<<<<< HEAD
@property (retain) NSNumber *aperture;  // floatValue

// The make of the camera used to create the photo.
@property (copy) NSString *cameraMake;

// The model of the camera used to create the photo.
@property (copy) NSString *cameraModel;

// The color space of the photo.
@property (copy) NSString *colorSpace;

// The date and time the photo was taken (EXIF format timestamp).
@property (copy) NSString *date;

// The exposure bias of the photo (APEX value).
@property (retain) NSNumber *exposureBias;  // floatValue

// The exposure mode used to create the photo.
@property (copy) NSString *exposureMode;

// The length of the exposure, in seconds.
@property (retain) NSNumber *exposureTime;  // floatValue

// Whether a flash was used to create the photo.
@property (retain) NSNumber *flashUsed;  // boolValue

// The focal length used to create the photo, in millimeters.
@property (retain) NSNumber *focalLength;  // floatValue

// The height of the image in pixels.
@property (retain) NSNumber *height;  // intValue

// The ISO speed used to create the photo.
@property (retain) NSNumber *isoSpeed;  // intValue

// The lens used to create the photo.
@property (copy) NSString *lens;

// Geographic location information stored in the image.
@property (retain) GTLDriveFileImageMediaMetadataLocation *location;

// The smallest f-number of the lens at the focal length used to create the
// photo (APEX value).
@property (retain) NSNumber *maxApertureValue;  // floatValue

// The metering mode used to create the photo.
@property (copy) NSString *meteringMode;

// The rotation in clockwise degrees from the image's original orientation.
@property (retain) NSNumber *rotation;  // intValue

// The type of sensor used to create the photo.
@property (copy) NSString *sensor;

// The distance to the subject of the photo, in meters.
@property (retain) NSNumber *subjectDistance;  // intValue

// The white balance mode used to create the photo.
@property (copy) NSString *whiteBalance;

// The width of the image in pixels.
@property (retain) NSNumber *width;  // intValue
=======
@property (nonatomic, retain) NSNumber *aperture;  // floatValue

// The make of the camera used to create the photo.
@property (nonatomic, copy) NSString *cameraMake;

// The model of the camera used to create the photo.
@property (nonatomic, copy) NSString *cameraModel;

// The color space of the photo.
@property (nonatomic, copy) NSString *colorSpace;

// The exposure bias of the photo (APEX value).
@property (nonatomic, retain) NSNumber *exposureBias;  // floatValue

// The exposure mode used to create the photo.
@property (nonatomic, copy) NSString *exposureMode;

// The length of the exposure, in seconds.
@property (nonatomic, retain) NSNumber *exposureTime;  // floatValue

// Whether a flash was used to create the photo.
@property (nonatomic, retain) NSNumber *flashUsed;  // boolValue

// The focal length used to create the photo, in millimeters.
@property (nonatomic, retain) NSNumber *focalLength;  // floatValue

// The height of the image in pixels.
@property (nonatomic, retain) NSNumber *height;  // intValue

// The ISO speed used to create the photo.
@property (nonatomic, retain) NSNumber *isoSpeed;  // intValue

// The lens used to create the photo.
@property (nonatomic, copy) NSString *lens;

// Geographic location information stored in the image.
@property (nonatomic, retain) GTLDriveFileImageMediaMetadataLocation *location;

// The smallest f-number of the lens at the focal length used to create the
// photo (APEX value).
@property (nonatomic, retain) NSNumber *maxApertureValue;  // floatValue

// The metering mode used to create the photo.
@property (nonatomic, copy) NSString *meteringMode;

// The rotation in clockwise degrees from the image's original orientation.
@property (nonatomic, retain) NSNumber *rotation;  // intValue

// The type of sensor used to create the photo.
@property (nonatomic, copy) NSString *sensor;

// The distance to the subject of the photo, in meters.
@property (nonatomic, retain) NSNumber *subjectDistance;  // intValue

// The date and time the photo was taken (EXIF DateTime).
@property (nonatomic, copy) NSString *time;

// The white balance mode used to create the photo.
@property (nonatomic, copy) NSString *whiteBalance;

// The width of the image in pixels.
@property (nonatomic, retain) NSNumber *width;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileIndexableText
//

@interface GTLDriveFileIndexableText : GTLObject

// The text to be indexed for this file.
@property (copy) NSString *text;

=======
//   GTLDriveFileProperties
//

@interface GTLDriveFileProperties : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileLabels
//

@interface GTLDriveFileLabels : GTLObject

// Deprecated.
@property (retain) NSNumber *hidden;  // boolValue

// Whether viewers are prevented from downloading this file.
@property (retain) NSNumber *restricted;  // boolValue

// Whether this file is starred by the user.
@property (retain) NSNumber *starred;  // boolValue

// Whether this file has been trashed.
@property (retain) NSNumber *trashed;  // boolValue

// Whether this file has been viewed by this user.
@property (retain) NSNumber *viewed;  // boolValue

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveFileOpenWithLinks
//

@interface GTLDriveFileOpenWithLinks : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
=======
//   GTLDriveFileVideoMediaMetadata
//

@interface GTLDriveFileVideoMediaMetadata : GTLObject

// The duration of the video in milliseconds.
@property (nonatomic, retain) NSNumber *durationMillis;  // longLongValue

// The height of the video in pixels.
@property (nonatomic, retain) NSNumber *height;  // intValue

// The width of the video in pixels.
@property (nonatomic, retain) NSNumber *width;  // intValue

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
<<<<<<< HEAD
//   GTLDriveFileThumbnail
//

@interface GTLDriveFileThumbnail : GTLObject

// The URL-safe Base64 encoded bytes of the thumbnail image.
@property (copy) NSString *image;  // GTLBase64 can encode/decode (probably web-safe format)

// The MIME type of the thumbnail.
@property (copy) NSString *mimeType;
=======
//   GTLDriveFileContentHintsThumbnail
//

@interface GTLDriveFileContentHintsThumbnail : GTLObject

// The thumbnail data encoded with URL-safe Base64 (RFC 4648 section 5).
@property (nonatomic, copy) NSString *image;  // GTLBase64 can encode/decode (probably web-safe format)

// The MIME type of the thumbnail.
@property (nonatomic, copy) NSString *mimeType;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveFileImageMediaMetadataLocation
//

@interface GTLDriveFileImageMediaMetadataLocation : GTLObject

// The altitude stored in the image.
<<<<<<< HEAD
@property (retain) NSNumber *altitude;  // doubleValue

// The latitude stored in the image.
@property (retain) NSNumber *latitude;  // doubleValue

// The longitude stored in the image.
@property (retain) NSNumber *longitude;  // doubleValue
=======
@property (nonatomic, retain) NSNumber *altitude;  // doubleValue

// The latitude stored in the image.
@property (nonatomic, retain) NSNumber *latitude;  // doubleValue

// The longitude stored in the image.
@property (nonatomic, retain) NSNumber *longitude;  // doubleValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
