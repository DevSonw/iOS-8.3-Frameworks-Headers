//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSUUID, WPAirPlaySolo;

@protocol WPAirPlaySoloDelegate <NSObject>
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySoloDidUpdateState:(WPAirPlaySolo *)arg1;

@optional
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 didLosePeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 didStopTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 didStartTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)airPlaySoloStoppedScanning:(WPAirPlaySolo *)arg1;
- (void)airPlaySoloStartedScanning:(WPAirPlaySolo *)arg1;
- (void)airPlaySolo:(WPAirPlaySolo *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)airPlaySoloStoppedAdvertising:(WPAirPlaySolo *)arg1;
- (void)airPlaySoloStartedAdvertising:(WPAirPlaySolo *)arg1;
@end

