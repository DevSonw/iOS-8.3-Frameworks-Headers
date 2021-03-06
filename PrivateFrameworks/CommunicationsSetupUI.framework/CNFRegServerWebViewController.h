//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUIObjectModelDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class CNFRegController, CNFRegLoadingView, NSMutableArray, NSString, NSTimer, RUILoader, UIAlertView, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, RUIObjectModelDelegate>
{
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    UIAlertView *_alert;
    CDUnknownBlockType _alertHandler;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;
    UIWebView *_webView;
}

@property(readonly, nonatomic) BOOL timedOut; // @dynamic timedOut;
- (void)_handleTimeout;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelDidChange:(id)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)loadURL:(id)arg1;
- (void)setWantsWifi:(BOOL)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_cleanupLoader;
- (void)hideSpinner;
- (BOOL)canSendURLRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (BOOL)_shouldLog;
- (void)_stopTimeout;
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (id)logName;
- (id)initWithRegController:(id)arg1;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
@property(readonly, nonatomic) BOOL isLoaded; // @dynamic isLoaded;
@property(readonly, nonatomic) BOOL isLoading; // @dynamic isLoading;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationWillSuspend;
- (id)init;
- (void)dealloc;
- (void)showSpinner;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

