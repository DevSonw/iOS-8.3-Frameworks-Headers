//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface LegacyTileHostLayer : CALayer
{
    struct LegacyTileGrid *_tileGrid;
}

- (id)initWithTileGrid:(struct LegacyTileGrid *)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (id)actionForKey:(id)arg1;

@end

