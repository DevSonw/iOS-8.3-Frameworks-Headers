//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKHyperlinkBalloonView.h>

#import "NSLayoutManagerDelegate.h"

@class NSString, UIImageView;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate>
{
    UIImageView *_chevron;
}

- (void)prepareForDisplay;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

