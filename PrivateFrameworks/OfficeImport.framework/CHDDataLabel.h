//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDResources, OADGraphicProperties;

@interface CHDDataLabel : NSObject
{
    EDResources *mResources;
    unsigned int mStringIndex;
    unsigned int mContentFormatId;
    int mPosition;
    _Bool mShowLeaderLines;
    _Bool mShowCategoryName;
    _Bool mShowSeriesName;
    _Bool mShowPercent;
    _Bool mShowBubbleSize;
    _Bool mShowValue;
    _Bool mShowLegendKey;
    _Bool mIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;
- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (_Bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(_Bool)arg1;
- (void)setShowLegendKey:(_Bool)arg1;
- (_Bool)isShowLegendKey;
- (void)setShowBubbleSize:(_Bool)arg1;
- (_Bool)isShowBubbleSize;
- (void)setShowPercent:(_Bool)arg1;
- (_Bool)isShowPercent;
- (void)setShowSeriesName:(_Bool)arg1;
- (_Bool)isShowSeriesName;
- (void)setShowCategoryName:(_Bool)arg1;
- (_Bool)isShowCategoryName;
- (void)setShowLeaderLines:(_Bool)arg1;
- (_Bool)isShowLeaderLines;
- (void)setContentFormat:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (_Bool)isShowValue;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)graphicProperties;
- (void)setString:(id)arg1;
- (void)setShowValue:(_Bool)arg1;
- (int)position;
- (void)setPosition:(int)arg1;
- (id)string;
- (void)dealloc;

@end

