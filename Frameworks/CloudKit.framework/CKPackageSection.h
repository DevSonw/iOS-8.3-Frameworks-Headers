//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CKPackageSection : NSObject
{
    int _index;
    NSData *_signature;
    unsigned long long _size;
}

- (id)initWithIndex:(int)arg1 signature:(id)arg2 size:(unsigned long long)arg3;
- (id)CKPropertiesDescription;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (id)description;

@end

