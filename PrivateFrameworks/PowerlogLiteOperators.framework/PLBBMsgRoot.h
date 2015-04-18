//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSNumber, NSString, PLAgent;

@interface PLBBMsgRoot : NSObject
{
    NSString *_msgName;
    NSNumber *_msgType;
    NSString *_msgPayload;
    NSString *_msgProcErr;
    NSDate *_msgDate;
    NSDictionary *_msgEntry;
    NSDictionary *_msgKVPairs;
    PLAgent *_agent;
}

@property(retain, nonatomic) NSDictionary *msgKVPairs; // @synthesize msgKVPairs=_msgKVPairs;
@property(retain, nonatomic) NSDictionary *msgEntry; // @synthesize msgEntry=_msgEntry;
@property(retain, nonatomic) NSDate *msgDate; // @synthesize msgDate=_msgDate;
@property(retain, nonatomic) NSString *msgPayload; // @synthesize msgPayload=_msgPayload;
@property(retain, nonatomic) NSString *msgName; // @synthesize msgName=_msgName;
- (void)sendAndLogPLEntry:(id)arg1 andOverride:(id)arg2;
- (void)appendToMsgProcError:(id)arg1;
@property(retain, nonatomic) NSNumber *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *msgProcErr; // @synthesize msgProcErr=_msgProcErr;
@property(retain, nonatomic) PLAgent *agent; // @synthesize agent=_agent;
- (void).cxx_destruct;
- (id)init;

@end
