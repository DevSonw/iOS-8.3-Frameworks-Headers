//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SSXPCCoding.h"

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding>
{
    CLLocation *_location;
    int _localizationStyle;
    NSMutableDictionary *_requestParameters;
    NSNumber *_timeoutInterval;
}

@property(nonatomic) int localizationStyle; // @synthesize localizationStyle=_localizationStyle;
- (id)valueForRequestParameter:(id)arg1;
- (id)copyRequestParameters;
@property(copy, nonatomic) NSString *keyProfile;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSNumber *timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
