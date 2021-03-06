//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CLLatLonPolygon, NSMutableArray;

@interface CLVenueBounds : PBCodable <NSCopying>
{
    CLLatLonPolygon *_exterior;
    NSMutableArray *_exteriors;
    NSMutableArray *_ids;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *exteriors; // @synthesize exteriors=_exteriors;
@property(retain, nonatomic) CLLatLonPolygon *exterior; // @synthesize exterior=_exterior;
@property(retain, nonatomic) NSMutableArray *ids; // @synthesize ids=_ids;
@property(readonly, nonatomic) BOOL hasExterior;
- (id)exteriorsAtIndex:(unsigned int)arg1;
- (void)clearExteriors;
- (unsigned int)exteriorsCount;
- (id)idsAtIndex:(unsigned int)arg1;
- (void)clearIds;
- (unsigned int)idsCount;
- (void)addExteriors:(id)arg1;
- (void)addIds:(id)arg1;
- (BOOL)containsIdentifier:(id)arg1;
- (id)locationIdentifiers;
- (id)venueIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

