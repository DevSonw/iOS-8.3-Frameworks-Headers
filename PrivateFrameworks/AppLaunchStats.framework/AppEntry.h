//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppEntry : NSObject
{
    unsigned long long _positiveHits;
    unsigned long long _negativeHits;
    unsigned long long _type1Errors;
    unsigned long long _type2Errors;
    unsigned long long _admissions;
    unsigned long long _rejections;
}

@property unsigned long long rejections; // @synthesize rejections=_rejections;
@property unsigned long long admissions; // @synthesize admissions=_admissions;
@property unsigned long long type2Errors; // @synthesize type2Errors=_type2Errors;
@property unsigned long long type1Errors; // @synthesize type1Errors=_type1Errors;
@property unsigned long long negativeHits; // @synthesize negativeHits=_negativeHits;
@property unsigned long long positiveHits; // @synthesize positiveHits=_positiveHits;
- (id)initWithStatistics:(unsigned long long)arg1 negativeHits:(unsigned long long)arg2 type1Errors:(unsigned long long)arg3 type2Errors:(unsigned long long)arg4 admissions:(unsigned long long)arg5 rejections:(unsigned long long)arg6;
- (id)init;

@end
