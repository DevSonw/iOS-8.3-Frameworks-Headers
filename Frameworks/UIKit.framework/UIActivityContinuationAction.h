//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAction.h"

@class NSDate, NSString;

@interface UIActivityContinuationAction : BSAction
{
}

@property(readonly, nonatomic) NSDate *lastUpdateTime;
@property(readonly, nonatomic) NSString *originatingDeviceName;
@property(readonly, nonatomic) NSString *originatingDeviceType;
@property(readonly, nonatomic) NSString *activityType;
- (id)initWithSettings:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *activityTypeIdentifier;
@property(readonly, nonatomic) NSString *identifier;
- (int)UIActionType;

@end
