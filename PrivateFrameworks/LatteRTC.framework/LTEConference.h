//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WRMClientDelegate.h"

@class AVAudioPayload, DTMFEventHandler, LTEAudioSessionConfig, NSMutableArray, NSObject<LTEConferenceDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, VCJitterBuffer, WRMClient;

@interface LTEConference : NSObject <WRMClientDelegate>
{
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    BOOL lastVoiceActive;
    double lastRTPTimeoutReportTime;
    double lastRTCPTimeoutReportTime;
    struct tagHANDLE *rtpHandle;
    char *bundleBuffer;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    unsigned int packetTimeoutCheckCounter;
    int sampleRate;
    int samplesPerFrame;
    struct _opaque_pthread_rwlock_t {
        long __sig;
        char __opaque[124];
    } stateLock;
    struct _opaque_pthread_mutex_t sessionLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    AVAudioPayload *currentAudioPayload;
    VCJitterBuffer *vcJitterBuffer;
    NSString *callID;
    struct opaqueRTCReporting *reportingAgent;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int state;
    BOOL isValid;
    NSObject<LTEConferenceDelegate> *_delegate;
    LTEAudioSessionConfig *_sessionConfig;
}

- (void)reportWRMMetrics:(const CDStruct_449de213 *)arg1;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (void)startCall;
- (void)setStreamDirection:(int)arg1;
- (void)setAudioSessionConfig:(id)arg1 withError:(id *)arg2;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (void)reportRTCPPackets:(struct tagRTCPPACKET *)arg1 withCount:(int)arg2;
- (int)captureMeshMode:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 voiceActivity:(BOOL)arg7;
- (void)stopWRM;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWRM;
- (void)stopCall;
- (BOOL)configureAudioSessionWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)setupRTPPayloadsWithDestinationIPPort:(struct tagIPPORT *)arg1;
@property(retain, nonatomic) LTEAudioSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (id)supportedAudioPayloads;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id *)arg2;
- (void)uninitializeWRM;
- (void)initializeWRM;
- (unsigned long)AMRModeToBitrate;
- (unsigned long)codecTypeFromAudioPayload:(int)arg1;
- (void)checkPacketTimeouts;
- (int)sendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 voiceActivity:(BOOL)arg7;
- (void)prepareForCall;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)setPauseAudio:(BOOL)arg1;
- (_Bool)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (_Bool)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9;
- (void)pullDecodedMeshMode:(char *)arg1 timestamp:(unsigned int)arg2 numBytes:(int)arg3 numSamples:(int)arg4;
@property BOOL isValid; // @synthesize isValid;
- (BOOL)setupAudioCodecWithPayload:(int)arg1;
- (id)addAudioPayload:(int)arg1;
- (BOOL)allocateBundleBuffer;
- (BOOL)setupAudioEncoders;
- (BOOL)choosePayload:(int *)arg1 count:(int)arg2;
- (BOOL)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)encodeAudio:(void *)arg1 numInputBytes:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5;
- (void)startPausedHeartbeat;
- (void)stopPausedHeartbeat;
- (void)unlock;
- (void)lock;
@property(nonatomic) NSObject<LTEConferenceDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

