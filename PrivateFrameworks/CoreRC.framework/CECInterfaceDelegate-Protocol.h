//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CECInterface;

@protocol CECInterfaceDelegate <NSObject>
- (void)interfacePropertiesChanged:(CECInterface *)arg1;
- (void)interface:(CECInterface *)arg1 receivedFrame:(struct CECFrame)arg2;
@end

