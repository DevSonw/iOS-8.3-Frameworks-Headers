//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PUAdjustmentsModeBadge : UIView
{
    BOOL _filled;
    BOOL _stroked;
}

- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isStroked) BOOL stroked; // @synthesize stroked=_stroked;
- (id)_drawColor;
@property(nonatomic, getter=isFilled) BOOL filled; // @synthesize filled=_filled;
- (void)_updateBadge;

@end

