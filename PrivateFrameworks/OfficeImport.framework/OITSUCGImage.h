//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OITSUImage.h>

@interface OITSUCGImage : OITSUImage
{
    struct CGImage *mCGImage;
    int mOrientation;
    float mScale;
}

- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
- (int)imageOrientation;
- (struct CGImage *)CGImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)scale;
- (struct CGSize)size;
- (void)dealloc;

@end
