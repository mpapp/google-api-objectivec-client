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
//  GTLAdSenseAdStyle.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   AdSense Management API (adsense/v1.4)
// Description:
<<<<<<< HEAD
//   Gives AdSense publishers access to their inventory and the ability to
//   generate reports
=======
//   Accesses AdSense publishers' inventory and generates performance reports.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/adsense/management/
// Classes:
//   GTLAdSenseAdStyle (0 custom class methods, 4 custom properties)
//   GTLAdSenseAdStyleColors (0 custom class methods, 5 custom properties)
//   GTLAdSenseAdStyleFont (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLAdSenseAdStyleColors;
@class GTLAdSenseAdStyleFont;

// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdStyle
//

@interface GTLAdSenseAdStyle : GTLObject

// The colors which are included in the style. These are represented as six
// hexadecimal characters, similar to HTML color codes, but without the leading
// hash.
<<<<<<< HEAD
@property (retain) GTLAdSenseAdStyleColors *colors;

// The style of the corners in the ad.
@property (copy) NSString *corners;

// The font which is included in the style.
@property (retain) GTLAdSenseAdStyleFont *font;

// Kind this is, in this case adsense#adStyle.
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) GTLAdSenseAdStyleColors *colors;

// The style of the corners in the ad.
@property (nonatomic, copy) NSString *corners;

// The font which is included in the style.
@property (nonatomic, retain) GTLAdSenseAdStyleFont *font;

// Kind this is, in this case adsense#adStyle.
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdStyleColors
//

@interface GTLAdSenseAdStyleColors : GTLObject

// The color of the ad background.
<<<<<<< HEAD
@property (copy) NSString *background;

// The color of the ad border.
@property (copy) NSString *border;

// The color of the ad text.
@property (copy) NSString *text;

// The color of the ad title.
@property (copy) NSString *title;

// The color of the ad url.
@property (copy) NSString *url;
=======
@property (nonatomic, copy) NSString *background;

// The color of the ad border.
@property (nonatomic, copy) NSString *border;

// The color of the ad text.
@property (nonatomic, copy) NSString *text;

// The color of the ad title.
@property (nonatomic, copy) NSString *title;

// The color of the ad url.
@property (nonatomic, copy) NSString *url;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end


// ----------------------------------------------------------------------------
//
//   GTLAdSenseAdStyleFont
//

@interface GTLAdSenseAdStyleFont : GTLObject

// The family of the font.
<<<<<<< HEAD
@property (copy) NSString *family;

// The size of the font.
@property (copy) NSString *size;
=======
@property (nonatomic, copy) NSString *family;

// The size of the font.
@property (nonatomic, copy) NSString *size;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
