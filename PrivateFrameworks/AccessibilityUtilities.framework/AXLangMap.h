//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXDialectMap, NSArray, NSString;

@interface AXLangMap : NSObject
{
    BOOL _western;
    BOOL _ambiguous;
    AXDialectMap *userLocaleDialect;
    NSArray *_dialects;
    NSString *_generalLanguageID;
    AXDialectMap *_userPreferredDialect;
    NSArray *_alternateLanguageIDs;
    NSArray *_associatedAmbiguousLanguages;
}

@property(retain, nonatomic) NSArray *associatedAmbiguousLanguages; // @synthesize associatedAmbiguousLanguages=_associatedAmbiguousLanguages;
@property(readonly, nonatomic) NSArray *alternativeVoiceIdentifiers;
- (id)dialectWithLocaleIdentifier:(id)arg1;
@property(readonly, nonatomic) AXDialectMap *defaultDialect;
- (id)initWithLanguageID:(id)arg1 isWestern:(BOOL)arg2 isAmbiguous:(BOOL)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6;
@property(readonly, nonatomic) AXDialectMap *userLocaleDialect; // @synthesize userLocaleDialect;
@property(nonatomic) AXDialectMap *userPreferredDialect; // @synthesize userPreferredDialect=_userPreferredDialect;
@property(retain, nonatomic) NSArray *alternateLanguageIDs; // @synthesize alternateLanguageIDs=_alternateLanguageIDs;
- (id)basicDescription;
@property(retain, nonatomic) NSArray *dialects; // @synthesize dialects=_dialects;
@property(copy, nonatomic) NSString *generalLanguageID; // @synthesize generalLanguageID=_generalLanguageID;
@property(nonatomic, getter=isAmbiguous) BOOL ambiguous; // @synthesize ambiguous=_ambiguous;
@property(nonatomic, getter=isWestern) BOOL western; // @synthesize western=_western;
- (id)debugDescription;
- (id)description;
- (void)dealloc;

@end
