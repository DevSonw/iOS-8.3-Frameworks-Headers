//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

#import "VKTileSourceClient.h"

@class NSString, VKTileCache, VKTileKeyList, VKTileKeyMap, VKTileSource, VKTrafficDynamicTileSource;

@interface VKTrafficTileSource : VKTileSetBackedTileSource <VKTileSourceClient>
{
    VKTileKeyList *_building;
    VKTileKeyMap *_pendingTraffic;
    VKTileSource *_roadTileSource;
    VKTrafficDynamicTileSource *_dynamicTileSource;
    VKTileCache *_recentTrafficTiles;
}

- (void)sawTileForKey:(const struct VKTileKey *)arg1;
- (BOOL)canFetchTrafficTileForKey:(const struct VKTileKey *)arg1;
- (void)_generatedTraffic:(id)arg1;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const CDStruct_aca18c62 *)arg2 level:(int)arg3;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (BOOL)tileSourceMayUseNetwork:(id)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned int)arg2;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
@property(retain, nonatomic) VKTileSource *roadTileSource; // @synthesize roadTileSource=_roadTileSource;
- (void)clearCaches;
- (id)initWithSkeletonTileSet:(id)arg1 dynamicTileSet:(id)arg2 resourceManifestConfiguration:(id)arg3 locale:(id)arg4;
- (void)setSharedResources:(id)arg1;
- (int)maximumZoomLevel;
- (void)setStyleManager:(id)arg1;
- (void)setContentScale:(float)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

