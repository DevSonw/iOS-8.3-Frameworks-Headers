//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISegmentedControl;

@interface CKConversationListFilterCell : UITableViewCell
{
    UISegmentedControl *_filterControl;
}

+ (id)identifier;
+ (float)defaultHeight;
@property(retain, nonatomic) UISegmentedControl *filterControl; // @synthesize filterControl=_filterControl;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end
