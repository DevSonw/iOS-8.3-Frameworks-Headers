//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXPresentation : NSObject
{
}

+ (id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6;
+ (void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2;
+ (void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (struct CGSize)readSizeFromChildOfElement:(struct _xmlNode *)arg1 childName:(const char *)arg2 state:(id)arg3;

@end
