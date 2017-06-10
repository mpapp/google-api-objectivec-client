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
//  GTLPlusAcl.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ API (plus/v1)
// Description:
<<<<<<< HEAD
//   The Google+ API enables developers to build on top of the Google+ platform.
=======
//   Builds on top of the Google+ platform.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/+/api/
// Classes:
//   GTLPlusAcl (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusAclentryResource;

// ----------------------------------------------------------------------------
//
//   GTLPlusAcl
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLPlusAcl : GTLCollectionObject

// Description of the access granted, suitable for display.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
<<<<<<< HEAD
@property (copy) NSString *descriptionProperty;

// The list of access entries.
@property (retain) NSArray *items;  // of GTLPlusAclentryResource

// Identifies this resource as a collection of access controls. Value:
// "plus#acl".
@property (copy) NSString *kind;
=======
@property (nonatomic, copy) NSString *descriptionProperty;

// The list of access entries.
@property (nonatomic, retain) NSArray *items;  // of GTLPlusAclentryResource

// Identifies this resource as a collection of access controls. Value:
// "plus#acl".
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
