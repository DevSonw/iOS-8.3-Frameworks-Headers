//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper
{
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (void)markAsFinished;
- (int)status;
- (void)dealloc;
- (id)initWithWritingHelper:(id)arg1;
- (void)markCurrentPassAsFinished;
- (BOOL)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)currentPassDescription;
- (BOOL)canPerformMultiplePasses;
- (BOOL)isReadyForMoreMediaData;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1;

@end
