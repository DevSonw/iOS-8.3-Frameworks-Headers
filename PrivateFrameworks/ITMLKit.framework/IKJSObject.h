//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject
{
    IKAppContext *_appContext;
    NSMutableDictionary *_managedProperties;
}

- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (id)initWithAppContext:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *managedProperties; // @synthesize managedProperties=_managedProperties;
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;
- (id)jsValueForProperty:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

