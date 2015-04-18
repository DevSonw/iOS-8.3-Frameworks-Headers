//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying>
{
    NSDate *_endDate;
    unsigned int _occurrenceCount;
}

+ (id)recurrenceEndWithOccurrenceCount:(unsigned int)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) BOOL usesEndDate;
- (id)initWithOccurrenceCount:(unsigned int)arg1;
- (id)initWithEndDate:(id)arg1;
@property(readonly, nonatomic) unsigned int occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;

@end
