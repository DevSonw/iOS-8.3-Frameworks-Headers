//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;

@interface EKEventEditViewController : UINavigationController
{
    EKEvent *_event;
    NSString *_eventId;
    EKEventStore *_store;
    id <EKEventEditViewDelegate> _editViewDelegate;
    int _transitionForModalViewPresentation;
    EKEventEditor *_editor;
    EKEventEditViewController *_strongSelf;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_store;
- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
@property(retain, nonatomic) EKEventEditViewController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) int transitionForModalViewPresentation; // @synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation;
@property(nonatomic) __weak id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
@property(nonatomic) float editorNavBarRightContentInset;
@property(nonatomic) float editorNavBarLeftContentInset;
@property(retain, nonatomic) UIColor *editorBackgroundColor;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancelEditing;
- (BOOL)willPresentDialogOnSave;
- (void)completeAndSave;
- (void)handleTapOutside;
@property(nonatomic) BOOL canHideDoneAndCancelButtons;
@property(nonatomic) BOOL showAttachments;
@property(nonatomic) BOOL scrollToNotes;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)refreshStartAndEndDates;
- (void)_storeChanged:(id)arg1;

@end

