//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, AVWeakReference, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
}

- (id)track;
- (int)trackID;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)mediaType;
- (BOOL)isPlayable;
- (id)commonMetadata;
- (id)group;
- (id)locale;
- (id)dictionary;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)mediaSubTypes;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (BOOL)displaysNonForcedSubtitles;
- (id)_groupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;

@end
