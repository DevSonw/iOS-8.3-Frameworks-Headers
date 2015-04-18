//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)geniusSummonFailedWithReason:(id)arg1;
+ (id)geniusSummonFailedWithErrorCode:(int)arg1;
+ (id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummonFailed;
- (id)initWithErrorCode:(int)arg1;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) int errorCode;
- (id)initWithReason:(id)arg1;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
