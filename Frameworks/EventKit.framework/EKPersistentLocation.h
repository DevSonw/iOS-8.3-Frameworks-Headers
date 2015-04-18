//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

#import "NSCopying.h"

@class NSNumber, NSString;

@interface EKPersistentLocation : EKPersistentObject <NSCopying>
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
@property(copy, nonatomic) NSString *address;
@property(copy, nonatomic) NSNumber *radius;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title;
- (id)description;
- (id)init;
- (int)entityType;
- (id)alarmOwner;
- (void)setAlarmOwner:(id)arg1;
- (id)calendarItemOwner;
- (void)setCalendarItemOwner:(id)arg1;
@property(copy, nonatomic) NSString *routing;
@property(copy, nonatomic) NSString *addressBookEntityID;

@end
