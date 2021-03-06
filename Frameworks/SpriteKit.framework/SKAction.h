//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SKAction : NSObject <NSCopying, NSCoding>
{
    struct SKCAction *_caction;
}

+ (id)setTexture:(id)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)hide;
+ (id)runAction:(id)arg1 onChildWithName:(id)arg2;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)playSoundFileNamed:(id)arg1 waitForCompletion:(BOOL)arg2;
+ (id)playSoundFileNamed:(id)arg1;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2;
+ (id)setTexture:(id)arg1 resize:(BOOL)arg2;
+ (id)moveBY:(struct CGVector)arg1 duration:(double)arg2;
+ (id)removeFromParent;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachTo:(struct CGPoint)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)strengthBy:(float)arg1 duration:(double)arg2;
+ (id)strengthTo:(float)arg1 duration:(double)arg2;
+ (id)speedTo:(float)arg1 duration:(double)arg2;
+ (id)speedBy:(float)arg1 duration:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(float)arg4;
+ (id)followPath:(struct CGPath *)arg1 speed:(float)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
+ (id)colorizeWithColorBlendFactor:(float)arg1 duration:(double)arg2;
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(float)arg2 duration:(double)arg3;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(BOOL)arg3;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4;
+ (id)unhide;
+ (id)falloffBy:(float)arg1 duration:(double)arg2;
+ (id)falloffTo:(float)arg1 duration:(double)arg2;
+ (id)fadeAlphaTo:(float)arg1 duration:(double)arg2;
+ (id)fadeAlphaBy:(float)arg1 duration:(double)arg2;
+ (id)resizeToHeight:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)resizeByWidth:(float)arg1 height:(float)arg2 duration:(double)arg3;
+ (id)scaleYTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 duration:(double)arg2;
+ (id)scaleXTo:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)scaleXBy:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)moveToY:(float)arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)performSelector:(SEL)arg1 onTarget:(id)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveBy:(struct CGVector)arg1 duration:(double)arg2;
+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned int)arg2;
+ (id)scaleTo:(float)arg1 duration:(double)arg2;
+ (id)scaleBy:(float)arg1 duration:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
@property(nonatomic) BOOL finished;
@property(nonatomic) CDUnknownBlockType timingFunction;
@property(nonatomic) float speed;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double duration;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasRemovedFromTarget:(id)arg1 atTime:(double)arg2;
- (void)wasAddedToTarget:(id)arg1 atTime:(double)arg2;
- (float)ratioForTime:(double)arg1;
- (void)willResumeWithTarget:(id)arg1 atTime:(double)arg2;
- (void)wasPausedWithTarget:(id)arg1 atTime:(double)arg2;
@property(nonatomic) int timingMode;
- (void)setCppAction:(void *)arg1;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (struct SKCAction *)caction;

@end

