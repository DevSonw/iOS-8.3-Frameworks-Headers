//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSNumber, NSPersistentStoreCoordinator, NSURL;

@interface SPIndex : NSObject
{
    NSURL *_storeURL;
    BOOL _ubiquity;
    NSNumber *_maxID;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

- (void)deleteTopHitsWithExtIDs:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (void)deleteRecordsWithExtIDs:(id)arg1;
- (id)recordForExtID:(id)arg1;
- (id)_createObject:(id)arg1;
- (id)nextCXIDForEntityName:(id)arg1;
- (id)maxExistingCXIDForEntityName:(id)arg1;
- (id)_objectsForCXIDs:(id)arg1 entityName:(id)arg2;
- (id)topHitsForCxIDs:(id)arg1;
- (id)createTopHit;
- (id)topHitForExtID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (id)initWithPath:(id)arg1 usingUbiquity:(BOOL)arg2;
- (id)recordsForExtIDs:(id)arg1;
- (id)recordsForCxIDs:(id)arg1;
- (id)createRecord;
- (void)deleteRecords:(id)arg1;
- (void)erase;
- (id)persistentStoreCoordinator;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (BOOL)save;

@end

