//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ABStyleProvider, ABUIPerson;

@interface ABMemberCell : UITableViewCell
{
    ABStyleProvider *_styleProvider;
    BOOL _isMeCard;
    ABUIPerson *_person;
}

@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)arg1;
@property(readonly, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL isMeCard; // @synthesize isMeCard=_isMeCard;
- (id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2;
- (id)_cachedRegularTextAttributes;
- (id)_cachedMemberNameRegularFont;
- (id)_cachedBoldTextAttributes;
- (id)_cachedPlaceholderTextAttributes;
- (id)_attributedNameWithNameComponents:(id)arg1 delimiter:(id)arg2 highlightedIndex:(int)arg3 romanName:(BOOL)arg4;

@end

