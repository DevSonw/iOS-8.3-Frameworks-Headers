//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FTCServiceMonitor : NSObject
{
    int _availability;
    int _type;
    int _token;
}

- (void)handleActiveAccountsChanged:(id)arg1;
- (void)_postAvailability:(int)arg1;
- (void)updateAvailability;
- (int)serviceAvailability;
@property(readonly, nonatomic) int serviceType;
- (void)dealloc;
- (void)_updateAvailability;
- (id)initWithServiceType:(int)arg1;

@end
