//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSBiometrics : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}

- (void)setAllowed:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEnabled:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setEnabled:(BOOL)arg1 withAuthToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)init;

@end
