//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell
{
    BOOL _favorite;
    BOOL _suggested;
    BOOL _wantsSmallSuggestionIndicators;
    UIImage *_image;
    UIImageView *__thumbnailImageView;
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
}

@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImageView *_suggestedImageView; // @synthesize _suggestedImageView=__suggestedImageView;
@property(readonly, nonatomic) UIImageView *_checkmarkImageView; // @synthesize _checkmarkImageView=__checkmarkImageView;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(nonatomic) BOOL wantsSmallSuggestionIndicators; // @synthesize wantsSmallSuggestionIndicators=_wantsSmallSuggestionIndicators;
@property(nonatomic, getter=isSuggested) BOOL suggested; // @synthesize suggested=_suggested;
- (void)setSuggested:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavorite:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateThumbnailImageView;
- (void)_commonPUReviewScrubberCellInitialization;
- (void)_updateSuggestedView;
- (void)_updateFavoriteView;

@end

