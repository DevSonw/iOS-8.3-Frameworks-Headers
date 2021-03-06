//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWNode.h>

@class BWPixelBufferPool;

@interface BWPixelTransferNode : BWNode
{
    int _cropMode;
    int _liveCropMode;
    struct CGRect _inputCropRect;
    struct CGRect _liveInputCropRect;
    BOOL _haveLiveInputCropRect;
    BOOL _passesBuffersThroughWhenPossible;
    BOOL _livePassesBuffersThroughWhenPossible;
    int _rotationDegrees;
    int _liveRotationDegrees;
    BOOL _flipHorizontal;
    BOOL _liveFlipHorizontal;
    BOOL _flipVertical;
    BOOL _liveFlipVertical;
    BOOL _liveZeroFillBuffers;
    BOOL _lowSpeed;
    BOOL _liveLowSpeed;
    unsigned long _outputWidth;
    unsigned long _outputHeight;
    unsigned long _outputPixelFormat;
    struct OpaqueVTImageRotationSession *_rotationSession;
    int _rotationSessionRotationDegrees;
    BOOL _rotationSessionFlipHorizontal;
    BOOL _rotationSessionFlipVertical;
    BOOL _rotationSessionZeroFillBuffers;
    BOOL _rotationSessionLowSpeed;
    struct OpaqueVTPixelTransferSession *_transferSession;
    BWPixelBufferPool *_intermediateBufferPool;
    CDStruct_79c71658 _intermediatePoolDimensions;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    BOOL _makeCurrentConfigurationLiveOnNextRenderCallback;
}

+ (void)initialize;
- (BOOL)lowSpeed;
- (BOOL)flipVertical;
- (BOOL)flipHorizontal;
- (struct CGRect)inputCropRect;
- (int)cropMode;
- (id)_preferredPixelFormatsWithInputPixelFormatFirst;
- (id)_preferredPixelFormats;
- (void)_ensureRotationSession;
- (void)_ensureTransferSession;
- (long)_ensureIntermediatePoolWithDimensions:(CDStruct_79c71658)arg1;
- (CDStruct_79c71658)_intermediateBufferDimensionsForInputDimensions:(CDStruct_79c71658)arg1 outputDimensions:(CDStruct_79c71658)arg2;
- (BOOL)_emitIfMarkerBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_makeCurrentConfigurationLive;
- (BOOL)_zeroFillBuffers;
- (void)_updateOutputRequirements;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (void)setLowSpeed:(BOOL)arg1;
- (void)setInputCropRect:(struct CGRect)arg1;
- (unsigned long)outputPixelFormat;
- (void)setFlipVertical:(BOOL)arg1;
- (void)setFlipHorizontal:(BOOL)arg1;
- (void)setRotationDegrees:(int)arg1;
- (void)setOutputPixelFormat:(unsigned long)arg1;
- (void)setCropMode:(int)arg1;
- (BOOL)passesBuffersThroughWhenPossible;
- (void)setPassesBuffersThroughWhenPossible:(BOOL)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)nodeType;
- (int)rotationDegrees;
- (id)init;
- (void)dealloc;
- (unsigned long)outputHeight;
- (unsigned long)outputWidth;
- (void)setOutputHeight:(unsigned long)arg1;
- (void)setOutputWidth:(unsigned long)arg1;

@end

