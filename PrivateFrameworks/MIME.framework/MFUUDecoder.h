//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer
{
    unsigned long _begin;
    unsigned long _end;
    unsigned long _length;
    unsigned long _readBytes;
    unsigned char _encoded[4];
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}

- (int)appendData:(id)arg1;
- (void)done;

@end
