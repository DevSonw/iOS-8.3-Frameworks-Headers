//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ISOperationDelegate.h"
#import "SUScriptNativeObject.h"

@class NSArray, NSMutableArray, NSString, SUClientInterface, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerScriptProperties, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate>
{
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    BOOL _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    BOOL _showsLibraryButton;
    int _transitionSafetyCount;
    BOOL _shouldAdjustContentOffsets;
}

@property(nonatomic) BOOL shouldAdjustContentOffsets; // @synthesize shouldAdjustContentOffsets=_shouldAdjustContentOffsets;
@property(nonatomic) BOOL showsLibraryButton; // @synthesize showsLibraryButton=_showsLibraryButton;
@property(nonatomic) BOOL shouldInvalidateForMemoryPurge; // @synthesize shouldInvalidateForMemoryPurge=_shouldInvalidateForMemoryPurge;
@property(readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext; // @synthesize _restoredContext;
@property(readonly, nonatomic, getter=_pendingDialogs) NSArray *_pendingDialogs; // @synthesize _pendingDialogs;
@property(readonly, nonatomic) UIViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(readonly, nonatomic, getter=_isEnteringForeground) BOOL _enteringForeground; // @synthesize _enteringForeground=_isEnteringForeground;
@property(readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties; // @synthesize _cachedScriptProperties;
- (void)_reloadLibraryButton;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
@property(retain, nonatomic) UIViewController *inputAccessoryViewController; // @synthesize inputAccessoryViewController=_inputAccessoryViewController;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)handleApplicationURL:(id)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)dismissAfterDialogs;
- (void)cancelOperations;
- (void)operationFinished:(id)arg1;
- (BOOL)clearsWeakScriptReferences;
- (void)_exitStoreButtonAction:(id)arg1;
- (void)invalidateForMemoryPurge;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
@property(readonly, nonatomic, getter=isVisibleAndFrontmost) BOOL visibleAndFrontmost;
- (id)newRotationController;
- (id)_rotationController;
- (void)storePageProtocolDidChange;
@property(nonatomic) BOOL shouldExcludeFromNavigationHistory; // @synthesize shouldExcludeFromNavigationHistory=_excludeFromNavigationHistory;
- (void)_invalidateForMemoryPurge;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_presentFooterAnimationDidStop;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)resetRestoredContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (void)_dialogFinishedNotification:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)reloadContentSizeForViewInPopover;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (int)ITunesStoreUIBarStyle;
- (id)viewControllerFactory;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (id)initWithSection:(id)arg1;
@property(readonly, nonatomic) double defaultPNGExpirationTime;
- (void)setSection:(id)arg1;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (id)inputAccessoryView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)tabBarItem;
@property(readonly, nonatomic) NSString *defaultPNGName;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)_existingNavigationItem;
- (BOOL)_canReloadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)canBecomeFirstResponder;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)becomeFirstResponder;
- (void)applicationDidResume;
- (void)didReceiveMemoryWarning;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)applicationWillSuspend;
- (void)invalidate;
- (int)interfaceOrientation;
@property(readonly, retain, nonatomic) SUNavigationItem *navigationItem; // @dynamic navigationItem;
- (void)reload;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

