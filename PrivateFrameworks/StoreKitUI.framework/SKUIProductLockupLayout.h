//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SKUIViewElement;

@interface SKUIProductLockupLayout : NSObject
{
    int _bottomLeftLayoutStyle;
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    NSMutableArray *_middleLeftViewElements;
    SKUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

- (struct CGSize)_sizeForSegmentedControl:(id)arg1 width:(float)arg2;
- (struct CGSize)_sizeForVerticalViewElements:(id)arg1 width:(float)arg2 context:(id)arg3;
- (float)bottomPaddingForViewElement:(id)arg1;
- (float)topPaddingForViewElement:(id)arg1;
@property(readonly, nonatomic) int bottomLeftLayoutStyle; // @synthesize bottomLeftLayoutStyle=_bottomLeftLayoutStyle;
- (void)enumerateViewElementsForWidth:(float)arg1 context:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct SKUIProductLockupLayoutSizing)sizingToFitWidth:(float)arg1 context:(id)arg2;
- (struct SKUIProductLockupLayoutSizing)layoutWidthsForWidth:(float)arg1 context:(id)arg2;
- (id)viewElementsForSection:(int)arg1;
- (float)metadataWidthForWidth:(float)arg1 context:(id)arg2;
- (id)initWithLockup:(id)arg1 width:(float)arg2 context:(id)arg3;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void).cxx_destruct;

@end

