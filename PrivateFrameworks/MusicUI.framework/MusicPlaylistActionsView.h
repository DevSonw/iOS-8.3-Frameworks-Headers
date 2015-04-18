//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, _UIBackdropView;

@interface MusicPlaylistActionsView : UIView
{
    _UIBackdropView *_backdropView;
    NSMutableArray *_buttons;
    UIView *_hairlineView;
    int _actionsStyle;
}

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
@property(nonatomic) int actionsStyle; // @synthesize actionsStyle=_actionsStyle;
- (void)_addButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)_updateButtonsForCurrentStyle;
- (void)setCanRefreshPlaylist:(BOOL)arg1;
- (void)setCanClearPlaylist:(BOOL)arg1;
- (void)setCanDeletePlaylist:(BOOL)arg1;
- (void)setCanEditPlaylist:(BOOL)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backdropViewGroupName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
