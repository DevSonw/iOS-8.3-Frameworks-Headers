//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying>
{
    CDStruct_b0fa4487 _dateGr;
    double _dateAbs;
    EKTimeZone *_timeZone;
    unsigned int _flags;
}

+ (id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
+ (id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2;
- (int)secondsFromGMT;
- (id)components;
- (id)earlierDate:(id)arg1;
- (id)laterDate:(id)arg1;
- (unsigned int)weekOfYear;
- (unsigned int)day;
- (unsigned int)month;
- (unsigned int)year;
- (double)second;
- (unsigned int)minute;
- (id)timeZone;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hour;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (int)compare:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)calendarDateForYear;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfWeekWithWeekStart:(long)arg1;
- (id)calendarDateForWeekWithWeekStart:(long)arg1;
- (id)calendarDateForEndOfDay;
- (unsigned int)weeksInYear;
- (unsigned int)daysInYear;
- (unsigned int)dayOfYear;
- (long)dayOfWeek;
- (int)differenceInDays:(id)arg1;
- (int)differenceInMonths:(id)arg1;
- (int)differenceInYears:(id)arg1;
- (id)calendarDateWithDate:(id)arg1;
- (id)calendarDateInTimeZone:(id)arg1;
- (id)calendarDateByAddingYears:(int)arg1;
- (id)calendarDateByAddingMonths:(int)arg1;
- (id)calendarDateByAddingWeeks:(int)arg1;
- (id)componentsWithoutTime;
- (id)initWithAbsoluteTime:(double)arg1 internalTimeZone:(id)arg2;
- (unsigned int)daysInMonth;
- (id)calendarDateForWeekWithWeekStart:(long)arg1 daysSinceWeekStart:(int *)arg2;
- (CDStruct_6e43267c)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 internalTimeZone:(id)arg2;
- (id)componentsIncludingTime:(BOOL)arg1;
- (id)initWithDateComponents:(id)arg1 timeZone:(id)arg2;
- (id)initWithGregorianDate:(CDStruct_b0fa4487)arg1 timeZone:(id)arg2;
- (id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2;
- (id)calendarDateByAddingDays:(int)arg1;
- (CDStruct_b0fa4487)gregorianDate;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (double)absoluteTime;
- (id)calendarDateByAddingGregorianUnits:(CDStruct_6e43267c)arg1;
- (id)calendarDateForDay;

@end
