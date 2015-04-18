//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject
{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultCache;
    unsigned int _cachedQueriesLimit;
    unsigned int _cachedResultsLimit;
}

@property(readonly, nonatomic) NSArray *allCachedResultIdentifiers;
@property(readonly, nonatomic) NSArray *allCachedQueries;
- (id)initWithCachedQueriesLimit:(unsigned int)arg1 cachedResultsLimit:(unsigned int)arg2;
- (void)cacheResult:(id)arg1;
- (id)resultForIdentifier:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (id)resultSetForQuery:(id)arg1;
- (void).cxx_destruct;

@end
