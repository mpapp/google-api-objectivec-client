/* Copyright (c) 2016 Google Inc.
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
//  GTLAdExchangeBuyerDealServingMetadataDealPauseStatus.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Ad Exchange Buyer API (adexchangebuyer/v1.4)
// Description:
//   Accesses your bidding-account information, submits creatives for
//   validation, finds available direct deals, and retrieves performance
//   reports.
// Documentation:
//   https://developers.google.com/ad-exchange/buyer-rest
// Classes:
//   GTLAdExchangeBuyerDealServingMetadataDealPauseStatus (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLAdExchangeBuyerDealServingMetadataDealPauseStatus
//

// Tracks which parties (if any) have paused a deal. The deal is considered
// paused if has_buyer_paused || has_seller_paused. Each of the has_buyer_paused
// or the has_seller_paused bits can be set independently.

@interface GTLAdExchangeBuyerDealServingMetadataDealPauseStatus : GTLObject

// If the deal is paused, records which party paused the deal first.
@property (nonatomic, copy) NSString *firstPausedBy;

@property (nonatomic, retain) NSNumber *hasBuyerPaused;  // boolValue
@property (nonatomic, retain) NSNumber *hasSellerPaused;  // boolValue
@end
