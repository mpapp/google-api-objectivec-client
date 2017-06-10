<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2015 Google Inc.
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
//  GTLQueryBooks.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Books API (books/v1)
// Description:
//   Lets you search for books and manage your Google Books library.
// Documentation:
//   https://developers.google.com/books/docs/v1/getting_started
// Classes:
<<<<<<< HEAD
//   GTLQueryBooks (40 custom class methods, 65 custom properties)
=======
//   GTLQueryBooks (46 custom class methods, 71 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#import "GTLQueryBooks.h"

#import "GTLBooksAnnotation.h"
#import "GTLBooksAnnotationdata.h"
#import "GTLBooksAnnotations.h"
#import "GTLBooksAnnotationsdata.h"
#import "GTLBooksAnnotationsSummary.h"
#import "GTLBooksBookshelf.h"
#import "GTLBooksBookshelves.h"
<<<<<<< HEAD
#import "GTLBooksCloudloadingResource.h"
#import "GTLBooksDownloadAccesses.h"
#import "GTLBooksLayersummaries.h"
#import "GTLBooksLayersummary.h"
#import "GTLBooksOffers.h"
#import "GTLBooksReadingPosition.h"
#import "GTLBooksRequestAccess.h"
#import "GTLBooksVolume.h"
=======
#import "GTLBooksCategory.h"
#import "GTLBooksCloudloadingResource.h"
#import "GTLBooksDiscoveryclusters.h"
#import "GTLBooksDownloadAccesses.h"
#import "GTLBooksLayersummaries.h"
#import "GTLBooksLayersummary.h"
#import "GTLBooksMetadata.h"
#import "GTLBooksNotification.h"
#import "GTLBooksOffers.h"
#import "GTLBooksReadingPosition.h"
#import "GTLBooksRequestAccess.h"
#import "GTLBooksUsersettings.h"
#import "GTLBooksVolume.h"
#import "GTLBooksVolume2.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLBooksVolumeannotation.h"
#import "GTLBooksVolumeannotations.h"
#import "GTLBooksVolumes.h"
#import "GTLBooksVolumesRecommendedRateResponse.h"

@implementation GTLQueryBooks

@dynamic acquireMethod, action, allowWebDefinitions, androidId,
<<<<<<< HEAD
         annotationDataId, annotationId, association, contentVersion, country,
         cpksver, device, deviceCookie, download, driveDocumentId, endOffset,
         endPosition, features, fields, filter, h, langRestrict, layerId,
         layerIds, libraryRestrict, licenseTypes, locale, manufacturer,
         maxResults, mimeType, model, name, nonce, offerId, orderBy, pageIds,
         pageToken, partner, position, printType, processingState, product,
         projection, q, rating, scale, serial, shelf, showDeleted,
         showOnlySummaryInResponse, showPreorders, source, startIndex,
         startOffset, startPosition, summaryId, timestamp, updatedMax,
         updatedMin, uploadClientToken, userId, volumeAnnotationsVersion,
         volumeId, volumeIds, volumePosition, w;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"drive_document_id", @"driveDocumentId",
      @"mime_type", @"mimeType",
      @"upload_client_token", @"uploadClientToken",
      nil];
=======
         annotationDataId, annotationId, association, categoryId,
         contentVersion, country, cpksver, device, deviceCookie, download,
         driveDocumentId, endOffset, endPosition, features, fields, filter, h,
         langRestrict, layerId, layerIds, libraryRestrict, licenseTypes, locale,
         manufacturer, maxAllowedMaturityRating, maxResults, mimeType, model,
         name, nonce, notificationId, offerId, orderBy, pageSize, pageToken,
         partner, position, printType, processingState, product, projection, q,
         rating, reason, scale, serial, settings, shelf, showDeleted,
         showOnlySummaryInResponse, showPreorders, source, startIndex,
         startOffset, startPosition, summaryId, timestamp, updatedMax,
         updatedMin, uploadClientToken, userLibraryConsistentRead, userId,
         volumeAnnotationsVersion, volumeId, volumeIds, volumePosition, w;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map = @{
    @"driveDocumentId" : @"drive_document_id",
    @"mimeType" : @"mime_type",
    @"notificationId" : @"notification_id",
    @"uploadClientToken" : @"upload_client_token",
    @"userLibraryConsistentRead" : @"user_library_consistent_read"
  };
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [NSString class], @"acquireMethod",
      [NSString class], @"features",
      [NSString class], @"layerIds",
      [NSString class], @"pageIds",
      [NSString class], @"processingState",
      [NSString class], @"volumeIds",
      nil];
  return map;
}

#pragma mark -
#pragma mark "bookshelves" methods
// These create a GTLQueryBooks object.

+ (id)queryForBookshelvesGetWithUserId:(NSString *)userId
                                 shelf:(NSString *)shelf {
=======
  NSDictionary *map = @{
    @"acquireMethod" : [NSString class],
    @"categoryId" : [NSString class],
    @"features" : [NSString class],
    @"layerIds" : [NSString class],
    @"processingState" : [NSString class],
    @"volumeIds" : [NSString class]
  };
  return map;
}

#pragma mark - "bookshelves" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForBookshelvesGetWithUserId:(NSString *)userId
                                           shelf:(NSString *)shelf {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.bookshelves.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.shelf = shelf;
  query.expectedObjectClass = [GTLBooksBookshelf class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForBookshelvesListWithUserId:(NSString *)userId {
=======
+ (instancetype)queryForBookshelvesListWithUserId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.bookshelves.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.expectedObjectClass = [GTLBooksBookshelves class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "bookshelves.volumes" methods
// These create a GTLQueryBooks object.

+ (id)queryForBookshelvesVolumesListWithUserId:(NSString *)userId
                                         shelf:(NSString *)shelf {
=======
#pragma mark - "bookshelves.volumes" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForBookshelvesVolumesListWithUserId:(NSString *)userId
                                                   shelf:(NSString *)shelf {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.bookshelves.volumes.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.userId = userId;
  query.shelf = shelf;
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "cloudloading" methods
// These create a GTLQueryBooks object.

+ (id)queryForCloudloadingAddBook {
=======
#pragma mark - "cloudloading" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForCloudloadingAddBook {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.cloudloading.addBook";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksCloudloadingResource class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForCloudloadingDeleteBookWithVolumeId:(NSString *)volumeId {
=======
+ (instancetype)queryForCloudloadingDeleteBookWithVolumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.cloudloading.deleteBook";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForCloudloadingUpdateBookWithObject:(GTLBooksCloudloadingResource *)object {
=======
+ (instancetype)queryForCloudloadingUpdateBookWithObject:(GTLBooksCloudloadingResource *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"books.cloudloading.updateBook";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBooksCloudloadingResource class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers.annotationData" methods
// These create a GTLQueryBooks object.

+ (id)queryForLayersAnnotationDataGetWithVolumeId:(NSString *)volumeId
                                          layerId:(NSString *)layerId
                                 annotationDataId:(NSString *)annotationDataId
                                   contentVersion:(NSString *)contentVersion {
=======
#pragma mark - "dictionary" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForDictionaryListOfflineMetadataWithCpksver:(NSString *)cpksver {
  NSString *methodName = @"books.dictionary.listOfflineMetadata";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.cpksver = cpksver;
  query.expectedObjectClass = [GTLBooksMetadata class];
  return query;
}

#pragma mark - "layers.annotationData" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForLayersAnnotationDataGetWithVolumeId:(NSString *)volumeId
                                                    layerId:(NSString *)layerId
                                           annotationDataId:(NSString *)annotationDataId
                                             contentVersion:(NSString *)contentVersion {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.annotationData.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.layerId = layerId;
  query.annotationDataId = annotationDataId;
  query.contentVersion = contentVersion;
  query.expectedObjectClass = [GTLBooksAnnotationdata class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersAnnotationDataListWithVolumeId:(NSString *)volumeId
                                           layerId:(NSString *)layerId
                                    contentVersion:(NSString *)contentVersion {
=======
+ (instancetype)queryForLayersAnnotationDataListWithVolumeId:(NSString *)volumeId
                                                     layerId:(NSString *)layerId
                                              contentVersion:(NSString *)contentVersion {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.annotationData.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.layerId = layerId;
  query.contentVersion = contentVersion;
  query.expectedObjectClass = [GTLBooksAnnotationsdata class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers" methods
// These create a GTLQueryBooks object.

+ (id)queryForLayersGetWithVolumeId:(NSString *)volumeId
                          summaryId:(NSString *)summaryId {
=======
#pragma mark - "layers" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForLayersGetWithVolumeId:(NSString *)volumeId
                                    summaryId:(NSString *)summaryId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.summaryId = summaryId;
  query.expectedObjectClass = [GTLBooksLayersummary class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersListWithVolumeId:(NSString *)volumeId {
=======
+ (instancetype)queryForLayersListWithVolumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksLayersummaries class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "layers.volumeAnnotations" methods
// These create a GTLQueryBooks object.

+ (id)queryForLayersVolumeAnnotationsGetWithVolumeId:(NSString *)volumeId
                                             layerId:(NSString *)layerId
                                        annotationId:(NSString *)annotationId {
=======
#pragma mark - "layers.volumeAnnotations" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForLayersVolumeAnnotationsGetWithVolumeId:(NSString *)volumeId
                                                       layerId:(NSString *)layerId
                                                  annotationId:(NSString *)annotationId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.volumeAnnotations.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.layerId = layerId;
  query.annotationId = annotationId;
  query.expectedObjectClass = [GTLBooksVolumeannotation class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLayersVolumeAnnotationsListWithVolumeId:(NSString *)volumeId
                                              layerId:(NSString *)layerId
                                       contentVersion:(NSString *)contentVersion {
=======
+ (instancetype)queryForLayersVolumeAnnotationsListWithVolumeId:(NSString *)volumeId
                                                        layerId:(NSString *)layerId
                                                 contentVersion:(NSString *)contentVersion {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.layers.volumeAnnotations.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.layerId = layerId;
  query.contentVersion = contentVersion;
  query.expectedObjectClass = [GTLBooksVolumeannotations class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "myconfig" methods
// These create a GTLQueryBooks object.

+ (id)queryForMyconfigReleaseDownloadAccessWithVolumeIds:(NSArray *)volumeIds
                                                 cpksver:(NSString *)cpksver {
=======
#pragma mark - "myconfig" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForMyconfigGetUserSettings {
  NSString *methodName = @"books.myconfig.getUserSettings";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksUsersettings class];
  return query;
}

+ (instancetype)queryForMyconfigReleaseDownloadAccessWithVolumeIds:(NSArray *)volumeIds
                                                           cpksver:(NSString *)cpksver {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.myconfig.releaseDownloadAccess";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeIds = volumeIds;
  query.cpksver = cpksver;
  query.expectedObjectClass = [GTLBooksDownloadAccesses class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMyconfigRequestAccessWithSource:(NSString *)source
                                     volumeId:(NSString *)volumeId
                                        nonce:(NSString *)nonce
                                      cpksver:(NSString *)cpksver {
=======
+ (instancetype)queryForMyconfigRequestAccessWithSource:(NSString *)source
                                               volumeId:(NSString *)volumeId
                                                  nonce:(NSString *)nonce
                                                cpksver:(NSString *)cpksver {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.myconfig.requestAccess";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.source = source;
  query.volumeId = volumeId;
  query.nonce = nonce;
  query.cpksver = cpksver;
  query.expectedObjectClass = [GTLBooksRequestAccess class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMyconfigSyncVolumeLicensesWithSource:(NSString *)source
                                             nonce:(NSString *)nonce
                                           cpksver:(NSString *)cpksver {
=======
+ (instancetype)queryForMyconfigSyncVolumeLicensesWithSource:(NSString *)source
                                                       nonce:(NSString *)nonce
                                                     cpksver:(NSString *)cpksver {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.myconfig.syncVolumeLicenses";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.source = source;
  query.nonce = nonce;
  query.cpksver = cpksver;
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "mylibrary.annotations" methods
// These create a GTLQueryBooks object.

+ (id)queryForMylibraryAnnotationsDeleteWithAnnotationId:(NSString *)annotationId {
  NSString *methodName = @"books.mylibrary.annotations.delete";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.annotationId = annotationId;
  return query;
}

+ (id)queryForMylibraryAnnotationsGetWithAnnotationId:(NSString *)annotationId {
  NSString *methodName = @"books.mylibrary.annotations.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.annotationId = annotationId;
  query.expectedObjectClass = [GTLBooksAnnotation class];
  return query;
}

+ (id)queryForMylibraryAnnotationsInsertWithObject:(GTLBooksAnnotation *)object {
=======
+ (instancetype)queryForMyconfigUpdateUserSettings {
  NSString *methodName = @"books.myconfig.updateUserSettings";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksUsersettings class];
  return query;
}

#pragma mark - "mylibrary.annotations" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForMylibraryAnnotationsDeleteWithAnnotationId:(NSString *)annotationId {
  NSString *methodName = @"books.mylibrary.annotations.delete";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.annotationId = annotationId;
  return query;
}

+ (instancetype)queryForMylibraryAnnotationsInsertWithObject:(GTLBooksAnnotation *)object {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"books.mylibrary.annotations.insert";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLBooksAnnotation class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryAnnotationsList {
=======
+ (instancetype)queryForMylibraryAnnotationsList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.annotations.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksAnnotations class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryAnnotationsSummaryWithLayerIds:(NSArray *)layerIds
                                             volumeId:(NSString *)volumeId {
=======
+ (instancetype)queryForMylibraryAnnotationsSummaryWithLayerIds:(NSArray *)layerIds
                                                       volumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.annotations.summary";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.layerIds = layerIds;
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksAnnotationsSummary class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryAnnotationsUpdateWithObject:(GTLBooksAnnotation *)object
                                      annotationId:(NSString *)annotationId {
=======
+ (instancetype)queryForMylibraryAnnotationsUpdateWithObject:(GTLBooksAnnotation *)object
                                                annotationId:(NSString *)annotationId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"books.mylibrary.annotations.update";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.annotationId = annotationId;
  query.expectedObjectClass = [GTLBooksAnnotation class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "mylibrary.bookshelves" methods
// These create a GTLQueryBooks object.

+ (id)queryForMylibraryBookshelvesAddVolumeWithShelf:(NSString *)shelf
                                            volumeId:(NSString *)volumeId {
=======
#pragma mark - "mylibrary.bookshelves" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForMylibraryBookshelvesAddVolumeWithShelf:(NSString *)shelf
                                                      volumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.addVolume";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  query.volumeId = volumeId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryBookshelvesClearVolumesWithShelf:(NSString *)shelf {
=======
+ (instancetype)queryForMylibraryBookshelvesClearVolumesWithShelf:(NSString *)shelf {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.clearVolumes";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryBookshelvesGetWithShelf:(NSString *)shelf {
=======
+ (instancetype)queryForMylibraryBookshelvesGetWithShelf:(NSString *)shelf {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  query.expectedObjectClass = [GTLBooksBookshelf class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryBookshelvesList {
=======
+ (instancetype)queryForMylibraryBookshelvesList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksBookshelves class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryBookshelvesMoveVolumeWithShelf:(NSString *)shelf
                                             volumeId:(NSString *)volumeId
                                       volumePosition:(NSInteger)volumePosition {
=======
+ (instancetype)queryForMylibraryBookshelvesMoveVolumeWithShelf:(NSString *)shelf
                                                       volumeId:(NSString *)volumeId
                                                 volumePosition:(NSInteger)volumePosition {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.moveVolume";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  query.volumeId = volumeId;
  query.volumePosition = volumePosition;
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryBookshelvesRemoveVolumeWithShelf:(NSString *)shelf
                                               volumeId:(NSString *)volumeId {
=======
+ (instancetype)queryForMylibraryBookshelvesRemoveVolumeWithShelf:(NSString *)shelf
                                                         volumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.removeVolume";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  query.volumeId = volumeId;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "mylibrary.bookshelves.volumes" methods
// These create a GTLQueryBooks object.

+ (id)queryForMylibraryBookshelvesVolumesListWithShelf:(NSString *)shelf {
=======
#pragma mark - "mylibrary.bookshelves.volumes" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForMylibraryBookshelvesVolumesListWithShelf:(NSString *)shelf {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.bookshelves.volumes.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.shelf = shelf;
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "mylibrary.readingpositions" methods
// These create a GTLQueryBooks object.

+ (id)queryForMylibraryReadingpositionsGetWithVolumeId:(NSString *)volumeId {
=======
#pragma mark - "mylibrary.readingpositions" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForMylibraryReadingpositionsGetWithVolumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.readingpositions.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksReadingPosition class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForMylibraryReadingpositionsSetPositionWithVolumeId:(NSString *)volumeId
                                                     timestamp:(NSString *)timestamp
                                                      position:(NSString *)position {
=======
+ (instancetype)queryForMylibraryReadingpositionsSetPositionWithVolumeId:(NSString *)volumeId
                                                               timestamp:(NSString *)timestamp
                                                                position:(NSString *)position {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.mylibrary.readingpositions.setPosition";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.timestamp = timestamp;
  query.position = position;
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "promooffer" methods
// These create a GTLQueryBooks object.

+ (id)queryForPromoofferAccept {
=======
#pragma mark - "notification" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForNotificationGetWithNotificationId:(NSString *)notificationId {
  NSString *methodName = @"books.notification.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.notificationId = notificationId;
  query.expectedObjectClass = [GTLBooksNotification class];
  return query;
}

#pragma mark - "onboarding" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForOnboardingListCategories {
  NSString *methodName = @"books.onboarding.listCategories";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksCategory class];
  return query;
}

+ (instancetype)queryForOnboardingListCategoryVolumes {
  NSString *methodName = @"books.onboarding.listCategoryVolumes";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksVolume2 class];
  return query;
}

#pragma mark - "personalizedstream" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForPersonalizedstreamGet {
  NSString *methodName = @"books.personalizedstream.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksDiscoveryclusters class];
  return query;
}

#pragma mark - "promooffer" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForPromoofferAccept {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.promooffer.accept";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPromoofferDismiss {
=======
+ (instancetype)queryForPromoofferDismiss {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.promooffer.dismiss";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPromoofferGet {
=======
+ (instancetype)queryForPromoofferGet {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.promooffer.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksOffers class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "volumes.associated" methods
// These create a GTLQueryBooks object.

+ (id)queryForVolumesAssociatedListWithVolumeId:(NSString *)volumeId {
=======
#pragma mark - "volumes.associated" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForVolumesAssociatedListWithVolumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.associated.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "volumes" methods
// These create a GTLQueryBooks object.

+ (id)queryForVolumesGetWithVolumeId:(NSString *)volumeId {
=======
#pragma mark - "volumes" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForVolumesGetWithVolumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.get";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksVolume class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForVolumesListWithQ:(NSString *)q {
=======
+ (instancetype)queryForVolumesListWithQ:(NSString *)q {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.q = q;
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "volumes.mybooks" methods
// These create a GTLQueryBooks object.

+ (id)queryForVolumesMybooksList {
=======
#pragma mark - "volumes.mybooks" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForVolumesMybooksList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.mybooks.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "volumes.recommended" methods
// These create a GTLQueryBooks object.

+ (id)queryForVolumesRecommendedList {
=======
#pragma mark - "volumes.recommended" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForVolumesRecommendedList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.recommended.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForVolumesRecommendedRateWithRating:(NSString *)rating
                                      volumeId:(NSString *)volumeId {
=======
+ (instancetype)queryForVolumesRecommendedRateWithRating:(NSString *)rating
                                                volumeId:(NSString *)volumeId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.recommended.rate";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.rating = rating;
  query.volumeId = volumeId;
  query.expectedObjectClass = [GTLBooksVolumesRecommendedRateResponse class];
  return query;
}

<<<<<<< HEAD
#pragma mark -
#pragma mark "volumes.useruploaded" methods
// These create a GTLQueryBooks object.

+ (id)queryForVolumesUseruploadedList {
=======
#pragma mark - "volumes.useruploaded" methods
// These create a GTLQueryBooks object.

+ (instancetype)queryForVolumesUseruploadedList {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"books.volumes.useruploaded.list";
  GTLQueryBooks *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLBooksVolumes class];
  return query;
}

@end
