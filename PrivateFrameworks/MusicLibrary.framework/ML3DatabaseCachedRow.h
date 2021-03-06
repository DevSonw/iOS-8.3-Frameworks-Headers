//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseRow.h>

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow
{
    NSArray *_arrayRepresentation;
}

- (id)_numberOrZeroForColumnIndex:(unsigned int)arg1;
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnName:(id)arg3;
- (id)numberForColumnName:(id)arg1;
- (const char *)cStringForColumnName:(id)arg1;
- (long long)int64ForColumnName:(id)arg1;
- (int)intForColumnName:(id)arg1;
- (double)doubleForColumnName:(id)arg1;
- (id)dataForColumnName:(id)arg1;
- (id)valueForColumnName:(id)arg1;
- (id)arrayRepresentation;
- (id)initWithParentResult:(id)arg1;
- (const char *)cStringForColumnIndex:(unsigned int)arg1;
- (id)stringForColumnName:(id)arg1;
- (id)valueForColumnIndex:(unsigned int)arg1;
- (void)getBlobBytes:(const void **)arg1 outLength:(int *)arg2 forColumnIndex:(unsigned int)arg3;
- (double)doubleForColumnIndex:(unsigned int)arg1;
- (id)dataForColumnIndex:(unsigned int)arg1;
- (int)intForColumnIndex:(unsigned int)arg1;
- (id)stringForColumnIndex:(unsigned int)arg1;
- (id)numberForColumnIndex:(unsigned int)arg1;
- (long long)int64ForColumnIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (unsigned int)columnCount;
- (id)dictionaryRepresentation;
- (id)initWithArray:(id)arg1;

@end

