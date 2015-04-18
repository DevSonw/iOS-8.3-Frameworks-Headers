//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MKStarRatingAndLabelView, NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface MKPlaceReviewsViewCell : UITableViewCell
{
    UIImageView *_pictureView;
    MKStarRatingAndLabelView *_starView;
    UILabel *_authorLabel;
    UILabel *_dateLabel;
    UILabel *_reviewLabel;
    NSDate *_date;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    NSLayoutConstraint *_dateLabelBaselineConstraint;
    NSLayoutConstraint *_reviewLabelBaselineConstraint;
    NSLayoutConstraint *_reviewLabelToBottomConstraint;
    NSLayoutConstraint *_reviewLabelHeightConstraint;
}

+ (id)reuseIdentifier;
+ (float)intrinsicContentHeight;
@property(nonatomic) __weak NSString *author; // @dynamic author;
@property(nonatomic) __weak UIImage *picture; // @dynamic picture;
- (void).cxx_destruct;
@property(nonatomic) __weak NSDate *date; // @dynamic date;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(nonatomic) unsigned int rating; // @dynamic rating;
@property(nonatomic) __weak NSString *reviewText; // @dynamic reviewText;
- (void)refreshMarginConstraints;
- (id)fontForAuthor;
- (void)contentSizeDidChange;

@end
