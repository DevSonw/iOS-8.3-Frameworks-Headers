//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGDeduper : NSObject
{
}

+ (id)nearDuplicateEKEventOfPseudoEventTitle:(id)arg1 inEKEventsWithSameStartTime:(id)arg2;
+ (id)nearDuplicateOfPseudoEventTitle:(id)arg1 inCuratedEventsWithSameStartTime:(id)arg2;
+ (CDUnknownBlockType)resolveSGContactDetailsPreferringCuratedDetails;
+ (CDUnknownBlockType)resolveByPairs:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)resolveByScoreBreakTiesArbitrarily:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)resolveContactDetailUsingIsCuratedFn:(CDUnknownBlockType)arg1 labelLengthFn:(CDUnknownBlockType)arg2;
+ (id)dedupe:(id)arg1 bucketer:(CDUnknownBlockType)arg2 resolver:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)resolveSGObjectsPreferringCuratedDetails;
+ (CDUnknownBlockType)bucketerWithMapping:(CDUnknownBlockType)arg1;
+ (id)dedupeContactDetails:(id)arg1;

@end

