//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface CLIndoorLocation : NSObject <NSSecureCoding>
{
    BOOL _requestsGpsAssistance;
    NSString *_locationId;
    NSString *_locationDescription;
    CDStruct_7a56d1c9 _location;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(nonatomic) CDStruct_7a56d1c9 location; // @synthesize location=_location;
@property(nonatomic) BOOL requestsGpsAssistance; // @synthesize requestsGpsAssistance=_requestsGpsAssistance;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

