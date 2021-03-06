//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVWeakReference, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource *_fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
}

+ (id)alloc;
+ (void)initialize;
+ (id)_devices;
- (id)uniqueID;
- (BOOL)isConnected;
- (id)localizedName;
- (id)init;
- (void)dealloc;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (struct OpaqueFigCaptureSource *)figCaptureSource;
- (struct OpaqueCMClock *)deviceClock;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;

@end

