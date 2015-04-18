//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _UIFocusTouchDebugView : UIView
{
    UIView *_touchView;
    UIView *_boundaryView;
}

- (struct CGRect)_scaleNormalizedRect:(struct CGRect)arg1;
- (struct CGPoint)_scaleNormalizedPoint:(struct CGPoint)arg1;
- (void)hideNavigationBoundary;
- (void)hideCurrentTouch;
- (void)showNavigationBoundaryWithinNormalizedRect:(struct CGRect)arg1;
- (void)showCurrentTouchAtNormalizedPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
