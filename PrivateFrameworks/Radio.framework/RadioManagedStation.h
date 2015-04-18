//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface RadioManagedStation : NSManagedObject
{
}

+ (id)defaultPropertiesToFetch;
@property(nonatomic) long long adamID;
@property(nonatomic) unsigned int impressionThreshold;
@property(readonly, nonatomic, getter=isPreview) BOOL preview;
- (id)feedbackDictionaryRepresentation;
@property(nonatomic) int songMixType;
@property(nonatomic, getter=isPreviewOnly) BOOL previewOnly;
@property(copy, nonatomic) NSArray *trackPlaybackDescriptorQueue;
@property(retain, nonatomic) NSData *adData;
@property(nonatomic) double skipInterval;
@property(nonatomic) int skipFrequency;
@property(nonatomic) BOOL skipEnabled;
@property(nonatomic) BOOL isExplicit;
@property(nonatomic) int subscriberCount;
@property(nonatomic) BOOL likesEnabled;
@property(nonatomic, getter=isSharingEnabled) BOOL sharingEnabled;
@property(retain, nonatomic) NSArray *editableFields;
@property(copy, nonatomic) NSString *coreSeedName;
@property(nonatomic) long long stationID;
@property(copy, nonatomic) NSString *stationHash;
- (id)streamKeyURL;
- (id)streamCertificateURL;
@property(retain, nonatomic) NSURL *streamURL;
@property(copy, nonatomic) NSArray *skipTimestamps;
@property(nonatomic) BOOL virtualPlayEnabled;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
@property(copy, nonatomic) NSString *stationDescription;
@property(nonatomic, getter=isSponsored) BOOL sponsored;
@property(copy, nonatomic) NSString *skipIdentifier;
@property(copy, nonatomic) NSString *shareToken;
@property(retain, nonatomic) NSArray *seedTracks;
@property(nonatomic, getter=isPremiumPlacement) BOOL premiumPlacement;
@property(nonatomic, getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property(nonatomic, getter=isFeatured) BOOL featured;
@property(nonatomic) BOOL editEnabled;
@property(copy, nonatomic) NSDictionary *debugDictionary;
@property(copy, nonatomic) NSData *artworkURLData;
- (id)additionalReferencedTrackDescriptors;
@property(nonatomic) long long persistentID;
@property(copy, nonatomic) NSURL *artworkURL;
@property(nonatomic, getter=isShared) BOOL shared;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int sortOrder;
@property(copy, nonatomic) NSString *name;
@property(nonatomic, getter=isSubscribed) BOOL subscribed;

@end
