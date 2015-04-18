//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GraphView, NFMLeashManager, UILabel;

@interface NFMHotterColderView : UIView
{
    BOOL _freshBuffer;
    NFMLeashManager *_leashManager;
    int _bufferIndex;
    int _miniBufferIndex;
    UIView *_papaBar;
    UIView *_mamaBar;
    UIView *_babyBar;
    UIView *_graphClippingView;
    GraphView *_graph;
    UILabel *_rssiStats;
}

@property(retain, nonatomic) UILabel *rssiStats; // @synthesize rssiStats=_rssiStats;
@property(retain, nonatomic) UIView *graphClippingView; // @synthesize graphClippingView=_graphClippingView;
@property(retain, nonatomic) UIView *babyBar; // @synthesize babyBar=_babyBar;
@property(retain, nonatomic) UIView *mamaBar; // @synthesize mamaBar=_mamaBar;
@property(retain, nonatomic) UIView *papaBar; // @synthesize papaBar=_papaBar;
@property(retain, nonatomic) NFMLeashManager *leashManager; // @synthesize leashManager=_leashManager;
- (id)overrideService;
@property(nonatomic) int miniBufferIndex; // @synthesize miniBufferIndex=_miniBufferIndex;
@property(nonatomic) BOOL freshBuffer; // @synthesize freshBuffer=_freshBuffer;
@property(retain, nonatomic) GraphView *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int bufferIndex; // @synthesize bufferIndex=_bufferIndex;

@end
