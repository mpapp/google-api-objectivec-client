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
//  GTLPredictionAnalyze.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Prediction API (prediction/v1.6)
// Description:
//   Lets you access a cloud hosted machine learning service that makes it easy
//   to build smart apps
// Documentation:
//   https://developers.google.com/prediction/docs/developer-guide
// Classes:
//   GTLPredictionAnalyze (0 custom class methods, 6 custom properties)
//   GTLPredictionAnalyzeDataDescription (0 custom class methods, 2 custom properties)
//   GTLPredictionAnalyzeErrorsItem (0 custom class methods, 0 custom properties)
//   GTLPredictionAnalyzeModelDescription (0 custom class methods, 3 custom properties)
//   GTLPredictionAnalyzeDataDescriptionFeaturesItem (0 custom class methods, 4 custom properties)
//   GTLPredictionAnalyzeDataDescriptionOutputFeature (0 custom class methods, 2 custom properties)
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrix (0 custom class methods, 0 custom properties)
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals (0 custom class methods, 0 custom properties)
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical (0 custom class methods, 2 custom properties)
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric (0 custom class methods, 3 custom properties)
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemText (0 custom class methods, 1 custom properties)
//   GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric (0 custom class methods, 3 custom properties)
//   GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem (0 custom class methods, 2 custom properties)
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrixConfusionMatrix (0 custom class methods, 0 custom properties)
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPredictionAnalyzeDataDescription;
@class GTLPredictionAnalyzeDataDescriptionFeaturesItem;
@class GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical;
@class GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem;
@class GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric;
@class GTLPredictionAnalyzeDataDescriptionFeaturesItemText;
@class GTLPredictionAnalyzeDataDescriptionOutputFeature;
@class GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric;
@class GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem;
@class GTLPredictionAnalyzeErrorsItem;
@class GTLPredictionAnalyzeModelDescription;
@class GTLPredictionAnalyzeModelDescriptionConfusionMatrix;
@class GTLPredictionAnalyzeModelDescriptionConfusionMatrixConfusionMatrix;
@class GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals;
@class GTLPredictionInsert2;

// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyze
//

@interface GTLPredictionAnalyze : GTLObject

// Description of the data the model was trained on.
<<<<<<< HEAD
@property (retain) GTLPredictionAnalyzeDataDescription *dataDescription;

// List of errors with the data.
@property (retain) NSArray *errors;  // of GTLPredictionAnalyzeErrorsItem

// The unique name for the predictive model.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// What kind of resource this is.
@property (copy) NSString *kind;

// Description of the model.
@property (retain) GTLPredictionAnalyzeModelDescription *modelDescription;

// A URL to re-request this resource.
@property (copy) NSString *selfLink;
=======
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescription *dataDescription;

// List of errors with the data.
@property (nonatomic, retain) NSArray *errors;  // of GTLPredictionAnalyzeErrorsItem

// The unique name for the predictive model.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// What kind of resource this is.
@property (nonatomic, copy) NSString *kind;

// Description of the model.
@property (nonatomic, retain) GTLPredictionAnalyzeModelDescription *modelDescription;

// A URL to re-request this resource.
@property (nonatomic, copy) NSString *selfLink;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescription
//

@interface GTLPredictionAnalyzeDataDescription : GTLObject

// Description of the input features in the data set.
<<<<<<< HEAD
@property (retain) NSArray *features;  // of GTLPredictionAnalyzeDataDescriptionFeaturesItem

// Description of the output value or label.
@property (retain) GTLPredictionAnalyzeDataDescriptionOutputFeature *outputFeature;
=======
@property (nonatomic, retain) NSArray *features;  // of GTLPredictionAnalyzeDataDescriptionFeaturesItem

// Description of the output value or label.
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescriptionOutputFeature *outputFeature;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeErrorsItem
//

@interface GTLPredictionAnalyzeErrorsItem : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeModelDescription
//

@interface GTLPredictionAnalyzeModelDescription : GTLObject

// An output confusion matrix. This shows an estimate for how this model will do
// in predictions. This is first indexed by the true class label. For each true
// class label, this provides a pair {predicted_label, count}, where count is
// the estimated number of times the model will predict the predicted label
// given the true label. Will not output if more then 100 classes (Categorical
// models only).
<<<<<<< HEAD
@property (retain) GTLPredictionAnalyzeModelDescriptionConfusionMatrix *confusionMatrix;

// A list of the confusion matrix row totals.
@property (retain) GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals *confusionMatrixRowTotals;

// Basic information about the model.
@property (retain) GTLPredictionInsert2 *modelinfo;
=======
@property (nonatomic, retain) GTLPredictionAnalyzeModelDescriptionConfusionMatrix *confusionMatrix;

// A list of the confusion matrix row totals.
@property (nonatomic, retain) GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals *confusionMatrixRowTotals;

// Basic information about the model.
@property (nonatomic, retain) GTLPredictionInsert2 *modelinfo;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionFeaturesItem
//

@interface GTLPredictionAnalyzeDataDescriptionFeaturesItem : GTLObject

// Description of the categorical values of this feature.
<<<<<<< HEAD
@property (retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical *categorical;

// The feature index.
@property (retain) NSNumber *index;  // longLongValue

// Description of the numeric values of this feature.
@property (retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric *numeric;

// Description of multiple-word text values of this feature.
@property (retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemText *text;
=======
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical *categorical;

// The feature index.
@property (nonatomic, retain) NSNumber *index;  // longLongValue

// Description of the numeric values of this feature.
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric *numeric;

// Description of multiple-word text values of this feature.
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescriptionFeaturesItemText *text;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionOutputFeature
//

@interface GTLPredictionAnalyzeDataDescriptionOutputFeature : GTLObject

// Description of the output values in the data set.
<<<<<<< HEAD
@property (retain) GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric *numeric;

// Description of the output labels in the data set.
@property (retain) NSArray *text;  // of GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem
=======
@property (nonatomic, retain) GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric *numeric;

// Description of the output labels in the data set.
@property (nonatomic, retain) NSArray *text;  // of GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrix
//

@interface GTLPredictionAnalyzeModelDescriptionConfusionMatrix : GTLObject
// This object is documented as having more properties that are
// GTLPredictionAnalyzeModelDescriptionConfusionMatrixConfusionMatrix. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals
//

@interface GTLPredictionAnalyzeModelDescriptionConfusionMatrixRowTotals : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical
//

@interface GTLPredictionAnalyzeDataDescriptionFeaturesItemCategorical : GTLObject

// Number of categorical values for this feature in the data.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// List of all the categories for this feature in the data set.
@property (retain) NSArray *values;  // of GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// List of all the categories for this feature in the data set.
@property (nonatomic, retain) NSArray *values;  // of GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric
//

@interface GTLPredictionAnalyzeDataDescriptionFeaturesItemNumeric : GTLObject

// Number of numeric values for this feature in the data set.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// Mean of the numeric values of this feature in the data set.
@property (copy) NSString *mean;

// Variance of the numeric values of this feature in the data set.
@property (copy) NSString *variance;
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// Mean of the numeric values of this feature in the data set.
@property (nonatomic, copy) NSString *mean;

// Variance of the numeric values of this feature in the data set.
@property (nonatomic, copy) NSString *variance;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemText
//

@interface GTLPredictionAnalyzeDataDescriptionFeaturesItemText : GTLObject

// Number of multiple-word text values for this feature.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric
//

@interface GTLPredictionAnalyzeDataDescriptionOutputFeatureNumeric : GTLObject

// Number of numeric output values in the data set.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// Mean of the output values in the data set.
@property (copy) NSString *mean;

// Variance of the output values in the data set.
@property (copy) NSString *variance;
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// Mean of the output values in the data set.
@property (nonatomic, copy) NSString *mean;

// Variance of the output values in the data set.
@property (nonatomic, copy) NSString *variance;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem
//

@interface GTLPredictionAnalyzeDataDescriptionOutputFeatureTextItem : GTLObject

// Number of times the output label occurred in the data set.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// The output label.
@property (copy) NSString *value;
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// The output label.
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeModelDescriptionConfusionMatrixConfusionMatrix
//

@interface GTLPredictionAnalyzeModelDescriptionConfusionMatrixConfusionMatrix : GTLObject
// This object is documented as having more properties that are NSString. Use
// -additionalJSONKeys and -additionalPropertyForName: to get the list of
// properties and then fetch them; or -additionalProperties to fetch them all at
// once.
@end


// ----------------------------------------------------------------------------
//
//   GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem
//

@interface GTLPredictionAnalyzeDataDescriptionFeaturesItemCategoricalValuesItem : GTLObject

// Number of times this feature had this value.
<<<<<<< HEAD
@property (retain) NSNumber *count;  // longLongValue

// The category name.
@property (copy) NSString *value;
=======
@property (nonatomic, retain) NSNumber *count;  // longLongValue

// The category name.
@property (nonatomic, copy) NSString *value;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
