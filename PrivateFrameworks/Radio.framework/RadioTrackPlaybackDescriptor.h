//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary;

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BOOL _current;
    NSDate *_expirationDate;
    double _pauseTime;
    NSDate *_skipDate;
    long long _storeID;
    NSDictionary *_trackInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(readonly, nonatomic) NSDate *skipDate; // @synthesize skipDate=_skipDate;
- (id)queueTrackDictionary;
@property(readonly, nonatomic, getter=isCurrent) BOOL current; // @synthesize current=_current;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) double pauseTime; // @synthesize pauseTime=_pauseTime;
@property(readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;

@end
