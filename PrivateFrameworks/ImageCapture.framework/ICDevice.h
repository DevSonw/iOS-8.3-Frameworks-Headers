//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceManager, NSString;

@interface ICDevice : NSObject
{
    void *_deviceProperties;
}

- (void)finalize;
@property(copy) NSString *transportType;
- (void)requestOpenSession;
@property(copy) NSString *productKind;
@property int usbVendorID;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)requestCloseSession;
@property BOOL closeSessionPending;
@property BOOL openSessionPending;
@property BOOL autoOpenSession;
@property BOOL hasOpenSession;
@property int usbProductID;
@property int usbLocationID;
@property DeviceManager *deviceManager;
@property(copy) NSString *UUIDString;
- (id)valueForUndefinedKey:(id)arg1;
@property(copy) NSString *name;
@property id <ICDeviceDelegate> delegate;
- (id)description;
- (id)init;
- (void)dealloc;
@property(readonly) struct CGImage *icon;

@end
