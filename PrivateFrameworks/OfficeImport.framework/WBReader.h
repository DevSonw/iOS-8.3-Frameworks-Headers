//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCBReader.h>

@class NSMutableArray, NSMutableDictionary, OITSUNoCopyDictionary, WBOfficeArtReaderState, WDDocument;

@interface WBReader : OCBReader
{
    struct WrdNoteTable *mFootnoteTable;
    struct WrdNoteTable *mEndnoteTable;
    struct WrdAnnotationTable *mAnnotationTable;
    struct WrdCPTableHeaders *mTableHeaders;
    struct WrdBookmarkTable *mBookmarkTable;
    struct WrdBookmarkTable *mAnnotationBookmarkTable;
    struct WrdFieldPositionTable *mFieldPositionTables[8];
    struct WrdStoryTable *mStoryTable;
    struct WrdStoryTable *mHeaderStoryTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressTable;
    struct WrdFileShapeAddressTable *mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory *mEshObjectFactory;
    struct WrdParagraphProperties *mLastRowParagraphProperties;
    NSMutableArray *mAnnotationOwners;
    OITSUNoCopyDictionary *mIndexToStyles;
    OITSUNoCopyDictionary *mIndexToFonts;
    WDDocument *mTargetDocument;
    WBOfficeArtReaderState *mOfficeArtState;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo>> *mTextBoxes;
    BOOL mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
}

- (id)styleAtIndex:(int)arg1;
@property(nonatomic) WDDocument *targetDocument; // @synthesize targetDocument=mTargetDocument;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (void)setReportProgress:(BOOL)arg1;
- (BOOL)reportProgress;
- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties *)arg1;
- (struct WrdParagraphProperties *)lastRowParagraphProperties;
- (struct WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressTable;
- (struct WrdStoryTable *)headerStoryTable;
- (struct WrdStoryTable *)storyTable;
- (id)annotationRangeStartForBookmarkIndex:(unsigned int)arg1;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned int)arg2;
- (struct WrdFieldPositionTable *)fieldPositionTableForTextType:(int)arg1;
- (id)annotationRangeStart;
- (struct WrdNoteTable *)endnoteTable;
- (struct WrdNoteTable *)footnoteTable;
- (struct WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned int)arg1;
- (unsigned int)textBoxCount;
- (struct WrdCPTableHeaders *)tableHeaders;
- (id)readCharactersForTextRun:(struct WrdTextRun *)arg1;
- (struct WrdBookmarkTable *)bookmarkTable;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (void)setAnnotationRangeStart:(id)arg1;
- (struct WrdBookmarkTable *)annotationBookmarkTable;
- (id)annotationOwner:(int)arg1;
- (struct WrdBinaryReader *)wrdReader;
- (struct WrdAnnotationTable *)annotationTable;
- (void)setOfficeArtState:(id)arg1;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (id)officeArtState;
- (struct WrdEshObjectFactory *)eshObjectFactory;
- (id)drawableForShapeId:(unsigned int)arg1;
- (id)read;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (id)fontAtIndex:(int)arg1;
- (BOOL)start;
- (void)initialize;
- (void)dealloc;

@end

