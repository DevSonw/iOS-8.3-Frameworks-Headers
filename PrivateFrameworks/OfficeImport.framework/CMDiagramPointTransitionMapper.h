//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDiagramPointMapper.h>

@class NSDictionary;

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper
{
    int mShapeType;
    NSDictionary *mAdjustValues;
}

- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 parent:(id)arg5;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 adjustValues:(id)arg5 parent:(id)arg6;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
