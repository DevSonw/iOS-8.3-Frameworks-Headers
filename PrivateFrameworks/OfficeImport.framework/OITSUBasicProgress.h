//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class OITSUBasicProgressStorage;

@interface OITSUBasicProgress : OITSUProgress
{
    OITSUBasicProgressStorage *mStorage;
}

- (id)initWithMaxValue:(double)arg1;
@property(getter=isIndeterminate) BOOL indeterminate;
@property double value;
- (id)init;
- (void)dealloc;
- (double)maxValue;

@end
