//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAXTextCharPropertyBag : NSObject
{
}

+ (id)stringWithUnderlineType:(int)arg1;
+ (id)stringWithStrikeThroughType:(int)arg1;
+ (id)stringWithCapsType:(int)arg1;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (void)readUnderlineFill:(struct _xmlNode *)arg1 underline:(id)arg2 drawingState:(id)arg3;
+ (void)readUnderlineType:(id)arg1 underline:(id)arg2;
+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;

@end

