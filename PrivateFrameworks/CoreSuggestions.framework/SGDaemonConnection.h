//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCInterface, Protocol;

@interface SGDaemonConnection : NSObject
{
    NSString *_machServiceName;
    Protocol *_protocol;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    NSMutableDictionary *_aborts;
    int _abortCounter;
    int _abortLock;
    int _disconnectCount;
    NSXPCConnection *_xpcConnection;
    id _delegate;
}

@property(readonly, retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)sgClientReceivedResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(BOOL)arg3;
- (id)waitUntilReturn:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 xpcInterface:(id)arg3;
- (void)disconnect;
- (void).cxx_destruct;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (void)_finishAllRepliesOnServerDeath;
- (void)_connectToServer;
- (void)cancelRemoteOperation:(unsigned int)arg1;

@end

