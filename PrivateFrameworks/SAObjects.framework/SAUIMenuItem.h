//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAUIMenuItem : SAAceView
{
}

+ (id)menuItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)menuItem;
@property(copy, nonatomic) NSURL *ref;
- (id)encodedClassName;
@property(copy, nonatomic) NSArray *commands;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSURL *icon;
@property(copy, nonatomic) NSString *title;
- (id)groupIdentifier;

@end
