//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSObject<NSCopying>;

@interface PUMapItem : NSObject
{
    NSObject<NSCopying> *_itemId;
    CLLocation *_location;
    NSDate *_dateCreated;
}

+ (CDUnknownBlockType)mapItemSortingComparatorOldestToNewest;
+ (CDUnknownBlockType)mapItemSortingComparatorNewestToOldest;
+ (id)stringForItemId:(id)arg1;
@property(copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSObject<NSCopying> *itemId; // @synthesize itemId=_itemId;
- (id)thumbnailImage;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)_mapItemSortingCompareWithMapItem:(id)arg1;

@end

