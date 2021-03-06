//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVTaskDelegate.h"

@class NSMutableSet, NSSet, NSString, NSURL;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSMutableSet *_urlsToExamine;
    NSMutableSet *_principalURLs;
    NSURL *_urlBeingExamined;
    BOOL _authError;
}

@property(retain, nonatomic) NSMutableSet *principalURLs; // @synthesize principalURLs=_principalURLs;
@property(readonly, nonatomic) NSSet *resultPrincipalURLs;
- (id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3;
@property(retain, nonatomic) NSMutableSet *urlsToExamine; // @synthesize urlsToExamine=_urlsToExamine;
- (void)_fetchNextURL;
@property(retain, nonatomic) NSURL *urlBeingExamined; // @synthesize urlBeingExamined=_urlBeingExamined;
@property(readonly, nonatomic) BOOL didReceiveAuthenticationError; // @synthesize didReceiveAuthenticationError=_authError;
- (void)cancelTaskGroup;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)dealloc;
- (void)_finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

