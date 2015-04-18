//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

@interface BRCLocalVersion : BRCVersion
{
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property(retain, nonatomic) CKRecord *uploadedAssets; // @synthesize uploadedAssets=_uploadedAssets;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initForPackage:(BOOL)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)sizeObj;
- (id)isPackageObj;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(BOOL)arg2;
- (id)initWithLocalVersion:(id)arg1;
- (void)_clearSignatures:(unsigned int)arg1 isPackage:(BOOL)arg2;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithVersion:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (id)descriptionWithContext:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
