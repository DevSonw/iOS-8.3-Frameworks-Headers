//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUICellLayoutView, SKUIEditorialCellLayout, SKUILockupItemCellLayout, SKUITextBoxView, UIColor, UIView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    float _editorialHeight;
    int _layoutStyle;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SKUITextBoxView *_textBoxView;
    unsigned int _visibleFields;
}

+ (float)_imagePaddingForArtworkSize:(int)arg1;
+ (float)editorialWidthForCellWidth:(float)arg1 lockupStyle:(struct SKUILockupStyle)arg2;
- (BOOL)_isItemOfferButtonHidden;
- (BOOL)_showsItemOfferUnderEditorial;
- (id)_editorialCellLayout;
- (id)_editorialContainerView;
- (void)setItemOfferNoticeString:(id)arg1;
- (id)itemOfferNoticeString;
- (BOOL)isIconImageHidden;
- (void)layoutForItemOfferChange;
- (void)setItemOfferButtonAppearance:(id)arg1;
@property(readonly, nonatomic) SKUILockupItemCellLayout *lockupCellLayout;
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)setIconImageHidden:(BOOL)arg1;
- (void)setRestricted:(BOOL)arg1;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id)_lockupView;
- (id)itemState;
- (id)itemOffer;
- (void)setItemOffer:(id)arg1;
@property(nonatomic) unsigned int visibleFields; // @synthesize visibleFields=_visibleFields;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setClientContext:(id)arg1;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)iconImage;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)iconImageView;
- (void)setIconImage:(id)arg1;

@end

