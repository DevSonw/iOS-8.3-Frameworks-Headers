//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding>
{
    int _invalidationIgnoreCount;
    int _numberOfIgnoredInvalidations;
    int _entityType;
}

- (id)entityAtIndex:(unsigned int)arg1;
- (void)_didInvalidate;
- (void)endIgnoringInvalidation;
- (void)beginIgnoringInvalidation;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)_invalidateCalculatedEntities;
- (id)entities;
- (id)localizedSectionTitleAtIndex:(unsigned int)arg1;
- (void)preloadSectionEntities;
- (void)preloadEntities;
@property(readonly, nonatomic) BOOL usesSections;
- (id)anyEntity;
- (unsigned int)indexOfSectionEntity:(id)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
@property(readonly, nonatomic) BOOL showsIndexBar;
@property(readonly, nonatomic) BOOL showsEntityCountFooter;
@property(readonly, nonatomic) NSString *entityCountFormat;
- (BOOL)isIgnoringInvalidation;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (id)sectionEntities;
- (id)sectionEntityAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndexPath:(id)arg1;
- (BOOL)canEditEntityAtIndexPath:(id)arg1;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned int)arg1;
- (id)entityAtIndexPath:(id)arg1;
- (void)deleteEntityAtIndexPath:(id)arg1;
- (unsigned int)indexOfSectionForSectionTitleAtIndex:(unsigned int)arg1;
- (unsigned int)_globalIndexForIndexPath:(id)arg1;
- (void)_willInvalidate;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)invalidate;
@property(readonly, nonatomic) unsigned int numberOfSections;
@property(readonly, nonatomic) unsigned int count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (id)initWithEntityType:(int)arg1;

@end

