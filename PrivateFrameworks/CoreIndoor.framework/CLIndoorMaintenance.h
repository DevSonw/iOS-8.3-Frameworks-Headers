//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreIndoor/CLIndoorXPCProvider.h>

#import "CLIndoorXPCProviderImplementation.h"

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>
{
}

- (void)withinQueueReinitializeRemoteState;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;
- (id)endpointName;
- (id)remoteObjectProtocol;
- (void)withinQueueInvalidateState;
- (void)onQueueShutdown;
- (void)onQueueEraseEverything:(CDUnknownBlockType)arg1;
- (void)eraseEverything;
- (void)onQueuePrefetch:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)prefetch:(id)arg1;
- (void)doSynchronousXPC:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)shutdown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
