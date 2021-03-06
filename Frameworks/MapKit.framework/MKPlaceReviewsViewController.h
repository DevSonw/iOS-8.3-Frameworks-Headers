//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MKPlaceAttributionCellProvider.h"
#import "MKPlaceReviewsViewCheckInWriteCellDelegate.h"
#import "MKStackingViewControllerPreferredSizeUse.h"

@class ABMonogrammer, GEORating, MKMapItem, NSMutableArray, NSMutableDictionary, NSString, _MKPlaceViewController;

@interface MKPlaceReviewsViewController : UITableViewController <MKPlaceReviewsViewCheckInWriteCellDelegate, MKStackingViewControllerPreferredSizeUse, MKPlaceAttributionCellProvider>
{
    NSMutableDictionary *_cachedMaskedImages;
    BOOL _hasAttribution;
    BOOL _showCheckInAndWriteReviewButtons;
    BOOL _showMoreReviewsButton;
    BOOL _showAttribution;
    MKMapItem *_mapItem;
    GEORating *_rating;
    id <MKPlaceCardReviewsControllerDelegate> _reviewsControllerDelegate;
    ABMonogrammer *_monogrammer;
    _MKPlaceViewController *_owner;
    NSMutableArray *_viewDidAppearBlocks;
}

@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) BOOL hasAttribution; // @synthesize hasAttribution=_hasAttribution;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)init;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) GEORating *rating; // @synthesize rating=_rating;
- (void)_showReviewWithID:(id)arg1;
@property(retain, nonatomic) ABMonogrammer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property(nonatomic) BOOL showMoreReviewsButton; // @synthesize showMoreReviewsButton=_showMoreReviewsButton;
@property(nonatomic) BOOL showCheckInAndWriteReviewButtons; // @synthesize showCheckInAndWriteReviewButtons=_showCheckInAndWriteReviewButtons;
- (void)_viewAllReviews;
@property(nonatomic) __weak id <MKPlaceCardReviewsControllerDelegate> reviewsControllerDelegate; // @synthesize reviewsControllerDelegate=_reviewsControllerDelegate;
@property(readonly, nonatomic) BOOL showAttributionButtons;
@property(nonatomic) BOOL showAttribution; // @synthesize showAttribution=_showAttribution;
@property(readonly, nonatomic) BOOL requiresPreferredContentSizeInStackingView;
@property(retain, nonatomic) NSMutableArray *viewDidAppearBlocks; // @synthesize viewDidAppearBlocks=_viewDidAppearBlocks;
- (void)checkInWriteReviewCellDidSelectWriteReview:(id)arg1;
- (void)checkInWriteReviewCellDidSelectCheckIn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

