//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, BRCDocumentItem, BRCLocalContainer, BRCRelativePath, BRCServerZone, NSData;

@interface BRCBookmark : NSObject
{
    BRCAccountSession *_session;
    BRCLocalContainer *_container;
    NSData *_bookmarkData;
    BRCDocumentItem *_target;
    BRCServerZone *_targetServerZone;
    BRCRelativePath *_targetRelpath;
    BOOL _targetResolved;
    BOOL _dataResolved;
    BOOL _containsItemID;
}

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)arg1;
@property(readonly, nonatomic) BRCServerZone *targetServerZone;
@property(readonly, nonatomic) BOOL containsItemID;
- (BOOL)_resolveDataWithError:(id *)arg1;
- (BOOL)_resolveTargetWithError:(id *)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (void)_computeSignature:(unsigned char [32])arg1;
- (id)initWithRelpath:(id)arg1;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)resolveWithError:(id *)arg1;
- (id)initWithTarget:(id)arg1 owningContainer:(id)arg2 path:(id)arg3 session:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) BRCDocumentItem *target;

@end

