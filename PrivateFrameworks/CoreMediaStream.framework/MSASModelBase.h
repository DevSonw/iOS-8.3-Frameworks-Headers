//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MSASModelBase : NSObject
{
    BOOL _dbWasRecreated;
    struct sqlite3 *_db;
    NSString *_personID;
    struct __CFDictionary *_statements;
    NSObject<OS_dispatch_queue> *_statementQueue;
    NSObject<OS_dispatch_queue> *_dbQueue;
}

@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) BOOL dbWasRecreated; // @synthesize dbWasRecreated=_dbWasRecreated;
@property(nonatomic) struct __CFDictionary *statements; // @synthesize statements=_statements;
- (void)dbQueueRollbackTransaction;
- (id)dbQueuePersistentDataForKey:(id)arg1;
- (void)dbQueueDeletePersistentValueWithKey:(id)arg1;
- (void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2;
- (id)dbQueuePersistentStringForKey:(id)arg1;
- (void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2;
- (id)dbQueuePersistentObjectForKey:(id)arg1;
- (struct sqlite3_stmt *)statementForString:(id)arg1;
@property(readonly, nonatomic) struct sqlite3 *dbQueueDB; // @synthesize dbQueueDB=_db;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3;
- (void)dbQueueEndTransaction;
- (void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2;
- (void)dbQueueBeginTransaction;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
- (void)deletePersistentValueWithKey:(id)arg1;
- (void)setPersistentString:(id)arg1 forKey:(id)arg2;
- (id)persistentStringForKey:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (struct sqlite3 *)db;
- (void).cxx_destruct;
- (void)dealloc;

@end
