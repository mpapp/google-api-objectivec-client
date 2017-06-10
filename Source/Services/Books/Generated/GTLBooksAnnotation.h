<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLBooksAnnotation.h
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
//   GTLBooksAnnotation (0 custom class methods, 17 custom properties)
//   GTLBooksAnnotationClientVersionRanges (0 custom class methods, 5 custom properties)
//   GTLBooksAnnotationCurrentVersionRanges (0 custom class methods, 5 custom properties)
//   GTLBooksAnnotationLayerSummary (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBooksAnnotationClientVersionRanges;
@class GTLBooksAnnotationCurrentVersionRanges;
@class GTLBooksAnnotationLayerSummary;
@class GTLBooksAnnotationsRange;

// ----------------------------------------------------------------------------
//
//   GTLBooksAnnotation
//

@interface GTLBooksAnnotation : GTLObject

// Anchor text after excerpt. For requests, if the user bookmarked a screen that
// has no flowing text on it, then this field should be empty.
<<<<<<< HEAD
@property (copy) NSString *afterSelectedText;

// Anchor text before excerpt. For requests, if the user bookmarked a screen
// that has no flowing text on it, then this field should be empty.
@property (copy) NSString *beforeSelectedText;

// Selection ranges sent from the client.
@property (retain) GTLBooksAnnotationClientVersionRanges *clientVersionRanges;

// Timestamp for the created time of this annotation.
@property (retain) GTLDateTime *created;

// Selection ranges for the most recent content version.
@property (retain) GTLBooksAnnotationCurrentVersionRanges *currentVersionRanges;

// User-created data for this annotation.
@property (copy) NSString *data;

// Indicates that this annotation is deleted.
@property (retain) NSNumber *deleted;  // boolValue

// The highlight style for this annotation.
@property (copy) NSString *highlightStyle;

// Id of this annotation, in the form of a GUID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Resource type.
@property (copy) NSString *kind;

// The layer this annotation is for.
@property (copy) NSString *layerId;

@property (retain) GTLBooksAnnotationLayerSummary *layerSummary;

// Pages that this annotation spans.
@property (retain) NSArray *pageIds;  // of NSString

// Excerpt from the volume.
@property (copy) NSString *selectedText;

// URL to this resource.
@property (copy) NSString *selfLink;

// Timestamp for the last time this annotation was modified.
@property (retain) GTLDateTime *updated;

// The volume that this annotation belongs to.
@property (copy) NSString *volumeId;
=======
@property (nonatomic, copy) NSString *afterSelectedText;

// Anchor text before excerpt. For requests, if the user bookmarked a screen
// that has no flowing text on it, then this field should be empty.
@property (nonatomic, copy) NSString *beforeSelectedText;

// Selection ranges sent from the client.
@property (nonatomic, retain) GTLBooksAnnotationClientVersionRanges *clientVersionRanges;

// Timestamp for the created time of this annotation.
@property (nonatomic, retain) GTLDateTime *created;

// Selection ranges for the most recent content version.
@property (nonatomic, retain) GTLBooksAnnotationCurrentVersionRanges *currentVersionRanges;

// User-created data for this annotation.
@property (nonatomic, copy) NSString *data;

// Indicates that this annotation is deleted.
@property (nonatomic, retain) NSNumber *deleted;  // boolValue

// The highlight style for this annotation.
@property (nonatomic, copy) NSString *highlightStyle;

// Id of this annotation, in the form of a GUID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Resource type.
@property (nonatomic, copy) NSString *kind;

// The layer this annotation is for.
@property (nonatomic, copy) NSString *layerId;

@property (nonatomic, retain) GTLBooksAnnotationLayerSummary *layerSummary;

// Pages that this annotation spans.
@property (nonatomic, retain) NSArray *pageIds;  // of NSString

// Excerpt from the volume.
@property (nonatomic, copy) NSString *selectedText;

// URL to this resource.
@property (nonatomic, copy) NSString *selfLink;

// Timestamp for the last time this annotation was modified.
@property (nonatomic, retain) GTLDateTime *updated;

// The volume that this annotation belongs to.
@property (nonatomic, copy) NSString *volumeId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksAnnotationClientVersionRanges
//

@interface GTLBooksAnnotationClientVersionRanges : GTLObject

// Range in CFI format for this annotation sent by client.
<<<<<<< HEAD
@property (retain) GTLBooksAnnotationsRange *cfiRange;

// Content version the client sent in.
@property (copy) NSString *contentVersion;

// Range in GB image format for this annotation sent by client.
@property (retain) GTLBooksAnnotationsRange *gbImageRange;

// Range in GB text format for this annotation sent by client.
@property (retain) GTLBooksAnnotationsRange *gbTextRange;

// Range in image CFI format for this annotation sent by client.
@property (retain) GTLBooksAnnotationsRange *imageCfiRange;
=======
@property (nonatomic, retain) GTLBooksAnnotationsRange *cfiRange;

// Content version the client sent in.
@property (nonatomic, copy) NSString *contentVersion;

// Range in GB image format for this annotation sent by client.
@property (nonatomic, retain) GTLBooksAnnotationsRange *gbImageRange;

// Range in GB text format for this annotation sent by client.
@property (nonatomic, retain) GTLBooksAnnotationsRange *gbTextRange;

// Range in image CFI format for this annotation sent by client.
@property (nonatomic, retain) GTLBooksAnnotationsRange *imageCfiRange;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksAnnotationCurrentVersionRanges
//

@interface GTLBooksAnnotationCurrentVersionRanges : GTLObject

// Range in CFI format for this annotation for version above.
<<<<<<< HEAD
@property (retain) GTLBooksAnnotationsRange *cfiRange;

// Content version applicable to ranges below.
@property (copy) NSString *contentVersion;

// Range in GB image format for this annotation for version above.
@property (retain) GTLBooksAnnotationsRange *gbImageRange;

// Range in GB text format for this annotation for version above.
@property (retain) GTLBooksAnnotationsRange *gbTextRange;

// Range in image CFI format for this annotation for version above.
@property (retain) GTLBooksAnnotationsRange *imageCfiRange;
=======
@property (nonatomic, retain) GTLBooksAnnotationsRange *cfiRange;

// Content version applicable to ranges below.
@property (nonatomic, copy) NSString *contentVersion;

// Range in GB image format for this annotation for version above.
@property (nonatomic, retain) GTLBooksAnnotationsRange *gbImageRange;

// Range in GB text format for this annotation for version above.
@property (nonatomic, retain) GTLBooksAnnotationsRange *gbTextRange;

// Range in image CFI format for this annotation for version above.
@property (nonatomic, retain) GTLBooksAnnotationsRange *imageCfiRange;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksAnnotationLayerSummary
//

@interface GTLBooksAnnotationLayerSummary : GTLObject

// Maximum allowed characters on this layer, especially for the "copy" layer.
<<<<<<< HEAD
@property (retain) NSNumber *allowedCharacterCount;  // intValue

// Type of limitation on this layer. "limited" or "unlimited" for the "copy"
// layer.
@property (copy) NSString *limitType;

// Remaining allowed characters on this layer, especially for the "copy" layer.
@property (retain) NSNumber *remainingCharacterCount;  // intValue
=======
@property (nonatomic, retain) NSNumber *allowedCharacterCount;  // intValue

// Type of limitation on this layer. "limited" or "unlimited" for the "copy"
// layer.
@property (nonatomic, copy) NSString *limitType;

// Remaining allowed characters on this layer, especially for the "copy" layer.
@property (nonatomic, retain) NSNumber *remainingCharacterCount;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
