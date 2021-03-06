//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    double _eventDate;
    NSString *_eventName;
    int _loiType;
    BOOL _isEventAllDay;
    struct {
        unsigned int eventDate:1;
        unsigned int loiType:1;
        unsigned int isEventAllDay:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL hasIsEventAllDay;
@property(nonatomic) BOOL isEventAllDay; // @synthesize isEventAllDay=_isEventAllDay;
@property(nonatomic) BOOL hasEventDate;
@property(nonatomic) double eventDate; // @synthesize eventDate=_eventDate;
@property(readonly, nonatomic) BOOL hasEventName;
@property(nonatomic) BOOL hasLoiType;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

