//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CIBurstFaceInfo : NSObject
{
    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    struct CGPoint swCenter;
    struct CGSize swSize;
    struct CGPoint hwCenter;
    struct CGSize hwSize;
}

- (id)init;
@property int hwLastFrameSeen; // @synthesize hwLastFrameSeen;
@property int swLastFrameSeen; // @synthesize swLastFrameSeen;
- (float)overlapWithSwRect:(struct CGRect)arg1;
- (float)overlapWithHwRect:(struct CGRect)arg1;
- (struct CGRect)swFaceRect;
@property int swFaceId; // @synthesize swFaceId;
- (struct CGRect)hwFaceRect;
@property int hwFaceId; // @synthesize hwFaceId;
@property struct CGSize swSize; // @synthesize swSize;
@property struct CGPoint swCenter; // @synthesize swCenter;
@property struct CGSize hwSize; // @synthesize hwSize;
@property struct CGPoint hwCenter; // @synthesize hwCenter;

@end
