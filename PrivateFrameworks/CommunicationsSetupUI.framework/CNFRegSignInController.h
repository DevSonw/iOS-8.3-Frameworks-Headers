//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

#import "CNFRegCreateAccountControllerDelegate.h"

@class CNFRegLearnMoreButton, NSString, PSSpecifier;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate>
{
    PSSpecifier *_usernameSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createAccountButtonSpecifier;
    NSString *_pendingUsername;
    NSString *_pendingPassword;
    CDUnknownBlockType _alertHandler;
    unsigned int _signinFailureCount;
    CNFRegLearnMoreButton *_learnMoreButton;
    BOOL _hideLearnMoreButton;
    BOOL _useSystemAccount;
}

- (void)setPasswordText:(id)arg1;
- (void)cancelButtonTapped;
- (void)_updateUI;
- (void)handleURL:(id)arg1;
- (void)_handleTimeout;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)passwordFieldDidBeginEditing:(id)arg1;
- (void)usernameFieldDidBeginEditing:(id)arg1;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
@property(nonatomic) unsigned int signinFailureCount; // @synthesize signinFailureCount=_signinFailureCount;
- (void)_showSigninFailureAlert;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_loadRegionsIfNecessary;
- (void)_startTimeout;
@property(copy, nonatomic) NSString *pendingPassword; // @synthesize pendingPassword=_pendingPassword;
@property(copy, nonatomic) NSString *pendingUsername; // @synthesize pendingUsername=_pendingUsername;
- (void)__userTappedTextField;
- (void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)getPasswordForSpecifier:(id)arg1;
- (id)getUserNameForSpecifier:(id)arg1;
- (void)_resignFirstResponders;
- (void)learnMorePressed:(id)arg1;
- (void)_layoutLearnMoreButton;
- (void)_updateControllerState;
- (id)validationString;
- (id)_rightButtonItem;
- (void)_returnKeyPressed;
@property(nonatomic) BOOL hideLearnMoreButton; // @synthesize hideLearnMoreButton=_hideLearnMoreButton;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_incrementSigninFailureCount;
- (void)_resetSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_buildSpecifierCache:(id)arg1;
- (BOOL)passwordIsEmpty;
- (BOOL)usernameIsEmpty;
- (void)forgotIDButtonTapped;
- (void)showCreateAccountController;
- (void)signInTapped:(id)arg1;
- (id)usernameTextField;
- (void)setUsernameText:(id)arg1;
- (void)_setupEventHandlers;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)logName;
- (id)specifierList;
- (void)systemApplicationDidEnterBackground;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
- (void)systemApplicationWillEnterForeground;
- (id)bundle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)passwordTextField;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidResume;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

