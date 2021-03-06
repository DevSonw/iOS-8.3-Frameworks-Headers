//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@interface NNMKMessageContentSyncServiceServer : NNMKSyncServiceEndpoint
{
    id <NNMKMessageContentSyncServiceServerDelegate> _delegate;
}

- (id)notifyInitialContentSyncCompleted:(id)arg1;
- (id)syncImageAttachment:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3;
- (id)syncMessageContent:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
@property(nonatomic) __weak id <NNMKMessageContentSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;

@end

