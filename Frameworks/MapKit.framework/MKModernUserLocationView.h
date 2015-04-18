//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView
{
    CALayer *_innerCircleLayer;
    BOOL _shouldInnerPulse;
    struct UIImage *_innerImageMask;
    BOOL _rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
    CALayer *_baseDimmingLayer;
}

+ (float)innerDiameter;
+ (float)baseDiameter;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_dealloc;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
@property(nonatomic) BOOL rotateInnerImageToMatchCourse; // @synthesize rotateInnerImageToMatchCourse=_rotateInnerImageToMatchCourse;
@property(retain, nonatomic) UIImage *innerImageMask; // @synthesize innerImageMask=_innerImageMask;
@property(nonatomic) BOOL shouldInnerPulse; // @synthesize shouldInnerPulse=_shouldInnerPulse;
- (void)_updateInnerCourseRotation;
- (struct CGColor *)_accuracyFillColor;
- (id)_baseDimmingLayer;
- (void)_updatePulseColor;
- (void)_updateInnerImage;
- (void)_updateBaseImage;
- (void)_updatePulseAnimation;
- (id)_innerPulseAnimation;
- (void)_updateAccuracyColors;
- (void)_updateInnerMaskLayer;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)_baseLayer;
- (struct UIImage *)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint *)arg2;
- (id)_animationToSynchronizePulse:(id *)arg1;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;

@end
