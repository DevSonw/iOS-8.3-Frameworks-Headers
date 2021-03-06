//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying>
{
    AVVideoCompositionInternal *_videoComposition;
}

+ (void)initialize;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
- (void)finalize;
@property(readonly, copy, nonatomic) NSArray *instructions;
- (void)setInstructions:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)dealloc;
- (id)instructionForFigInstruction:(void *)arg1;
- (id)_postProcessingVideoLayer;
- (void)_bumpChangeSeed;
- (void)setAnimationTool:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize)arg1;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
@property(readonly, nonatomic) Class customVideoCompositorClass;
- (void)setBuiltInCompositorName:(id)arg1;
- (id)builtInCompositorName;
- (id)_postProcessingVideoLayers;
- (int)_auxiliaryTrackID;
- (id)_postProcessingRootLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (BOOL)isValidForAsset:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 validationDelegate:(id)arg3;
- (unsigned int)_changeSeed;
@property(readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
- (id)_serializableInstructions;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration;
- (BOOL)_copyFigVideoCompositor:(const void **)arg1 andSession:(id *)arg2 recyclingSession:(id)arg3 forFigRemaker:(BOOL)arg4 error:(id *)arg5;
@property(readonly, nonatomic) float renderScale;
- (BOOL)_isValidReturningExceptionReason:(id *)arg1;
@property(readonly, nonatomic) struct CGSize renderSize;

@end

