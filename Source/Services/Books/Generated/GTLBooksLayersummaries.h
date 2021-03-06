<<<<<<< HEAD
/* Copyright (c) 2012 Google Inc.
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
//  GTLBooksLayersummaries.h
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
//   GTLBooksLayersummaries (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBooksLayersummary;

// ----------------------------------------------------------------------------
//
//   GTLBooksLayersummaries
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLBooksLayersummaries : GTLCollectionObject

// A list of layer summary items.
<<<<<<< HEAD
@property (retain) NSArray *items;  // of GTLBooksLayersummary

// Resource type.
@property (copy) NSString *kind;

// The total number of layer summaries found.
@property (retain) NSNumber *totalItems;  // intValue
=======
@property (nonatomic, retain) NSArray *items;  // of GTLBooksLayersummary

// Resource type.
@property (nonatomic, copy) NSString *kind;

// The total number of layer summaries found.
@property (nonatomic, retain) NSNumber *totalItems;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
