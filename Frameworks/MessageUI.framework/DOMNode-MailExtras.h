//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMNode.h"

@interface DOMNode (MailExtras)
- (id)mf_topmostContainingNodeWithNameInArray:(id)arg1;
- (id)mf_traversePreviousNode;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (id)mf_commonAncestorWithNode:(id)arg1;
@property(readonly) BOOL mf_isAttachment;
@property(readonly) BOOL mf_isBody;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (int)mf_quoteLevelDelta;
- (void)recursivelyRemoveMailAttributes;
- (BOOL)mf_containsRichText;
- (id)mf_firstDescendantBlockQuote;
- (id)mf_highestContainingBlockQuote;
- (id)mf_nextSiblingOrAunt;
- (id)mf_appendBlockPlaceholder;
- (BOOL)mf_containsOnlySelectionMarkers;
- (BOOL)mf_isAtEndOfContainerNode:(id)arg1;
- (BOOL)mf_isAtBeginningOfContainerNode:(id)arg1;
- (id)mf_containingBlockQuote;
- (id)mf_blockNodeAncestor;
- (id)mf_traverseNextSiblingStayingWithin:(id)arg1;
- (id)mf_traverseNextNodeStayingWithin:(id)arg1;
- (BOOL)mf_isDescendantOfNode:(id)arg1;
- (id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (BOOL)mf_isQuoteOrWithinQuote;
@end
