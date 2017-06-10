/* Copyright (c) 2011 Google Inc.
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

#import <Foundation/Foundation.h>

#import "GTLDiscovery.h"

typedef enum {
  kFHGeneratorHandlerMessageError = 1,
  kFHGeneratorHandlerMessageWarning,
  kFHGeneratorHandlerMessageInfo
} FHGeneratorHandlerMessageType;


<<<<<<< HEAD
@interface FHGenerator : NSObject 
=======
@interface FHGenerator : NSObject
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@property (readonly, retain) GTLDiscoveryRpcDescription* api;
@property (readonly, assign) NSUInteger verboseLevel;
@property (readonly, assign) BOOL allowRootURLOverrides;
<<<<<<< HEAD

+ (id)generatorForApi:(GTLDiscoveryRpcDescription *)api
         verboseLevel:(NSUInteger)verboseLevel
allowRootURLOverrides:(BOOL)allowRootURLOverrides
formattedNameOverride:(NSString *)formattedNameOverride;
=======
@property (readonly, copy) NSString *frameworkName;

+ (instancetype)generatorForApi:(GTLDiscoveryRpcDescription *)api
                   verboseLevel:(NSUInteger)verboseLevel
          allowRootURLOverrides:(BOOL)allowRootURLOverrides
          formattedNameOverride:(NSString *)formattedNameOverride
               skipIfLikelyREST:(BOOL)skipIfLikelyREST
               useFrameworkName:(NSString *)frameworkName;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Keys are the file names; values are the contents of the files.
- (NSDictionary *)generateFilesWithHandler:(void (^)(FHGeneratorHandlerMessageType msgType,
                                                     NSString *message))messageHandler;

// The API name formatted for use as a directory name.
- (NSString *)formattedApiName;

<<<<<<< HEAD
=======
// If this is likely REST only (and hence can't be generated).
- (BOOL)likelyRESTOnlyAPI;

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
