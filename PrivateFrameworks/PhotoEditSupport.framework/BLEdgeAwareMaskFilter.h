//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@interface BLEdgeAwareMaskFilter : CIFilter
{
    float *_cubeData;
    CDStruct_76a42933 _currentInputColor;
    CIFilter *_ciColorCubeFilter;
    CDStruct_76a42933 _inputColor;
}

- (unsigned long)dataLength;
- (id)outputImage;
- (id)cubeData;
- (void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float *)arg4 a:(float *)arg5 b:(float *)arg6;
- (BOOL)isDataUpToDate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
@property CDStruct_76a42933 inputColor; // @synthesize inputColor=_inputColor;
- (void)setInputImage:(id)arg1;

@end
