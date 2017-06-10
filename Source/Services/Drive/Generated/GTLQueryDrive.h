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
//  GTLQueryDrive.h
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
//   GTLQueryDrive (59 custom class methods, 44 custom properties)
=======
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching,
//   detecting changes, and updating sharing permissions.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLQueryDrive (34 custom class methods, 29 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLDriveChannel;
<<<<<<< HEAD
@class GTLDriveChildReference;
@class GTLDriveComment;
@class GTLDriveCommentReply;
@class GTLDriveFile;
@class GTLDriveParentReference;
@class GTLDrivePermission;
@class GTLDriveProperty;
=======
@class GTLDriveComment;
@class GTLDriveFile;
@class GTLDrivePermission;
@class GTLDriveReply;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLDriveRevision;

@interface GTLQueryDrive : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (copy) NSString *addParents;
@property (copy) NSString *appFilterExtensions;
@property (copy) NSString *appFilterMimeTypes;
@property (copy) NSString *appId;
@property (copy) NSString *baseRevision;
@property (copy) NSString *changeId;
@property (copy) NSString *childId;
@property (copy) NSString *commentId;
@property (assign) BOOL convert;
@property (copy) NSString *corpus;
@property (copy) NSString *email;
@property (copy) NSString *emailMessage;
@property (copy) NSString *fileId;
@property (copy) NSString *folderId;
@property (assign) BOOL includeDeleted;
@property (assign) BOOL includeSubscribed;
@property (copy) NSString *languageCode;
@property (assign) long long maxChangeIdCount;
@property (assign) NSInteger maxResults;
@property (assign) BOOL newRevision;
@property (assign) BOOL ocr;
@property (copy) NSString *ocrLanguage;
@property (copy) NSString *pageToken;
@property (copy) NSString *parentId;
@property (copy) NSString *permissionId;
@property (assign) BOOL pinned;
@property (copy) NSString *projection;
@property (copy) NSString *propertyKey;
@property (copy) NSString *q;
@property (copy) NSString *removeParents;
@property (copy) NSString *replyId;
@property (assign) NSInteger revision;
@property (copy) NSString *revisionId;
@property (assign) BOOL sendNotificationEmails;
@property (assign) BOOL setModifiedDate;
@property (assign) long long startChangeId;
@property (copy) NSString *timedTextLanguage;
@property (copy) NSString *timedTextTrackName;
@property (assign) BOOL transferOwnership;
@property (copy) NSString *updatedMin;
@property (assign) BOOL updateViewedDate;
@property (assign) BOOL useContentAsIndexableText;
@property (copy) NSString *visibility;

#pragma mark -
#pragma mark "about" methods
// These create a GTLQueryDrive object.

// Method: drive.about.get
// Gets the information about the current user along with Drive API settings
//  Optional:
//   includeSubscribed: When calculating the number of remaining change IDs,
//     whether to include public files the user has opened and shared files.
//     When set to false, this counts only change IDs for owned files and any
//     shared or public files that the user has explicitly added to a folder
//     they own. (Default true)
//   maxChangeIdCount: Maximum number of remaining change IDs to count (Default
//     1)
//   startChangeId: Change ID to start counting from when calculating number of
//     remaining change IDs
=======
@property (nonatomic, assign) BOOL acknowledgeAbuse;
@property (nonatomic, copy) NSString *addParents;
@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, copy) NSString *corpus;
@property (nonatomic, assign) NSInteger count;
@property (nonatomic, copy) NSString *emailMessage;
@property (nonatomic, copy) NSString *fileId;
@property (nonatomic, assign) BOOL ignoreDefaultVisibility;
@property (nonatomic, assign) BOOL includeDeleted;
@property (nonatomic, assign) BOOL includeRemoved;
@property (nonatomic, assign) BOOL keepRevisionForever;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *ocrLanguage;
@property (nonatomic, copy) NSString *orderBy;
@property (nonatomic, assign) NSInteger pageSize;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, copy) NSString *permissionId;
@property (nonatomic, copy) NSString *q;
@property (nonatomic, copy) NSString *removeParents;
@property (nonatomic, copy) NSString *replyId;
@property (nonatomic, assign) BOOL restrictToMyDrive;
@property (nonatomic, copy) NSString *revisionId;
@property (nonatomic, assign) BOOL sendNotificationEmail;
@property (nonatomic, copy) NSString *space;
@property (nonatomic, copy) NSString *spaces;
@property (nonatomic, copy) NSString *startModifiedTime;
@property (nonatomic, assign) BOOL transferOwnership;
@property (nonatomic, assign) BOOL useContentAsIndexableText;

#pragma mark - "about" methods
// These create a GTLQueryDrive object.

// Method: drive.about.get
// Gets information about the user, the user's Drive, and system capabilities.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveAbout.
+ (id)queryForAboutGet;

#pragma mark -
#pragma mark "apps" methods
// These create a GTLQueryDrive object.

// Method: drive.apps.get
// Gets a specific app.
//  Required:
//   appId: The ID of the app.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveApp.
+ (id)queryForAppsGetWithAppId:(NSString *)appId;

// Method: drive.apps.list
// Lists a user's installed apps.
//  Optional:
//   appFilterExtensions: A comma-separated list of file extensions for open
//     with filtering. All apps within the given app query scope which can open
//     any of the given file extensions will be included in the response. If
//     appFilterMimeTypes are provided as well, the result is a union of the two
//     resulting app lists.
//   appFilterMimeTypes: A comma-separated list of MIME types for open with
//     filtering. All apps within the given app query scope which can open any
//     of the given MIME types will be included in the response. If
//     appFilterExtensions are provided as well, the result is a union of the
//     two resulting app lists.
//   languageCode: A language or locale code, as defined by BCP 47, with some
//     extensions from Unicode's LDML format
//     (http://www.unicode.org/reports/tr35/).
//  Authorization scope(s):
//   kGTLAuthScopeDriveAppsReadonly
// Fetches a GTLDriveAppList.
+ (id)queryForAppsList;

#pragma mark -
#pragma mark "changes" methods
// These create a GTLQueryDrive object.

// Method: drive.changes.get
// Gets a specific change.
//  Required:
//   changeId: The ID of the change.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChange.
+ (id)queryForChangesGetWithChangeId:(NSString *)changeId;

// Method: drive.changes.list
// Lists the changes for a user.
//  Optional:
//   includeDeleted: Whether to include deleted items. (Default true)
//   includeSubscribed: Whether to include public files the user has opened and
//     shared files. When set to false, the list only includes owned files plus
//     any shared or public files the user has explicitly added to a folder they
//     own. (Default true)
//   maxResults: Maximum number of changes to return. (Default 100)
//   pageToken: Page token for changes.
//   startChangeId: Change ID to start listing changes from.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChangeList.
+ (id)queryForChangesList;

// Method: drive.changes.watch
// Subscribe to changes for a user.
//  Optional:
//   includeDeleted: Whether to include deleted items. (Default true)
//   includeSubscribed: Whether to include public files the user has opened and
//     shared files. When set to false, the list only includes owned files plus
//     any shared or public files the user has explicitly added to a folder they
//     own. (Default true)
//   maxResults: Maximum number of changes to return. (Default 100)
//   pageToken: Page token for changes.
//   startChangeId: Change ID to start listing changes from.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChannel.
+ (id)queryForChangesWatchWithObject:(GTLDriveChannel *)object;

#pragma mark -
#pragma mark "channels" methods
=======
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveAbout.
+ (instancetype)queryForAboutGet;

#pragma mark - "changes" methods
// These create a GTLQueryDrive object.

// Method: drive.changes.getStartPageToken
// Gets the starting pageToken for listing future changes.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveStartPageToken.
+ (instancetype)queryForChangesGetStartPageToken;

// Method: drive.changes.list
// Lists changes for a user.
//  Required:
//   pageToken: The token for continuing a previous list request on the next
//     page. This should be set to the value of 'nextPageToken' from the
//     previous response or to the response from the getStartPageToken method.
//  Optional:
//   includeRemoved: Whether to include changes indicating that items have left
//     the view of the changes list, for example by deletion or lost access.
//     (Default true)
//   pageSize: The maximum number of changes to return per page. (1..1000,
//     default 100)
//   restrictToMyDrive: Whether to restrict the results to changes inside the My
//     Drive hierarchy. This omits changes to files such as those in the
//     Application Data folder or shared files which have not been added to My
//     Drive. (Default false)
//   spaces: A comma-separated list of spaces to query within the user corpus.
//     Supported values are 'drive', 'appDataFolder' and 'photos'. (Default
//     drive)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChangeList.
+ (instancetype)queryForChangesListWithPageToken:(NSString *)pageToken;

// Method: drive.changes.watch
// Subscribes to changes for a user.
//  Required:
//   pageToken: The token for continuing a previous list request on the next
//     page. This should be set to the value of 'nextPageToken' from the
//     previous response or to the response from the getStartPageToken method.
//  Optional:
//   includeRemoved: Whether to include changes indicating that items have left
//     the view of the changes list, for example by deletion or lost access.
//     (Default true)
//   pageSize: The maximum number of changes to return per page. (1..1000,
//     default 100)
//   restrictToMyDrive: Whether to restrict the results to changes inside the My
//     Drive hierarchy. This omits changes to files such as those in the
//     Application Data folder or shared files which have not been added to My
//     Drive. (Default false)
//   spaces: A comma-separated list of spaces to query within the user corpus.
//     Supported values are 'drive', 'appDataFolder' and 'photos'. (Default
//     drive)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChannel.
+ (instancetype)queryForChangesWatchWithObject:(GTLDriveChannel *)object
                                     pageToken:(NSString *)pageToken;

#pragma mark - "channels" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryDrive object.

// Method: drive.channels.stop
// Stop watching resources through this channel
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
<<<<<<< HEAD
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
+ (id)queryForChannelsStopWithObject:(GTLDriveChannel *)object;

#pragma mark -
#pragma mark "children" methods
// These create a GTLQueryDrive object.

// Method: drive.children.delete
// Removes a child from a folder.
//  Required:
//   folderId: The ID of the folder.
//   childId: The ID of the child.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
+ (id)queryForChildrenDeleteWithFolderId:(NSString *)folderId
                                 childId:(NSString *)childId;

// Method: drive.children.get
// Gets a specific child reference.
//  Required:
//   folderId: The ID of the folder.
//   childId: The ID of the child.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChildReference.
+ (id)queryForChildrenGetWithFolderId:(NSString *)folderId
                              childId:(NSString *)childId;

// Method: drive.children.insert
// Inserts a file into a folder.
//  Required:
//   folderId: The ID of the folder.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveChildReference.
+ (id)queryForChildrenInsertWithObject:(GTLDriveChildReference *)object
                              folderId:(NSString *)folderId;

// Method: drive.children.list
// Lists a folder's children.
//  Required:
//   folderId: The ID of the folder.
//  Optional:
//   maxResults: Maximum number of children to return. (Default 100)
//   pageToken: Page token for children.
//   q: Query string for searching children.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChildList.
+ (id)queryForChildrenListWithFolderId:(NSString *)folderId;

#pragma mark -
#pragma mark "comments" methods
// These create a GTLQueryDrive object.
=======
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
+ (instancetype)queryForChannelsStopWithObject:(GTLDriveChannel *)object;

#pragma mark - "comments" methods
// These create a GTLQueryDrive object.

// Method: drive.comments.create
// Creates a new comment on a file.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveComment.
+ (instancetype)queryForCommentsCreateWithObject:(GTLDriveComment *)object
                                          fileId:(NSString *)fileId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.comments.delete
// Deletes a comment.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
//   kGTLAuthScopeDriveReadonly
+ (id)queryForCommentsDeleteWithFileId:(NSString *)fileId
                             commentId:(NSString *)commentId;
=======
+ (instancetype)queryForCommentsDeleteWithFileId:(NSString *)fileId
                                       commentId:(NSString *)commentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.comments.get
// Gets a comment by ID.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Optional:
<<<<<<< HEAD
//   includeDeleted: If set, this will succeed when retrieving a deleted
//     comment, and will include any deleted replies. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveComment.
+ (id)queryForCommentsGetWithFileId:(NSString *)fileId
                          commentId:(NSString *)commentId;

// Method: drive.comments.insert
// Creates a new comment on the given file.
//  Required:
//   fileId: The ID of the file.
=======
//   includeDeleted: Whether to return deleted comments. Deleted comments will
//     not include their original content. (Default false)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveComment.
<<<<<<< HEAD
+ (id)queryForCommentsInsertWithObject:(GTLDriveComment *)object
                                fileId:(NSString *)fileId;
=======
+ (instancetype)queryForCommentsGetWithFileId:(NSString *)fileId
                                    commentId:(NSString *)commentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.comments.list
// Lists a file's comments.
//  Required:
//   fileId: The ID of the file.
//  Optional:
<<<<<<< HEAD
//   includeDeleted: If set, all comments and replies, including deleted
//     comments and replies (with content stripped) will be returned. (Default
//     false)
//   maxResults: The maximum number of discussions to include in the response,
//     used for paging. (0..100, default 20)
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     "nextPageToken" from the previous response.
//   updatedMin: Only discussions that were updated after this timestamp will be
//     returned. Formatted as an RFC 3339 timestamp.
=======
//   includeDeleted: Whether to include deleted comments. Deleted comments will
//     not include their original content. (Default false)
//   pageSize: The maximum number of comments to return per page. (1..100,
//     default 20)
//   pageToken: The token for continuing a previous list request on the next
//     page. This should be set to the value of 'nextPageToken' from the
//     previous response.
//   startModifiedTime: The minimum value of 'modifiedTime' for the result
//     comments (RFC 3339 date-time).
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveCommentList.
<<<<<<< HEAD
+ (id)queryForCommentsListWithFileId:(NSString *)fileId;

// Method: drive.comments.patch
// Updates an existing comment. This method supports patch semantics.
=======
+ (instancetype)queryForCommentsListWithFileId:(NSString *)fileId;

// Method: drive.comments.update
// Updates a comment with patch semantics.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveComment.
<<<<<<< HEAD
+ (id)queryForCommentsPatchWithObject:(GTLDriveComment *)object
                               fileId:(NSString *)fileId
                            commentId:(NSString *)commentId;

// Method: drive.comments.update
// Updates an existing comment.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveComment.
+ (id)queryForCommentsUpdateWithObject:(GTLDriveComment *)object
                                fileId:(NSString *)fileId
                             commentId:(NSString *)commentId;

#pragma mark -
#pragma mark "files" methods
// These create a GTLQueryDrive object.

// Method: drive.files.copy
// Creates a copy of the specified file.
//  Required:
//   fileId: The ID of the file to copy.
//  Optional:
//   convert: Whether to convert this file to the corresponding Google Docs
//     format. (Default false)
//   ocr: Whether to attempt OCR on .jpg, .png, .gif, or .pdf uploads. (Default
//     false)
//   ocrLanguage: If ocr is true, hints at the language to use. Valid values are
//     ISO 639-1 codes.
//   pinned: Whether to pin the head revision of the new copy. (Default false)
//   timedTextLanguage: The language of the timed text.
//   timedTextTrackName: The timed text track name.
//   visibility: The visibility of the new file. This parameter is only relevant
//     when the source is not a native Google Doc and convert=false. (Default
//     kGTLDriveVisibilityDefault)
//      kGTLDriveVisibilityDefault: The visibility of the new file is determined
//        by the user's default visibility/sharing policies.
//      kGTLDriveVisibilityPrivate: The new file will be visible to only the
//        owner.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (id)queryForFilesCopyWithObject:(GTLDriveFile *)object
                           fileId:(NSString *)fileId;

// Method: drive.files.delete
// Permanently deletes a file by ID. Skips the trash.
//  Required:
//   fileId: The ID of the file to delete.
=======
+ (instancetype)queryForCommentsUpdateWithObject:(GTLDriveComment *)object
                                          fileId:(NSString *)fileId
                                       commentId:(NSString *)commentId;

#pragma mark - "files" methods
// These create a GTLQueryDrive object.

// Method: drive.files.copy
// Creates a copy of a file and applies any requested updates with patch
// semantics.
//  Required:
//   fileId: The ID of the file.
//  Optional:
//   ignoreDefaultVisibility: Whether to ignore the domain's default visibility
//     settings for the created file. Domain administrators can choose to make
//     all uploaded files visible to the domain by default; this parameter
//     bypasses that behavior for the request. Permissions are still inherited
//     from parent folders. (Default false)
//   keepRevisionForever: Whether to set the 'keepForever' field in the new head
//     revision. This is only applicable to files with binary content in Drive.
//     (Default false)
//   ocrLanguage: A language hint for OCR processing during image import (ISO
//     639-1 code).
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDrivePhotosReadonly
// Fetches a GTLDriveFile.
+ (instancetype)queryForFilesCopyWithObject:(GTLDriveFile *)object
                                     fileId:(NSString *)fileId;

// Method: drive.files.create
// Creates a new file.
//  Optional:
//   ignoreDefaultVisibility: Whether to ignore the domain's default visibility
//     settings for the created file. Domain administrators can choose to make
//     all uploaded files visible to the domain by default; this parameter
//     bypasses that behavior for the request. Permissions are still inherited
//     from parent folders. (Default false)
//   keepRevisionForever: Whether to set the 'keepForever' field in the new head
//     revision. This is only applicable to files with binary content in Drive.
//     (Default false)
//   ocrLanguage: A language hint for OCR processing during image import (ISO
//     639-1 code).
//   useContentAsIndexableText: Whether to use the uploaded content as indexable
//     text. (Default false)
//  Upload Parameters:
//   Maximum size: 5120GB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (instancetype)queryForFilesCreateWithObject:(GTLDriveFile *)object
                             uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: drive.files.delete
// Permanently deletes a file owned by the user without moving it to the trash.
// If the target is a folder, all descendants owned by the user are also
// deleted.
//  Required:
//   fileId: The ID of the file.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
+ (id)queryForFilesDeleteWithFileId:(NSString *)fileId;
=======
+ (instancetype)queryForFilesDeleteWithFileId:(NSString *)fileId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.files.emptyTrash
// Permanently deletes all of the user's trashed files.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
<<<<<<< HEAD
+ (id)queryForFilesEmptyTrash;

// Method: drive.files.get
// Gets a file's metadata by ID.
//  Required:
//   fileId: The ID for the file in question.
//  Optional:
//   projection: This parameter is deprecated and has no function.
//      kGTLDriveProjectionBasic: Deprecated
//      kGTLDriveProjectionFull: Deprecated
//   updateViewedDate: Whether to update the view date after successfully
//     retrieving the file. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveFile.
+ (id)queryForFilesGetWithFileId:(NSString *)fileId;

// Method: drive.files.insert
// Insert a new file.
//  Optional:
//   convert: Whether to convert this file to the corresponding Google Docs
//     format. (Default false)
//   ocr: Whether to attempt OCR on .jpg, .png, .gif, or .pdf uploads. (Default
//     false)
//   ocrLanguage: If ocr is true, hints at the language to use. Valid values are
//     ISO 639-1 codes.
//   pinned: Whether to pin the head revision of the uploaded file. (Default
//     false)
//   timedTextLanguage: The language of the timed text.
//   timedTextTrackName: The timed text track name.
//   useContentAsIndexableText: Whether to use the content as indexable text.
//     (Default false)
//   visibility: The visibility of the new file. This parameter is only relevant
//     when convert=false. (Default kGTLDriveVisibilityDefault)
//      kGTLDriveVisibilityDefault: The visibility of the new file is determined
//        by the user's default visibility/sharing policies.
//      kGTLDriveVisibilityPrivate: The new file will be visible to only the
//        owner.
//  Upload Parameters:
//   Maximum size: 5120GB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (id)queryForFilesInsertWithObject:(GTLDriveFile *)object
                   uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: drive.files.list
// Lists the user's files.
//  Optional:
//   corpus: The body of items (files/documents) to which the query applies.
//      kGTLDriveCorpusDefault: The items that the user has accessed.
//      kGTLDriveCorpusDomain: Items shared to the user's domain.
//   maxResults: Maximum number of files to return. (Default 100)
//   pageToken: Page token for files.
//   projection: This parameter is deprecated and has no function.
//      kGTLDriveProjectionBasic: Deprecated
//      kGTLDriveProjectionFull: Deprecated
//   q: Query string for searching files.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveFileList.
+ (id)queryForFilesList;

// Method: drive.files.patch
// Updates file metadata and/or content. This method supports patch semantics.
//  Required:
//   fileId: The ID of the file to update.
//  Optional:
//   addParents: Comma-separated list of parent IDs to add.
//   convert: Whether to convert this file to the corresponding Google Docs
//     format. (Default false)
//   newRevision: Whether a blob upload should create a new revision. If false,
//     the blob data in the current head revision is replaced. If not set or
//     true, a new blob is created as head revision, and previous revisions are
//     preserved (causing increased use of the user's data storage quota).
//     (Default true)
//   ocr: Whether to attempt OCR on .jpg, .png, .gif, or .pdf uploads. (Default
//     false)
//   ocrLanguage: If ocr is true, hints at the language to use. Valid values are
//     ISO 639-1 codes.
//   pinned: Whether to pin the new revision. (Default false)
//   removeParents: Comma-separated list of parent IDs to remove.
//   setModifiedDate: Whether to set the modified date with the supplied
//     modified date. (Default false)
//   timedTextLanguage: The language of the timed text.
//   timedTextTrackName: The timed text track name.
//   updateViewedDate: Whether to update the view date after successfully
//     updating the file. (Default true)
//   useContentAsIndexableText: Whether to use the content as indexable text.
//     (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveScripts
// Fetches a GTLDriveFile.
+ (id)queryForFilesPatchWithObject:(GTLDriveFile *)object
                            fileId:(NSString *)fileId;

// Method: drive.files.touch
// Set the file's updated time to the current server time.
//  Required:
//   fileId: The ID of the file to update.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (id)queryForFilesTouchWithFileId:(NSString *)fileId;

// Method: drive.files.trash
// Moves a file to the trash.
//  Required:
//   fileId: The ID of the file to trash.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (id)queryForFilesTrashWithFileId:(NSString *)fileId;

// Method: drive.files.untrash
// Restores a file from the trash.
//  Required:
//   fileId: The ID of the file to untrash.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveFile.
+ (id)queryForFilesUntrashWithFileId:(NSString *)fileId;

// Method: drive.files.update
// Updates file metadata and/or content.
//  Required:
//   fileId: The ID of the file to update.
//  Optional:
//   addParents: Comma-separated list of parent IDs to add.
//   convert: Whether to convert this file to the corresponding Google Docs
//     format. (Default false)
//   newRevision: Whether a blob upload should create a new revision. If false,
//     the blob data in the current head revision is replaced. If not set or
//     true, a new blob is created as head revision, and previous revisions are
//     preserved (causing increased use of the user's data storage quota).
//     (Default true)
//   ocr: Whether to attempt OCR on .jpg, .png, .gif, or .pdf uploads. (Default
//     false)
//   ocrLanguage: If ocr is true, hints at the language to use. Valid values are
//     ISO 639-1 codes.
//   pinned: Whether to pin the new revision. (Default false)
//   removeParents: Comma-separated list of parent IDs to remove.
//   setModifiedDate: Whether to set the modified date with the supplied
//     modified date. (Default false)
//   timedTextLanguage: The language of the timed text.
//   timedTextTrackName: The timed text track name.
//   updateViewedDate: Whether to update the view date after successfully
//     updating the file. (Default true)
//   useContentAsIndexableText: Whether to use the content as indexable text.
//     (Default false)
=======
+ (instancetype)queryForFilesEmptyTrash;

// Method: drive.files.export
// Exports a Google Doc to the requested MIME type and returns the exported
// content.
//  Required:
//   fileId: The ID of the file.
//   mimeType: The MIME type of the format requested for this export.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
+ (instancetype)queryForFilesExportWithFileId:(NSString *)fileId
                                     mimeType:(NSString *)mimeType;

// Method: drive.files.generateIds
// Generates a set of file IDs which can be provided in create requests.
//  Optional:
//   count: The number of IDs to return. (1..1000, default 10)
//   space: The space in which the IDs can be used to create new files.
//     Supported values are 'drive' and 'appDataFolder'. (Default drive)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveGeneratedIds.
+ (instancetype)queryForFilesGenerateIds;

// Method: drive.files.get
// Gets a file's metadata or content by ID.
//  Required:
//   fileId: The ID of the file.
//  Optional:
//   acknowledgeAbuse: Whether the user is acknowledging the risk of downloading
//     known malware or other abusive files. This is only applicable when
//     alt=media. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveFile.
+ (instancetype)queryForFilesGetWithFileId:(NSString *)fileId;

// Method: drive.files.list
// Lists or searches files.
//  Optional:
//   corpus: The source of files to list. (Default kGTLDriveCorpusUser)
//      kGTLDriveCorpusDomain: Files shared to the user's domain.
//      kGTLDriveCorpusUser: Files owned by or shared to the user.
//   orderBy: A comma-separated list of sort keys. Valid keys are 'createdTime',
//     'folder', 'modifiedByMeTime', 'modifiedTime', 'name', 'quotaBytesUsed',
//     'recency', 'sharedWithMeTime', 'starred', and 'viewedByMeTime'. Each key
//     sorts ascending by default, but may be reversed with the 'desc' modifier.
//     Example usage: ?orderBy=folder,modifiedTime desc,name. Please note that
//     there is a current limitation for users with approximately one million
//     files in which the requested sort order is ignored.
//   pageSize: The maximum number of files to return per page. (1..1000, default
//     100)
//   pageToken: The token for continuing a previous list request on the next
//     page. This should be set to the value of 'nextPageToken' from the
//     previous response.
//   q: A query for filtering the file results. See the "Search for Files" guide
//     for supported syntax.
//   spaces: A comma-separated list of spaces to query within the corpus.
//     Supported values are 'drive', 'appDataFolder' and 'photos'. (Default
//     drive)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveFileList.
+ (instancetype)queryForFilesList;

// Method: drive.files.update
// Updates a file's metadata and/or content with patch semantics.
//  Required:
//   fileId: The ID of the file.
//  Optional:
//   addParents: A comma-separated list of parent IDs to add.
//   keepRevisionForever: Whether to set the 'keepForever' field in the new head
//     revision. This is only applicable to files with binary content in Drive.
//     (Default false)
//   ocrLanguage: A language hint for OCR processing during image import (ISO
//     639-1 code).
//   removeParents: A comma-separated list of parent IDs to remove.
//   useContentAsIndexableText: Whether to use the uploaded content as indexable
//     text. (Default false)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Upload Parameters:
//   Maximum size: 5120GB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
<<<<<<< HEAD
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveScripts
// Fetches a GTLDriveFile.
+ (id)queryForFilesUpdateWithObject:(GTLDriveFile *)object
                             fileId:(NSString *)fileId
                   uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: drive.files.watch
// Subscribe to changes on a file
//  Required:
//   fileId: The ID for the file in question.
//  Optional:
//   projection: This parameter is deprecated and has no function.
//      kGTLDriveProjectionBasic: Deprecated
//      kGTLDriveProjectionFull: Deprecated
//   updateViewedDate: Whether to update the view date after successfully
//     retrieving the file. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChannel.
+ (id)queryForFilesWatchWithObject:(GTLDriveChannel *)object
                            fileId:(NSString *)fileId;

#pragma mark -
#pragma mark "parents" methods
// These create a GTLQueryDrive object.

// Method: drive.parents.delete
// Removes a parent from a file.
//  Required:
//   fileId: The ID of the file.
//   parentId: The ID of the parent.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
+ (id)queryForParentsDeleteWithFileId:(NSString *)fileId
                             parentId:(NSString *)parentId;

// Method: drive.parents.get
// Gets a specific parent reference.
//  Required:
//   fileId: The ID of the file.
//   parentId: The ID of the parent.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveParentReference.
+ (id)queryForParentsGetWithFileId:(NSString *)fileId
                          parentId:(NSString *)parentId;

// Method: drive.parents.insert
// Adds a parent folder for a file.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveParentReference.
+ (id)queryForParentsInsertWithObject:(GTLDriveParentReference *)object
                               fileId:(NSString *)fileId;

// Method: drive.parents.list
// Lists a file's parents.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveParentList.
+ (id)queryForParentsListWithFileId:(NSString *)fileId;

#pragma mark -
#pragma mark "permissions" methods
// These create a GTLQueryDrive object.

// Method: drive.permissions.delete
// Deletes a permission from a file.
//  Required:
//   fileId: The ID for the file.
//   permissionId: The ID for the permission.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
+ (id)queryForPermissionsDeleteWithFileId:(NSString *)fileId
                             permissionId:(NSString *)permissionId;
=======
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveScripts
// Fetches a GTLDriveFile.
+ (instancetype)queryForFilesUpdateWithObject:(GTLDriveFile *)object
                                       fileId:(NSString *)fileId
                             uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

// Method: drive.files.watch
// Subscribes to changes to a file
//  Required:
//   fileId: The ID of the file.
//  Optional:
//   acknowledgeAbuse: Whether the user is acknowledging the risk of downloading
//     known malware or other abusive files. This is only applicable when
//     alt=media. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveChannel.
+ (instancetype)queryForFilesWatchWithObject:(GTLDriveChannel *)object
                                      fileId:(NSString *)fileId;

#pragma mark - "permissions" methods
// These create a GTLQueryDrive object.

// Method: drive.permissions.create
// Creates a permission for a file.
//  Required:
//   fileId: The ID of the file.
//  Optional:
//   emailMessage: A custom message to include in the notification email.
//   sendNotificationEmail: Whether to send a notification email when sharing to
//     users or groups. This defaults to true for users and groups, and is not
//     allowed for other requests. It must not be disabled for ownership
//     transfers.
//   transferOwnership: Whether to transfer ownership to the specified user and
//     downgrade the current owner to a writer. This parameter is required as an
//     acknowledgement of the side effect. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDrivePermission.
+ (instancetype)queryForPermissionsCreateWithObject:(GTLDrivePermission *)object
                                             fileId:(NSString *)fileId;

// Method: drive.permissions.delete
// Deletes a permission.
//  Required:
//   fileId: The ID of the file.
//   permissionId: The ID of the permission.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
+ (instancetype)queryForPermissionsDeleteWithFileId:(NSString *)fileId
                                       permissionId:(NSString *)permissionId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.permissions.get
// Gets a permission by ID.
//  Required:
<<<<<<< HEAD
//   fileId: The ID for the file.
//   permissionId: The ID for the permission.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePermission.
+ (id)queryForPermissionsGetWithFileId:(NSString *)fileId
                          permissionId:(NSString *)permissionId;

// Method: drive.permissions.getIdForEmail
// Returns the permission ID for an email address.
//  Required:
//   email: The email address for which to return a permission ID
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveAppsReadonly
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePermissionId.
+ (id)queryForPermissionsGetIdForEmailWithEmail:(NSString *)email;

// Method: drive.permissions.insert
// Inserts a permission for a file.
//  Required:
//   fileId: The ID for the file.
//  Optional:
//   emailMessage: A custom message to include in notification emails.
//   sendNotificationEmails: Whether to send notification emails when sharing to
//     users or groups. This parameter is ignored and an email is sent if the
//     role is owner. (Default true)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDrivePermission.
+ (id)queryForPermissionsInsertWithObject:(GTLDrivePermission *)object
                                   fileId:(NSString *)fileId;
=======
//   fileId: The ID of the file.
//   permissionId: The ID of the permission.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePermission.
+ (instancetype)queryForPermissionsGetWithFileId:(NSString *)fileId
                                    permissionId:(NSString *)permissionId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.permissions.list
// Lists a file's permissions.
//  Required:
<<<<<<< HEAD
//   fileId: The ID for the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePermissionList.
+ (id)queryForPermissionsListWithFileId:(NSString *)fileId;

// Method: drive.permissions.patch
// Updates a permission. This method supports patch semantics.
//  Required:
//   fileId: The ID for the file.
//   permissionId: The ID for the permission.
//  Optional:
//   transferOwnership: Whether changing a role to 'owner' should also downgrade
//     the current owners to writers. (Default false)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDrivePermission.
+ (id)queryForPermissionsPatchWithObject:(GTLDrivePermission *)object
                                  fileId:(NSString *)fileId
                            permissionId:(NSString *)permissionId;

// Method: drive.permissions.update
// Updates a permission.
//  Required:
//   fileId: The ID for the file.
//   permissionId: The ID for the permission.
//  Optional:
//   transferOwnership: Whether changing a role to 'owner' should also downgrade
//     the current owners to writers. (Default false)
=======
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePermissionList.
+ (instancetype)queryForPermissionsListWithFileId:(NSString *)fileId;

// Method: drive.permissions.update
// Updates a permission with patch semantics.
//  Required:
//   fileId: The ID of the file.
//   permissionId: The ID of the permission.
//  Optional:
//   transferOwnership: Whether to transfer ownership to the specified user and
//     downgrade the current owner to a writer. This parameter is required as an
//     acknowledgement of the side effect. (Default false)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDrivePermission.
<<<<<<< HEAD
+ (id)queryForPermissionsUpdateWithObject:(GTLDrivePermission *)object
                                   fileId:(NSString *)fileId
                             permissionId:(NSString *)permissionId;

#pragma mark -
#pragma mark "properties" methods
// These create a GTLQueryDrive object.

// Method: drive.properties.delete
// Deletes a property.
//  Required:
//   fileId: The ID of the file.
//   propertyKey: The key of the property.
//  Optional:
//   visibility: The visibility of the property. (Default private)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
+ (id)queryForPropertiesDeleteWithFileId:(NSString *)fileId
                             propertyKey:(NSString *)propertyKey;

// Method: drive.properties.get
// Gets a property by its key.
//  Required:
//   fileId: The ID of the file.
//   propertyKey: The key of the property.
//  Optional:
//   visibility: The visibility of the property. (Default private)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveProperty.
+ (id)queryForPropertiesGetWithFileId:(NSString *)fileId
                          propertyKey:(NSString *)propertyKey;

// Method: drive.properties.insert
// Adds a property to a file.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveProperty.
+ (id)queryForPropertiesInsertWithObject:(GTLDriveProperty *)object
                                  fileId:(NSString *)fileId;

// Method: drive.properties.list
// Lists a file's properties.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDrivePropertyList.
+ (id)queryForPropertiesListWithFileId:(NSString *)fileId;

// Method: drive.properties.patch
// Updates a property. This method supports patch semantics.
//  Required:
//   fileId: The ID of the file.
//   propertyKey: The key of the property.
//  Optional:
//   visibility: The visibility of the property. (Default private)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveProperty.
+ (id)queryForPropertiesPatchWithObject:(GTLDriveProperty *)object
                                 fileId:(NSString *)fileId
                            propertyKey:(NSString *)propertyKey;

// Method: drive.properties.update
// Updates a property.
//  Required:
//   fileId: The ID of the file.
//   propertyKey: The key of the property.
//  Optional:
//   visibility: The visibility of the property. (Default private)
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveProperty.
+ (id)queryForPropertiesUpdateWithObject:(GTLDriveProperty *)object
                                  fileId:(NSString *)fileId
                             propertyKey:(NSString *)propertyKey;

#pragma mark -
#pragma mark "realtime" methods
// These create a GTLQueryDrive object.

// Method: drive.realtime.get
// Exports the contents of the Realtime API data model associated with this file
// as JSON.
//  Required:
//   fileId: The ID of the file that the Realtime API data model is associated
//     with.
//  Optional:
//   revision: The revision of the Realtime API data model to export. Revisions
//     start at 1 (the initial empty data model) and are incremented with each
//     change. If this parameter is excluded, the most recent data model will be
//     returned.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
+ (id)queryForRealtimeGetWithFileId:(NSString *)fileId;

// Method: drive.realtime.update
// Overwrites the Realtime API data model associated with this file with the
// provided JSON data model.
//  Required:
//   fileId: The ID of the file that the Realtime API data model is associated
//     with.
//  Optional:
//   baseRevision: The revision of the model to diff the uploaded model against.
//     If set, the uploaded model is diffed against the provided revision and
//     those differences are merged with any changes made to the model after the
//     provided revision. If not set, the uploaded model replaces the current
//     model on the server.
//  Upload Parameters:
//   Maximum size: 10MB
//   Accepted MIME type(s): */*
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
+ (id)queryForRealtimeUpdateWithFileId:(NSString *)fileId
                      uploadParameters:(GTLUploadParameters *)uploadParametersOrNil;

#pragma mark -
#pragma mark "replies" methods
// These create a GTLQueryDrive object.
=======
+ (instancetype)queryForPermissionsUpdateWithObject:(GTLDrivePermission *)object
                                             fileId:(NSString *)fileId
                                       permissionId:(NSString *)permissionId;

#pragma mark - "replies" methods
// These create a GTLQueryDrive object.

// Method: drive.replies.create
// Creates a new reply to a comment.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveReply.
+ (instancetype)queryForRepliesCreateWithObject:(GTLDriveReply *)object
                                         fileId:(NSString *)fileId
                                      commentId:(NSString *)commentId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.replies.delete
// Deletes a reply.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//   replyId: The ID of the reply.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
+ (id)queryForRepliesDeleteWithFileId:(NSString *)fileId
                            commentId:(NSString *)commentId
                              replyId:(NSString *)replyId;

// Method: drive.replies.get
// Gets a reply.
=======
+ (instancetype)queryForRepliesDeleteWithFileId:(NSString *)fileId
                                      commentId:(NSString *)commentId
                                        replyId:(NSString *)replyId;

// Method: drive.replies.get
// Gets a reply by ID.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//   replyId: The ID of the reply.
//  Optional:
<<<<<<< HEAD
//   includeDeleted: If set, this will succeed when retrieving a deleted reply.
//     (Default false)
=======
//   includeDeleted: Whether to return deleted replies. Deleted replies will not
//     include their original content. (Default false)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
<<<<<<< HEAD
// Fetches a GTLDriveCommentReply.
+ (id)queryForRepliesGetWithFileId:(NSString *)fileId
                         commentId:(NSString *)commentId
                           replyId:(NSString *)replyId;

// Method: drive.replies.insert
// Creates a new reply to the given comment.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveCommentReply.
+ (id)queryForRepliesInsertWithObject:(GTLDriveCommentReply *)object
                               fileId:(NSString *)fileId
                            commentId:(NSString *)commentId;

// Method: drive.replies.list
// Lists all of the replies to a comment.
=======
// Fetches a GTLDriveReply.
+ (instancetype)queryForRepliesGetWithFileId:(NSString *)fileId
                                   commentId:(NSString *)commentId
                                     replyId:(NSString *)replyId;

// Method: drive.replies.list
// Lists a comment's replies.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//  Optional:
<<<<<<< HEAD
//   includeDeleted: If set, all replies, including deleted replies (with
//     content stripped) will be returned. (Default false)
//   maxResults: The maximum number of replies to include in the response, used
//     for paging. (0..100, default 20)
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     "nextPageToken" from the previous response.
=======
//   includeDeleted: Whether to include deleted replies. Deleted replies will
//     not include their original content. (Default false)
//   pageSize: The maximum number of replies to return per page. (1..100,
//     default 20)
//   pageToken: The token for continuing a previous list request on the next
//     page. This should be set to the value of 'nextPageToken' from the
//     previous response.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
//   kGTLAuthScopeDriveReadonly
<<<<<<< HEAD
// Fetches a GTLDriveCommentReplyList.
+ (id)queryForRepliesListWithFileId:(NSString *)fileId
                          commentId:(NSString *)commentId;

// Method: drive.replies.patch
// Updates an existing reply. This method supports patch semantics.
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//   replyId: The ID of the reply.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveCommentReply.
+ (id)queryForRepliesPatchWithObject:(GTLDriveCommentReply *)object
                              fileId:(NSString *)fileId
                           commentId:(NSString *)commentId
                             replyId:(NSString *)replyId;

// Method: drive.replies.update
// Updates an existing reply.
=======
// Fetches a GTLDriveReplyList.
+ (instancetype)queryForRepliesListWithFileId:(NSString *)fileId
                                    commentId:(NSString *)commentId;

// Method: drive.replies.update
// Updates a reply with patch semantics.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   fileId: The ID of the file.
//   commentId: The ID of the comment.
//   replyId: The ID of the reply.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
// Fetches a GTLDriveCommentReply.
+ (id)queryForRepliesUpdateWithObject:(GTLDriveCommentReply *)object
                               fileId:(NSString *)fileId
                            commentId:(NSString *)commentId
                              replyId:(NSString *)replyId;

#pragma mark -
#pragma mark "revisions" methods
// These create a GTLQueryDrive object.

// Method: drive.revisions.delete
// Removes a revision.
=======
// Fetches a GTLDriveReply.
+ (instancetype)queryForRepliesUpdateWithObject:(GTLDriveReply *)object
                                         fileId:(NSString *)fileId
                                      commentId:(NSString *)commentId
                                        replyId:(NSString *)replyId;

#pragma mark - "revisions" methods
// These create a GTLQueryDrive object.

// Method: drive.revisions.delete
// Permanently deletes a revision. This method is only applicable to files with
// binary content in Drive.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Required:
//   fileId: The ID of the file.
//   revisionId: The ID of the revision.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
+ (id)queryForRevisionsDeleteWithFileId:(NSString *)fileId
                             revisionId:(NSString *)revisionId;

// Method: drive.revisions.get
// Gets a specific revision.
//  Required:
//   fileId: The ID of the file.
//   revisionId: The ID of the revision.
=======
+ (instancetype)queryForRevisionsDeleteWithFileId:(NSString *)fileId
                                       revisionId:(NSString *)revisionId;

// Method: drive.revisions.get
// Gets a revision's metadata or content by ID.
//  Required:
//   fileId: The ID of the file.
//   revisionId: The ID of the revision.
//  Optional:
//   acknowledgeAbuse: Whether the user is acknowledging the risk of downloading
//     known malware or other abusive files. This is only applicable when
//     alt=media. (Default false)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveRevision.
+ (id)queryForRevisionsGetWithFileId:(NSString *)fileId
                          revisionId:(NSString *)revisionId;
=======
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveRevision.
+ (instancetype)queryForRevisionsGetWithFileId:(NSString *)fileId
                                    revisionId:(NSString *)revisionId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: drive.revisions.list
// Lists a file's revisions.
//  Required:
//   fileId: The ID of the file.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
<<<<<<< HEAD
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveRevisionList.
+ (id)queryForRevisionsListWithFileId:(NSString *)fileId;

// Method: drive.revisions.patch
// Updates a revision. This method supports patch semantics.
//  Required:
//   fileId: The ID for the file.
//   revisionId: The ID for the revision.
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveRevision.
+ (id)queryForRevisionsPatchWithObject:(GTLDriveRevision *)object
                                fileId:(NSString *)fileId
                            revisionId:(NSString *)revisionId;

// Method: drive.revisions.update
// Updates a revision.
//  Required:
//   fileId: The ID for the file.
//   revisionId: The ID for the revision.
=======
//   kGTLAuthScopeDriveMetadata
//   kGTLAuthScopeDriveMetadataReadonly
//   kGTLAuthScopeDrivePhotosReadonly
//   kGTLAuthScopeDriveReadonly
// Fetches a GTLDriveRevisionList.
+ (instancetype)queryForRevisionsListWithFileId:(NSString *)fileId;

// Method: drive.revisions.update
// Updates a revision with patch semantics.
//  Required:
//   fileId: The ID of the file.
//   revisionId: The ID of the revision.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
//  Authorization scope(s):
//   kGTLAuthScopeDrive
//   kGTLAuthScopeDriveAppdata
//   kGTLAuthScopeDriveFile
// Fetches a GTLDriveRevision.
<<<<<<< HEAD
+ (id)queryForRevisionsUpdateWithObject:(GTLDriveRevision *)object
                                 fileId:(NSString *)fileId
                             revisionId:(NSString *)revisionId;
=======
+ (instancetype)queryForRevisionsUpdateWithObject:(GTLDriveRevision *)object
                                           fileId:(NSString *)fileId
                                       revisionId:(NSString *)revisionId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
