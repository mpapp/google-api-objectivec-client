<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLDiscoveryJsonSchema.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   APIs Discovery Service (discovery/v1)
// Description:
//   Lets you discover information about other Google APIs, such as what APIs
//   are available, the resource and method details for each API.
// Documentation:
//   https://developers.google.com/discovery/
// Classes:
//   GTLDiscoveryJsonSchema (0 custom class methods, 20 custom properties)
//   GTLDiscoveryJsonSchemaAnnotations (0 custom class methods, 1 custom properties)
//   GTLDiscoveryJsonSchemaProperties (0 custom class methods, 0 custom properties)
//   GTLDiscoveryJsonSchemaVariant (0 custom class methods, 2 custom properties)
//   GTLDiscoveryJsonSchemaVariantMapItem (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDiscoveryJsonSchema;
@class GTLDiscoveryJsonSchemaAnnotations;
@class GTLDiscoveryJsonSchemaProperties;
@class GTLDiscoveryJsonSchemaVariant;
@class GTLDiscoveryJsonSchemaVariantMapItem;

// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchema
//

@interface GTLDiscoveryJsonSchema : GTLObject

// A reference to another schema. The value of this property is the "id" of
// another schema.
<<<<<<< HEAD
@property (copy) NSString *xRef;
=======
@property (nonatomic, copy) NSString *xRef;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// If this is a schema for an object, this property is the schema for any
// additional properties with dynamic keys on this object.
// Remapped to 'additionalPropertiesProperty' to avoid GTLObject's
// 'additionalProperties'.
<<<<<<< HEAD
@property (retain) GTLDiscoveryJsonSchema *additionalPropertiesProperty;

// Additional information about this property.
@property (retain) GTLDiscoveryJsonSchemaAnnotations *annotations;

// The default value of this property (if one exists).
// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
@property (copy) NSString *defaultProperty;

// A description of this object.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (copy) NSString *descriptionProperty;

// Values this parameter may take (if it is an enum).
// Remapped to 'enumProperty' to avoid language reserved word 'enum'.
@property (retain) NSArray *enumProperty;  // of NSString

// The descriptions for the enums. Each position maps to the corresponding value
// in the "enum" array.
@property (retain) NSArray *enumDescriptions;  // of NSString
=======
@property (nonatomic, retain) GTLDiscoveryJsonSchema *additionalPropertiesProperty;

// Additional information about this property.
@property (nonatomic, retain) GTLDiscoveryJsonSchemaAnnotations *annotations;

// The default value of this property (if one exists).
// Remapped to 'defaultProperty' to avoid language reserved word 'default'.
@property (nonatomic, copy) NSString *defaultProperty;

// A description of this object.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Values this parameter may take (if it is an enum).
// Remapped to 'enumProperty' to avoid language reserved word 'enum'.
@property (nonatomic, retain) NSArray *enumProperty;  // of NSString

// The descriptions for the enums. Each position maps to the corresponding value
// in the "enum" array.
@property (nonatomic, retain) NSArray *enumDescriptions;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// An additional regular expression or key that helps constrain the value. For
// more details see:
// http://tools.ietf.org/html/draft-zyp-json-schema-03#section-5.23
<<<<<<< HEAD
@property (copy) NSString *format;

// Unique identifier for this schema.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// If this is a schema for an array, this property is the schema for each
// element in the array.
@property (retain) GTLDiscoveryJsonSchema *items;

// Whether this parameter goes in the query or the path for REST requests.
@property (copy) NSString *location;

// The maximum value of this parameter.
@property (copy) NSString *maximum;

// The minimum value of this parameter.
@property (copy) NSString *minimum;

// The regular expression this parameter must conform to. Uses Java 6 regex
// format: http://docs.oracle.com/javase/6/docs/api/java/util/regex/Pattern.html
@property (copy) NSString *pattern;

// If this is a schema for an object, list the schema for each property of this
// object.
@property (retain) GTLDiscoveryJsonSchemaProperties *properties;
=======
@property (nonatomic, copy) NSString *format;

// Unique identifier for this schema.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// If this is a schema for an array, this property is the schema for each
// element in the array.
@property (nonatomic, retain) GTLDiscoveryJsonSchema *items;

// Whether this parameter goes in the query or the path for REST requests.
@property (nonatomic, copy) NSString *location;

// The maximum value of this parameter.
@property (nonatomic, copy) NSString *maximum;

// The minimum value of this parameter.
@property (nonatomic, copy) NSString *minimum;

// The regular expression this parameter must conform to. Uses Java 6 regex
// format: http://docs.oracle.com/javase/6/docs/api/java/util/regex/Pattern.html
@property (nonatomic, copy) NSString *pattern;

// If this is a schema for an object, list the schema for each property of this
// object.
@property (nonatomic, retain) GTLDiscoveryJsonSchemaProperties *properties;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The value is read-only, generated by the service. The value cannot be
// modified by the client. If the value is included in a POST, PUT, or PATCH
// request, it is ignored by the service.
<<<<<<< HEAD
@property (retain) NSNumber *readOnly;  // boolValue

// Whether this parameter may appear multiple times.
@property (retain) NSNumber *repeated;  // boolValue

// Whether the parameter is required.
@property (retain) NSNumber *required;  // boolValue

// The value type for this schema. A list of values can be found here:
// http://tools.ietf.org/html/draft-zyp-json-schema-03#section-5.1
@property (copy) NSString *type;
=======
@property (nonatomic, retain) NSNumber *readOnly;  // boolValue

// Whether this parameter may appear multiple times.
@property (nonatomic, retain) NSNumber *repeated;  // boolValue

// Whether the parameter is required.
@property (nonatomic, retain) NSNumber *required;  // boolValue

// The value type for this schema. A list of values can be found here:
// http://tools.ietf.org/html/draft-zyp-json-schema-03#section-5.1
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// In a variant data type, the value of one property is used to determine how to
// interpret the entire entity. Its value must exist in a map of descriminant
// values to schema names.
<<<<<<< HEAD
@property (retain) GTLDiscoveryJsonSchemaVariant *variant;
=======
@property (nonatomic, retain) GTLDiscoveryJsonSchemaVariant *variant;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaAnnotations
//

@interface GTLDiscoveryJsonSchemaAnnotations : GTLObject

// A list of methods for which this property is required on requests.
<<<<<<< HEAD
@property (retain) NSArray *required;  // of NSString
=======
@property (nonatomic, retain) NSArray *required;  // of NSString
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaProperties
//

@interface GTLDiscoveryJsonSchemaProperties : GTLObject
// This object is documented as having more properties that are
// GTLDiscoveryJsonSchema. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaVariant
//

@interface GTLDiscoveryJsonSchemaVariant : GTLObject

// The name of the type discriminant property.
<<<<<<< HEAD
@property (copy) NSString *discriminant;

// The map of discriminant value to schema to use for parsing..
@property (retain) NSArray *map;  // of GTLDiscoveryJsonSchemaVariantMapItem
=======
@property (nonatomic, copy) NSString *discriminant;

// The map of discriminant value to schema to use for parsing..
@property (nonatomic, retain) NSArray *map;  // of GTLDiscoveryJsonSchemaVariantMapItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLDiscoveryJsonSchemaVariantMapItem
//

@interface GTLDiscoveryJsonSchemaVariantMapItem : GTLObject
<<<<<<< HEAD
@property (copy) NSString *xRef;
@property (copy) NSString *typeValue;
=======
@property (nonatomic, copy) NSString *xRef;
@property (nonatomic, copy) NSString *typeValue;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
