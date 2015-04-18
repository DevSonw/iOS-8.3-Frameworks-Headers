//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, WBSCloudHistoryFetchResult, WBSHistory;

@interface WBSCloudHistoryMergeOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WBSHistory *_history;
    WBSCloudHistoryFetchResult *_fetchResult;
    BOOL _mergeStarted;
    NSMutableDictionary *_visitsByVisitIdentifiers;
    NSMutableSet *_redirectChainEarliestVisits;
    NSSet *_tombstones;
    NSMutableDictionary *_tombstonesByURLString;
    NSSet *_existingVisits;
    NSSet *_redirectChainSourceVisits;
}

- (void)_loadTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookUpExistingItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookupRedirectChainSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_mergeVisitsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeDuplicateVisits;
- (void)_filterVisitsByTombstones;
- (void)_buildRedirectChains;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_replayAndAddTombstones;
- (void)mergeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHistory:(id)arg1 fetchResult:(id)arg2;
- (void).cxx_destruct;

@end
