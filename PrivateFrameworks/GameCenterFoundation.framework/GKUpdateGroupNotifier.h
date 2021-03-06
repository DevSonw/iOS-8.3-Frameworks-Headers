//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

- (oneway void)release;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)updateError:(id)arg1;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) GKUpdateGroup *group; // @synthesize group=_group;
- (id)init;
- (void)dealloc;
- (id)retain;

@end

