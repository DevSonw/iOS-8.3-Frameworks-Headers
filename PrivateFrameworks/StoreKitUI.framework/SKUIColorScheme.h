//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding>
{
    UIColor *_backgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(readonly, nonatomic) int schemeStyle;
- (id)initWithColorSchemeDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithCoder:(id)arg1;

@end

