//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKShareID, NSData, NSString;

@interface CKDSharePCSData : CKDPCSData
{
    struct _OpaquePCSShareProtection *_publicPCS;
    CKShareID *_shareID;
    NSString *_shareEtag;
    int _publicPermission;
    int _myParticipantType;
    int _myParticipantPermission;
    NSString *_publicPCSEtag;
    NSData *_publicPCSData;
}

+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int myParticipantType; // @synthesize myParticipantType=_myParticipantType;
@property(nonatomic) int myParticipantPermission; // @synthesize myParticipantPermission=_myParticipantPermission;
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;
- (BOOL)decryptPCSDataWithManager:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(nonatomic) struct _OpaquePCSShareProtection *publicPCS;
@property(copy, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(nonatomic) int publicPermission; // @synthesize publicPermission=_publicPermission;
- (id)CKPropertiesDescription;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
