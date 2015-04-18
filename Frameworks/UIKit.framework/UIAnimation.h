//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIAnimation : NSObject
{
    id _target;
    SEL _action;
    id _delegate;
    CDUnknownBlockType _completion;
    struct {
        unsigned int curve:4;
        unsigned int tvOutput:1;
        unsigned int useNSTimer:1;
    } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

- (BOOL)usesNSTimer;
- (void)stopAnimation;
- (float)progressForFraction:(float)arg1;
- (void)markStart:(double)arg1;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completion;
- (void)markStop;
- (float)fractionForTime:(double)arg1;
- (void)setAction:(SEL)arg1;
- (void)setUsesNSTimer:(BOOL)arg1;
- (id)initWithTarget:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setAnimationCurve:(int)arg1;
- (id)target;
- (SEL)action;
- (int)type;
- (void)setDuration:(double)arg1;
- (int)state;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
