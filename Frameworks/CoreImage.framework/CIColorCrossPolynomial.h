//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorCrossPolynomial : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCoefficients;
    CIVector *inputRedCoefficients;
    CIVector *inputGreenCoefficients;
    CIVector *inputBlueCoefficients;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) CIVector *inputBlueCoefficients; // @synthesize inputBlueCoefficients;
@property(retain, nonatomic) CIVector *inputGreenCoefficients; // @synthesize inputGreenCoefficients;
@property(retain, nonatomic) CIVector *inputRedCoefficients; // @synthesize inputRedCoefficients;
- (id)_kernel;
- (BOOL)_isIdentity;

@end

