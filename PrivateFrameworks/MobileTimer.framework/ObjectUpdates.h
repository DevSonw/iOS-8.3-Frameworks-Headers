//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ObjectUpdates : NSObject
{
    NSMutableArray *_addedObjects;
    NSMutableArray *_removedObjects;
}

@property(readonly, nonatomic) NSMutableArray *removedObjects; // @synthesize removedObjects=_removedObjects;
@property(readonly, nonatomic) NSMutableArray *addedObjects; // @synthesize addedObjects=_addedObjects;
- (id)description;
- (id)init;
- (void)dealloc;

@end
