//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncEndResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    int _errorResolution;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int errorResolution:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) BOOL hasError;
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasErrorResolution;
@property(nonatomic) int errorResolution; // @synthesize errorResolution=_errorResolution;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

