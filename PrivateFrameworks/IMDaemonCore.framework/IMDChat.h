//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    int _state;
    unsigned char _style;
    unsigned int _unreadCount;
    long long _rowID;
    BOOL _isArchived;
}

@property(copy) NSString *chatIdentifier;
@property(copy) NSString *groupID;
@property unsigned int unreadCount;
@property(copy) NSString *accountID;
- (void)updateDisplayName:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
@property(readonly, retain) NSDictionary *chatProperties;
@property(readonly, retain) IMDServiceSession *serviceSession;
- (void)_setRowID:(long long)arg1;
@property(readonly) BOOL isArchived;
- (void)_setUnreadCount:(unsigned int)arg1;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(int)arg11 style:(unsigned char)arg12;
@property(copy) NSString *lastAddressedLocalHandle;
- (void)storeAndBroadcastChatChanges;
@property(retain) IMMessageItem *lastMessage;
- (id)copyDictionaryRepresentation:(BOOL)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_updateCachedParticipants;
@property(copy) NSString *roomName;
@property(copy) NSString *guid;
@property(readonly, retain) IMDService *service;
@property(copy) NSArray *participants;
- (void)addParticipant:(id)arg1;
@property(copy) NSString *serviceName;
@property(readonly, retain) IMDAccount *account;
@property(copy) NSString *displayName;
@property(retain) NSDictionary *properties;
@property(readonly, retain) NSDictionary *dictionaryRepresentation;
@property unsigned char style;
@property int state;
- (id)description;
- (void)dealloc;
@property long long rowID;
- (void)removeParticipant:(id)arg1;

@end
