//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import "MPUExtrasCarouselViewControllerDataSource.h"
#import "MPUExtrasCarouselViewControllerDelegate.h"
#import "MPUExtrasImageBrowserViewControllerDataSource.h"
#import "MPUExtrasNavigationAnimationControllerProvider.h"
#import "MPUExtrasZoomingImageInteractiveTransitionSource.h"
#import "MPUExtrasZoomingImageTransitionParticipant.h"

@class IKShowcaseTemplate, MPUExtrasCarouselViewController, MPUExtrasImageBrowserViewController, MPUExtrasZoomingImageTransitionController, NSArray, NSDictionary, NSString;

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant>
{
    BOOL _supportsOneupMode;
    MPUExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    MPUExtrasCarouselViewController *_carouselViewController;
    MPUExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    unsigned int _autohighlightIndex;
}

@property(readonly, nonatomic) IKShowcaseTemplate *templateElement;
- (BOOL)showsPlaceholder;
@property(nonatomic) unsigned int autohighlightIndex; // @synthesize autohighlightIndex=_autohighlightIndex;
@property(retain, nonatomic) NSArray *bannerButtonElements; // @synthesize bannerButtonElements=_bannerButtonElements;
- (id)animationControllerForNavigationOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned int)numberOfImagesForBrowserViewController:(id)arg1;
@property(retain, nonatomic) MPUExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController; // @synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *overriddenFullscreenImages; // @synthesize overriddenFullscreenImages=_overriddenFullscreenImages;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned int)arg1;
@property(nonatomic) BOOL supportsOneupMode; // @synthesize supportsOneupMode=_supportsOneupMode;
@property(retain, nonatomic) NSArray *carouselLockupElements; // @synthesize carouselLockupElements=_carouselLockupElements;
@property(retain, nonatomic) MPUExtrasImageBrowserViewController *imageBrowserViewController; // @synthesize imageBrowserViewController=_imageBrowserViewController;
@property(retain, nonatomic) MPUExtrasCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
- (id)_mainChildViewController;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (unsigned int)numberOfItemsInCarouselViewController:(id)arg1;
@property(readonly, nonatomic) unsigned int indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned int)arg2;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned int)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;
- (unsigned int)carouselSize;
- (void)_prepareLayout;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

