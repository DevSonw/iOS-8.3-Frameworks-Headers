//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

#import "UIScrollViewDelegate.h"

@class NSString, SBFLockScreenWallpaperParallaxSettings, SBFSubject, UIColor, UIImageView, UIScrollView;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIImageView *_gradientView;
    UIScrollView *_scrollView;
    SBFLockScreenWallpaperParallaxSettings *_parallaxSettings;
    SBFSubject *_scrollViewObserver;
    id <SBFCancelable> _colorBoxCancelToken;
    id <SBFCancelable> _parallaxCancelToken;
    float _minimumZoomScaleForParallax;
    float _minimumZoomScale;
    BOOL _parallaxCanBeEnabledAutomatically;
    UIColor *_averageColor;
}

+ (BOOL)_shouldScaleForParallax;
- (struct CGSize)_imageSize;
@property(readonly) UIColor *averageColor; // @synthesize averageColor=_averageColor;
- (id)_wallpaperImageForAnalysis;
- (void)_cacheImagesIfNeededTreated:(BOOL)arg1;
- (void)_setupContentView;
- (void)_setupSampleImage:(id)arg1 treated:(BOOL)arg2;
- (void)_updateScrollViewZoomScales;
- (void)_updateParallaxForScroll;
- (float)_throttleDuration;
- (void)_setupParallaxObserver;
- (void)_setupColorBoxObserver;
- (void)_setupScrollViewObserver;
- (void)_setupScrollView;
- (struct CGPoint)_maximumContentOffsetForOverhang;
- (struct CGPoint)_minimumContentOffsetForOverhang;
- (float)_scrollViewParallaxFactor;
- (float)_parallaxFactorWithZoomScale:(float)arg1 contentOffset:(struct CGPoint)arg2;
- (struct CGPoint)_boundedContentOffsetForOverhang;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (void)setParallaxEnabled:(BOOL)arg1;
- (float)cropZoomScale;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(float)arg2;
- (void)legibilitySettingsDidChange;
- (struct CGRect)_cropRect;
- (BOOL)supportsCropping;
- (float)parallaxFactor;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (struct CGRect)cropRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

