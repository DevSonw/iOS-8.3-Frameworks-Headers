//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CalLimitingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (id)queue;
- (void)executeBlock;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;

@end

