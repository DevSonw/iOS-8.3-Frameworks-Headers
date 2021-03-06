//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABCardGroupItem.h>

@class ABCardPropertyGroup, CNContact, CNLabeledValue, NSArray, NSString, NSURL;

@interface ABPropertyGroupItem : ABCardGroupItem
{
    BOOL _allowsIMessage;
    BOOL _allowsPhone;
    BOOL _allowsEmail;
    NSArray *_labeledValues;
    CNLabeledValue *_labeledValue;
    ABCardPropertyGroup *_group;
    NSArray *_contacts;
    CNContact *_contact;
    id <ABPropertyGroupItemDelegate> _delegate;
    CNLabeledValue *_originalLabeledValue;
}

+ (id)newPropertyGroupItemForProperty:(id)arg1;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contact:(id)arg3;
+ (id)propertyGroupItemWithLabeledValue:(id)arg1 group:(id)arg2 contacts:(id)arg3;
@property(readonly, nonatomic) NSString *displayLabel;
@property(readonly, nonatomic) NSString *placeholderString;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) NSString *property;
@property(nonatomic) ABCardPropertyGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(nonatomic) id <ABPropertyGroupItemDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) CNLabeledValue *originalLabeledValue; // @synthesize originalLabeledValue=_originalLabeledValue;
@property(nonatomic) BOOL allowsPhone; // @synthesize allowsPhone=_allowsPhone;
- (BOOL)isValidIdentifier:(int)arg1;
- (id)updateWithLabel:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
- (id)bestLabel:(id)arg1;
@property(retain, nonatomic) NSArray *labeledValues; // @synthesize labeledValues=_labeledValues;
- (void)_enumerateContactsAndValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabeledValue:(id)arg1 group:(id)arg2 contacts:(id)arg3;
- (id)initWithGroup:(id)arg1;
- (id)valueForDisplayString:(id)arg1;
- (id)bestValue:(id)arg1;
- (BOOL)isEquivalentToItem:(id)arg1;
@property(nonatomic) BOOL allowsIMessage; // @synthesize allowsIMessage=_allowsIMessage;
@property(nonatomic) BOOL allowsEmail; // @synthesize allowsEmail=_allowsEmail;
- (id)displayStringForValue:(id)arg1;
@property(readonly, nonatomic) NSString *editingStringValue;
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSArray *supportedLabels;
- (BOOL)isValidValue:(id)arg1;
@property(readonly, nonatomic) id normalizedValue;
@property(readonly, nonatomic) BOOL canRemove;
- (void)updateLabeledValueWithLabel:(id)arg1;
@property(readonly, nonatomic) NSString *displayValue;
- (BOOL)isFavoriteOfType:(int)arg1;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)saveChangesImmediately:(BOOL)arg1;
- (BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2;
- (void)mergeItem:(id)arg1;
- (void)updateLabeledValueWithValue:(id)arg1;
- (id)emptyLabeledValue;
@property(readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property(readonly, nonatomic) BOOL modified;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;

@end

