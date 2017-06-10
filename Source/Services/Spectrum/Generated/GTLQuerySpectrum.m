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
//  GTLQuerySpectrum.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Spectrum Database API (spectrum/v1explorer)
// Description:
//   API for spectrum-management functions.
// Documentation:
//   http://developers.google.com/spectrum
// Classes:
//   GTLQuerySpectrum (6 custom class methods, 14 custom properties)

#import "GTLQuerySpectrum.h"

#import "GTLSpectrumAntennaCharacteristics.h"
#import "GTLSpectrumDeviceCapabilities.h"
#import "GTLSpectrumDeviceDescriptor.h"
#import "GTLSpectrumDeviceOwner.h"
#import "GTLSpectrumGeoLocation.h"
#import "GTLSpectrumMessage.h"
#import "GTLSpectrumPawsGetSpectrumBatchResponse.h"
#import "GTLSpectrumPawsGetSpectrumResponse.h"
#import "GTLSpectrumPawsInitResponse.h"
#import "GTLSpectrumPawsNotifySpectrumUseResponse.h"
#import "GTLSpectrumPawsRegisterResponse.h"
#import "GTLSpectrumPawsVerifyDeviceResponse.h"

@implementation GTLQuerySpectrum

@dynamic antenna, capabilities, deviceDesc, deviceDescs, deviceOwner, fields,
         location, locations, masterDeviceDesc, owner, requestType, spectra,
         type, version;

+ (NSDictionary *)arrayPropertyToClassMap {
<<<<<<< HEAD
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLSpectrumDeviceDescriptor class], @"deviceDescs",
      [GTLSpectrumGeoLocation class], @"locations",
      [GTLSpectrumMessage class], @"spectra",
      nil];
  return map;
}

#pragma mark -
#pragma mark "paws" methods
// These create a GTLQuerySpectrum object.

+ (id)queryForPawsGetSpectrum {
=======
  NSDictionary *map = @{
    @"deviceDescs" : [GTLSpectrumDeviceDescriptor class],
    @"locations" : [GTLSpectrumGeoLocation class],
    @"spectra" : [GTLSpectrumMessage class]
  };
  return map;
}

#pragma mark - "paws" methods
// These create a GTLQuerySpectrum object.

+ (instancetype)queryForPawsGetSpectrum {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.getSpectrum";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsGetSpectrumResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPawsGetSpectrumBatch {
=======
+ (instancetype)queryForPawsGetSpectrumBatch {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.getSpectrumBatch";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsGetSpectrumBatchResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPawsInit {
=======
+ (instancetype)queryForPawsInit {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.init";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsInitResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPawsNotifySpectrumUse {
=======
+ (instancetype)queryForPawsNotifySpectrumUse {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.notifySpectrumUse";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsNotifySpectrumUseResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPawsRegister {
=======
+ (instancetype)queryForPawsRegister {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.register";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsRegisterResponse class];
  return query;
}

<<<<<<< HEAD
+ (id)queryForPawsVerifyDevice {
=======
+ (instancetype)queryForPawsVerifyDevice {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSString *methodName = @"spectrum.paws.verifyDevice";
  GTLQuerySpectrum *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLSpectrumPawsVerifyDeviceResponse class];
  return query;
}

@end
