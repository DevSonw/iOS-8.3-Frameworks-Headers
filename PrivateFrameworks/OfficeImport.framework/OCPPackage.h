//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

@interface OCPPackage : NSObject
{
    OCPPackageRelationshipCollection *mRelationships;
    OCPPackageProperties *mProperties;
    NSMutableDictionary *mDefaultContentTypes;
    NSMutableDictionary *mContentTypeOverrides;
}

- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 propertiesXml:(struct _xmlDoc *)arg2 contentTypesXml:(struct _xmlDoc *)arg3;
- (id)relationshipsByType:(id)arg1;
- (void)readContentTypeOverrideFromElement:(struct _xmlNode *)arg1;
- (void)readDefaultContentTypeFromElement:(struct _xmlNode *)arg1;
- (void)readContentTypesXml:(struct _xmlDoc *)arg1;
- (id)mainDocumentPart;
- (id)partByRelationshipType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)contentTypeForPartLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)properties;
- (id)init;
- (void)dealloc;

@end

