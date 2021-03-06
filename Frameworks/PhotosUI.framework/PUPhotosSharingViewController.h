//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHAssetCollectionDataSource.h"
#import "PLDismissableViewController.h"
#import "PUActivityViewControllerDelegate.h"
#import "PUPhotoLibraryUIChangeObserver.h"
#import "PUPhotosSharingCollectionViewLayoutDelegate.h"
#import "PUPhotosSharingTransitionViewController.h"
#import "PUScrollViewSpeedometerDelegate.h"
#import "PUTransitionViewAnimatorDelegate.h"
#import "UIActivityViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PUActivityViewController, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUPhotosZoomingSharingGridCell, PUScrollViewSpeedometer, PUTransitionViewAnimator, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer, UIView;

@interface PUPhotosSharingViewController : UIViewController <PLDismissableViewController, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PUPhotoLibraryUIChangeObserver, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource>
{
    PUScrollViewSpeedometer *_speedometer;
    NSMutableDictionary *_resultsForAssetCollection;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSIndexPath *_inFlightReferenceIndexPath;
    float _cachedEmbeddedActivityViewHeight;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _shouldScrollToSelection;
    BOOL _didAttemptShareViaAirDrop;
    BOOL _inFlightRotation;
    BOOL __viewInSyncWithModel;
    BOOL _lockScreenCamera;
    PHFetchResult *_photoCollectionsFetchResult;
    NSPredicate *_filterPredicate;
    PUPhotoSelectionManager *_photoSelectionManager;
    id <PUPhotosSharingViewControllerDelegate> _delegate;
    PUPhotosSharingViewControllerSpec *_spec;
    UICollectionView *_mainCollectionView;
    UIView *_embeddedActivityView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PHCachingImageManager *__cachingImageManager;
    NSMutableSet *__preheatedAssets;
    PUActivityViewController *__embeddedActivityViewController;
    PUActivityViewController *__unembeddedActivityViewController;
    UICollectionViewLayout *__transitionLayout;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    PHAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    CDUnknownBlockType __pptOnDidEndScrollingBlock;
    struct CGRect __previousPreheatRect;
}

@property(readonly, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void)_next:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
@property(retain, nonatomic, setter=_setEmbeddedActivityViewController:) PUActivityViewController *_embeddedActivityViewController; // @synthesize _embeddedActivityViewController=__embeddedActivityViewController;
- (void).cxx_destruct;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <PUPhotosSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
@property(nonatomic, getter=isLockScreenCamera) BOOL lockScreenCamera; // @synthesize lockScreenCamera=_lockScreenCamera;
@property(retain, nonatomic) PUPhotosSharingViewControllerSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
- (id)ppt_scrollView;
- (void)ppt_faultInScollViewContentSize;
- (BOOL)ppt_scrollToAssetAtRelativeIndex:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResults:(id)arg2 filterPredicate:(id)arg3 selection:(id)arg4;
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;
- (id)transitionCollectionView;
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(float *)arg3;
@property(copy, nonatomic, setter=_pptSetOnDidEndScrollingBlock:) CDUnknownBlockType _pptOnDidEndScrollingBlock; // @synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock;
- (void)_updatePreheatedAssets;
@property(retain, nonatomic, setter=_setPhotoZoomPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer; // @synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer;
- (void)_handlePhotoPinch:(id)arg1;
@property(nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) BOOL _viewInSyncWithModel; // @synthesize _viewInSyncWithModel=__viewInSyncWithModel;
- (void)_updateEmbeddedActivityViewAppearance;
@property(retain, nonatomic, setter=_setEmbeddedActivityView:) UIView *embeddedActivityView; // @synthesize embeddedActivityView=_embeddedActivityView;
- (struct CGSize)_sizeForItemAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
@property(retain, nonatomic, setter=_setMainCollectionView:) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout; // @synthesize mainCollectionViewLayout=_mainCollectionViewLayout;
- (id)_localizedSelectionTitle;
- (void)_cancel:(id)arg1;
- (void)_updateMainViewAnimated:(BOOL)arg1;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
@property(retain, nonatomic, setter=_setPreheatedAssets:) NSMutableSet *_preheatedAssets; // @synthesize _preheatedAssets=__preheatedAssets;
- (void)_getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(int)arg2;
@property(retain, nonatomic, setter=_setLastKnownReferenceAsset:) PHAsset *_lastKnownReferenceAsset; // @synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset;
- (void)_updateLastKnownReferenceIndexPath;
@property(retain, nonatomic, setter=_setLastKnownReferenceIndexPath:) NSIndexPath *_lastKnownReferenceIndexPath; // @synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (void)_getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2 embeddedActivityViewFrame:(struct CGRect *)arg3;
@property(retain, nonatomic, setter=_setPhotoZoomAnimator:) PUTransitionViewAnimator *_photoZoomAnimator; // @synthesize _photoZoomAnimator=__photoZoomAnimator;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
@property(retain, nonatomic, setter=_setPhotoZoomCell:) PUPhotosZoomingSharingGridCell *_photoZoomCell; // @synthesize _photoZoomCell=__photoZoomCell;
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1 atIndexPath:(id)arg2;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_endZoomingForCell;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_isAnyAssetSelected;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(BOOL)arg2;
@property(retain, nonatomic, setter=_setUnembeddedActivityViewController:) PUActivityViewController *_unembeddedActivityViewController; // @synthesize _unembeddedActivityViewController=__unembeddedActivityViewController;
- (id)_currentSelectedAssets;
- (id)_requiredActivityViewController;
- (void)_prepareActivityViewControllerForUse;
- (BOOL)_embedsActivityView;
@property(readonly, nonatomic) PHFetchResult *photoCollectionsFetchResult; // @synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(float)arg2;
- (float)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (id)_photoCollectionAtIndex:(int)arg1;
- (struct CGRect)_collectionViewContentFrame;
- (BOOL)_shouldShowAsset:(id)arg1;
- (id)_assetAtIndexPath:(id)arg1;
- (int)_numberOfItemsInSection:(int)arg1;
- (int)_numberOfSections;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_resetPreheating;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (struct CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(id)arg4;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property(readonly, nonatomic) PUActivityViewController *_activityViewController;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
- (id)assetsInAssetCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

