//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IKPlayerStateChangeInfo : NSObject
{
    NSDictionary *_jsonValue;
    int _state;
}

@property(nonatomic) double elapsedTime;
@property(copy, nonatomic) NSDictionary *jsonValue; // @synthesize jsonValue=_jsonValue;
- (id)_stateNameForState:(int)arg1;
- (id)initWithState:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) double duration;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;

@end

