//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUStorePageViewController.h"

@class NSString, SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;
    NSString *_cancelButtonTitle;
    SKProductPageViewController *_productPageViewController;
    BOOL _showsCancelButton;
}

- (void)_storeSheetCancelButtonAction:(id)arg1;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
- (void)handleFailureWithError:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (id)_cancelButtonItem;

@end

