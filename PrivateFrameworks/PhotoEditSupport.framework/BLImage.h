//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CIImage, UIImage;

@interface BLImage : NSObject <NSCopying>
{
    UIImage *_UIImage;
    struct CGImage *_CGImage;
    CIImage *_CIImage;
    int _storageType;
    struct CGSize _size;
    BOOL _isPlaceholder;
    int _askedImageType;
    int _obtainedImageType;
}

+ (id)abbreviatedDescriptionWithImageType:(int)arg1;
+ (id)descriptionWithImageType:(int)arg1;
+ (id)imageWithImage:(id)arg1;
@property(nonatomic) int obtainedImageType; // @synthesize obtainedImageType=_obtainedImageType;
@property(nonatomic) int askedImageType; // @synthesize askedImageType=_askedImageType;
@property(readonly, nonatomic) unsigned int memoryUsage;
- (id)initWithFileAtURL:(id)arg1;
@property(nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) int storageType; // @synthesize storageType=_storageType;
- (id)UIImage;
- (id)CIImage;
@property(readonly, nonatomic) int imageOrientation;
- (struct CGImage *)CGImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float scale;
- (id)description;
- (id)init;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;

@end
