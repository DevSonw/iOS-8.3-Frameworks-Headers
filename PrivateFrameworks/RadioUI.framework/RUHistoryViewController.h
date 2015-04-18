//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUAudioPreviewViewDelegate.h"
#import "RUHistoryDataSourceDelegate.h"
#import "RUPreviewSessionObserver.h"
#import "RUWishlistDataSourceDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPAVItem, MPMoviePlayerController, NSArray, NSMutableArray, NSString, RUHistoryDataSource, RUPreviewSession, RURadioAdTrack, RUWishlistDataSource, RadioHistoryCategory, SKUICircleProgressIndicator, UIActionSheet, UILabel, UITableView;

@interface RUHistoryViewController : UIViewController <RUAudioPreviewViewDelegate, RUHistoryDataSourceDelegate, RUPreviewSessionObserver, RUWishlistDataSourceDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    UIActionSheet *_confirmationActionSheet;
    NSArray *_historyCategories;
    RUHistoryDataSource *_historyDataSource;
    UILabel *_loadingLabel;
    UILabel *_noHistoryLabel;
    RUPreviewSession *_previewSession;
    MPAVItem *_previewingAVItem;
    RadioHistoryCategory *_previewingHistoryCategory;
    UITableView *_tableView;
    RURadioAdTrack *_videoAdTrack;
    MPMoviePlayerController *_videoAdPreviewMoviePlayerController;
    RUWishlistDataSource *_wishlistDataSource;
    NSMutableArray *_wishlistedTracks;
    id <RUHistoryViewControllerDelegate> _delegate;
    int _historyType;
}

@property(readonly, nonatomic) int historyType; // @synthesize historyType=_historyType;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)wishlistDataSourceDidInvalidate:(id)arg1;
- (void)_clearAction:(id)arg1;
- (unsigned int)_count;
- (void)_updateTableViewRowHeight;
- (void)_videoAdPreviewMoviePlaybackDidFinishNotification:(id)arg1;
- (id)_indexPathForPreviewingItem;
- (BOOL)_isHistoryItem:(id)arg1 effectivelyPlayingWithAVItem:(id)arg2;
- (void)_configureCell:(id)arg1 forRadioTrack:(id)arg2;
- (void)_configureCell:(id)arg1 forAdTrack:(id)arg2;
- (id)_wishlistedTrackAtIndexPath:(id)arg1;
- (void)_endPreviewPlaybackWithOptions:(int)arg1 fadeoutDuration:(double)arg2;
- (void)_updateViewForHistoryChange;
- (void)_refreshWishlistedTracks;
- (void)_refreshHistoryTracks;
- (void)_updateViewForTraitCollectionChange;
- (void)_selectedSegmentIndexDidChangeAction:(id)arg1;
- (id)_newSegmentedControl;
- (void)_reportVideoAdPreviewDidFinishIfNeeded;
- (id)historyDataSource:(id)arg1 viewControllerForPresentingAdTrack:(id)arg2;
- (void)historyDataSourceDidUpdateHistoryCategories:(id)arg1;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(int)arg2;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (BOOL)_isLoading;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
@property(nonatomic) __weak id <RUHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)_doneAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
