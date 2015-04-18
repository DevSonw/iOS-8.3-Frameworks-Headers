//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, UIPickerView;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;
}

- (void)viewDidLoad;
- (void)loadView;
@property id <EKRecurrenceOrdinalPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)ordinalValue;
- (int)dayMask;
- (id)_rightColumn;
- (id)_leftColumn;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
@property(readonly, nonatomic) UIPickerView *pickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
