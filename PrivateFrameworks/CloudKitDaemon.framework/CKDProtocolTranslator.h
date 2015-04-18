//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDPIdentifier, NSString;

@interface CKDProtocolTranslator : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_containerScopedUserID;
    id <CKDProtocolTranslatorIdentityDelegate> _identityDelegate;
    NSString *_overriddenContainerScopedUserID;
}

+ (id)translatorIgnoringUserIDs;
- (id)identityFromPUser:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(int)arg2 error:(id *)arg3;
- (id)pRecordFromRecord:(id)arg1;
@property(readonly, nonatomic) CKDPIdentifier *pUserID;
@property(nonatomic) __weak id <CKDProtocolTranslatorIdentityDelegate> identityDelegate; // @synthesize identityDelegate=_identityDelegate;
- (id)pParticipantFromShareParticipant:(id)arg1;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id *)arg2;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(BOOL)arg2;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)recordIDFromPUserName:(id)arg1 error:(id *)arg2;
- (id)pIdentifierFromUserRecordName:(id)arg1;
- (id)userNameFromPIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)_isDefaultUserNameFromClient:(id)arg1;
- (BOOL)_isDefaultUserNameFromServer:(id)arg1;
@property(copy, nonatomic) NSString *overriddenContainerScopedUserID; // @synthesize overriddenContainerScopedUserID=_overriddenContainerScopedUserID;
- (id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)shareIDFromPShareIdentifier:(id)arg1 error:(id *)arg2;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(BOOL)arg2 outDeletedMergeFields:(id *)arg3 outKeysToSend:(id *)arg4;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id *)arg2;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id *)arg2;
- (id)pShareFromShare:(id)arg1;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id *)arg2;
- (id)shareFromPShare:(id)arg1 error:(id *)arg2;
- (id)pShareIdentifierFromShareID:(id)arg1;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)packageFromPPackage:(id)arg1 error:(id *)arg2;
- (id)assetFromPAsset:(id)arg1 error:(id *)arg2;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueFromObject:(id)arg1;
- (id)pPackageFromPackage:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)pRecordIdentifierFromShareID:(id)arg1;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id *)arg2;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
- (id)pRecordFromRecord:(id)arg1 forCache:(BOOL)arg2;
- (id)recordFromPRecord:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end
