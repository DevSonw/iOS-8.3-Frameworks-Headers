//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CorePDF/CPObject.h>

@interface CPChunk : CPObject
{
    struct CGRect bounds;
    BOOL shrinksWithChildren;
    BOOL dirtyBounds;
    unsigned int position;
    long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (float)top;
- (float)right;
- (float)left;
- (float)bottom;
- (float)rotationAngle;
- (void)setChildren:(id)arg1;
- (void)setChunkPosition:(unsigned int)arg1;
- (void)translateObjectYBy:(float)arg1;
- (BOOL)intersectsChild:(struct CGRect)arg1;
- (void)setShrinksWithChildren:(BOOL)arg1;
- (BOOL)shrinksWithChildren;
- (BOOL)boundsEqualsRect:(struct CGRect)arg1 accuracy:(float)arg2;
- (BOOL)geometricallyContains:(id)arg1;
- (BOOL)overlapsVerticallyWith:(id)arg1;
- (BOOL)overlapsHorizontallyWith:(id)arg1;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (int)clusterLevelHint;
- (int)compareChunkPosition:(id)arg1;
- (int)compareYDescendingX:(id)arg1;
- (int)compareYDescending:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (int)compareY:(id)arg1;
- (int)compareLinearBounds:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (int)compareZDescending:(id)arg1;
- (int)compareZ:(id)arg1;
- (int)compareInsertionOrder:(id)arg1;
- (int)compareX:(id)arg1;
- (int)compareAnchorYDescending:(id)arg1;
- (int)compareAnchorX:(id)arg1;
- (int)compareAnchorY:(id)arg1;
- (void)setInsertionOrder:(long)arg1;
- (float)referenceAdvanceWidth;
- (float)clusterGapTo:(id)arg1;
- (id)describeBounds;
- (struct CGRect)adjustToPointBoundary:(struct CGRect)arg1;
- (float)opticalLeading;
- (void)accept:(id)arg1;
- (unsigned int)chunkPosition;
- (long)insertionOrder;
- (float)advanceDeltaAfterSpace;
- (float)absoluteGapTo:(id)arg1;
- (struct CGRect)renderedBounds;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)newTakeChildren;
- (void)fitBoundsToChildren;
- (void)addChildrenOf:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)resizeWith:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (int)compareTopDescending:(id)arg1;
- (struct CGSize)advance;
- (void)removeAll;
- (float)fontSize;
- (void)setAnchor:(struct CGPoint)arg1;
- (struct CGPoint)anchor;
- (void)sortUsingSelector:(SEL)arg1;
- (float)center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (struct CGRect)bounds;

@end

