//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import "SKStoreProductViewControllerDelegatePrivate.h"
#import "SKUIIPhoneProductPageDelegate.h"

@class NSString, SKStoreProductViewController, SKUIIPhoneProductPageViewController, SKUIStorePageViewController, UIViewController;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate>
{
    UIViewController *_activeChildViewController;
    SKUIIPhoneProductPageViewController *_iphoneProductPageViewController;
    SKStoreProductViewController *_remoteProductViewController;
    SKUIStorePageViewController *_storePageViewController;
}

- (void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(BOOL)arg3;
- (void)productViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2;
- (void)_showRemoteViewControllerWithPageDictionary:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_showStorePageWithPageDictionary:(id)arg1;
- (void)_showProductPageWithPageDictionary:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (void)_loadClientContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSection:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

