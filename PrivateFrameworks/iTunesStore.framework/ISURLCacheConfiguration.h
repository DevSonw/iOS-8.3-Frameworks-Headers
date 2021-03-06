//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying>
{
    unsigned int _diskCapacity;
    unsigned int _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(nonatomic) unsigned int diskCapacity; // @synthesize diskCapacity=_diskCapacity;
@property(nonatomic) unsigned int memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;

@end

