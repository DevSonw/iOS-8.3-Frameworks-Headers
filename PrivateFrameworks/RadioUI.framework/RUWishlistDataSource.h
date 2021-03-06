//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RadioGetWishListRequest;

@interface RUWishlistDataSource : NSObject
{
    RadioGetWishListRequest *_wishlistRequest;
    NSArray *_wishlistedTracks;
    id <RUWishlistDataSourceDelegate> _delegate;
}

- (void)_notifyDidInvalidate;
- (void)refreshWishlist;
- (void)deleteWishlistedTrack:(id)arg1;
- (void)deleteAllWishlistedTracks;
@property(readonly, nonatomic) NSArray *wishlistedTracks; // @synthesize wishlistedTracks=_wishlistedTracks;
@property(readonly, nonatomic, getter=isRefreshing) BOOL refreshing;
- (void).cxx_destruct;
@property(nonatomic) id <RUWishlistDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

