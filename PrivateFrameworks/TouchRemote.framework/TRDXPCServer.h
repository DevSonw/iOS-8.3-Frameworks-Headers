//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    unsigned int _serverStartCount;
}

+ (id)sharedServer;
@property(readonly, nonatomic) NSArray *remoteClientProxies;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)_init;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *connections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

