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

//
//  GTLDateTime.m
//

#import "GTLDateTime.h"

#if (!TARGET_OS_IPHONE && defined(MAC_OS_X_VERSION_10_10) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_10) \
  || (TARGET_OS_IPHONE && defined(__IPHONE_8_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_8_0)
#define GTL_NEW_CALENDAR_ENUMS 1
#else
#define GTL_NEW_CALENDAR_ENUMS 0
#endif

#if GTL_NEW_CALENDAR_ENUMS
static const NSInteger kGTLUndefinedDateComponent = NSDateComponentUndefined;
#else
static const NSInteger kGTLUndefinedDateComponent = NSUndefinedDateComponent;
#endif


@interface GTLDateTime ()

- (void)setFromDate:(NSDate *)date timeZone:(NSTimeZone *)tz;
- (void)setFromRFC3339String:(NSString *)str;

@property (nonatomic, retain, readwrite) NSTimeZone *timeZone;
@property (nonatomic, copy, readwrite) NSDateComponents *dateComponents;
@property (nonatomic, assign, readwrite) NSInteger milliseconds;

@property (nonatomic, assign, readwrite) BOOL hasTime;
@property (nonatomic, assign, readwrite) NSInteger offsetSeconds;
@property (nonatomic, assign, getter=isUniversalTime, readwrite) BOOL universalTime;

@end

<<<<<<< HEAD
static NSCharacterSet *gDashSet = nil;
static NSCharacterSet *gTSet = nil;
static NSCharacterSet *gColonSet = nil;
static NSCharacterSet *gPlusMinusZSet = nil;
static NSMutableDictionary *gCalendarsForTimeZones = nil;

=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@implementation GTLDateTime

// A note about milliseconds_:
// RFC 3339 has support for fractions of a second.  NSDateComponents is all
// NSInteger based, so it can't handle a fraction of a second.  NSDate is
// built on NSTimeInterval so it has sub-millisecond precision.  GTL takes
// the compromise of supporting the RFC's optional fractional second support
// by maintaining a number of milliseconds past what fits in the
// NSDateComponents.  The parsing and string conversions will include
// 3 decimal digits (hence milliseconds).  When going to a string, the decimal
// digits are only included if the milliseconds are non zero.

@dynamic date;
@dynamic calendar;
@dynamic RFC3339String;
@dynamic stringValue;
@dynamic timeZone;
@dynamic hasTime;

@synthesize dateComponents = dateComponents_,
            milliseconds = milliseconds_,
            offsetSeconds = offsetSeconds_,
            universalTime = isUniversalTime_;

<<<<<<< HEAD
+ (void)initialize {
  // Note that initialize is guaranteed by the runtime to be called in a
  // thread-safe manner.
  if (gDashSet == nil) {
    gDashSet = [[NSCharacterSet characterSetWithCharactersInString:@"-"] retain];
    gTSet = [[NSCharacterSet characterSetWithCharactersInString:@"Tt "] retain];
    gColonSet = [[NSCharacterSet characterSetWithCharactersInString:@":"] retain];
    gPlusMinusZSet = [[NSCharacterSet characterSetWithCharactersInString:@"+-zZ"] retain];

    gCalendarsForTimeZones = [[NSMutableDictionary alloc] init];
  }
}

=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
+ (GTLDateTime *)dateTimeWithRFC3339String:(NSString *)str {
  if (str == nil) return nil;

  GTLDateTime *result = [[[self alloc] init] autorelease];
  [result setFromRFC3339String:str];
  return result;
}

+ (GTLDateTime *)dateTimeWithDate:(NSDate *)date timeZone:(NSTimeZone *)tz {
  if (date == nil) return nil;

  GTLDateTime *result = [[[self alloc] init] autorelease];
  [result setFromDate:date timeZone:tz];
  return result;
}

+ (GTLDateTime *)dateTimeForAllDayWithDate:(NSDate *)date {
  if (date == nil) return nil;

  GTLDateTime *result = [[[self alloc] init] autorelease];
  [result setFromDate:date timeZone:nil];
  result.hasTime = NO;
  return result;
}

+ (GTLDateTime *)dateTimeWithDateComponents:(NSDateComponents *)components {
#if GTL_NEW_CALENDAR_ENUMS
  NSString *calendarID = NSCalendarIdentifierGregorian;
#else
  NSString *calendarID = NSGregorianCalendar;
#endif
  NSCalendar *cal = [[[NSCalendar alloc] initWithCalendarIdentifier:calendarID] autorelease];
  NSDate *date = [cal dateFromComponents:components];
#if GTL_IPHONE
  NSTimeZone *tz = [components timeZone];
#else
  // NSDateComponents added timeZone: in Mac OS X 10.7.
  NSTimeZone *tz = nil;
<<<<<<< HEAD
  if ([components respondsToSelector:@selector(timeZone)]) {
    tz = [components timeZone];
  }
#endif
=======

#if defined(MAC_OS_X_VERSION_10_7) && MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7
  BOOL hasTimeZone = YES;
#else
  BOOL hasTimeZone = [components respondsToSelector:@selector(timeZone)];
#endif
  if (hasTimeZone) {
    tz = [components timeZone];
  }
#endif  // GTL_IPHONE
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return [self dateTimeWithDate:date timeZone:tz];
}

- (void)dealloc {
  [dateComponents_ release];
  [timeZone_ release];
<<<<<<< HEAD
=======
  [cachedDate_ release];
  [cachedRFC3339String_ release];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  [super dealloc];
}

- (id)copyWithZone:(NSZone *)zone {
  // Object is immutable
  return [self retain];
}

// On 10.9 and iOS 7 (and possibly earlier systems) NSDateComponents isEqual: works; check if
// we're guaranteed to be running on those systems or later.
#if (!TARGET_OS_IPHONE && defined(MAC_OS_X_VERSION_10_9) && MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_9) \
    || (TARGET_OS_IPHONE && defined(__IPHONE_7_0) && __IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_7_0)
  #define GTL_CAN_TRUST_DATE_COMPONENTS_ISEQUAL 1
#else
  #define GTL_CAN_TRUST_DATE_COMPONENTS_ISEQUAL 0
#endif

// weekOfMonth and weekOfYear are available on 10.7 and iOS 5; check that we're building
// for at least those systems.
#if (!TARGET_OS_IPHONE && defined(MAC_OS_X_VERSION_10_7) && MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7) \
    || (TARGET_OS_IPHONE && defined(__IPHONE_5_0) && __IPHONE_OS_VERSION_MIN_REQUIRED >= __IPHONE_5_0)
  #define GTL_HAS_WEEK_OF_MONTH 1
#else
  #define GTL_HAS_WEEK_OF_MONTH 0
#endif

// week is not available starting with 10.10 and iOS 8 SDKs; check that we're not building
// with those SDKs.
#if (!TARGET_OS_IPHONE && defined(MAC_OS_X_VERSION_10_10) && MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_10) \
|| (TARGET_OS_IPHONE && defined(__IPHONE_8_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_8_0)
  #define GTL_HAS_WEEK 0
#else
  #define GTL_HAS_WEEK 1
#endif

// until NSDateComponent implements isEqual, we'll use this
#if !GTL_CAN_TRUST_DATE_COMPONENTS_ISEQUAL
- (BOOL)doesDateComponents:(NSDateComponents *)dc1
       equalDateComponents:(NSDateComponents *)dc2 {

  return [dc1 era] == [dc2 era]
          && [dc1 year] == [dc2 year]
          && [dc1 month] == [dc2 month]
          && [dc1 day] == [dc2 day]
          && [dc1 hour] == [dc2 hour]
          && [dc1 minute] == [dc2 minute]
          && [dc1 second] == [dc2 second]
#if GTL_HAS_WEEK_OF_MONTH
          && [dc1 weekOfMonth] == [dc2 weekOfMonth]
          && [dc1 weekOfYear] == [dc2 weekOfYear]
#endif
#if GTL_HAS_WEEK
          && [dc1 week] == [dc2 week]
#endif
          && [dc1 weekday] == [dc2 weekday]

          && [dc1 weekdayOrdinal] == [dc2 weekdayOrdinal];

}
#endif  // !GTL_CAN_TRUST_DATE_COMPONENTS_ISEQUAL

- (BOOL)isEqual:(GTLDateTime *)other {
<<<<<<< HEAD

=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  if (self == other) return YES;
  if (![other isKindOfClass:[GTLDateTime class]]) return NO;

#if GTL_CAN_TRUST_DATE_COMPONENTS_ISEQUAL
  BOOL areDateComponentsEqual = [self.dateComponents isEqual:other.dateComponents];
#else
  BOOL areDateComponentsEqual = [self doesDateComponents:self.dateComponents
                                     equalDateComponents:other.dateComponents];
#endif
<<<<<<< HEAD
=======
  if (!areDateComponentsEqual) return NO;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  NSTimeZone *tz1 = self.timeZone;
  NSTimeZone *tz2 = other.timeZone;
  BOOL areTimeZonesEqual = (tz1 == tz2 || (tz2 && [tz1 isEqual:tz2]));

<<<<<<< HEAD
  return self.offsetSeconds == other.offsetSeconds
    && self.isUniversalTime == other.isUniversalTime
    && self.milliseconds == other.milliseconds
    && areDateComponentsEqual
    && areTimeZonesEqual;
=======
  return areTimeZonesEqual
    && self.offsetSeconds == other.offsetSeconds
    && self.universalTime == other.universalTime
    && self.milliseconds == other.milliseconds;
}

- (NSUInteger)hash {
  return [[self date] hash];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@ %p: {%@}",
    [self class], self, self.RFC3339String];
}

- (NSTimeZone *)timeZone {
  if (timeZone_) {
    return timeZone_;
  }

<<<<<<< HEAD
  if (self.isUniversalTime) {
=======
  if (self.universalTime) {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
    NSTimeZone *ztz = [NSTimeZone timeZoneWithName:@"Universal"];
    return ztz;
  }

  NSInteger offsetSeconds = self.offsetSeconds;

  if (offsetSeconds != kGTLUndefinedDateComponent) {
    NSTimeZone *tz = [NSTimeZone timeZoneForSecondsFromGMT:offsetSeconds];
    return tz;
  }
  return nil;
}

- (void)setTimeZone:(NSTimeZone *)timeZone {
  [timeZone_ release];
  timeZone_ = [timeZone retain];

  if (timeZone) {
    NSInteger offsetSeconds = [timeZone secondsFromGMTForDate:self.date];
    self.offsetSeconds = offsetSeconds;
  } else {
    self.offsetSeconds = kGTLUndefinedDateComponent;
  }
}

- (NSCalendar *)calendarForTimeZone:(NSTimeZone *)tz {
<<<<<<< HEAD
=======
  static NSMutableDictionary *gCalendarsForTimeZones;

  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    gCalendarsForTimeZones = [[NSMutableDictionary alloc] init];
  });

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSCalendar *cal = nil;
  @synchronized(gCalendarsForTimeZones) {
    id tzKey = (tz ? tz : [NSNull null]);
    cal = [gCalendarsForTimeZones objectForKey:tzKey];
    if (cal == nil) {
#if GTL_NEW_CALENDAR_ENUMS
      NSString *calendarID = NSCalendarIdentifierGregorian;
#else
      NSString *calendarID = NSGregorianCalendar;
#endif
      cal = [[[NSCalendar alloc] initWithCalendarIdentifier:calendarID] autorelease];
      if (tz) {
        [cal setTimeZone:tz];
      }
      [gCalendarsForTimeZones setObject:cal forKey:tzKey];
    }
  }
  return cal;
}

- (NSCalendar *)calendar {
  NSTimeZone *tz = self.timeZone;
  return [self calendarForTimeZone:tz];
}

- (NSDate *)date {
<<<<<<< HEAD
=======
  @synchronized(self) {
    if (cachedDate_) return cachedDate_;
  }

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSDateComponents *dateComponents = self.dateComponents;
  NSTimeInterval extraMillisecondsAsSeconds = 0.0;
  NSCalendar *cal;

  if (!self.hasTime) {
    // We're not keeping track of a time, but NSDate always is based on
    // an absolute time. We want to avoid returning an NSDate where the
    // calendar date appears different from what was used to create our
    // date-time object.
    //
    // We'll make a copy of the date components, setting the time on our
    // copy to noon GMT, since that ensures the date renders correctly for
    // any time zone.
    NSDateComponents *noonDateComponents = [[dateComponents copy] autorelease];
    [noonDateComponents setHour:12];
    [noonDateComponents setMinute:0];
    [noonDateComponents setSecond:0];
    dateComponents = noonDateComponents;
<<<<<<< HEAD
    
=======

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
    NSTimeZone *gmt = [NSTimeZone timeZoneWithName:@"Universal"];
    cal = [self calendarForTimeZone:gmt];
  } else {
    cal = self.calendar;

    // Add in the fractional seconds that don't fit into NSDateComponents.
    extraMillisecondsAsSeconds = ((NSTimeInterval)self.milliseconds) / 1000.0;
  }

  NSDate *date = [cal dateFromComponents:dateComponents];

  // Add in any milliseconds that didn't fit into the dateComponents.
  if (extraMillisecondsAsSeconds > 0.0) {
#if GTL_IPHONE || (MAC_OS_X_VERSION_MIN_REQUIRED > MAC_OS_X_VERSION_10_5)
    date = [date dateByAddingTimeInterval:extraMillisecondsAsSeconds];
#else
    date = [date addTimeInterval:extraMillisecondsAsSeconds];
#endif
  }

<<<<<<< HEAD
=======
  @synchronized(self) {
    [cachedDate_ release];
    cachedDate_ = [date retain];
  }
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return date;
}

- (NSString *)stringValue {
  return self.RFC3339String;
}

- (NSString *)RFC3339String {
<<<<<<< HEAD
=======
  @synchronized(self) {
    if (cachedRFC3339String_) return cachedRFC3339String_;
  }

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  NSDateComponents *dateComponents = self.dateComponents;
  NSInteger offset = self.offsetSeconds;

  NSString *timeString = @""; // timeString like "T15:10:46-08:00"

  if (self.hasTime) {

    NSString *timeOffsetString; // timeOffsetString like "-08:00"

<<<<<<< HEAD
    if (self.isUniversalTime) {
=======
    if (self.universalTime) {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
     timeOffsetString = @"Z";
    } else if (offset == kGTLUndefinedDateComponent) {
      // unknown offset is rendered as -00:00 per
      // http://www.ietf.org/rfc/rfc3339.txt section 4.3
      timeOffsetString = @"-00:00";
    } else {
      NSString *sign = @"+";
      if (offset < 0) {
        sign = @"-";
        offset = -offset;
      }
      timeOffsetString = [NSString stringWithFormat:@"%@%02ld:%02ld",
        sign, (long)(offset/(60*60)) % 24, (long)(offset / 60) % 60];
    }

    NSString *fractionalSecondsString = @"";
    if (self.milliseconds > 0.0) {
      fractionalSecondsString = [NSString stringWithFormat:@".%03ld", (long)self.milliseconds];
    }

    timeString = [NSString stringWithFormat:@"T%02ld:%02ld:%02ld%@%@",
      (long)[dateComponents hour], (long)[dateComponents minute],
      (long)[dateComponents second], fractionalSecondsString, timeOffsetString];
  }

  // full dateString like "2006-11-17T15:10:46-08:00"
  NSString *dateString = [NSString stringWithFormat:@"%04ld-%02ld-%02ld%@",
    (long)[dateComponents year], (long)[dateComponents month],
    (long)[dateComponents day], timeString];

<<<<<<< HEAD
=======
  @synchronized(self) {
    [cachedRFC3339String_ release];
    cachedRFC3339String_ = [dateString retain];
  }
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  return dateString;
}

- (void)setFromDate:(NSDate *)date timeZone:(NSTimeZone *)tz {
  NSCalendar *cal = [self calendarForTimeZone:tz];

#if GTL_NEW_CALENDAR_ENUMS
  NSUInteger const kComponentBits = (NSCalendarUnitYear | NSCalendarUnitMonth
    | NSCalendarUnitDay | NSCalendarUnitHour | NSCalendarUnitMinute
    | NSCalendarUnitSecond);
#else
  NSUInteger const kComponentBits = (NSYearCalendarUnit | NSMonthCalendarUnit
    | NSDayCalendarUnit | NSHourCalendarUnit | NSMinuteCalendarUnit
    | NSSecondCalendarUnit);
#endif

  NSDateComponents *components = [cal components:kComponentBits fromDate:date];
  self.dateComponents = components;

  // Extract the fractional seconds.
  NSTimeInterval asTimeInterval = [date timeIntervalSince1970];
  NSTimeInterval worker = asTimeInterval - trunc(asTimeInterval);
  self.milliseconds = (NSInteger)round(worker * 1000.0);
<<<<<<< HEAD
  
=======

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  self.universalTime = NO;

  NSInteger offset = kGTLUndefinedDateComponent;

  if (tz) {
    offset = [tz secondsFromGMTForDate:date];

    if (offset == 0 && [tz isEqualToTimeZone:[NSTimeZone timeZoneWithName:@"Universal"]]) {
      self.universalTime = YES;
    }
  }
  self.offsetSeconds = offset;

  // though offset seconds are authoritative, we'll retain the time zone
  // since we can't regenerate it reliably from just the offset
  timeZone_ = [tz retain];
}

- (void)setFromRFC3339String:(NSString *)str {
<<<<<<< HEAD
=======
  static NSCharacterSet *gDashSet;
  static NSCharacterSet *gTSet;
  static NSCharacterSet *gColonSet;
  static NSCharacterSet *gPlusMinusZSet;

  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    gDashSet = [[NSCharacterSet characterSetWithCharactersInString:@"-"] retain];
    gTSet = [[NSCharacterSet characterSetWithCharactersInString:@"Tt "] retain];
    gColonSet = [[NSCharacterSet characterSetWithCharactersInString:@":"] retain];
    gPlusMinusZSet = [[NSCharacterSet characterSetWithCharactersInString:@"+-zZ"] retain];
  });
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  NSInteger year = kGTLUndefinedDateComponent;
  NSInteger month = kGTLUndefinedDateComponent;
  NSInteger day = kGTLUndefinedDateComponent;
  NSInteger hour = kGTLUndefinedDateComponent;
  NSInteger minute = kGTLUndefinedDateComponent;
  NSInteger sec = kGTLUndefinedDateComponent;
  NSInteger milliseconds = 0;
  double secDouble = -1.0;
  NSString* sign = nil;
  NSInteger offsetHour = 0;
  NSInteger offsetMinute = 0;

  if ([str length] > 0) {
    NSScanner* scanner = [NSScanner scannerWithString:str];
    // There should be no whitespace, so no skip characters.
    [scanner setCharactersToBeSkipped:nil];

    // for example, scan 2006-11-17T15:10:46-08:00
    //                or 2006-11-17T15:10:46Z
    if (// yyyy-mm-dd
        [scanner scanInteger:&year] &&
        [scanner scanCharactersFromSet:gDashSet intoString:NULL] &&
        [scanner scanInteger:&month] &&
        [scanner scanCharactersFromSet:gDashSet intoString:NULL] &&
        [scanner scanInteger:&day] &&
        // Thh:mm:ss
        [scanner scanCharactersFromSet:gTSet intoString:NULL] &&
        [scanner scanInteger:&hour] &&
        [scanner scanCharactersFromSet:gColonSet intoString:NULL] &&
        [scanner scanInteger:&minute] &&
        [scanner scanCharactersFromSet:gColonSet intoString:NULL] &&
        [scanner scanDouble:&secDouble]) {

      // At this point we got secDouble, pull it apart.
      sec = (NSInteger)secDouble;
      double worker = secDouble - ((double)sec);
      milliseconds = (NSInteger)round(worker * 1000.0);

      // Finish parsing, now the offset info.
      if (// Z or +hh:mm
          [scanner scanCharactersFromSet:gPlusMinusZSet intoString:&sign] &&
          [scanner scanInteger:&offsetHour] &&
          [scanner scanCharactersFromSet:gColonSet intoString:NULL] &&
          [scanner scanInteger:&offsetMinute]) {
      }
    }
  }

  NSDateComponents *dateComponents = [[[NSDateComponents alloc] init] autorelease];
  [dateComponents setYear:year];
  [dateComponents setMonth:month];
  [dateComponents setDay:day];
  [dateComponents setHour:hour];
  [dateComponents setMinute:minute];
  [dateComponents setSecond:sec];

  self.dateComponents = dateComponents;
  self.milliseconds = milliseconds;
<<<<<<< HEAD
  
=======

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  // determine the offset, like from Z, or -08:00:00.0

  self.timeZone = nil;

  NSInteger totalOffset = kGTLUndefinedDateComponent;
  self.universalTime = NO;

<<<<<<< HEAD
  if ([sign caseInsensitiveCompare:@"Z"] == NSOrderedSame) {
=======
  if (sign == nil || [sign caseInsensitiveCompare:@"Z"] == NSOrderedSame) {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

    self.universalTime = YES;
    totalOffset = 0;

<<<<<<< HEAD
  } else if (sign != nil) {
=======
  } else {
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

    totalOffset = (60 * offsetMinute) + (60 * 60 * offsetHour);

    if ([sign isEqual:@"-"]) {

      if (totalOffset == 0) {
        // special case: offset of -0.00 means undefined offset
        totalOffset = kGTLUndefinedDateComponent;
      } else {
        totalOffset *= -1;
      }
    }
  }

  self.offsetSeconds = totalOffset;
}

- (BOOL)hasTime {
  NSDateComponents *dateComponents = self.dateComponents;

  BOOL hasTime = ([dateComponents hour] != kGTLUndefinedDateComponent
                  && [dateComponents minute] != kGTLUndefinedDateComponent);

  return hasTime;
}

- (void)setHasTime:(BOOL)shouldHaveTime {

  // we'll set time values to zero or kUndefinedDateComponent as appropriate
  BOOL hadTime = self.hasTime;

  if (shouldHaveTime && !hadTime) {
    [dateComponents_ setHour:0];
    [dateComponents_ setMinute:0];
    [dateComponents_ setSecond:0];
    milliseconds_ = 0;
    offsetSeconds_ = kGTLUndefinedDateComponent;
    isUniversalTime_ = NO;

  } else if (hadTime && !shouldHaveTime) {
    [dateComponents_ setHour:kGTLUndefinedDateComponent];
    [dateComponents_ setMinute:kGTLUndefinedDateComponent];
    [dateComponents_ setSecond:kGTLUndefinedDateComponent];
    milliseconds_ = 0;
    offsetSeconds_ = kGTLUndefinedDateComponent;
    isUniversalTime_ = NO;
    self.timeZone = nil;
  }
}


@end
