//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUserDefaults.h"

@interface NSUserDefaults (NSUserDefaults)
+ (id)standardUserDefaults;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (oneway void)release;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)registerDefaults:(id)arg1;
- (id)dictionaryRepresentation;
- (int)integerForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)addSuiteNamed:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)initWithSuiteName:(id)arg1;
- (BOOL)synchronize;
- (float)floatForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)persistentDomainForName:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (BOOL)objectIsForcedForKey:(id)arg1;
- (void)removePersistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)removeVolatileDomainForName:(id)arg1;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)volatileDomainNames;
- (void)removeSuiteNamed:(id)arg1;
- (void)setSearchList:(id)arg1;
- (id)searchList;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (id)volatileDomainForName:(id)arg1;
@end

