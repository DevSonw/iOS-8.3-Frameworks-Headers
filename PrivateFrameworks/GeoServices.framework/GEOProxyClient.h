//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GEOProxyClient : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSData *_auditToken;
    BOOL _isApplication;
}

+ (id)compositeClientForClients:(id)arg1;
+ (id)currentClient;
- (id)URLConnectionProperties;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSData *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) BOOL isApplication; // @synthesize isApplication=_isApplication;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
