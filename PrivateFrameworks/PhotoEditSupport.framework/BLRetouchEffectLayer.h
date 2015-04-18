//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoEditSupport/BLRetouchLayer.h>

@class NSMutableArray;

@interface BLRetouchEffectLayer : BLRetouchLayer
{
    struct CGRect _area;
    BOOL _startFilled;
    NSMutableArray *_brushStrokes;
    BOOL _strokeInProgress;
    CDStruct_76a42933 _samplePixel;
    float _edgeDetectSize;
    struct CGContext *_edgeDetectContextRef;
    struct CGContext *_layerMask;
    float _amount;
}

@property(readonly, nonatomic) BOOL strokeInProgress; // @synthesize strokeInProgress=_strokeInProgress;
@property(nonatomic) struct CGContext *layerMask; // @synthesize layerMask=_layerMask;
- (void)fillMask;
- (void)clearMask;
- (struct CGImage *)newMaskImage;
- (BOOL)solidBrush;
- (void)strokeDidFinish;
- (struct CGRect)drawBrushAtLocation:(struct CGPoint)arg1 opacity:(float)arg2 erase:(BOOL)arg3 magicEdges:(BOOL)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6;
- (struct CGRect)doDrawBrushAtLocation:(struct CGPoint)arg1 opacity:(float)arg2 erase:(BOOL)arg3 magicEdges:(BOOL)arg4 brushSize:(float)arg5 brushSoftness:(float)arg6 firstPoint:(BOOL)arg7;
- (struct CGContext *)edgeDetectContextRefForSize:(float)arg1;
- (struct CGImage *)newImageFromContextWithEffect:(struct CGContext *)arg1;
- (BOOL)isAffectingOutput;
- (void)performFill;
- (void)fillMaskWithValue:(float)arg1;
- (struct CGRect)maskFrame;
- (BOOL)hasAmount;
@property(copy, nonatomic) NSMutableArray *brushStrokes;
- (void)releaseMask;
- (struct CGContext *)newContextWithEffect:(struct CGContext *)arg1;
- (void)setLayerData:(id)arg1;
- (id)layerData;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(float)arg3;
@property(nonatomic) struct CGRect area; // @synthesize area=_area;
- (BOOL)hasLayerMask;
@property(nonatomic) float amount; // @synthesize amount=_amount;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (struct CGRect)imageFrame;

@end
