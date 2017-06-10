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
//  GTLBooksDictlayerdata.h
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
//   GTLBooksDictlayerdata (0 custom class methods, 3 custom properties)
//   GTLBooksDictlayerdataCommon (0 custom class methods, 1 custom properties)
//   GTLBooksDictlayerdataDict (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItem (0 custom class methods, 4 custom properties)
//   GTLBooksDictlayerdataDictWordsItemDerivativesItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemExamplesItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItem (0 custom class methods, 8 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemDerivativesItemSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemExamplesItemSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource (0 custom class methods, 2 custom properties)
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBooksDictlayerdataCommon;
@class GTLBooksDictlayerdataDict;
@class GTLBooksDictlayerdataDictSource;
@class GTLBooksDictlayerdataDictWordsItem;
@class GTLBooksDictlayerdataDictWordsItemDerivativesItem;
@class GTLBooksDictlayerdataDictWordsItemDerivativesItemSource;
@class GTLBooksDictlayerdataDictWordsItemExamplesItem;
@class GTLBooksDictlayerdataDictWordsItemExamplesItemSource;
@class GTLBooksDictlayerdataDictWordsItemSensesItem;
@class GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem;
@class GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem;
@class GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem;
@class GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource;
@class GTLBooksDictlayerdataDictWordsItemSensesItemSource;
@class GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem;
@class GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource;
@class GTLBooksDictlayerdataDictWordsItemSource;

// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdata
//

@interface GTLBooksDictlayerdata : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataCommon *common;
@property (retain) GTLBooksDictlayerdataDict *dict;
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) GTLBooksDictlayerdataCommon *common;
@property (nonatomic, retain) GTLBooksDictlayerdataDict *dict;
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataCommon
//

@interface GTLBooksDictlayerdataCommon : GTLObject

// The display title and localized canonical name to use when searching for this
// entity on Google search.
<<<<<<< HEAD
@property (copy) NSString *title;
=======
@property (nonatomic, copy) NSString *title;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDict
//

@interface GTLBooksDictlayerdataDict : GTLObject

// The source, url and attribution for this dictionary data.
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataDictSource *source;

@property (retain) NSArray *words;  // of GTLBooksDictlayerdataDictWordsItem
=======
@property (nonatomic, retain) GTLBooksDictlayerdataDictSource *source;

@property (nonatomic, retain) NSArray *words;  // of GTLBooksDictlayerdataDictWordsItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictSource
//

@interface GTLBooksDictlayerdataDictSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItem
//

@interface GTLBooksDictlayerdataDictWordsItem : GTLObject
<<<<<<< HEAD
@property (retain) NSArray *derivatives;  // of GTLBooksDictlayerdataDictWordsItemDerivativesItem
@property (retain) NSArray *examples;  // of GTLBooksDictlayerdataDictWordsItemExamplesItem
@property (retain) NSArray *senses;  // of GTLBooksDictlayerdataDictWordsItemSensesItem

// The words with different meanings but not related words, e.g. "go" (game) and
// "go" (verb).
@property (retain) GTLBooksDictlayerdataDictWordsItemSource *source;
=======
@property (nonatomic, retain) NSArray *derivatives;  // of GTLBooksDictlayerdataDictWordsItemDerivativesItem
@property (nonatomic, retain) NSArray *examples;  // of GTLBooksDictlayerdataDictWordsItemExamplesItem
@property (nonatomic, retain) NSArray *senses;  // of GTLBooksDictlayerdataDictWordsItemSensesItem

// The words with different meanings but not related words, e.g. "go" (game) and
// "go" (verb).
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemSource *source;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemDerivativesItem
//

@interface GTLBooksDictlayerdataDictWordsItemDerivativesItem : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataDictWordsItemDerivativesItemSource *source;
@property (copy) NSString *text;
=======
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemDerivativesItemSource *source;
@property (nonatomic, copy) NSString *text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemExamplesItem
//

@interface GTLBooksDictlayerdataDictWordsItemExamplesItem : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataDictWordsItemExamplesItemSource *source;
@property (copy) NSString *text;
=======
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemExamplesItemSource *source;
@property (nonatomic, copy) NSString *text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItem
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItem : GTLObject
<<<<<<< HEAD
@property (retain) NSArray *conjugations;  // of GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem
@property (retain) NSArray *definitions;  // of GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem
@property (copy) NSString *partOfSpeech;
@property (copy) NSString *pronunciation;
@property (copy) NSString *pronunciationUrl;
@property (retain) GTLBooksDictlayerdataDictWordsItemSensesItemSource *source;
@property (copy) NSString *syllabification;
@property (retain) NSArray *synonyms;  // of GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem
=======
@property (nonatomic, retain) NSArray *conjugations;  // of GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem
@property (nonatomic, retain) NSArray *definitions;  // of GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem
@property (nonatomic, copy) NSString *partOfSpeech;
@property (nonatomic, copy) NSString *pronunciation;
@property (nonatomic, copy) NSString *pronunciationUrl;
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemSensesItemSource *source;
@property (nonatomic, copy) NSString *syllabification;
@property (nonatomic, retain) NSArray *synonyms;  // of GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemDerivativesItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemDerivativesItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemExamplesItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemExamplesItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemConjugationsItem : GTLObject
<<<<<<< HEAD
@property (copy) NSString *type;
@property (copy) NSString *value;
=======
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItem : GTLObject
<<<<<<< HEAD
@property (copy) NSString *definition;
@property (retain) NSArray *examples;  // of GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem
=======
@property (nonatomic, copy) NSString *definition;
@property (nonatomic, retain) NSArray *examples;  // of GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItem : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource *source;
@property (copy) NSString *text;
=======
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource *source;
@property (nonatomic, copy) NSString *text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItem : GTLObject
<<<<<<< HEAD
@property (retain) GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource *source;
@property (copy) NSString *text;
=======
@property (nonatomic, retain) GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource *source;
@property (nonatomic, copy) NSString *text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemSynonymsItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end


// ----------------------------------------------------------------------------
//
//   GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource
//

@interface GTLBooksDictlayerdataDictWordsItemSensesItemDefinitionsItemExamplesItemSource : GTLObject
<<<<<<< HEAD
@property (copy) NSString *attribution;
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
