//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBXpcConnection, NSDictionary;

@protocol CBXpcConnectionDelegate <NSObject>
- (void)xpcConnectionDidFinalize:(CBXpcConnection *)arg1;
- (void)xpcConnection:(CBXpcConnection *)arg1 didReceiveMsg:(unsigned short)arg2 args:(NSDictionary *)arg3;
- (void)xpcConnectionIsInvalid:(CBXpcConnection *)arg1;
- (void)xpcConnectionDidReset:(CBXpcConnection *)arg1;
@end

