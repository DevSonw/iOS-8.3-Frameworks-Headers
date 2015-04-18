//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface MusicPagingCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    float _distanceFromCenterForMinimumAlpha;
    float _minimumCellAlpha;
    int _numberOfItemsPerPage;
}

@property(nonatomic) int numberOfItemsPerPage; // @synthesize numberOfItemsPerPage=_numberOfItemsPerPage;
@property(nonatomic) float minimumCellAlpha; // @synthesize minimumCellAlpha=_minimumCellAlpha;
@property(nonatomic) float distanceFromCenterForMinimumAlpha; // @synthesize distanceFromCenterForMinimumAlpha=_distanceFromCenterForMinimumAlpha;
- (int)indexOfItemClosestToPoint:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end
