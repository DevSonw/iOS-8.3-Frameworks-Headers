//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPassFaceView.h>

@class UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView
{
    WLEasyToHitCustomButton *_flipButton;
    WLEasyToHitCustomButton *_shareButton;
    UILabel *_logoLabel;
    BOOL _showsInfo;
    BOOL _showsShare;
}

- (struct CGSize)contentSize;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;
- (void)updateValidity;
@property(nonatomic) BOOL showsShare; // @synthesize showsShare=_showsShare;
@property(nonatomic) BOOL showsInfo; // @synthesize showsInfo=_showsInfo;
- (void)_shareButtonPressed;
- (void)_flipButtonPressed;
- (void)prepareForFlip;
- (void)setClipsContent:(BOOL)arg1;
- (void)createHeaderContentViews;
- (id)_relevantBuckets;
- (BOOL)isFrontFace;
- (id)passFaceTemplate;
- (id)tallFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (void)createBodyContentViews;
- (id)shortFaceTemplate;

@end

