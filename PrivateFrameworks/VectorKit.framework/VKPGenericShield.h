//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface VKPGenericShield : PBCodable <NSCopying>
{
    int _style;
    NSMutableArray *_variants;
}

- (id)variantAtIndex:(unsigned int)arg1;
- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (unsigned int)variantsCount;
@property(retain, nonatomic) NSMutableArray *variants; // @synthesize variants=_variants;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(nonatomic) int style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

