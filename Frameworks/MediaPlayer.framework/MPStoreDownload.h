//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, SSDownload, SSPurchase, SSPurchaseResponse;

@interface MPStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_attributes;
    BOOL _canceled;
    NSMutableArray *_overridePhaseIdentifiers;
    SSDownload *_SSDownload;
    SSPurchase *_SSPurchase;
    SSPurchaseResponse *_SSPurchaseResponse;
    int _type;
}

+ (id)storeDownloadForCompletionOffering:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadForStoreItemOffer:(id)arg1 attributes:(id)arg2;
+ (id)_storeDownloadForCompletionOffer:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 URLBagKeyOverride:(id)arg5;
+ (id)_storeDownloadForContext:(id)arg1 type:(int)arg2 attributes:(id)arg3;
+ (id)storeDownloadsForContexts:(id)arg1 type:(int)arg2 attributes:(id)arg3;
@property(readonly, nonatomic, getter=isPaused) BOOL paused;
@property(readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property(readonly, nonatomic, getter=isFinished) BOOL finished;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) double percentComplete;
- (id)description;
- (void)_removeOverridePhaseIdentifier:(id)arg1;
- (void)_addOverridePhaseIdentifier:(id)arg1;
- (void)_setSSDownload:(id)arg1;
- (void)_setCanceled:(BOOL)arg1;
@property(readonly, nonatomic) NSError *purchaseError;
@property(readonly, nonatomic) unsigned long long libraryItemIdentifier;
@property(readonly, nonatomic, getter=isRestore) BOOL restore;
- (id)_currentOverridePhaseIdentifier;
- (id)_valueForDownloadProperty:(id)arg1;
- (id)_SSPurchase;
- (id)_SSPurchaseResponse;
- (BOOL)_isCanceled;
@property(readonly, nonatomic) long long bytesTotal;
@property(readonly, nonatomic) long long bytesDownloaded;
- (id)_SSDownload;
- (void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2;
- (id)initWithType:(int)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) long long storeItemIdentifier;
@property(readonly, nonatomic, getter=isPurchasing) BOOL purchasing;
@property(readonly, nonatomic) NSString *phaseIdentifier;
@property(readonly, nonatomic) long long downloadSizeLimit;
- (id)assetsForType:(id)arg1;
@property(readonly, nonatomic) long long downloadIdentifier;
@property(readonly, nonatomic) NSError *failureError;

@end

