//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EDTokenTreeNode : NSObject
{
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (void)setSibling:(id)arg1;
- (id)sibling;
- (void)setFirstChild:(id)arg1;
- (unsigned int)tokenIndex;
- (id)initWithIndexAndType:(unsigned int)arg1 type:(int)arg2;
- (id)firstChild;
- (id)init;
- (void)dealloc;

@end
