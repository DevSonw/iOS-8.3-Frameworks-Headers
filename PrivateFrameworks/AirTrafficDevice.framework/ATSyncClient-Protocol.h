//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSInputStream, NSOutputStream, NSString;

@protocol ATSyncClient <NSObject>
- (void)syncCompletedWithError:(NSError *)arg1;
- (void)resetSyncDataWithCompletion:(void (^)(NSError *))arg1;
- (void)applyChangesForSyncType:(unsigned int)arg1 endpointType:(int)arg2 fromStream:(NSInputStream *)arg3 withSyncParams:(NSDictionary *)arg4 withProgressHandler:(void (^)(unsigned long long, unsigned long long))arg5 withCompletionHandler:(void (^)(NSError *, unsigned long long))arg6;
- (void)getChangesForSyncType:(unsigned int)arg1 endpointType:(int)arg2 afterRevision:(unsigned long long)arg3 upToRevision:(unsigned long long)arg4 withSyncParams:(NSDictionary *)arg5 intoOutputStream:(NSOutputStream *)arg6 withStartHandler:(void (^)(NSDictionary *))arg7 withProgressHandler:(void (^)(unsigned long long, unsigned long long))arg8 withCompletionHandler:(void (^)(NSError *))arg9;
- (NSString *)revisionVersionToken;
- (unsigned long long)currentRevision;
- (BOOL)isEnabled;
- (NSString *)syncDataClass;
- (void)setDelegate:(id <ATSyncClientDelegate>)arg1;
@end

