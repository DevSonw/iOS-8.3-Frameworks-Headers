//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSUpdatesDatabaseSession.h>

@interface SSUpdatesDatabaseTransaction : SSUpdatesDatabaseSession
{
}

- (BOOL)mergeAvailableUpdates:(id)arg1 availableCount:(int *)arg2;
- (id)_newUpdateEntityPropertiesWithUpdate:(id)arg1;
- (BOOL)deleteUpdatesInstalledBefore:(double)arg1;

@end

