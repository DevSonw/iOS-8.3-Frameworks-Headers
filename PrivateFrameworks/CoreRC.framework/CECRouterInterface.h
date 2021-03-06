//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRC/CECInterface.h>

@class CECRouter;

@interface CECRouterInterface : CECInterface
{
    CECRouter *_router;
}

- (id)initWithRouter:(id)arg1;
- (BOOL)setPromiscMode:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setAddressMask:(unsigned short)arg1 error:(id *)arg2;
- (void)receivedFrame:(struct CECFrame)arg1;
- (BOOL)sendFrame:(struct CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id *)arg3;
- (id)properties;
- (void)dealloc;

@end

