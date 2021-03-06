//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject
{
    double _firstPingSinceReset;
    double _lastPingSinceReset;
    NSMutableSet *_momentListIdsToProcess;
    double _minimumInterval;
    double _maximumInterval;
}

@property(nonatomic) double maximumInterval; // @synthesize maximumInterval=_maximumInterval;
@property(nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;
- (id)dequeueMomentListIdsForProcessing;
@property(readonly, nonatomic) BOOL shouldProcessWork;
- (void)enqueueMomentListIds:(id)arg1;
@property(readonly, nonatomic) BOOL hasWork;
- (id)init;
- (void)dealloc;

@end

