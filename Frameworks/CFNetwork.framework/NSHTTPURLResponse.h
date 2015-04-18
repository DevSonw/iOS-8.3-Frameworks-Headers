//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLResponse.h>

@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse
{
    NSHTTPURLResponseInternal *_httpInternal;
}

+ (id)localizedStringForStatusCode:(int)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isErrorStatusCode:(int)arg1;
- (id)initWithURL:(id)arg1 statusCode:(int)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
@property(readonly, copy) NSDictionary *allHeaderFields;
@property(readonly) int statusCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (struct __SecTrust *)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust *)arg1;
- (id)_clientCertificateState;
- (id)_clientCertificateChain;
- (id)initWithURL:(id)arg1 statusCode:(int)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)_peerCertificateChain;
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;

@end
