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
//  GTLQueryLicensing.h
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
//   GTLQueryLicensing (7 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLLicensingLicenseAssignment;
@class GTLLicensingLicenseAssignmentInsert;

@interface GTLQueryLicensing : GTLQuery

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
@property (copy) NSString *customerId;
@property (assign) NSUInteger maxResults;
@property (copy) NSString *pageToken;
@property (copy) NSString *productId;
@property (copy) NSString *skuId;
@property (copy) NSString *userId;

#pragma mark -
#pragma mark "licenseAssignments" methods
=======
@property (nonatomic, copy) NSString *customerId;
@property (nonatomic, assign) NSUInteger maxResults;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *skuId;
@property (nonatomic, copy) NSString *userId;

#pragma mark - "licenseAssignments" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryLicensing object.

// Method: licensing.licenseAssignments.delete
// Revoke License.
//  Required:
//   productId: Name for product
//   skuId: Name for sku
//   userId: email id or unique Id of the user
<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsDeleteWithProductId:(NSString *)productId
                                              skuId:(NSString *)skuId
                                             userId:(NSString *)userId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
+ (instancetype)queryForLicenseAssignmentsDeleteWithProductId:(NSString *)productId
                                                        skuId:(NSString *)skuId
                                                       userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.get
// Get license assignment of a particular product and sku for a user
//  Required:
//   productId: Name for product
//   skuId: Name for sku
//   userId: email id or unique Id of the user
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignment.
+ (id)queryForLicenseAssignmentsGetWithProductId:(NSString *)productId
                                           skuId:(NSString *)skuId
                                          userId:(NSString *)userId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignment.
+ (instancetype)queryForLicenseAssignmentsGetWithProductId:(NSString *)productId
                                                     skuId:(NSString *)skuId
                                                    userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.insert
// Assign License.
//  Required:
//   productId: Name for product
//   skuId: Name for sku
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignment.
+ (id)queryForLicenseAssignmentsInsertWithObject:(GTLLicensingLicenseAssignmentInsert *)object
                                       productId:(NSString *)productId
                                           skuId:(NSString *)skuId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignment.
+ (instancetype)queryForLicenseAssignmentsInsertWithObject:(GTLLicensingLicenseAssignmentInsert *)object
                                                 productId:(NSString *)productId
                                                     skuId:(NSString *)skuId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.listForProduct
// List license assignments for given product of the customer.
//  Required:
//   productId: Name for product
//   customerId: CustomerId represents the customer for whom licenseassignments
//     are queried
//  Optional:
//   maxResults: Maximum number of campaigns to return at one time. Must be
//     positive. Optional. Default value is 100. (1..1000, default 100)
//   pageToken: Token to fetch the next page.Optional. By default server will
//     return first page
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignmentList.
+ (id)queryForLicenseAssignmentsListForProductWithProductId:(NSString *)productId
                                                 customerId:(NSString *)customerId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignmentList.
+ (instancetype)queryForLicenseAssignmentsListForProductWithProductId:(NSString *)productId
                                                           customerId:(NSString *)customerId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.listForProductAndSku
// List license assignments for given product and sku of the customer.
//  Required:
//   productId: Name for product
//   skuId: Name for sku
//   customerId: CustomerId represents the customer for whom licenseassignments
//     are queried
//  Optional:
//   maxResults: Maximum number of campaigns to return at one time. Must be
//     positive. Optional. Default value is 100. (1..1000, default 100)
//   pageToken: Token to fetch the next page.Optional. By default server will
//     return first page
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignmentList.
+ (id)queryForLicenseAssignmentsListForProductAndSkuWithProductId:(NSString *)productId
                                                            skuId:(NSString *)skuId
                                                       customerId:(NSString *)customerId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignmentList.
+ (instancetype)queryForLicenseAssignmentsListForProductAndSkuWithProductId:(NSString *)productId
                                                                      skuId:(NSString *)skuId
                                                                 customerId:(NSString *)customerId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.patch
// Assign License. This method supports patch semantics.
//  Required:
//   productId: Name for product
//   skuId: Name for sku for which license would be revoked
//   userId: email id or unique Id of the user
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignment.
+ (id)queryForLicenseAssignmentsPatchWithObject:(GTLLicensingLicenseAssignment *)object
                                      productId:(NSString *)productId
                                          skuId:(NSString *)skuId
                                         userId:(NSString *)userId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignment.
+ (instancetype)queryForLicenseAssignmentsPatchWithObject:(GTLLicensingLicenseAssignment *)object
                                                productId:(NSString *)productId
                                                    skuId:(NSString *)skuId
                                                   userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: licensing.licenseAssignments.update
// Assign License.
//  Required:
//   productId: Name for product
//   skuId: Name for sku for which license would be revoked
//   userId: email id or unique Id of the user
<<<<<<< HEAD
// Fetches a GTLLicensingLicenseAssignment.
+ (id)queryForLicenseAssignmentsUpdateWithObject:(GTLLicensingLicenseAssignment *)object
                                       productId:(NSString *)productId
                                           skuId:(NSString *)skuId
                                          userId:(NSString *)userId;
=======
//  Authorization scope(s):
//   kGTLAuthScopeLicensingAppsLicensing
// Fetches a GTLLicensingLicenseAssignment.
+ (instancetype)queryForLicenseAssignmentsUpdateWithObject:(GTLLicensingLicenseAssignment *)object
                                                 productId:(NSString *)productId
                                                     skuId:(NSString *)skuId
                                                    userId:(NSString *)userId;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
