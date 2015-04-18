//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface DAAccountMonitor : NSObject
{
    NSHashTable *_accounts;
    NSObject<OS_dispatch_queue> *_accountsQueue;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSHashTable *accounts; // @synthesize accounts=_accounts;
- (id)monitoredAccounts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accountsQueue; // @synthesize accountsQueue=_accountsQueue;
- (void)monitorAccount:(id)arg1;
- (void)unmonitorAccount:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
