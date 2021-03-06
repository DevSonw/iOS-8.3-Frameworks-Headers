//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController
{
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    float _shadowOpacity;
    float _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    int _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

+ (struct CGSize)defaultOverlaySize;
- (void)_performFlipAction:(id)arg1;
- (BOOL)_isControllerLoaded:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_finishFlipAction:(id)arg1;
- (id)_flipTransition;
- (void)_touchCaptureAction:(id)arg1;
- (void)_setShadowVisible:(BOOL)arg1;
- (void)_applyDisplayProperties;
- (id)_subviewContainerView;
@property(retain, nonatomic) SUMaskProvider *maskProvider;
- (id)_activeViewController;
- (void)_tearDownTouchCaptureView;
- (void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2;
- (void)_applyOverlayConfiguration:(id)arg1;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)viewWillDismissWithTransition:(id)arg1;
- (void)_overlayActionDidFinish;
@property(readonly, nonatomic, getter=isOnFront) BOOL onFront;
- (void)_overlayAnimationDidFinish;
@property(retain, nonatomic) SUOverlayTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;
- (void)_enqueueAction:(id)arg1;
- (void)imagePageViewTapped:(id)arg1;
@property(retain, nonatomic) SUScriptFunction *shouldDismissFunction; // @synthesize shouldDismissFunction=_shouldDismissFunction;
@property(nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(retain, nonatomic) UIViewController *frontViewController; // @synthesize frontViewController=_frontViewController;
@property(nonatomic) BOOL canSwipeToDismiss; // @synthesize canSwipeToDismiss=_canSwipeToDismiss;
@property(retain, nonatomic) UIViewController *backViewController; // @synthesize backViewController=_backViewController;
- (void)flipWithTransition:(id)arg1;
@property(readonly, nonatomic) UIViewController *activeViewController;
- (void)_performNextAction;
- (void)invalidateForMemoryPurge;
- (BOOL)shouldExcludeFromNavigationHistory;
@property(readonly, nonatomic, getter=isActiveOverlay) BOOL activeOverlay;
- (void)setScriptWindowContext:(id)arg1;
- (id)scriptWindowContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)init;
- (void)dealloc;

@end

