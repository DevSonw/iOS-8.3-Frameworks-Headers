//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSURLAuthenticationChallengeInternal, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding>
{
    NSURLAuthenticationChallengeInternal *_internal;
}

+ (id)_createAuthenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
- (struct _CFURLAuthChallenge *)_createCFAuthChallenge;
@property(readonly, copy) NSError *error;
- (void)setSender:(id)arg1;
@property(readonly, retain) id <NSURLAuthenticationChallengeSender> sender;
@property(readonly, copy) NSURLProtectionSpace *protectionSpace;
@property(readonly) int previousFailureCount;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithCFAuthChallenge:(struct _CFURLAuthChallenge *)arg1 sender:(id)arg2;
@property(readonly, copy) NSURLResponse *failureResponse;
@property(readonly, copy) NSURLCredential *proposedCredential;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;

@end

