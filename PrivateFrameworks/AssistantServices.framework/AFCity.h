//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface AFCity : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_timeZone;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_alCityID;
}

+ (BOOL)supportsSecureCoding;
- (id)alCityValue;
- (id)_initWithName:(id)arg1 unlocalizedName:(id)arg2 countryName:(id)arg3 unlocalizedCountryName:(id)arg4 timeZone:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 alCityID:(id)arg8;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
