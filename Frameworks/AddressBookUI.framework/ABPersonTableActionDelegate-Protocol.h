//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABStyleProviding.h"
#import "NSObject.h"

@class ABPersonTableAction, ABPropertyGroup, UIButton;

@protocol ABPersonTableActionDelegate <NSObject, ABStyleProviding>

@optional
- (void)action:(ABPersonTableAction *)arg1 willShowButton:(UIButton *)arg2 forValueAtIndex:(int)arg3 inPropertyGroup:(ABPropertyGroup *)arg4;
- (void)presentDifferentiationSheetForAction:(ABPersonTableAction *)arg1;
@end

