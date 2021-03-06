//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying>
{
    unsigned int _identifier;
    NSMutableArray *_languages;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)languageAtIndex:(unsigned int)arg1;
- (void)clearLanguages;
- (unsigned int)languagesCount;
- (void)addLanguage:(id)arg1;
@property(retain, nonatomic) NSMutableArray *languages; // @synthesize languages=_languages;
- (id)dictionaryRepresentation;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

