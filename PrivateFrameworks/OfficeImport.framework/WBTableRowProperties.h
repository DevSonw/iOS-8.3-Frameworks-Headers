//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBTableRowProperties : NSObject
{
}

+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2;
+ (void)write:(id)arg1 properties:(id)arg2 wrdProperties:(struct WrdTableProperties *)arg3 tracked:(struct WrdTableProperties *)arg4;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 properties:(id)arg4;

@end

