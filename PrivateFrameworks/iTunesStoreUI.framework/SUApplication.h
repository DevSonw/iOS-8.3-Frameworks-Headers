//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class NSString, UIColor, UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate>
{
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
    UIColor *_interactionTintColor;
}

- (void)runTestInvocation:(id)arg1;
- (void)_runScriptTestWithOptions:(id)arg1;
- (void)_exitForStoreNotAvailable;
- (void)_exitIfStoreNotAvailable;
- (void)_setupUI;
- (void)_teardownUI;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
@property(copy, nonatomic) UIColor *interactionTintColor; // @synthesize interactionTintColor=_interactionTintColor;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (double)defaultImageSnapshotExpiration;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
