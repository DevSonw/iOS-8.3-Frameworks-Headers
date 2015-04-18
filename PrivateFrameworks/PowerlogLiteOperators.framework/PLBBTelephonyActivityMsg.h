//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSNumber, NSString;

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot
{
    NSString *_activeBand;
    NSString *_dataStatus;
    NSString *_currentRat;
    NSString *_preferredRat;
    NSString *_campedRat;
    NSString *_callStatus;
    NSString *_airplaneMode;
    NSString *_simStatus;
    NSNumber *_signalStrength;
    NSNumber *_signalBars;
}

+ (id)entryEventPointDefinitionTelephonyActivity;
@property(retain) NSNumber *signalBars; // @synthesize signalBars=_signalBars;
@property(retain) NSString *simStatus; // @synthesize simStatus=_simStatus;
@property(retain) NSString *airplaneMode; // @synthesize airplaneMode=_airplaneMode;
@property(retain) NSString *callStatus; // @synthesize callStatus=_callStatus;
@property(retain) NSString *campedRat; // @synthesize campedRat=_campedRat;
@property(retain) NSString *preferredRat; // @synthesize preferredRat=_preferredRat;
@property(retain) NSString *currentRat; // @synthesize currentRat=_currentRat;
@property(retain) NSString *dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain) NSString *activeBand; // @synthesize activeBand=_activeBand;
- (void)logPointIntervalTelephonyActivity;
- (void)refreshTelephonyActivity;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
@property(retain) NSNumber *signalStrength; // @synthesize signalStrength=_signalStrength;
- (void).cxx_destruct;

@end
