//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BBSectionIdentity.h"

@class BBActionResponse, BBBulletinRequestParameters, BBSectionInfo, BBSectionParameters, BBThumbnailSizeConstraints, NSArray, NSData, NSDictionary, NSSet, NSString;

@protocol BBDataProvider <BBSectionIdentity>
- (NSArray *)sortDescriptors;

@optional
- (NSSet *)bulletinsFilteredBy:(unsigned int)arg1 enabledSectionIDs:(NSSet *)arg2 count:(unsigned int)arg3 lastCleared:(id)arg4;
- (NSSet *)bulletinsFilteredBy:(unsigned int)arg1 count:(unsigned int)arg2 lastCleared:(id)arg3;
- (BOOL)syncsBulletinDismissal;
- (void)handleBulletinActionResponse:(BBActionResponse *)arg1;
- (void)receiveMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (BOOL)migrateSectionInfo:(BBSectionInfo *)arg1 oldSectionInfo:(BBSectionInfo *)arg2;
- (NSString *)displayNameForSubsectionID:(NSString *)arg1;
- (NSArray *)defaultSubsectionInfos;
- (void)dataProviderDidLoad;
- (float)attachmentAspectRatioForRecordID:(NSString *)arg1;
- (NSData *)primaryAttachmentDataForRecordID:(NSString *)arg1;
- (NSData *)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2;
- (BBSectionParameters *)sectionParameters;
- (id)clearedInfoForBulletins:(NSSet *)arg1;
- (id)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2;
- (NSDictionary *)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned int)arg1 lastClearedInfo:(id)arg2;
- (NSSet *)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2;
@end
