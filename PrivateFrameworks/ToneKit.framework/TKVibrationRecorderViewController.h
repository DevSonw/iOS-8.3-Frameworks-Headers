//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class TKVibrationRecorderContentViewController;

@interface TKVibrationRecorderViewController : UINavigationController
{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

@property(nonatomic) id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;
@property(retain, nonatomic, setter=_setVibrationRecorderContentViewController:) TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController; // @synthesize _vibrationRecorderContentViewController;
- (id)initWithVibratorController:(id)arg1;
- (void)dealloc;

@end
