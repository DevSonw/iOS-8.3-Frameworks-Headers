//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDCFDataBuffer : CFPDDataBuffer
{
    struct __CFData *data;
}

- (void)finalize;
- (void *)bytes;
- (unsigned long)length;
- (void)dealloc;
- (id)initWithCFData:(struct __CFData *)arg1;
- (struct __CFData *)copyCFData;

@end

