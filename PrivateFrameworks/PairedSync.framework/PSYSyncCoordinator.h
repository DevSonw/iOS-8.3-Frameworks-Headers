//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "PSYActivity.h"
#import "PSYSyncRestrictionProviderDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListener, PSYSyncRestrictionProvider;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYSyncRestrictionProviderDelegate>
{
    NSXPCListener *_listener;
    CDUnknownBlockType _pendingCompletion;
    BOOL _isFullSyncInProgress;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct _opaque_pthread_mutex_t _delegateLock;
    id <PSYSyncCoordinatorDelegate> _delegate;
    PSYSyncRestrictionProvider *_syncRestrictionProvider;
    BOOL _hasStartedListening;
    NSString *_serviceName;
    NSXPCConnection *_connection;
    unsigned int _syncRestriction;
}

+ (id)syncCoordinatorWithServiceName:(id)arg1;
+ (void)initialize;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)reportProgress:(double)arg1;
- (void)syncRestrictionProviderDidChangeRestriction:(id)arg1;
- (oneway void)beginSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exitForTestInput:(id)arg1;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
- (id)defaultsTransactionIDKey;
- (id)defaultsPersistentStateKey;
- (id)defaultsCompletionErrorKey;
- (void)setPersistedCompletionError:(id)arg1;
- (void)setPersistedState:(int)arg1;
- (void)beginDryRunSyncWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)savePersistentState;
- (void)setPersistedTransactionID:(id)arg1;
- (void)clearPersistentState;
- (id)persistedCompletionError;
- (int)persistedState;
- (id)persistedTransactionID;
@property unsigned int syncRestriction; // @synthesize syncRestriction=_syncRestriction;
- (id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2;
- (void)syncDidComplete;
- (void)syncDidFailWithError:(id)arg1;
- (void)syncDidCompleteSending;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithServiceName:(id)arg1;
- (void).cxx_destruct;
- (void)_cleanup;
@property(nonatomic) __weak id <PSYSyncCoordinatorDelegate> delegate;
- (id)progressHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
