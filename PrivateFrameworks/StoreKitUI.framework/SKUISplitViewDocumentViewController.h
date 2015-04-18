//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIDocumentViewController.h"
#import "SKUINavigationDocumentDelegate.h"

@class NSString, SKUINavigationDocumentController, SKUISplitViewTemplateElement, UISplitViewController, UIViewController;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController>
{
    UIViewController *_delayingPresentationViewController;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)_defaultBackgroundColor;
- (void)_skui_endDelayingPresentation;
- (BOOL)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void).cxx_destruct;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
