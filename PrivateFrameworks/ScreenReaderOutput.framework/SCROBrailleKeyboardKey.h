//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROBrailleKey.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey
{
    NSString *_keyString;
    unsigned int _modifiers;
}

- (void)setModifiers:(unsigned int)arg1;
- (unsigned int)modifiers;
- (id)keyString;
- (void)setKeyString:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
