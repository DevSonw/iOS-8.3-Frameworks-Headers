//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerCell.h>

@class _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell
{
    BOOL _enabled;
    _UIDocumentPickerContainerItem *_item;
}

- (void)updateThumbnail;
- (void)updateContents;
- (void)reloadItem:(BOOL)arg1;
- (id)viewControllerForDisplay;
- (void)_showPickableDiagnostic;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;

@end
