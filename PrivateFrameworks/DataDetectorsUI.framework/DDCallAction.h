//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
{
}

+ (BOOL)isAvailable;
- (BOOL)_titleFitsInActionSheet:(id)arg1;
- (_Bool)_retrieveNameForDestinationNumber:(id *)arg1 label:(id *)arg2;
- (id)_nameForPerson:(void *)arg1;
- (id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void *)arg2;
- (int)interactionType;
- (void)perform;
- (id)localizedName;

@end

