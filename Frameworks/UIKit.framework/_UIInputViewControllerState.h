//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class TIDocumentState, TITextInputTraits;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding>
{
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
}

+ (id)stateForKeyboardState:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)createDocumentStateIfNecessary;
@property(retain, nonatomic) TIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(retain, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

