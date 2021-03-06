//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUFlushable.h"

@class NSObject<NSLocking>, NSString, OITSUFlushingManager;

@interface OITSUFlushableObject : NSObject <TSUFlushable>
{
    int _retainCount;
    int _ownerCount;
    OITSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (id)ownerAutoreleasedAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (BOOL)hasFlushableContent;
- (void)ownerDidAccess;
- (void)ownerWillAccess;
- (void)unload;
- (void)flush;
- (unsigned int)retainCount;
- (id)init;
- (void)dealloc;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

