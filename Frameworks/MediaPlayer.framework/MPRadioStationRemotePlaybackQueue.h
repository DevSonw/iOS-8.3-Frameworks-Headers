//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPRadioStation;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue
{
    MPRadioStation *_radioStation;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) MPRadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end
