//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface PKUsageNotificationServer : NSObject
{
    NSXPCConnection *_connection;
}

- (void)notifyPassUsed:(id)arg1 fromSource:(int)arg2;
- (id)init;
- (void)dealloc;

@end

