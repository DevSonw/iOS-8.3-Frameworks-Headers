//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort
{
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

+ (id)port;
+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
+ (void)resetAllPorts;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;
+ (id)portWithMachPort:(unsigned int)arg1;
- (void)finalize;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)isValid;
- (void)invalidate;
- (id)delegate;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)retain;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long)_cfTypeID;
@property(readonly) unsigned int machPort;

@end
