//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSIndexPath, NSString;

@interface MCDBrowsableContentItem : NSObject
{
    struct _MRContentItem *_contentItem;
    NSIndexPath *_indexPath;
}

@property(readonly, nonatomic) BOOL isPlayable;
@property(readonly, nonatomic) NSData *artworkData;
@property(nonatomic) struct _MRContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (id)initWithMRContentItem:(struct _MRContentItem *)arg1;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) BOOL isContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
@property(readonly, nonatomic) float playbackProgress;

@end

