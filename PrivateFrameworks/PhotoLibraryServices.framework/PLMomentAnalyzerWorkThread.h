//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class NSPort;

@interface PLMomentAnalyzerWorkThread : NSThread
{
    NSPort *_dummyPort;
}

- (void)removeDummyPort;
- (void)main;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end

