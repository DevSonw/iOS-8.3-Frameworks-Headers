//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SUUserRatingView : UIView
{
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (float)reflectionHeight;
+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(int)arg3;
- (float)heightWithoutReflection;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (struct CGRect)_foregroundImageClipBounds;
- (id)initWithStyle:(int)arg1;
- (void)setValue:(float)arg1;
- (void)layoutSubviews;
- (id)init;

@end
