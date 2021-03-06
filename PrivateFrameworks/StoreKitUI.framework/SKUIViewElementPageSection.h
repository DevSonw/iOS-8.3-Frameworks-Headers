//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"

@class NSString, SKUICollectionViewCell<SKUIViewElementView>, SKUIViewElementLayoutContext;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    Class _cellClass;
    struct UIEdgeInsets _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    float _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    BOOL _rendersWithPerspective;
    NSString *_reuseIdentifier;
    float _sectionBottomInset;
}

- (BOOL)_stretchesToFitCollectionViewBounds;
- (BOOL)_showsImageReflection;
- (void)_requestCellLayout;
- (int)defaultItemPinningStyle;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (int)applyUpdateType:(int)arg1;
- (void)_reloadViewElementProperties;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (struct UIEdgeInsets)sectionContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

