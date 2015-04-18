//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSAttributedString, NSMutableArray, UILabel;

@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell
{
    UILabel *_checkInLabel;
    UILabel *_writeReviewLabel;
    id <MKPlaceReviewsViewCheckInWriteCellDelegate> _delegate;
    NSMutableArray *_scaledConstraints;
    NSArray *_marginConstraints;
}

+ (id)reuseIdentifier;
+ (float)intrinsicContentHeight;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;
@property(nonatomic) __weak id <MKPlaceReviewsViewCheckInWriteCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *scaledConstraints; // @synthesize scaledConstraints=_scaledConstraints;
@property(retain, nonatomic) NSAttributedString *writeReviewTitle;
@property(retain, nonatomic) NSAttributedString *checkInTitle;
- (id)updatedAttributedString:(id)arg1 onlyUpdateColor:(BOOL)arg2;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
- (id)newLabel;
- (void)refreshMarginConstraints;
- (void)contentSizeDidChange;
- (void)cellTapped:(id)arg1;

@end
