//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface UIMovieScrubberTrackOverlayView : UIView
{
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    unsigned int _editing:1;
    unsigned int _zoomed:1;
}

- (void)_updateRightFill;
- (void)_updateLeftFill;
- (void)_clampValueAndLayout;
- (void)setIsZoomed:(BOOL)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setStartValue:(double)arg1;
- (void)animateFillFramesAway;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setValue:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

