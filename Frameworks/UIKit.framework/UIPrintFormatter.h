//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying>
{
    UIPrintPageRenderer *_printPageRenderer;
    float _maximumContentHeight;
    float _maximumContentWidth;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _perPageContentInsets;
    int _startPage;
    int _pageCount;
    BOOL _needsRecalc;
}

@property(nonatomic) int startPage; // @synthesize startPage=_startPage;
@property(nonatomic) struct UIEdgeInsets perPageContentInsets; // @synthesize perPageContentInsets=_perPageContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) float maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) float maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;
@property(nonatomic) UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(int)arg2;
- (struct CGRect)rectForPageAtIndex:(int)arg1;
- (void)removeFromPrintPageRenderer;
- (struct CGRect)_pageContentRect:(BOOL)arg1;
- (void)_recalcIfNecessary;
- (int)_recalcPageCount;
- (void)_setNeedsRecalc;
@property(readonly, nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

