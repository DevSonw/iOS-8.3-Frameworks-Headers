//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSMutableArray, NSMutableData, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate>
{
    NSString *_remoteServiceName;
    NSString *_localServiceName;
    BOOL _connected;
    NSMutableData *_dataReceived;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    BOOL _shouldSendHello;
    BOOL _readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    CDUnknownBlockType _receiveDataHandler;
    CDUnknownBlockType _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

+ (void)checkConstants;
+ (unsigned int)sendDataLimit;
+ (unsigned int)receiveDataLimit;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)syncAcceptedConnection;
- (void)syncSendAccept;
- (BOOL)shouldDecideAboutConnection;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
@property(copy, nonatomic) NSString *remoteServiceName; // @synthesize remoteServiceName=_remoteServiceName;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncCloseConnectionNow;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendHello;
@property(copy, nonatomic) NSString *localServiceName; // @synthesize localServiceName=_localServiceName;
@property(nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler; // @synthesize connectedHandler=_connectedHandler;
@property(nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (id)initWithLocalServiceName:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler; // @synthesize receiveDataHandler=_receiveDataHandler;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)attachInputStream:(id)arg1 outputStream:(id)arg2;
- (void)connectToNetService:(id)arg1;
- (void)syncHandleOutputStreamEvent:(unsigned int)arg1;
- (void)syncHandleInputStreamEvent:(unsigned int)arg1;
- (id)stringForStreamEventCode:(unsigned int)arg1;
- (void)syncReadFromInputStream;
- (void)syncAppendDataToSend:(id)arg1;
- (void)setupInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncSendData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

