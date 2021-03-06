//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAAppleIDLoginPlugin.h"
#import "AASetupAssistantDelegateService.h"

@class CNFRegController, IDSAccountController, NSDictionary, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin>
{
    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
    CDUnknownBlockType _completionHandler;
    IDSAccountController *_accountController;
}

@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (int)serviceType;
@property(retain, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
- (id)_existingAccountForSetupParameters:(id)arg1;
- (id)parametersForIdentityEstablishmentRequest;
- (void)setupOperationFailed;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)accountSetupRequestParameters;
- (id)delegateServiceIdentifier;
- (void)handleLoginResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)parametersForLoginRequest;
- (BOOL)_shouldSkipAccountSetup:(id)arg1;
- (void)_handleFailureWithErrorCode:(int)arg1;
- (id)_defaultSetupRequestParameters;
- (BOOL)_hasOperationalAccount;
- (BOOL)_hasAccount;
- (BOOL)serviceIsAvailable;
- (id)_existingOperationalAccount;
- (BOOL)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (void)_handleSuccess:(BOOL)arg1 error:(id)arg2;
- (id)_logName;
- (id)initWithRegController:(id)arg1;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)displayName;
- (void)_cleanup;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)serviceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

