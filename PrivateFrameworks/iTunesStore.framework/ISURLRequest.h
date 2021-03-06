//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSCoding, NSCopying>
{
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

+ (id)requestWithURL:(id)arg1;
- (id)_initCommon;
@property(retain) NSString *appleClientApplication;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
@property(retain) NSDictionary *queryStringDictionary;
@property(retain) NSDictionary *customHeaders;
@property(readonly) NSURL *primaryURL;
@property long long expectedContentLength;
@property int allowedRetryCount;
@property int URLBagType;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
@property(retain) NSString *HTTPMethod;
- (id)requestProperties;
@property(retain) NSInputStream *HTTPBodyStream;
@property unsigned int cachePolicy;
@property double timeoutInterval;
@property(retain) NSArray *URLs;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
@property(retain) NSData *HTTPBody;
- (id)initWithRequestProperties:(id)arg1;

@end

