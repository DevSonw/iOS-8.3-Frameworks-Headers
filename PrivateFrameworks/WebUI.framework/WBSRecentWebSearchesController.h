//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject
{
    NSMutableArray *_recentSearchEntries;
}

+ (id)_defaultsKey;
+ (BOOL)_shouldTrackSearches;
+ (unsigned int)_maximumNumberOfSearchesToTrack;
- (void)clearRecentSearchesAddedAfterDate:(id)arg1;
- (void)addRecentSearch:(id)arg1;
- (id)_recentSearchesDictionaries;
- (id)recentSearchesMatchingPrefix:(id)arg1;
- (void)_loadRecentSearchesIfNeeded;
- (void)_saveRecentSearches;
- (void)_addRecentSearchEntry:(id)arg1;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (void)_removeLegacyRecentSearchesData;
- (void)_addLegacySearch:(id)arg1;
- (void).cxx_destruct;
- (void)clearRecentSearches;
- (id)recentSearches;

@end

