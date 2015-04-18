//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIStatusBarCorners : UIView
{
    int _cornerStyle;
    int _cornerAlignment;
    UIView *_leftCorner;
    UIView *_rightCorner;
}

+ (float)cornerRadius;
- (id)_imageForCornerWithStyle:(int)arg1;
- (id)initForAlignment:(int)arg1 style:(int)arg2;
- (int)cornerStyle;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
