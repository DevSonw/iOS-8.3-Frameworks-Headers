//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_UIHostedTextServiceSessionDelegate.h"
#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceDeputyRotationSource.h"
#import "_UIViewServiceDummyPopoverControllerDelegate.h"
#import "_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h"

@class NSArray, NSMutableArray, NSString, UIActionSheet, UIPopoverController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewControllerOneToOneTransitionContext, _UIViewServiceDummyPopoverController;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource>
{
    int _hostPID;
    NSString *_hostBundleID;
    CDStruct_4c969caf _hostAuditToken;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    NSArray *_plugInScenes;
    UIViewController *_localViewController;
    NSString *_presentationControllerClassName;
    _UIHostedWindow *_hostedWindow;
    BOOL _isResigningFirstResponderFromHostNotification;
    BOOL _disableAutomaticKeyboardBehavior;
    UIActionSheet *_hostedActionSheet;
    BOOL _serviceInPopover;
    int _hostStatusBarOrientation;
    float _hostStatusBarHeight;
    NSMutableArray *_deputyRotationDelegates;
    unsigned int _hostAccessibilityServerPort;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _supportedOrientations;
    BOOL _canShowTextServices;
    struct UIEdgeInsets _localViewControllerRequestedInsets;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
    id <_UIViewServiceViewControllerOperatorDelegate> _delegate;
}

+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(CDStruct_4c969caf)arg4;
+ (id)XPCInterface;
- (oneway void)release;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (id)_sessionForStateRestoration:(id)arg1;
- (BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (BOOL)_shouldForwardLegacyRotationOnly;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned int)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8;
- (id)_inputViewsKey;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(CDUnknownBlockType)arg6;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize)arg2 animated:(BOOL)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__textServiceDidDismiss;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
- (id)_appearanceSource;
- (void)__dimmingViewWasTapped;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3;
- (void)__setHostTraitCollection:(id)arg1;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostViewWillTransitionToSize:(struct CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(float)arg3 whenDone:(CDUnknownBlockType)arg4;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(CDUnknownBlockType)arg2;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 traitCollection:(id)arg3 statusBarHeight:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__hostDidPromoteFirstResponder;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostWillEnterForeground;
- (void)__hostDidChangeStatusBarHeight:(float)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(int)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(BOOL)arg9 replyHandler:(CDUnknownBlockType)arg10;
- (void)__setContentSize:(struct CGSize)arg1;
- (id)_queue;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDeputyRotationDelegate:(id)arg1;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (int)__automatic_invalidation_logic;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1;
- (BOOL)_isHostedRootViewController;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_presentationControllerClassName;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewDidLoad;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char *)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (id)_viewControllersForRotationCallbacks;
- (void)setNeedsStatusBarAppearanceUpdate;
- (id)preferredFocusedItem;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
- (BOOL)_canShowTextServices;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)invalidate;
@property(nonatomic) id <_UIViewServiceViewControllerOperatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
