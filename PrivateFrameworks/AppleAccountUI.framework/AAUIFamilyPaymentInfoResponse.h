//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAResponse.h"

@class AAUIFamilyCreditCard;

@interface AAUIFamilyPaymentInfoResponse : AAResponse
{
    AAUIFamilyCreditCard *_creditCard;
}

@property(retain, nonatomic) AAUIFamilyCreditCard *creditCard; // @synthesize creditCard=_creditCard;
- (id)_parsedDateForServerMonth:(int)arg1 year:(int)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void).cxx_destruct;

@end
