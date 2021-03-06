//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AOSFMFAccountInfo, NSString;

@protocol AOSXPCServerProtocol <NSObject>
- (oneway void)willDeleteiCloudAccountUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)locationAuthorizationForShareMyLocationUsingCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)stopListeningForFMFAppPushUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)startListeningForFMFAppPushInEnvironment:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)renewFMFAccountCredentialsUsingCallback:(void (^)(AOSFMFAccountInfo *, NSError *))arg1;
- (oneway void)retrieveFMFAccountUsingCallback:(void (^)(AOSFMFAccountInfo *, NSError *))arg1;
- (oneway void)retrieveFMF3AccountUsingCallback:(void (^)(AOSFMFAccountInfo *, NSError *))arg1;
- (oneway void)removeLegacyFMFAccountUsingCallback:(void (^)(NSError *))arg1;
- (oneway void)retrieveLegacyFMFAccountUsingCallback:(void (^)(AOSFMFAccountInfo *, NSError *))arg1;
- (oneway void)removeFMFAccountWithUsername:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)addFMFAccount:(AOSFMFAccountInfo *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)didChangeFMFAccountInfo:(NSString *)arg1 usingCallback:(void (^)(NSError *))arg2;
- (oneway void)getiCloudAccountUsingCallback:(void (^)(NSString *, NSString *, NSError *))arg1;
- (oneway void)getStoreAccountUsingCallback:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getFMFDeviceIdUsingCallback:(void (^)(NSString *, NSError *))arg1;
@end

