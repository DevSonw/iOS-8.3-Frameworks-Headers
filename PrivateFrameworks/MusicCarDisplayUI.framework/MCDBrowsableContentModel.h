//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCDBrowsableContentModel : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    NSObject<OS_dispatch_queue> *_imageProcessQueue;
    NSMapTable *_indexPathsToViewControllers;
    NSCache *_fetchedItems;
    NSCache *_resizedImages;
    NSMutableDictionary *_identifiersToIndexPaths;
    NSString *_bundleID;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)_populateImageForItem:(id)arg1;
- (id)_updateFectedItemForIndexPath:(id)arg1 withContentItem:(struct _MRContentItem *)arg2;
- (void)_notifyLoadOfIndexPath:(id)arg1;
- (void)_nowPlayingDidChangeNotifiction:(id)arg1;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_playbackInitiatedNotification:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1;
- (id)listenerForIndexPath:(id)arg1;
- (BOOL)remoteAppIsPlaying;
- (void)getCountOfItemsForIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchChildrenAtIndexPath:(id)arg1 forRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)artworkImageForContentItem:(id)arg1;
- (id)contentItemForIndexPath:(id)arg1;
- (void)loadBrowsableContentForIndexPath:(id)arg1;
- (void)registerListener:(id)arg1 forIndexPath:(id)arg2;
- (void)unregisterListenerAtIndexPath:(id)arg1;
- (id)initWithBundleID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
