//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MBFileManager : NSObject
{
}

+ (id)defaultManager;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2;
- (BOOL)removeFileAtPath:(id)arg1;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (id)directoryContentsAtPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;

@end

