//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OADAdjustRect : NSObject
{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
}

- (struct OADAdjustCoord)top;
- (struct OADAdjustCoord)right;
- (struct OADAdjustCoord)left;
- (struct OADAdjustCoord)bottom;
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4;
- (id).cxx_construct;
- (id)description;

@end

