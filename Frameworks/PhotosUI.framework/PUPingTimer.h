//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PUPingTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _pingCount;
    unsigned int _scheduleId;
    BOOL _everPinged;
    BOOL _nextPingFires;
    BOOL _invalid;
    id _target;
    SEL _action;
    unsigned int _maxPingCount;
    double _timeout;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)ping;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
- (void)invalidate;
@property(readonly, nonatomic) unsigned int pingCount; // @synthesize pingCount=_pingCount;
@property(readonly, nonatomic) unsigned int maxPingCount; // @synthesize maxPingCount=_maxPingCount;
- (void)fireOnNextPing;
- (void)_inqSchedule;
- (void)_inqFireWithScheduleId:(unsigned int)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 maxPingCount:(unsigned int)arg3 timeout:(double)arg4;

@end

