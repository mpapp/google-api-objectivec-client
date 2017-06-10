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
//  GTLQueryLicensing.m
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

#import "GTLQueryLicensing.h"

#import "GTLLicensingLicenseAssignment.h"
#import "GTLLicensingLicenseAssignmentInsert.h"
#import "GTLLicensingLicenseAssignmentList.h"

@implementation GTLQueryLicensing

@dynamic customerId, fields, maxResults, pageToken, productId, skuId, userId;

<<<<<<< HEAD
#pragma mark -
#pragma mark "licenseAssignments" methods
// These create a GTLQueryLicensing object.

+ (id)queryForLicenseAssignmentsDeleteWithProductId:(NSString *)productId
                                              skuId:(NSString *)skuId
                                             userId:(NSString *)userId {
=======
#pragma mark - "licenseAssignments" methods
// These create a GTLQueryLicensing object.

+ (instancetype)queryForLicenseAssignmentsDeleteWithProductId:(NSString *)productId
                                                        skuId:(NSString *)skuId
                                                       userId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"licensing.licenseAssignments.delete";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.productId = productId;
  query.skuId = skuId;
  query.userId = userId;
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsGetWithProductId:(NSString *)productId
                                           skuId:(NSString *)skuId
                                          userId:(NSString *)userId {
=======
+ (instancetype)queryForLicenseAssignmentsGetWithProductId:(NSString *)productId
                                                     skuId:(NSString *)skuId
                                                    userId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"licensing.licenseAssignments.get";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.productId = productId;
  query.skuId = skuId;
  query.userId = userId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsInsertWithObject:(GTLLicensingLicenseAssignmentInsert *)object
                                       productId:(NSString *)productId
                                           skuId:(NSString *)skuId {
=======
+ (instancetype)queryForLicenseAssignmentsInsertWithObject:(GTLLicensingLicenseAssignmentInsert *)object
                                                 productId:(NSString *)productId
                                                     skuId:(NSString *)skuId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"licensing.licenseAssignments.insert";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.productId = productId;
  query.skuId = skuId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsListForProductWithProductId:(NSString *)productId
                                                 customerId:(NSString *)customerId {
=======
+ (instancetype)queryForLicenseAssignmentsListForProductWithProductId:(NSString *)productId
                                                           customerId:(NSString *)customerId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"licensing.licenseAssignments.listForProduct";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.productId = productId;
  query.customerId = customerId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignmentList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsListForProductAndSkuWithProductId:(NSString *)productId
                                                            skuId:(NSString *)skuId
                                                       customerId:(NSString *)customerId {
=======
+ (instancetype)queryForLicenseAssignmentsListForProductAndSkuWithProductId:(NSString *)productId
                                                                      skuId:(NSString *)skuId
                                                                 customerId:(NSString *)customerId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"licensing.licenseAssignments.listForProductAndSku";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.productId = productId;
  query.skuId = skuId;
  query.customerId = customerId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignmentList class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsPatchWithObject:(GTLLicensingLicenseAssignment *)object
                                      productId:(NSString *)productId
                                          skuId:(NSString *)skuId
                                         userId:(NSString *)userId {
=======
+ (instancetype)queryForLicenseAssignmentsPatchWithObject:(GTLLicensingLicenseAssignment *)object
                                                productId:(NSString *)productId
                                                    skuId:(NSString *)skuId
                                                   userId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"licensing.licenseAssignments.patch";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.productId = productId;
  query.skuId = skuId;
  query.userId = userId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignment class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForLicenseAssignmentsUpdateWithObject:(GTLLicensingLicenseAssignment *)object
                                       productId:(NSString *)productId
                                           skuId:(NSString *)skuId
                                          userId:(NSString *)userId {
=======
+ (instancetype)queryForLicenseAssignmentsUpdateWithObject:(GTLLicensingLicenseAssignment *)object
                                                 productId:(NSString *)productId
                                                     skuId:(NSString *)skuId
                                                    userId:(NSString *)userId {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (object == nil) {
    GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
    return nil;
  }
  NSString *methodName = @"licensing.licenseAssignments.update";
  GTLQueryLicensing *query = [self queryWithMethodName:methodName];
  query.bodyObject = object;
  query.productId = productId;
  query.skuId = skuId;
  query.userId = userId;
  query.expectedObjectClass = [GTLLicensingLicenseAssignment class];
  return query;
}

@end
