//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IKAppNavigationController.h"

@class NSArray, NSMutableArray, NSString, SKUIClientContext, UINavigationController;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController>
{
    SKUIClientContext *_clientContext;
    id <SKUINavigationDocumentDelegate> _delegate;
    UINavigationController *_navigationController;
    UINavigationController *_overrideNavigationController;
    NSMutableArray *_stackItems;
}

@property(retain, nonatomic) UINavigationController *overrideNavigationController; // @synthesize overrideNavigationController=_overrideNavigationController;
- (void)setStackItems:(id)arg1 animated:(BOOL)arg2;
- (void)garbageCollectDocuments;
- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)popAllDocuments;
- (void)_unloadAllStackItems;
- (void)_handleStackDidChange;
- (id)_activeNavigationController;
- (id)initWithNavigationController:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *documentStackItems; // @synthesize documentStackItems=_stackItems;
- (id)documents;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)clear;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SKUINavigationDocumentDelegate> delegate; // @synthesize delegate=_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
