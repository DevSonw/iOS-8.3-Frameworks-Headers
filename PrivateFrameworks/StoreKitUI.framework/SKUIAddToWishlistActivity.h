//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIAddToWishlistActivity : UIActivity
{
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}

- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)_beforeActivity;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)activityType;

@end

