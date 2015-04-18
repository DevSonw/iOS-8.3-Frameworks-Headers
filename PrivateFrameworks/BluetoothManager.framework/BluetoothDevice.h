//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
}

- (BOOL)connected;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (struct BTDeviceImpl *)device;
- (void)setPIN:(id)arg1;
- (unsigned int)connectedServices;
- (void)endVoiceCommand;
- (void)startVoiceCommand;
- (void)acceptSSP:(int)arg1;
- (void)connectWithServices:(unsigned int)arg1;
- (BOOL)supportsBatteryLevel;
- (unsigned int)connectedServicesCount;
- (id)scoUID;
- (unsigned int)minorClass;
- (BOOL)_isNameCached;
- (void)_clearName;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (id)syncGroups;
- (void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (void)unpair;
- (void)setSyncSettings:(CDStruct_b2f7276a)arg1;
- (CDStruct_b2f7276a)syncSettings;
- (BOOL)cloudPaired;
- (unsigned int)majorClass;
- (void)disconnect;
- (void)connect;
- (int)batteryLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (int)compare:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)address;
- (BOOL)paired;
- (BOOL)isServiceSupported:(unsigned int)arg1;

@end
