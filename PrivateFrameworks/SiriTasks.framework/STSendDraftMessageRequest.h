//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class AFMessage;

@interface STSendDraftMessageRequest : AFSiriRequest
{
    AFMessage *_message;
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithMessage:(id)arg1;
- (id)createResponse;
- (void).cxx_destruct;
- (id)message;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
