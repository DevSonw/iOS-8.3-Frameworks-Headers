//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMWeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (id)weakRefWithObject:(id)arg1;
- (id)initRefWithObject:(id)arg1;
- (id)copyObject;
- (id)object;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

