//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (void)setThreadMOC:(id)arg1;
- (id)mainMOC;
- (id)threadMOC;
- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)document;
- (id)init;
- (id)mainThread;

@end
