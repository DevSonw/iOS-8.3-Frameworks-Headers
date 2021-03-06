//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl
{
    UIImageView *_backgroundImageView;
    UILabel *_explanationLabel;
    UIImageView *_foregroundImageView;
    struct CGSize _hitPadding;
    float _starWidth;
    struct CGPoint _trackingLastPoint;
    struct CGPoint _trackingStartPoint;
    float _value;
}

- (struct CGRect)_foregroundImageClipBounds;
@property(nonatomic) float starWidth; // @synthesize starWidth=_starWidth;
- (void)setHitPadding:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *explanationText;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)sizeToFit;
- (struct CGRect)hitRect;
@property(nonatomic) float value;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (BOOL)canHandleSwipes;
- (void)_updateValueForPoint:(struct CGPoint)arg1;
- (id)_newExplanationLabel;

@end

