//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject
{
    BOOL _pinned;
    BOOL _inTrash;
    BOOL _customSortAscending;
    BOOL _allowsOverwite;
    BOOL _isFolder;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    int _customSortKey;
    NSString *_customKeyAssetUUID;
    NSMutableOrderedSet *_assetUUIDs;
    PLGenericAlbum *_genericAlbum;
    NSURL *_metadataURL;
}

+ (BOOL)isAlbumMetadataPath:(id)arg1;
+ (BOOL)_isFolderMetadataExtension:(id)arg1;
+ (BOOL)_isAlbumMetadataExtension:(id)arg1;
+ (BOOL)isFolderMetadataPath:(id)arg1;
+ (BOOL)isValidPath:(id)arg1;
@property(retain, nonatomic) PLGenericAlbum *genericAlbum; // @synthesize genericAlbum=_genericAlbum;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5;
@property(nonatomic) BOOL allowsOverwite; // @synthesize allowsOverwite=_allowsOverwite;
@property(retain, nonatomic) NSString *customKeyAssetUUID; // @synthesize customKeyAssetUUID=_customKeyAssetUUID;
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) NSMutableOrderedSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (void)_saveMetadata;
- (void)_readMetadata;
- (id)extensionForKind:(id)arg1;
@property(nonatomic, getter=isInTrash) BOOL inTrash; // @synthesize inTrash=_inTrash;
- (void)removePersistedAlbumData;
- (void)persistAlbumData;
- (id)initWithPLGenericAlbum:(id)arg1;
@property(nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (id)initWithPersistedDataAtPath:(id)arg1;
@property(readonly, nonatomic) BOOL isFolder; // @synthesize isFolder=_isFolder;
@property(retain, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property(retain, nonatomic) NSNumber *kind; // @synthesize kind=_kind;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)init;
- (void)dealloc;

@end

