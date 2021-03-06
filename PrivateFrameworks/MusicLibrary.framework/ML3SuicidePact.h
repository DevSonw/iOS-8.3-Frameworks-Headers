//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ML3SuicidePact : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

+ (id)sharedPact;
- (void)execute;
- (BOOL)isSignedForReason:(int)arg1;
- (void)secedeForReason:(int)arg1;
- (void)_carryOutSuicidePact;
- (void)signForReason:(int)arg1;
@property(readonly, nonatomic) BOOL isSigned;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

