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
//  GTLDateTimeTest.m
//

#import <XCTest/XCTest.h>

#import "GTLDateTime.h"

@interface GTLDateTimeTest : XCTestCase
@end

@implementation GTLDateTimeTest
<<<<<<< HEAD
- (void)testGTLDateTime {
  const NSCalendarUnit kComponents =
    NSEraCalendarUnit
    | NSYearCalendarUnit
    | NSMonthCalendarUnit
    | NSDayCalendarUnit
    | NSHourCalendarUnit
    | NSMinuteCalendarUnit
    | NSSecondCalendarUnit;

=======

- (void)testGTLDateTime {
  const NSCalendarUnit kComponents = (NSCalendarUnitEra
                                      | NSCalendarUnitYear
                                      | NSCalendarUnitMonth
                                      | NSCalendarUnitDay
                                      | NSCalendarUnitHour
                                      | NSCalendarUnitMinute
                                      | NSCalendarUnitSecond);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  struct DateTimeTestRecord {
    NSString *dateTimeStr;
    NSInteger year;
    NSInteger month;
    NSInteger day;
    NSInteger hour;
    NSInteger minute;
    NSInteger second;
    NSInteger timeZoneOffsetSeconds;
    BOOL isUniversalTime;
    BOOL hasTime;
  };

  struct DateTimeTestRecord tests[] = {
    { @"2006-10-14T15:00:00-01:00", 2006, 10, 14, 15, 0, 0, -60*60, 0, 1 },
    { @"2006-10-14T15:00:00Z", 2006, 10, 14, 15, 0, 0, 0, 1, 1 },
    { @"2006-10-14", 2006, 10, 14, 12, 0, 0, 0, 1, 0 },
    { nil, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
  };

  GTLDateTime *dateTimeFromNil = [GTLDateTime dateTimeWithRFC3339String:nil];
  XCTAssertNil(dateTimeFromNil);

  GTLDateTime *dateTimeFromEmpty = [GTLDateTime dateTimeWithRFC3339String:@""];
<<<<<<< HEAD
  XCTAssertEqual([dateTimeFromEmpty.dateComponents year],
                 (NSInteger) NSUndefinedDateComponent);
=======
  XCTAssertEqual([dateTimeFromEmpty.dateComponents year], NSDateComponentUndefined);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  int idx;
  for (idx = 0; tests[idx].dateTimeStr != nil; idx++) {
    NSString *testString1 = tests[idx].dateTimeStr;
    GTLDateTime *dateTimeOriginal = [GTLDateTime dateTimeWithRFC3339String:testString1];
    // Copy the date to make sure that works and then validate everything on
    // the copy.
    GTLDateTime *dateTime = [[dateTimeOriginal copy] autorelease];
<<<<<<< HEAD
    XCTAssertEqualObjects(dateTimeOriginal, dateTime,
                         @"failed to copy date, original %@ copy %@",
                         dateTimeOriginal, dateTime);
    
=======
    XCTAssertEqualObjects(dateTimeOriginal, dateTime);

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
    NSString *outputString = dateTime.RFC3339String;

    XCTAssertEqualObjects(outputString, testString1,
                         @"failed to recreate string %@ as %@",
                         testString1, outputString);

    NSDate *outputDate = dateTime.date;

    NSCalendar *cal = dateTime.calendar;
    NSDateComponents *outputComponents = [cal components:kComponents
                                                fromDate:outputDate];
<<<<<<< HEAD
    XCTAssertEqual([outputComponents year], tests[idx].year, @"bad year");
    XCTAssertEqual([outputComponents month], tests[idx].month, @"bad month");
    XCTAssertEqual([outputComponents day], tests[idx].day, @"bad day");
    XCTAssertEqual([outputComponents hour], tests[idx].hour, @"bad hour");
    XCTAssertEqual([outputComponents minute], tests[idx].minute, @"bad minute");
    XCTAssertEqual([outputComponents second], tests[idx].second, @"bad second");

    XCTAssertEqual([dateTime.timeZone secondsFromGMT], tests[idx].timeZoneOffsetSeconds, @"bad timezone");
    XCTAssertEqual(dateTime.isUniversalTime, tests[idx].isUniversalTime, @"bad Zulu value");
    XCTAssertEqual(dateTime.hasTime, tests[idx].hasTime, @"bad hasTime value");
=======
    XCTAssertEqual([outputComponents year], tests[idx].year);
    XCTAssertEqual([outputComponents month], tests[idx].month);
    XCTAssertEqual([outputComponents day], tests[idx].day);
    XCTAssertEqual([outputComponents hour], tests[idx].hour);
    XCTAssertEqual([outputComponents minute], tests[idx].minute);
    XCTAssertEqual([outputComponents second], tests[idx].second);

    XCTAssertEqual([dateTime.timeZone secondsFromGMT], tests[idx].timeZoneOffsetSeconds);
    XCTAssertEqual(dateTime.isUniversalTime, tests[idx].isUniversalTime);
    XCTAssertEqual(dateTime.hasTime, tests[idx].hasTime);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  }
}

- (void)testFractionalSeconds {
  // See the note at the top of GTLDateTime for the expected behaviors.
<<<<<<< HEAD
  
=======

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  struct FractionalSecondsTestRecord {
    NSString *input;
    NSString *expected;
  };

  struct FractionalSecondsTestRecord tests[] = {
    // This was a trouble case and called for the round() usage, without round
<<<<<<< HEAD
    // and using a cast, it trucates the double to 734 even though %f prints it
=======
    // and using a cast, it truncates the double to 734 even though %f prints it
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
    // as .735.
    { @"2011-05-03T23:14:20.735Z", @"2011-05-03T23:14:20.735Z" }, // Same in/out
    // Extra digits
    { @"2011-05-03T23:14:20.12345Z", @"2011-05-03T23:14:20.123Z" },
    // Fewer digits
    { @"2011-05-03T23:14:20.12Z", @"2011-05-03T23:14:20.120Z" },
    { @"2011-05-03T23:14:20.1Z", @"2011-05-03T23:14:20.100Z" },
    // Leading zero (make sure we never turn .001 -> .1.
    { @"2011-05-03T23:14:20.001Z", @"2011-05-03T23:14:20.001Z" }, // Same in/out
    { @"2011-05-03T23:14:20.01Z", @"2011-05-03T23:14:20.010Z" },
    // We eat (don't display) fractions of just zeros.
    { @"2011-05-03T23:14:20.000Z", @"2011-05-03T23:14:20Z" },
    { @"2011-05-03T23:14:20.00Z", @"2011-05-03T23:14:20Z" },
    { @"2011-05-03T23:14:20.0Z", @"2011-05-03T23:14:20Z" },
    // Quick test of the other time offset format
    { @"2006-10-14T15:00:00.111-01:00", @"2006-10-14T15:00:00.111-01:00" }, // Same in/out
    // Done
    { nil, nil }
  };
<<<<<<< HEAD
  
  int idx;
  for (idx = 0; tests[idx].input != nil; idx++) {
    NSString *testString = tests[idx].input;
    NSString *expectedString = tests[idx].expected;
    
=======

  for (int idx = 0; tests[idx].input != nil; idx++) {
    NSString *testString = tests[idx].input;
    NSString *expectedString = tests[idx].expected;

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
    GTLDateTime *dateTimeOriginal = [GTLDateTime dateTimeWithRFC3339String:testString];

    // Bounce through a -copy and an NSDate to make sure the fractions of a
    // second make it all the way.
    GTLDateTime *dateTimeCopied = [[dateTimeOriginal copy] autorelease];
<<<<<<< HEAD
    XCTAssertEqualObjects(dateTimeOriginal, dateTimeCopied,
                         @"failed to copy date, original %@ copy %@",
                         dateTimeOriginal, dateTimeCopied);
    NSDate *outputDate = dateTimeCopied.date;
    GTLDateTime *dateTimeFromDate = [GTLDateTime dateTimeWithDate:outputDate
                                                         timeZone:dateTimeCopied.timeZone];
    XCTAssertEqualObjects(dateTimeOriginal, dateTimeFromDate,
                         @"failed to get same date back, original %@ fromDate %@",
                         dateTimeOriginal, dateTimeFromDate);
    
    NSString *outputString = dateTimeFromDate.RFC3339String;

    XCTAssertEqualObjects(outputString, expectedString,
                         @"failed to recreate string %@ as %@",
                         outputString, expectedString);
=======
    XCTAssertEqualObjects(dateTimeCopied, dateTimeOriginal);
    NSDate *outputDate = dateTimeCopied.date;
    GTLDateTime *dateTimeFromDate = [GTLDateTime dateTimeWithDate:outputDate
                                                         timeZone:dateTimeCopied.timeZone];
    XCTAssertEqualObjects(dateTimeFromDate, dateTimeOriginal);

    XCTAssertEqualObjects(dateTimeFromDate.RFC3339String, expectedString);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  }
}

- (void)testTimeZonePreservation {
  NSTimeZone *denverTZ = [NSTimeZone timeZoneWithName:@"America/Denver"];
<<<<<<< HEAD
  NSCalendarDate *date = [NSCalendarDate dateWithYear:2007 month:01 day:01
                                                 hour:01 minute:01 second:01
                                             timeZone:denverTZ];
=======
  NSDate *date = [self dateWithYear:2007
                              month:01
                                day:01
                               hour:01
                             minute:01
                             second:01
                           timeZone:denverTZ];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  GTLDateTime *dateTime = [GTLDateTime dateTimeWithDate:date
                                               timeZone:denverTZ];
  NSTimeZone *testTZ = dateTime.timeZone;
<<<<<<< HEAD
  XCTAssertEqualObjects(testTZ, denverTZ, @"Time zone changed");
=======
  XCTAssertEqualObjects(testTZ, denverTZ);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
}

- (void)testCalendarCaching {
  NSTimeZone *denverTZ = [NSTimeZone timeZoneWithName:@"America/Denver"];
<<<<<<< HEAD
  NSCalendarDate *date = [NSCalendarDate dateWithYear:2007 month:01 day:01
                                                 hour:01 minute:01 second:01
                                             timeZone:denverTZ];
=======
  NSDate *date = [self dateWithYear:2007
                              month:01
                                day:01
                               hour:01
                             minute:01
                             second:01
                           timeZone:denverTZ];
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  GTLDateTime *dateTime = [GTLDateTime dateTimeWithDate:date
                                               timeZone:denverTZ];

  // Test that the calendar instance is cached for the time zone (comparing
  // pointer values.)
  NSTimeZone *denverTZ2 = [NSTimeZone timeZoneWithName:@"America/Denver"];
  GTLDateTime *dateTime2 = [GTLDateTime dateTimeWithDate:date
                                               timeZone:denverTZ2];
<<<<<<< HEAD
  XCTAssertEqual(dateTime2.calendar, dateTime.calendar,
                 @"%@ ≠ %@", dateTime2.calendar, dateTime.calendar);
=======
  XCTAssertEqual(dateTime2.calendar, dateTime.calendar);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

  // RFC3339 strings have offsets but not named time zones.
  NSString *str = [dateTime RFC3339String];
  GTLDateTime *dateTime3 = [GTLDateTime dateTimeWithRFC3339String:str];
  GTLDateTime *dateTime4 = [GTLDateTime dateTimeWithRFC3339String:str];

<<<<<<< HEAD
  XCTAssertEqual(dateTime3.calendar, dateTime4.calendar,
                 @"%@ ≠ %@", dateTime3.calendar, dateTime4.calendar);

  // The timezones don't match, so the calendars should be unique, but the
  // time zone offsets from GMT are the same.
  XCTAssertTrue(dateTime3.calendar != dateTime.calendar,
               @"%@ = %@", dateTime3.calendar, dateTime.calendar);
=======
  XCTAssertEqual(dateTime3.calendar, dateTime4.calendar);

  // The timezones don't match, so the calendars should be unique, but the
  // time zone offsets from GMT are the same.
  XCTAssertNotEqual(dateTime3.calendar, dateTime.calendar);
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
  XCTAssertEqual(dateTime3.calendar.timeZone.secondsFromGMT,
                 (dateTime.calendar.timeZone.secondsFromGMT -
                  (NSInteger)[dateTime.timeZone daylightSavingTimeOffset]));
}

<<<<<<< HEAD
=======
- (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                     day:(NSInteger)day
                    hour:(NSInteger)hour
                  minute:(NSInteger)minute
                  second:(NSInteger)second
                timeZone:(NSTimeZone *)tz {
  NSCalendar *calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
  NSDateComponents *components = [[[NSDateComponents alloc] init] autorelease];
  components.year = year;
  components.month = month;
  components.day = day;
  components.hour = hour;
  components.minute = minute;
  components.second = second;
  components.timeZone = tz;
  NSDate *result = [calendar dateFromComponents:components];
  return result;
}

>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
