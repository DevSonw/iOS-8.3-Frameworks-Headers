//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ATMessageLinkListener : NSObject
{
    id <ATMessageLinkListenerDelegate> _delegate;
}

- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
@property(nonatomic) __weak id <ATMessageLinkListenerDelegate> delegate; // @synthesize delegate=_delegate;

@end

