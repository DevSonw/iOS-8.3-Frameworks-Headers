//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PKPaperList : NSObject
{
    BOOL _hasMediaReady;
    NSArray *_papers;
    NSArray *_simplexPapers;
    NSArray *_duplexPapers;
    NSArray *_photoPapers;
    NSArray *_rolls;
}

+ (id)mediaDictFromAttrs:(struct _ipp_s *)arg1;
+ (id)paperListWithTXTRecord:(id)arg1;
+ (id)paperListWithAttrs:(struct _ipp_s *)arg1;
- (id)matchPaper:(id)arg1;
- (int)jobTypesSupported:(id)arg1;
- (id)filterPapers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)filterUsingBlock:(CDUnknownBlockType)arg1;
@property(retain) NSArray *photoPapers; // @synthesize photoPapers=_photoPapers;
@property(retain) NSArray *duplexPapers; // @synthesize duplexPapers=_duplexPapers;
@property(retain) NSArray *simplexPapers; // @synthesize simplexPapers=_simplexPapers;
- (void)addPaperSet:(id *)arg1 withCount:(int)arg2 toArrays:(id *)arg3;
- (id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2;
- (id)tersePaperFrom:(id)arg1 withRequest:(id)arg2;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize)arg1;
@property(retain, nonatomic) NSArray *rolls; // @synthesize rolls=_rolls;
- (id)adjustMargins:(id)arg1 forDuplex:(id)arg2;
- (id)matchPaper:(id)arg1 inList:(id)arg2;
- (BOOL)hasMatchingLoadedRoll:(id)arg1;
- (id)conjureMediaFromTXT:(id)arg1;
- (id)initWithTXTRecord:(id)arg1;
- (void)categorizePapers:(id)arg1;
@property(retain) NSArray *papers; // @synthesize papers=_papers;
@property BOOL hasMediaReady; // @synthesize hasMediaReady=_hasMediaReady;
- (id)initWithAttrs:(struct _ipp_s *)arg1;
- (id)paperListForDuplexMode:(id)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize)arg1 forPhoto:(BOOL)arg2;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize)arg1;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(char *)arg4;
- (BOOL)isPaperReady:(id)arg1;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
- (id)papersForDocumentWithSize:(struct CGSize)arg1 andDuplex:(BOOL)arg2;
- (id)papersForPhotoWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end
