//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceMemos/RCCompositionController.h>

@class NSURL;

@interface RCSavedRecordingCompositionController : RCCompositionController
{
    NSURL *_savedRecordingURI;
}

+ (id)compositionControllerForCreatingSavedRecording;
+ (id)compositionControllerForExistingSavedRecordingURI:(id)arg1;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)activeRecordingSessionWillFinish;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performCompositionUndoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithExistingSavedRecordingURI:(id)arg1;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(CDStruct_73a5d3ca)arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(CDUnknownBlockType)arg5 sessionFinishedBlock:(CDUnknownBlockType)arg6;
- (id)initWithComposition:(id)arg1;
@property(readonly, nonatomic) NSURL *savedRecordingURI; // @synthesize savedRecordingURI=_savedRecordingURI;
- (void)setComposition:(id)arg1;
- (void).cxx_destruct;

@end
