//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation
{
    NSString *_exchangeID;
    NSArray *_recipientIndexes;
    NSString *_statusString;
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_sendDate;
    NSDate *_timeoutDate;
    NSDate *_completionDate;
    NSArray *_replies;
    unsigned char _senderIndex;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(retain, nonatomic) NSArray *recipientIndexes; // @synthesize recipientIndexes=_recipientIndexes;
@property(nonatomic) unsigned char senderIndex; // @synthesize senderIndex=_senderIndex;
@property(retain, nonatomic) NSString *exchangeID; // @synthesize exchangeID=_exchangeID;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;

@end

