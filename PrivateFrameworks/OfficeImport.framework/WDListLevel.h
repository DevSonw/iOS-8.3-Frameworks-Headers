//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, WDCharacterProperties, WDDocument, WDOfficeArt, WDParagraphProperties;

@interface WDListLevel : NSObject
{
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    long mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    long mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    long mLegacySpace;
    long mLegacyIndent;
    int mJustification;
}

- (BOOL)justificationOverridden;
- (long)legacyIndent;
- (long)legacySpace;
- (BOOL)legacy;
- (BOOL)textOverridden;
- (BOOL)suffixOverridden;
- (BOOL)legalOverridden;
- (BOOL)restartLevelOverridden;
- (void)setRestartLevel:(long)arg1;
- (long)restartLevel;
- (BOOL)restartNumberingOverridden;
- (BOOL)imageBulletOverridden;
- (BOOL)imageBullet;
- (BOOL)numberFormatOverridden;
- (BOOL)startNumberOverridden;
- (void)setSuffix:(int)arg1;
- (void)setNumberFormat:(int)arg1;
- (void)setJustification:(int)arg1;
- (void)setStartNumber:(long)arg1;
- (int)suffix;
- (BOOL)legal;
- (BOOL)restartNumbering;
- (void)setLegacyIndent:(long)arg1;
- (void)setLegacySpace:(long)arg1;
- (void)setLegal:(BOOL)arg1;
- (void)setRestartNumbering:(BOOL)arg1;
- (long)startNumber;
- (int)numberFormat;
- (int)justification;
- (id)paragraphProperties;
- (id)characterProperties;
- (void)setLegacy:(BOOL)arg1;
- (id)initWithDocument:(id)arg1;
- (id)image;
- (void)setText:(id)arg1;
- (id)text;
- (id)description;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end

