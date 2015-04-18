//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKCamera;

@interface VKCameraController : NSObject
{
    VKCamera *_camera;
    id <MDRenderTarget> _canvas;
    id <VKCameraControllerDelegate> _delegate;
    BOOL _gesturing;
    unsigned int _regionChangeCount;
    BOOL _inProgressRegionChangeIsAnimated;
}

@property(nonatomic) id <MDRenderTarget> canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
- (void)canvasDidLayout;
- (void)endRegionChange;
- (void)beginRegionChange:(BOOL)arg1;
@property(nonatomic, getter=isGesturing) BOOL gesturing; // @synthesize gesturing=_gesturing;
- (id)detailedDescription;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
@property(nonatomic) id <VKCameraControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end
