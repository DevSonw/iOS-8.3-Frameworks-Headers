//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"
#import "_UIQueuingScrollViewDataSource.h"
#import "_UIQueuingScrollViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>
{
    id <UIPageViewControllerDelegate> _delegate;
    id <UIPageViewControllerDataSource> _dataSource;
    int _transitionStyle;
    int _navigationOrientation;
    int _spineLocation;
    BOOL _doubleSided;
    BOOL _pageControlRequiresValidation;
    NSArray *_viewControllers;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _stashingViewControllersForRotation;
    NSArray *_viewControllersStashedForRotation;
    BOOL _interfaceRotating;
    NSMutableArray *_rotationSnapshotViews;
    int _spineLocationPriorToInterfaceRotation;
    struct UIEdgeInsets _tapRegionInsets;
    struct CGSize _tapRegionBreadths;
    struct UIEdgeInsets _effectiveTapRegionInsets;
    struct CGSize _effectiveTapRegionBreadths;
    struct CGRect *_tapRegions;
    float _pageSpacing;
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSMutableArray *_cachedViewControllersForScroll;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    int _lastKnownNavigationDirection;
    int _disableAutorotationCount;
    struct {
        unsigned int delegateWantsTransitionWillBegin:1;
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateWantsTransitionsFinished:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _delegateFlags;
}

+ (id)_incomingViewControllerKeys;
+ (id)_outgoingViewControllerKeys;
+ (id)stringForSpineLocation:(int)arg1;
+ (BOOL)_isSpineLocation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isNavigationOrientation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSupportedTransitionStyle:(int)arg1;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
@property(readonly, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating; // @synthesize _interfaceRotating;
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
- (void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)_contentSizeForSize:(struct CGSize)arg1;
- (void)_setDisabledScrollingRegion:(struct CGRect)arg1;
- (struct CGRect)_disabledScrollingRegion;
- (void)_setTapRegionBreadths:(struct CGSize)arg1;
- (struct CGSize)_tapRegionBreadths;
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_tapRegionInsets;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
@property(readonly, nonatomic) int spineLocation;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(BOOL)arg3;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
- (void)_flushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_queuingScrollView:(id)arg1 viewBefore:(BOOL)arg2 view:(id)arg3;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)arg1;
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(float *)arg2;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)arg1;
- (BOOL)_shouldBeginNavigationInDirection:(int *)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int *)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int *)arg1 inResponseToVelocity:(float *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (struct CGRect *)_tapRegions;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllerAfterViewController:(id)arg1;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(int)arg2;
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(int)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isCurrentViewControllerStateValid;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (id)_viewControllersForPendingSpineLocation:(int)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange)arg2;
- (struct _NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(int)arg1;
- (void)_sendChildViewWill:(BOOL)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_invalidatePageCurl;
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)arg1;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(BOOL)arg2;
- (void)_childEndAppearanceTransition:(id)arg1;
- (BOOL)_childCanEndAppearanceTransition:(id)arg1;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_child:(id)arg1 beginAppearanceTransition:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_child:(id)arg1 canBeginAppearanceTransition:(BOOL)arg2;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(int)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(int)arg2 fromLocation:(struct CGPoint)arg3 direction:(int)arg4 animated:(BOOL)arg5 notifyDelegate:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (struct CGSize)_effectiveTapRegionBreadths;
- (void)_invalidateEffectiveTapRegions;
- (struct UIEdgeInsets)_effectiveTapRegionInsets;
@property(readonly, nonatomic) int _navigationOrientation;
- (BOOL)_canHandleGestures;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;
@property(nonatomic, setter=_setPageSpacing:) float _pageSpacing;
- (void)_setSpineLocation:(int)arg1;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (void)_pageControlValueChanged:(id)arg1;
- (void)_contentViewFrameOrBoundsDidChange;
@property(readonly, nonatomic) int navigationOrientation;
@property(readonly, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;
- (id)_pageControl;
@property(readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property(readonly, nonatomic) NSArray *viewControllers;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillUnload;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(readonly, nonatomic) int _transitionStyle;
@property(readonly, nonatomic) int transitionStyle;
@property(nonatomic) id <UIPageViewControllerDelegate> delegate;
@property(nonatomic) id <UIPageViewControllerDataSource> dataSource;
@property(readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

