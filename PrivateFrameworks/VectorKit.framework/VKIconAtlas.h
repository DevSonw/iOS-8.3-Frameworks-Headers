//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable, VKPIconPack;

@interface VKIconAtlas : NSObject
{
    VKPIconPack *_iconPack;
    struct _GEOGenericContainer<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, id, std::__1::hash<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _artworkPool;
    NSMapTable *_atlasToImages;
    NSLock *_atlasToImagesLock;
}

- (id)_artworkForBaseImage:(struct CGImage *)arg1 additionalImage:(struct CGImage *)arg2 cacheKey:(id)arg3 style:(CDStruct_5977520b *)arg4 contentScale:(float)arg5;
- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(float)arg2 size:(int)arg3;
- (struct CGImage *)_createImageForIconInfo:(id)arg1 contentScale:(float)arg2;
- (id)initWithIconPack:(id)arg1;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longValue:(unsigned long long)arg2 style:(CDStruct_5977520b *)arg3 contentScale:(float)arg4 size:(int)arg5;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 value:(unsigned int)arg2 style:(CDStruct_5977520b *)arg3 contentScale:(float)arg4 size:(int)arg5;
- (id)artworkForName:(id)arg1 style:(CDStruct_5977520b *)arg2 contentScale:(float)arg3 size:(int)arg4;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

@end
