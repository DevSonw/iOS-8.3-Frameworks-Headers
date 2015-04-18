//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceDelegate.h"
#import "NSStreamDelegate.h"

@class AXHAPacket, AXHARemoteMessage, AXHATimer, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    AXHAPacket *_currentPacket;
    BOOL _didValidateHIID;
    id <AXHARemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    AXHATimer *_communicationTimer;
    NSMutableData *_inputBuffer;
    NSMutableData *_outputBuffer;
    AXHARemoteMessage *_currentMessageInFlight;
}

- (BOOL)isConnected;
- (BOOL)isConnecting;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void)resetConnection;
- (id)initWithService:(id)arg1;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
- (void)acceptConnection:(int)arg1;
- (void)receivedData:(id)arg1;
- (void)clearMessageQueue;
- (void)validatePairedAid;
- (void)messageWasAcked:(id)arg1;
@property(nonatomic) BOOL didValidateHIID; // @synthesize didValidateHIID=_didValidateHIID;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) AXHARemoteMessage *currentMessageInFlight; // @synthesize currentMessageInFlight=_currentMessageInFlight;
- (void)didCommunicate;
- (void)enqueueData:(id)arg1;
- (id)nextMessageInQueue;
- (void)finishedSending:(id)arg1;
- (void)sendDataChunk;
@property(retain, nonatomic) NSMutableArray *outputDataQueue; // @synthesize outputDataQueue=_outputDataQueue;
- (void)setSecuritySettingsForStream:(id)arg1;
@property(retain, nonatomic) AXHATimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
- (void)setupStream:(id)arg1;
- (BOOL)sendObject:(id)arg1;
- (BOOL)isSlave;
- (void)openConnectionIfNecessary;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)closeConnectionWithError:(id)arg1;
- (id)name;
@property(nonatomic) id <AXHARemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;
- (void)netServiceDidPublish:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceWillResolve:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceWillPublish:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
