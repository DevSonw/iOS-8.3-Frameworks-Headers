//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebMediaSessionHelper : NSObject
{
    struct MediaSessionManageriOS *_callback;
    struct RetainPtr<MPVolumeView> _volumeView;
    struct RetainPtr<MPAVRoutingController> _airPlayPresenceRoutingController;
}

- (void)allocateVolumeView;
- (void)interruption:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;
- (void)stopMonitoringAirPlayRoutes;
- (void)startMonitoringAirPlayRoutes;
- (BOOL)hasWirelessTargetsAvailable;
- (void)clearCallback;
- (id)initWithCallback:(struct MediaSessionManageriOS *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;

@end

