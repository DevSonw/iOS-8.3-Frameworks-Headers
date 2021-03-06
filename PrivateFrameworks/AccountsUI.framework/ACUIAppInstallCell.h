//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class SKUIItemOfferButton, UIImageView, UILabel;

@interface ACUIAppInstallCell : PSTableCell
{
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UIImageView *_iconView;
    SKUIItemOfferButton *_installButton;
    int _installState;
}

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)_updateInstallButtonWithState:(int)arg1;
- (void)_updateSubviewsWithInstallState:(int)arg1;
- (id)_createInstallButton;
- (id)_createLabelForPublisher:(id)arg1;
- (id)_createLabelForAppName:(id)arg1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) int installState; // @synthesize installState=_installState;

@end

