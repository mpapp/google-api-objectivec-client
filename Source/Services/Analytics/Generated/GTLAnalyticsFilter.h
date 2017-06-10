<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
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
//  GTLAnalyticsFilter.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
<<<<<<< HEAD
//   View and manage your Google Analytics data
=======
//   Views and manages your Google Analytics data.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/analytics/
// Classes:
//   GTLAnalyticsFilter (0 custom class methods, 15 custom properties)
<<<<<<< HEAD
//   GTLAnalyticsFilterAdvancedDetails (0 custom class methods, 10 custom properties)
//   GTLAnalyticsFilterLowercaseDetails (0 custom class methods, 1 custom properties)
//   GTLAnalyticsFilterParentLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterSearchAndReplaceDetails (0 custom class methods, 4 custom properties)
//   GTLAnalyticsFilterUppercaseDetails (0 custom class methods, 1 custom properties)
=======
//   GTLAnalyticsFilterAdvancedDetails (0 custom class methods, 13 custom properties)
//   GTLAnalyticsFilterLowercaseDetails (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterParentLink (0 custom class methods, 2 custom properties)
//   GTLAnalyticsFilterSearchAndReplaceDetails (0 custom class methods, 5 custom properties)
//   GTLAnalyticsFilterUppercaseDetails (0 custom class methods, 2 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAnalyticsFilterAdvancedDetails;
@class GTLAnalyticsFilterExpression;
@class GTLAnalyticsFilterLowercaseDetails;
@class GTLAnalyticsFilterParentLink;
@class GTLAnalyticsFilterSearchAndReplaceDetails;
@class GTLAnalyticsFilterUppercaseDetails;

// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilter
//

// JSON template for an Analytics account filter.

@interface GTLAnalyticsFilter : GTLObject

// Account ID to which this filter belongs.
<<<<<<< HEAD
@property (copy) NSString *accountId;

// Details for the filter of the type ADVANCED.
@property (retain) GTLAnalyticsFilterAdvancedDetails *advancedDetails;

// Time this filter was created.
@property (retain) GTLDateTime *created;

// Details for the filter of the type EXCLUDE.
@property (retain) GTLAnalyticsFilterExpression *excludeDetails;

// Filter ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Details for the filter of the type INCLUDE.
@property (retain) GTLAnalyticsFilterExpression *includeDetails;

// Resource type for Analytics filter.
@property (copy) NSString *kind;

// Details for the filter of the type LOWER.
@property (retain) GTLAnalyticsFilterLowercaseDetails *lowercaseDetails;

// Name of this filter.
@property (copy) NSString *name;

// Parent link for this filter. Points to the account to which this filter
// belongs.
@property (retain) GTLAnalyticsFilterParentLink *parentLink;

// Details for the filter of the type SEARCH_AND_REPLACE.
@property (retain) GTLAnalyticsFilterSearchAndReplaceDetails *searchAndReplaceDetails;

// Link for this filter.
@property (copy) NSString *selfLink;

// Type of this filter. Possible values are INCLUDE, EXCLUDE, LOWERCASE,
// UPPERCASE, SEARCH_AND_REPLACE and ADVANCED.
@property (copy) NSString *type;

// Time this filter was last modified.
@property (retain) GTLDateTime *updated;

// Details for the filter of the type UPPER.
@property (retain) GTLAnalyticsFilterUppercaseDetails *uppercaseDetails;
=======
@property (nonatomic, copy) NSString *accountId;

// Details for the filter of the type ADVANCED.
@property (nonatomic, retain) GTLAnalyticsFilterAdvancedDetails *advancedDetails;

// Time this filter was created.
@property (nonatomic, retain) GTLDateTime *created;

// Details for the filter of the type EXCLUDE.
@property (nonatomic, retain) GTLAnalyticsFilterExpression *excludeDetails;

// Filter ID.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Details for the filter of the type INCLUDE.
@property (nonatomic, retain) GTLAnalyticsFilterExpression *includeDetails;

// Resource type for Analytics filter.
@property (nonatomic, copy) NSString *kind;

// Details for the filter of the type LOWER.
@property (nonatomic, retain) GTLAnalyticsFilterLowercaseDetails *lowercaseDetails;

// Name of this filter.
@property (nonatomic, copy) NSString *name;

// Parent link for this filter. Points to the account to which this filter
// belongs.
@property (nonatomic, retain) GTLAnalyticsFilterParentLink *parentLink;

// Details for the filter of the type SEARCH_AND_REPLACE.
@property (nonatomic, retain) GTLAnalyticsFilterSearchAndReplaceDetails *searchAndReplaceDetails;

// Link for this filter.
@property (nonatomic, copy) NSString *selfLink;

// Type of this filter. Possible values are INCLUDE, EXCLUDE, LOWERCASE,
// UPPERCASE, SEARCH_AND_REPLACE and ADVANCED.
@property (nonatomic, copy) NSString *type;

// Time this filter was last modified.
@property (nonatomic, retain) GTLDateTime *updated;

// Details for the filter of the type UPPER.
@property (nonatomic, retain) GTLAnalyticsFilterUppercaseDetails *uppercaseDetails;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterAdvancedDetails
//

@interface GTLAnalyticsFilterAdvancedDetails : GTLObject

// Indicates if the filter expressions are case sensitive.
<<<<<<< HEAD
@property (retain) NSNumber *caseSensitive;  // boolValue

// Expression to extract from field A.
@property (copy) NSString *extractA;

// Expression to extract from field B.
@property (copy) NSString *extractB;

// Field A.
@property (copy) NSString *fieldA;

// Indicates if field A is required to match.
@property (retain) NSNumber *fieldARequired;  // boolValue

// Field B.
@property (copy) NSString *fieldB;

// Indicates if field B is required to match.
@property (retain) NSNumber *fieldBRequired;  // boolValue

// Expression used to construct the output value.
@property (copy) NSString *outputConstructor;

// Output field.
@property (copy) NSString *outputToField;

// Indicates if the existing value of the output field, if any, should be
// overridden by the output expression.
@property (retain) NSNumber *overrideOutputField;  // boolValue
=======
@property (nonatomic, retain) NSNumber *caseSensitive;  // boolValue

// Expression to extract from field A.
@property (nonatomic, copy) NSString *extractA;

// Expression to extract from field B.
@property (nonatomic, copy) NSString *extractB;

// Field A.
@property (nonatomic, copy) NSString *fieldA;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldAIndex;  // intValue

// Indicates if field A is required to match.
@property (nonatomic, retain) NSNumber *fieldARequired;  // boolValue

// Field B.
@property (nonatomic, copy) NSString *fieldB;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldBIndex;  // intValue

// Indicates if field B is required to match.
@property (nonatomic, retain) NSNumber *fieldBRequired;  // boolValue

// Expression used to construct the output value.
@property (nonatomic, copy) NSString *outputConstructor;

// Output field.
@property (nonatomic, copy) NSString *outputToField;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *outputToFieldIndex;  // intValue

// Indicates if the existing value of the output field, if any, should be
// overridden by the output expression.
@property (nonatomic, retain) NSNumber *overrideOutputField;  // boolValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterLowercaseDetails
//

@interface GTLAnalyticsFilterLowercaseDetails : GTLObject

// Field to use in the filter.
<<<<<<< HEAD
@property (copy) NSString *field;
=======
@property (nonatomic, copy) NSString *field;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldIndex;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterParentLink
//

@interface GTLAnalyticsFilterParentLink : GTLObject

// Link to the account to which this filter belongs.
<<<<<<< HEAD
@property (copy) NSString *href;

// Value is "analytics#account".
@property (copy) NSString *type;
=======
@property (nonatomic, copy) NSString *href;

// Value is "analytics#account".
@property (nonatomic, copy) NSString *type;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterSearchAndReplaceDetails
//

@interface GTLAnalyticsFilterSearchAndReplaceDetails : GTLObject

// Determines if the filter is case sensitive.
<<<<<<< HEAD
@property (retain) NSNumber *caseSensitive;  // boolValue

// Field to use in the filter.
@property (copy) NSString *field;

// Term to replace the search term with.
@property (copy) NSString *replaceString;

// Term to search.
@property (copy) NSString *searchString;
=======
@property (nonatomic, retain) NSNumber *caseSensitive;  // boolValue

// Field to use in the filter.
@property (nonatomic, copy) NSString *field;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldIndex;  // intValue

// Term to replace the search term with.
@property (nonatomic, copy) NSString *replaceString;

// Term to search.
@property (nonatomic, copy) NSString *searchString;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAnalyticsFilterUppercaseDetails
//

@interface GTLAnalyticsFilterUppercaseDetails : GTLObject

// Field to use in the filter.
<<<<<<< HEAD
@property (copy) NSString *field;
=======
@property (nonatomic, copy) NSString *field;

// The Index of the custom dimension. Required if field is a CUSTOM_DIMENSION.
@property (nonatomic, retain) NSNumber *fieldIndex;  // intValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
