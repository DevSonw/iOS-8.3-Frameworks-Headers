//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCellLayoutManagerValue1.h"

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
{
    float _minimumTextIndentation;
}

- (struct CGRect)_adjustedTextFrameWithOriginalTextFrame:(struct CGRect)arg1;
@property(nonatomic) float minimumTextIndentation; // @synthesize minimumTextIndentation=_minimumTextIndentation;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(float)arg2;

@end

