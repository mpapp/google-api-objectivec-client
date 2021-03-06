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
//  GTLLicensingLicenseAssignment.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Enterprise License Manager API (licensing/v1)
// Description:
//   Licensing API to view and manage license for your domain.
// Documentation:
//   https://developers.google.com/google-apps/licensing/
// Classes:
//   GTLLicensingLicenseAssignment (0 custom class methods, 6 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLLicensingLicenseAssignment
//

// Template for LiscenseAssignment Resource

@interface GTLLicensingLicenseAssignment : GTLObject

// ETag of the resource.
<<<<<<< HEAD
@property (copy) NSString *etags;

// Identifies the resource as a LicenseAssignment.
@property (copy) NSString *kind;

// Name of the product.
@property (copy) NSString *productId;

// Link to this page.
@property (copy) NSString *selfLink;

// Name of the sku of the product.
@property (copy) NSString *skuId;

// Email id of the user.
@property (copy) NSString *userId;
=======
@property (nonatomic, copy) NSString *etags;

// Identifies the resource as a LicenseAssignment.
@property (nonatomic, copy) NSString *kind;

// Name of the product.
@property (nonatomic, copy) NSString *productId;

// Link to this page.
@property (nonatomic, copy) NSString *selfLink;

// Name of the sku of the product.
@property (nonatomic, copy) NSString *skuId;

// Email id of the user.
@property (nonatomic, copy) NSString *userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
