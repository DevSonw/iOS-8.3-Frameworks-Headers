//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, PLSyncProgressView, UILabel;

@interface PUPhotosGlobalFooterView : UICollectionReusableView
{
    unsigned int _imageCount;
    unsigned int _videoCount;
    unsigned int _otherCount;
    unsigned int _pendingCount;
    int _importOperation;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PLSyncProgressView *_syncProgressView;
    int _style;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) int style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)setImageCount:(unsigned int)arg1 videoCount:(unsigned int)arg2 otherCount:(unsigned int)arg3;
- (void)setPendingCount:(unsigned int)arg1 importOperation:(int)arg2;

@end
