//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset;

@interface MPStoreAsset : NSObject
{
    unsigned int _storeAssetType;
    AVAsset *_asset;
}

+ (id)assetForContext:(id)arg1 allowCloudDialogue:(BOOL)arg2;
+ (void)setShouldAlwaysAirPlayFromCloud:(BOOL)arg1;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
@property(nonatomic) unsigned int storeAssetType; // @synthesize storeAssetType=_storeAssetType;

@end

