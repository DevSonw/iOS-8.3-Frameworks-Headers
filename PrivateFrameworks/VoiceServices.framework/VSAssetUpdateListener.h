//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject
{
    BOOL _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;
- (void)removeAssetForLanguage:(id)arg1;
- (BOOL)assetDownloadStatus:(id)arg1 progress:(float *)arg2 size:(long long *)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (void)downloadAssetForLanguage:(id)arg1;
- (void)_updateNextCleanupDate;
- (void)_cancelAssetCleanupTimer;
- (void)_flushLanguageChanges;
- (void)_rescheduleAssetCleanup;
- (void)_scheduleNextCleanupForDate:(id)arg1;
- (void)_cleanupAssets;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)init;
- (void)dealloc;
- (id)_initShared;

@end
