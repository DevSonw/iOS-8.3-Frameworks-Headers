//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/BWNode.h>

#import "BWBracketSettingsProvider.h"

@class FigCaptureStillImageSettings, NSArray, NSDictionary, NSString;

@interface BWHDRNode : BWNode <BWBracketSettingsProvider>
{
    CDUnknownFunctionPointerType _createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor *_sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    struct opaqueCMSampleBuffer *_pendingBracketBuffers[3];
    BOOL _preBracketedFrameReceived;
    FigCaptureStillImageSettings *_currentCaptureSettings;
}

+ (void)initialize;
- (void)_hdrProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(CDStruct_1d2e688e *)arg2 stillImageSettings:(id)arg3;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(CDStruct_1d2e688e *)arg2 stillImageSettings:(id)arg3;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;
- (long)_setupSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_clearCaptureRequestState;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

