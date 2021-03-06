//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKUIReviewConfiguration : NSObject
{
    NSString *_allVersionsURLString;
    NSString *_currentVersionURLString;
    NSString *_pageNumberQueryParameter;
    NSString *_ratingURLString;
}

@property(readonly, nonatomic) NSString *ratingURLString; // @synthesize ratingURLString=_ratingURLString;
@property(readonly, nonatomic) NSString *pageNumberQueryParameter; // @synthesize pageNumberQueryParameter=_pageNumberQueryParameter;
@property(readonly, nonatomic) NSString *currentVersionURLString; // @synthesize currentVersionURLString=_currentVersionURLString;
@property(readonly, nonatomic) NSString *allVersionsURLString; // @synthesize allVersionsURLString=_allVersionsURLString;
- (id)initWithConfigurationDictionary:(id)arg1;
- (void).cxx_destruct;

@end

