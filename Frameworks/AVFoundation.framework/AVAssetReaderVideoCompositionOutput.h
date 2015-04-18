//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (void)finalize;
- (id)mediaType;
- (id)description;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSDictionary *videoSettings;
- (void)_setVideoComposition:(id)arg1;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
@property(readonly, nonatomic) NSArray *videoTracks;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)alwaysCopiesSampleData;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (id)_errorForOSStatus:(long)arg1;
@property(readonly, nonatomic) id <AVVideoCompositing> customVideoCompositor;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (id)_asset;

@end
