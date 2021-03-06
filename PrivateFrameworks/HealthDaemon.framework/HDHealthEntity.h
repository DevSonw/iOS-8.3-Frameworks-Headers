//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDHealthEntity : HDSQLiteEntity
{
}

+ (id)databaseName;
+ (id)entityWithPropertyValues:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)propertyValuesForAnyWithProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 healthDatabase:(id)arg5 error:(id *)arg6;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (id)protectedDatabaseName;
+ (BOOL)_performWriteTransaction:(BOOL)arg1 withHealthDatabase:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4 inaccessibilityHandler:(CDUnknownBlockType)arg5;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)createNonUniqueIndicesForColumns;
+ (BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (BOOL)enumerateEntitiesForSyncWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 limit:(unsigned int)arg4 lastSyncAnchor:(long long *)arg5 healthDatabase:(id)arg6 error:(id *)arg7 block:(CDUnknownBlockType)arg8;
+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned int)arg4 anchorProperty:(id)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 limit:(unsigned int)arg6 healthDatabase:(id)arg7 error:(id *)arg8;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned int)arg5 anchorProperty:(id)arg6;
+ (id)predicateForSyncWithPredicate:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3;
+ (id)propertyForSyncAnchor;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned int)arg7 lastSyncAnchor:(long long *)arg8 healthDatabase:(id)arg9 error:(id *)arg10 block:(CDUnknownBlockType)arg11;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (id)createTableSQL;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned int)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)setValuesWithDictionary:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (int)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;

@end

