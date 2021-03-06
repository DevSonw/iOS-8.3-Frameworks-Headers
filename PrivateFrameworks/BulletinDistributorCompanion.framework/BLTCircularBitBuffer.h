//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject
{
    NSMutableData *_bitVector;
    unsigned int _capacity;
    unsigned long long _beginIndex;
}

+ (unsigned int)actualCapacity:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) unsigned long long beginIndex; // @synthesize beginIndex=_beginIndex;
- (id)bitVector;
- (unsigned char)bitAtIndex:(unsigned long long)arg1;
- (void)setBit:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)_setBit:(_Bool)arg1 atIndex:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithCapacity:(unsigned int)arg1;

@end

