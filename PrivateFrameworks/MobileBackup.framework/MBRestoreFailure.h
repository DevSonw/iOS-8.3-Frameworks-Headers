//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData, NSError, NSString;

@interface MBRestoreFailure : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_displayName;
    NSString *_dataclass;
    NSString *_assetType;
    NSData *_icon;
    NSError *_error;
}

@property(copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 displayName:(id)arg4 error:(id)arg5;
@property(copy, nonatomic) NSData *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

