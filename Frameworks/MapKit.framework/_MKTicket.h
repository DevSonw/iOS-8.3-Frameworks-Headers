//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapServiceTicket.h"

@class GEOMapRegion, GEOMapServiceTraits, NSArray, NSError, NSString;

@interface _MKTicket : NSObject <MKMapServiceTicket>
{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    NSError *_error;
}

- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 networkActivity:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSError *error;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (id)initWithTicket:(id)arg1;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(int)arg2 queue:(id)arg3 networkActivity:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

