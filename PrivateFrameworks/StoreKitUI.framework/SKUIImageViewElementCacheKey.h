//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SKUIImageViewElementCacheKey : NSObject
{
    int _imageTreatment;
    struct CGSize _size;
    NSURL *_url;
}

- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

