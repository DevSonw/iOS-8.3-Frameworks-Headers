//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSSet, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray
{
    NSArray *_oids;
    NSSet *_oidsSet;
    PHPhotoLibrary *_photoLibrary;
    unsigned int _count;
    NSCache *_cache;
    unsigned int _firstBatchIndex;
    NSArray *_firstBatch;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    unsigned int _batchSize;
    unsigned int _propertyHint;
}

+ (BOOL)accessInstanceVariablesDirectly;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
@property(readonly) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (unsigned int)batchSize;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)description;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)prefetchObjectsAtIndexes:(id)arg1;
@property(readonly) NSSet *oidsSet;
- (id)__batchHelper:(unsigned int)arg1;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)_phObjectsForOIDs:(id)arg1;
@property(readonly) NSArray *oids; // @synthesize oids=_oids;
- (id)_phObjectAtIndex:(unsigned int)arg1;
- (void)min:(id *)arg1 andMax:(id *)arg2 forKeypath:(id)arg3;

@end

