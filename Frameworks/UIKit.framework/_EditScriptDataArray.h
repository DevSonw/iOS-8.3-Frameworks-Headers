//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_EditScriptData.h"

@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData>
{
    NSArray *_data;
    NSString *_cachedStringValue;
}

+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2;
+ (id)EditScriptDataWithArray:(id)arg1;
@property(retain, nonatomic) NSString *cachedStringValue; // @synthesize cachedStringValue=_cachedStringValue;
- (id)initWithString:(id)arg1 chunkSize:(int)arg2;
- (id)stringAtIndex:(int)arg1;
- (int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
- (int)characterIndexForItem:(int)arg1;
- (int)lengthOfItem:(int)arg1;
- (id)stringValue;
- (id)initWithArray:(id)arg1;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (int)length;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

