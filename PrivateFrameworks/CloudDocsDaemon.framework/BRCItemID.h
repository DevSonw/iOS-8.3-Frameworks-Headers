//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PQLValuable.h"

@class NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable>
{
    unsigned char _kind;
    unsigned char _uuid[16];
}

+ (id)parseMangledItemID:(id)arg1 mangledContainerID:(id *)arg2 etag:(id *)arg3;
+ (id)documentsItemID;
+ (id)newItemIDFromEnclosureUUID:(id)arg1;
+ (id)rootItemID;
+ (id)newFromSqliteValue:(struct Mem *)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
- (id)initWithItemID:(id)arg1;
- (id)itemUUIDString;
- (id)initWithKind:(unsigned char)arg1 bytes:(const void *)arg2 length:(unsigned int)arg3;
- (id)validatingDirectoryReferenceInZoneID:(id)arg1;
- (id)contentsRecordIDInZoneID:(id)arg1;
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;
@property(readonly, nonatomic) NSString *shortItemIDString;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
@property(readonly, nonatomic) BOOL isDocuments;
@property(readonly, nonatomic) NSString *itemIDString;
@property(readonly, nonatomic) BOOL isRoot;
- (BOOL)isEqualToItemID:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) const char *UTF8String;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
