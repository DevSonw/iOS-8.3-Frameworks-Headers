//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker.h"

@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    int _selectorChoice;
}

- (void)addBrowsedRecords:(id)arg1 toDestList:(id)arg2;
- (BOOL)canBeExtendedWithDWDS;
- (void)selectedDeviceUpdated;
- (void)updateNavigationButtons;
- (id)deviceTableLabel;
- (id)devicePickerLabel;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)stepByStepUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
