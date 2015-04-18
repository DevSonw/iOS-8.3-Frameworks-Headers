//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NNMKSyncServiceEndpoint : NSObject <IDSServiceDelegate>
{
    BOOL _isConnected;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    IDSService *_idsService;
    NSString *_idsServiceName;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
}

@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer; // @synthesize repeatPreventionCleanupTimer=_repeatPreventionCleanupTimer;
@property(retain, nonatomic) NSMutableDictionary *repeatPreventionRecords; // @synthesize repeatPreventionRecords=_repeatPreventionRecords;
@property(retain, nonatomic) NSString *idsServiceName; // @synthesize idsServiceName=_idsServiceName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
- (void)resetRepeatPreventionHistory;
- (void)_handleConnectivityChange;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned int)arg2;
- (BOOL)_willIdRepeat:(id)arg1;
- (id)_sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 shortTimeout:(BOOL)arg4;
- (void)_removeExpiredRepeatPreventionRecords;
- (void)connectivityChanged;
- (id)sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 repeatPreventionId:(id)arg4 shortTimeout:(BOOL)arg5;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)sendProtobufData:(id)arg1 type:(unsigned int)arg2 priority:(unsigned int)arg3 shortTimeout:(BOOL)arg4;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;
- (BOOL)_isConnected;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
