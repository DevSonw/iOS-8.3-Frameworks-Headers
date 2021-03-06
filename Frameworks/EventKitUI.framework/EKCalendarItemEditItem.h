//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKEditItemViewControllerDelegate.h"

@class EKCalendarItem, EKEventStore, NSString, UIResponder, UIViewController<EKEditItemViewControllerProtocol>;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate>
{
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
    id <EKCalendarItemEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
    UIResponder *_selectedResponder;
}

- (id)footerView;
- (id)footerTitle;
- (void).cxx_destruct;
- (void)reset;
- (void)applicationDidResume;
@property(nonatomic) __weak id <EKCalendarItemEditItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedResponder;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (id)viewForActionSheet;
- (void)endInlineEditing;
- (void)editor:(id)arg1 didStartEditingItem:(id)arg2;
- (void)editorDidScroll:(id)arg1;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned int)arg2;
- (void)editor:(id)arg1 didDeselectSubitem:(unsigned int)arg2;
- (void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned int)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (id)titleForHeader;
- (float)footerHeightForWidth:(float)arg1;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)forceRefreshLocationItemOnCommit;
- (BOOL)forceRefreshInviteesItemOnCommit;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (BOOL)forceTableReloadOnCommit;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_showViewController:(id)arg1 editor:(id)arg2 animated:(BOOL)arg3;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned int)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)notifySubitemDidCommit:(unsigned int)arg1;
- (BOOL)shouldPinKeyboard;
- (BOOL)isInline;
- (void)notifyRequiresHeightChange;
- (void)notifyTextChanged;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (id)calendarItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

