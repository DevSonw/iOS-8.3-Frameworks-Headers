//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>
{
    BOOL _actionLeavesApplication;
    BOOL _unbranded;
    BOOL _actionViewControllerHidesStatusBar;
    int _action;
    NSString *_accessibilityLabel;
    unsigned int _actionViewControllerPresentationOrientationMask;
    int _modalPresentationStyle;
    NSArray *_videoAssets;
    NSString *_uniqueIdentifier;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(copy, nonatomic) NSString *headlineForLCD; // @synthesize headlineForLCD=_headlineForLCD;
@property(copy, nonatomic) NSString *descriptionForLCD; // @synthesize descriptionForLCD=_descriptionForLCD;
@property(retain, nonatomic) NSURL *staticImageURL; // @synthesize staticImageURL=_staticImageURL;
@property(retain, nonatomic) NSArray *videoAssets; // @synthesize videoAssets=_videoAssets;
@property(retain, nonatomic) NSURL *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property(nonatomic) BOOL actionViewControllerHidesStatusBar; // @synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar;
@property(nonatomic) unsigned int actionViewControllerPresentationOrientationMask; // @synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask;
@property(nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property(nonatomic) double skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property(nonatomic) BOOL unbranded; // @synthesize unbranded=_unbranded;
@property(nonatomic) BOOL actionLeavesApplication; // @synthesize actionLeavesApplication=_actionLeavesApplication;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_actionDescription;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) int modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) int action; // @synthesize action=_action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

