//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCapture/ICCameraItem.h>

@class NSMutableDictionary, NSString;

@interface ICCameraFile : ICCameraItem
{
    void *_fileProperties;
}

- (void)finalize;
@property long long fileSize;
- (id)metadata;
@property(getter=isRaw) BOOL raw;
- (void)flushThumbnailCache;
- (void)flushMetadataCache;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)overrideOrientation:(unsigned int)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
@property(readonly) BOOL timeLapse;
@property(readonly) BOOL highFramerate;
@property(readonly) BOOL burstFavorite;
@property(readonly) BOOL burstPicked;
@property(readonly) NSString *burstUUID;
@property(readonly) BOOL hasOverriddenOrientation;
@property(retain) NSMutableDictionary *metadata_hidden;
- (void)setHasMetadata:(BOOL)arg1;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
- (void)handleCommandCompletionNotification:(id)arg1;
- (BOOL)hasThumbnail;
- (void)setHasThumbnail:(BOOL)arg1;
- (struct CGImage *)thumbnail;
@property unsigned int orientation;
- (BOOL)hasMetadata;
- (double)duration;
- (id)description;
- (void)dealloc;

@end

