//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface SUItemOfferButton : UIButton
{
    int _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_offerTitle;
    BOOL _shouldShowConfirmation;
}

+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;
+ (double)defaultAnimationDuration;
@property(copy, nonatomic) NSString *itemOfferButtonStyle; // @synthesize itemOfferButtonStyle=_buttonStyle;
- (void)_applyConfiguration:(CDStruct_71500f42)arg1;
@property(copy, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;
@property(nonatomic) int animationHorizontalAlignment; // @synthesize animationHorizontalAlignment=_animationHorizontalAlignment;
- (CDStruct_71500f42)_configurationForStyle:(id)arg1;
- (void)_reloadButton;
@property(nonatomic) BOOL shouldShowConfirmation; // @synthesize shouldShowConfirmation=_shouldShowConfirmation;
- (BOOL)configureForItem:(id)arg1 offer:(id)arg2;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation; // @synthesize showingConfirmation=_isShowingConfirmation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
