//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIColor;

@interface MPUExtrasGridHeaderStyle : NSObject
{
    BOOL _showsImage;
    NSString *_titleTextStyle;
    float _titleLineHeight;
    NSString *_subtitleTextStyle;
    float _subtitleLineHeight;
    float _bottomLabelDescender;
    NSDictionary *_titleDefaultFontAttributes;
    NSDictionary *_subtitleDefaultFontAttributes;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(nonatomic) float titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(nonatomic) BOOL showsImage; // @synthesize showsImage=_showsImage;
@property(nonatomic) float bottomLabelDescender; // @synthesize bottomLabelDescender=_bottomLabelDescender;
@property(nonatomic) float subtitleLineHeight; // @synthesize subtitleLineHeight=_subtitleLineHeight;
@property(retain, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) NSDictionary *subtitleDefaultFontAttributes; // @synthesize subtitleDefaultFontAttributes=_subtitleDefaultFontAttributes;
@property(retain, nonatomic) NSDictionary *titleDefaultFontAttributes; // @synthesize titleDefaultFontAttributes=_titleDefaultFontAttributes;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;

@end

