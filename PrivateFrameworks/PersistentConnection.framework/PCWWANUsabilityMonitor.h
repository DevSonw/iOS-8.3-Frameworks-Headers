//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSObject<OS_dispatch_queue>, NSString, PCInterfaceUsabilityMonitor;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _isInCall;
    BOOL _isInHighPowerState;
    BOOL _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    struct __CFString *_currentRAT;
    int _powerlogCDRXToken;
    struct __CTServerConnection *_telephonyServer;
    long _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
}

@property(readonly, nonatomic) int interfaceIdentifier;
@property(readonly, nonatomic) int linkQuality;
- (void)_adjustInterfaceNameForWWANContextID:(long)arg1;
- (void)_setupWWANMonitor;
- (id)initWithDelegateQueue:(id)arg1;
- (void)_forwardConfigurationOnIvarQueue;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
@property(readonly, nonatomic) struct __CFString *currentRAT; // @synthesize currentRAT=_currentRAT;
@property(readonly, nonatomic) BOOL isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isBadLinkQuality;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
