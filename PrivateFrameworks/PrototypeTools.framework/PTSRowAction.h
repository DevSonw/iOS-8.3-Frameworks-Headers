//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface PTSRowAction : NSObject <NSCopying>
{
    BOOL _deselectRowOnSuccess;
    CDUnknownBlockType _handler;
}

+ (id)action;
+ (id)actionWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL deselectRowOnSuccess; // @synthesize deselectRowOnSuccess=_deselectRowOnSuccess;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
