//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSKeyValueSetter.h>

@interface NSKeyValueMethodSetter : NSKeyValueSetter
{
    struct objc_method *_method;
}

- (struct objc_method *)method;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 method:(struct objc_method *)arg3;

@end
