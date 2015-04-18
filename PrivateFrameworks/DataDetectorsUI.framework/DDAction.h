//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSObject<DDActionDelegate>, NSURL;

@interface DDAction : NSObject <NSCoding, NSSecureCoding>
{
    struct __DDResult *_result;
    struct __DDResult *_coalescedResult;
    struct __CFArray *_associatedResults;
    NSDictionary *_context;
    NSURL *_url;
    BOOL _cachedCoalescedResult;
    BOOL _cachedAssociatedResults;
    BOOL _isDefaultAction;
    id _delegate;
}

+ (BOOL)isAvailable;
+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)actionWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
+ (BOOL)supportsSecureCoding;
@property BOOL isDefaultAction; // @synthesize isDefaultAction=_isDefaultAction;
- (void)_copyURL:(id)arg1;
- (void)_copyURL:(id)arg1 andString:(id)arg2;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (struct __CFArray *)associatedResults;
- (struct __DDResult *)coalescedResult;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)addToRecents;
- (struct __DDResult *)result;
- (int)interactionType;
- (BOOL)hasUserInterface;
- (void)perform;
- (id)viewController;
- (id)localizedName;
- (id)context;
- (id)url;
@property NSObject<DDActionDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
