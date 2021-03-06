//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell
{
    CKTypingView *_typingIndicatorLayer;
    CKTypingView *_typingView;
}

+ (struct CGSize)indicatorSize;
@property(retain, nonatomic) CKTypingView *typingIndicatorLayer; // @synthesize typingIndicatorLayer=_typingIndicatorLayer;
@property(retain, nonatomic) CKTypingView *typingView; // @synthesize typingView=_typingView;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)startShrinkAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (void)stopPulseAnimation;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

