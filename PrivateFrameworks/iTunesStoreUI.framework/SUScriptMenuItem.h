//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject
{
    BOOL _enabled;
    NSString *_title;
    id _userInfo;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
- (void)_sendDidChange;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property BOOL enabled;
@property(retain) id userInfo;
@property(retain) NSString *title;
- (id)init;
- (void)dealloc;

@end

