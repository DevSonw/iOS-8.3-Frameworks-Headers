//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject
{
    NSDate *_lastRequestDate;
    BOOL _isThrottled;
    int _requestCount;
}

+ (id)sharedInstance;
- (void)dealloc;
- (BOOL)isRequestPermitted;

@end
