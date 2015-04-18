//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIContext, CIImage, NSNumber;

@interface CISmartColorFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputVibrancy;
    NSNumber *inputContrast;
    NSNumber *inputCast;
    NSNumber *inputUseCube;
    CIImage *_cubeImage;
    CIContext *_cubeContext;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputCast; // @synthesize inputCast;
@property(retain, nonatomic) NSNumber *inputVibrancy; // @synthesize inputVibrancy;
- (id)_kernelCast;
- (id)_kernelCNeg;
- (id)_kernelCPos;
- (id)_kernelV_gt1;
- (id)_kernelV_lt1;
@property(retain, nonatomic) NSNumber *inputUseCube; // @synthesize inputUseCube;
@property(retain, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast;
- (BOOL)_isIdentity;

@end
