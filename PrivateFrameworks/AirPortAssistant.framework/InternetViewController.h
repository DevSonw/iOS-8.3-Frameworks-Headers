//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AirPortAssistant/AssistantSubUIViewController.h>

#import "UIScrollViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate>
{
    UIView *spinnerWithStatusAdjacentView;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UIView *tableHeaderContainerView;
    UIView *diagramContainerView;
    UIView *descriptionContainerView;
    UILabel *descriptionLabel;
    UIImageView *cablingImageLastFrame;
    unsigned int internetFlow;
    NSString *_swapDescriptionText;
    NSString *_swapSourceLabelText;
}

- (void)setCommonTraitsForLabel:(id)arg1 forSize:(float)arg2;
- (void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned int)arg1 replacementProductID:(unsigned int)arg2;
@property(retain, nonatomic) NSString *swapSourceLabelText; // @synthesize swapSourceLabelText=_swapSourceLabelText;
@property(retain, nonatomic) NSString *swapDescriptionText; // @synthesize swapDescriptionText=_swapDescriptionText;
@property(retain, nonatomic) UIImageView *cablingImageLastFrame; // @synthesize cablingImageLastFrame;
@property(retain, nonatomic) UIView *diagramContainerView; // @synthesize diagramContainerView;
@property(retain, nonatomic) UIView *descriptionContainerView; // @synthesize descriptionContainerView;
- (void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4;
- (void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(CDStruct_4b2a0973 *)arg2;
@property(nonatomic) unsigned int internetFlow; // @synthesize internetFlow;
- (void)addSwapCablingUI;
- (void)addInternetNotWorkingUI;
- (void)addInternetWANPluginUI;
@property(retain, nonatomic) UIView *spinnerWithStatusAdjacentView; // @synthesize spinnerWithStatusAdjacentView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
- (void)presentSwapCablingUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentInternetWANPluginUI;
- (void)presentInternetDisconnectedUI;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

