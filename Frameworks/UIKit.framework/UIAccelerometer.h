//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager;

@interface UIAccelerometer : NSObject
{
    double _updateInterval;
    id <UIAccelerometerDelegate> _delegate;
    struct {
        unsigned int delegateDidAccelerate:1;
        unsigned int reserved:31;
    } _accelerometerFlags;
    CMMotionManager *_motionManager;
}

+ (id)sharedAccelerometer;
- (void)_stopAccelerometer;
- (void)_startAccelerometerIfNecessary;
- (id)_motionManager;
- (void)_didSuspend:(id)arg1;
- (void)_willResume:(id)arg1;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
@property(nonatomic) id <UIAccelerometerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

