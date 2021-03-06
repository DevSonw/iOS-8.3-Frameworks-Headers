//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    NSMapTable *_settingToFlagMap;
    NSMapTable *_settingToObjectMap;
}

@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (void)_applyToSettings:(id)arg1;
- (id)_newMapTable;
- (id)_valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)_keyDescriptionForSetting:(unsigned int)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned int)arg2;
- (void)_setFlag:(int)arg1 forSetting:(unsigned int)arg2;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (id)allSettings;
- (void)_enumerateSettingsForObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFlagsWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (int)flagForSetting:(unsigned int)arg1;
- (BOOL)boolForSetting:(unsigned int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForSetting:(unsigned int)arg1;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

