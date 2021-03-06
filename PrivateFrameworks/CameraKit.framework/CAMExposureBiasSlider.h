//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMExposureBiasSliderThumb;

@interface CAMExposureBiasSlider : UIView
{
    BOOL _suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CAMExposureBiasSliderThumb *__thumbView;
    UIView *__minTrackView;
    UIView *__maxTrackView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    double __lastInteractionTime;
}

@property(readonly, retain, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property(readonly, retain, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property(readonly, retain, nonatomic) CAMExposureBiasSliderThumb *_thumbView; // @synthesize _thumbView=__thumbView;
- (void)forceTrackDimmed;
@property(nonatomic) BOOL suspendTrackFadeOut; // @synthesize suspendTrackFadeOut=_suspendTrackFadeOut;
@property(readonly, nonatomic) float thumbMaxExtension;
- (void)_dimTrackForInactivity;
- (float)_trackAlpha;
- (void)_animateTrackAlpha:(float)arg1 withDuration:(double)arg2;
@property(nonatomic) float exposureBiasValue; // @synthesize exposureBiasValue=_exposureBiasValue;
@property(nonatomic) float exposureBiasMax; // @synthesize exposureBiasMax=_exposureBiasMax;
@property(nonatomic) float exposureBiasMin; // @synthesize exposureBiasMin=_exposureBiasMin;
- (struct CGPoint)_sunCenterForNormalizedValue:(float)arg1;
- (void)_updateForChangedNormalizedExposureValue;
@property(readonly, nonatomic) double _lastInteractionTime; // @synthesize _lastInteractionTime=__lastInteractionTime;
- (void)_scheduleDelayedDim;
- (void)_cancelDelayedDim;
- (void)updateLastInteractionTime;
- (float)_normalizedExposureValue;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIView *_maxTrackView; // @synthesize _maxTrackView=__maxTrackView;
@property(readonly, retain, nonatomic) UIView *_minTrackView; // @synthesize _minTrackView=__minTrackView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

