//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SGSqliteDatabase, SGSuggestHistory;

@interface SGSqlEntityStore : NSObject
{
    SGSqliteDatabase *_db;
    NSString *_path;
    SGSuggestHistory *_history;
    BOOL _identityStoreDirty;
}

+ (id)defaultPath;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)arg1;
+ (void)prepareSqlStoreInMemory;
+ (id)sqlStoreInMemory;
+ (id)sqlStoreWithFilename:(id)arg1;
+ (id)defaultStore;
- (id)initWithFilename:(id)arg1;
- (unsigned int)entityCount;
- (id)allPseudoContacts;
- (id)allCuratedContacts;
- (id)allContactsWithEntityType:(unsigned int)arg1;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (id)recordIdForKey:(id)arg1;
- (id)loadEventByRecordId:(id)arg1;
- (id)loadEventByKey:(id)arg1;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3;
- (id)_filterOutNotActedOnEvents:(id)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)suggestContactByKey:(id)arg1;
- (id)_sanitizeWildcard:(id)arg1;
- (void)_deleteTimeRangesByEntityId:(long long)arg1;
- (void)writeEntity:(id)arg1;
- (long long)latestSchemaVersion;
- (id)historyForTesting;
- (id)dbHandleForTesting;
- (BOOL)_removeEntitiesWhere:(id)arg1 onPrep:(CDUnknownBlockType)arg2;
- (id)_filterOutActedOnEvents:(id)arg1;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (id)_eventFromSqlResult:(struct sqlite3_stmt *)arg1;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4;
- (id)_sanitizePrefix:(id)arg1;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(CDUnknownBlockType)arg6;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(CDUnknownBlockType)arg3;
- (id)displayableEntities:(id)arg1;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(CDUnknownBlockType)arg2 type:(unsigned int)arg3 dedupeAgainst:(id)arg4;
- (id)_filterOutUndisplayableEntities:(id)arg1;
- (id)loadEntityByRecordId:(id)arg1;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (id)suggestContactByMasterEntityId:(long long)arg1;
- (BOOL)entityIsDisplayable:(id)arg1;
- (id)pinnedEntities:(id)arg1;
- (id)loadContactByRecordId:(id)arg1;
- (BOOL)contactEntityIsActedOn:(id)arg1;
- (void)_addIndexingTagsTo:(id)arg1;
- (long long)_writeEntityToDb:(id)arg1;
- (long long)writeEntityFields:(id)arg1;
- (void)deleteEntitiesByDuplicateKey:(id)arg1;
- (id)entityFromSqlResult:(struct sqlite3_stmt *)arg1;
- (id)selectEntityQuery:(id)arg1;
- (BOOL)clearDatabase;
- (void)createTables;
- (void)clearAllTables;
- (id)loadEntityByKey:(id)arg1;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(unsigned int)arg2;
- (long long)schemaVersion;
- (void).cxx_destruct;
- (BOOL)isLocked;
- (void)unlock;
- (void)lock;

@end

