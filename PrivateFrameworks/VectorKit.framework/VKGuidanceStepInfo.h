//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKGuidanceStepInfo : NSObject
{
    NSString *_roadName;
    int _routePoint;
}

@property(readonly, retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(readonly, nonatomic) int routePoint; // @synthesize routePoint=_routePoint;
- (id)initWithRoadName:(id)arg1 point:(int)arg2;
- (void)dealloc;

@end
