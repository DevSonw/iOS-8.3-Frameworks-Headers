//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UINavigationController;

@interface UISnapshotModalViewController : UIViewController
{
    int _interfaceOrientation;
    UIViewController *_disappearingViewController;
    UINavigationController *_parentController;
}

@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
- (id)initWithInterfaceOrientation:(int)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;

@end

