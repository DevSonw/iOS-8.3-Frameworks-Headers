//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface VMUBacktrace : NSObject <NSCopying>
{
    int _flavor;
    struct {
        struct {
            double t_begin;
            double t_end;
            int pid;
            unsigned int thread;
            int run_state;
            unsigned long long dispatch_queue_serial_num;
        } context;
        unsigned long long *frames;
        char *frame_types;
        unsigned int length;
    } _callstack;
}

- (unsigned long long)dispatchQueueSerialNumber;
- (int)threadState;
- (void)setThreadState:(int)arg1;
- (void)setLengthTime:(double)arg1;
- (void)removeTopmostFrame;
- (unsigned long long)topmostFrame;
- (BOOL)hasSameCallstack:(id)arg1;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(BOOL)arg3;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (void)fixupStackWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 taskMemoryCache:(id)arg3;
- (unsigned int)backtraceLength;
- (id)initWithTask:(unsigned int)arg1 thread:(unsigned int)arg2 is64Bit:(BOOL)arg3 taskMemoryCache:(id)arg4;
- (id)initWithSamplingContext:(struct sampling_context_t *)arg1 thread:(unsigned int)arg2;
- (struct _CSTypeRef)_symbolicator;
- (unsigned long long *)backtrace;
- (unsigned int)thread;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStartTime:(double)arg1;
- (id)description;
- (void)dealloc;
- (void)setEndTime:(double)arg1;

@end
