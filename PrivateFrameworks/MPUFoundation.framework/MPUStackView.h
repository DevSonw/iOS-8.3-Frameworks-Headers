//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIWindow;

@interface MPUStackView : UIView
{
    struct {
        struct CGSize baseSize;
        struct CGRect bounds;
        struct CGPoint centerInLocalCoordinates;
        char forcesIntegralX;
        char forcesIntegralY;
        struct UIOffset maximumRelativeOffsetStep;
        float scale;
        struct CGSize sizeInsetStep;
        struct CGPoint vanishingPoint;
    } _configuration;
    int _distanceIgnoreCount;
    NSMutableArray *_items;
    UIWindow *_window;
    id <MPUStackViewDataSource> _dataSource;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    int _numberOfItems;
    UIView *_perspectiveTargetView;
}

@property(nonatomic) struct CGPoint vanishingPoint;
@property(nonatomic) struct CGSize sizeInsetStep;
@property(nonatomic) struct UIOffset maximumRelativeOffsetStep;
@property(nonatomic) struct CGSize baseSize;
@property(nonatomic) __weak UIView *perspectiveTargetView; // @synthesize perspectiveTargetView=_perspectiveTargetView;
@property(nonatomic) BOOL forcesIntegralY;
- (id)initWithFrame:(struct CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)reloadDataWithTransition:(int)arg1;
@property(nonatomic) BOOL forcesIntegralX;
- (struct UIOffset)relativeOffsetOfItemAtIndex:(float)arg1 withCenter:(struct CGPoint)arg2;
- (struct CGSize)sizeOfItemAtIndex:(float)arg1;
- (void)endIgnoringDistanceUpdates;
- (void)beginIgnoringDistanceUpdates;
@property(readonly, nonatomic) NSString *itemReuseIdentifier; // @synthesize itemReuseIdentifier=_itemReuseIdentifier;
- (id)_dequeueReusableItem;
- (void)_updateGeometryFieldsInConfiguration;
- (id)itemAtIndex:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) int numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)didMoveToSuperview;
- (void)setCenter:(struct CGPoint)arg1;
@property(nonatomic) __weak id <MPUStackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

