//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSASComment;

@interface MSASCommentChange : NSObject
{
    MSASComment *_comment;
    int _deletionIndex;
    int _type;
}

@property(retain, nonatomic) MSASComment *comment; // @synthesize comment=_comment;
@property(nonatomic) int deletionIndex; // @synthesize deletionIndex=_deletionIndex;
- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;

@end

