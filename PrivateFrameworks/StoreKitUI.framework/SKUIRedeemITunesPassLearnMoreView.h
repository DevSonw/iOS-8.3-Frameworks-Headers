//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;

@interface SKUIRedeemITunesPassLearnMoreView : UIView
{
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}

@property(copy, nonatomic) NSString *explanationString;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *buttonTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) UIControl *button;

@end
