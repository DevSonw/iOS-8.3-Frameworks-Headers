//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIGlassDistortion : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTexture;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

+ (id)customAttributes;
- (id)outputImage;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) CIImage *inputTexture; // @synthesize inputTexture;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)_kernel;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)customAttributes;

@end

