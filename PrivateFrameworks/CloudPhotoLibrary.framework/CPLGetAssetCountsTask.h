//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@interface CPLGetAssetCountsTask : CPLEngineSyncTask
{
    id <CPLEngineTransportGetAssetCountsTask> _transportTask;
}

- (id)taskIdentifier;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (void)launch;

@end
