//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKEmergencyCardTableItem.h>

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "HKMedicalIDEditorCellEditDelegate.h"
#import "_EmergencyContactRelationshipPickerDelegate.h"

@class NSMutableArray, NSString, UITableViewCell, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <ABPeoplePickerNavigationControllerDelegate, HKMedicalIDEditorCellEditDelegate, _EmergencyContactRelationshipPickerDelegate>
{
    NSMutableArray *_cells;
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    BOOL _selectedContactIsBeingAdded;
    void *_addressBook;
}

@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)_didSelectPerson:(void *)arg1 identifier:(int)arg2;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)_presentEmergencyContactPicker;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (void)_configureAddContactCellLayoutForRowIndex:(int)arg1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (BOOL)hasPresentableData;
- (BOOL)refreshFromData;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void).cxx_destruct;
- (int)numberOfRows;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

