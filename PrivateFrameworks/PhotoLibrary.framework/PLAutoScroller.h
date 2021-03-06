//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UIScrollView;

@interface PLAutoScroller : NSObject
{
    UIScrollView *_targetScrollView;
    struct CGPoint _targetPoint;
    float _thresholdDistance;
    NSTimer *_autoscrollTimer;
}

@property(readonly) float thresholdDistance; // @synthesize thresholdDistance=_thresholdDistance;
- (id)initWithTargetScrollView:(id)arg1 thresholdDistance:(float)arg2;
- (void)_updateAutoscrollTimer:(id)arg1;
@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=_targetPoint;
- (void)_stopAutoscrollTimer;
- (id)init;
- (void)dealloc;
- (void)stopAndInvalidate;

@end

