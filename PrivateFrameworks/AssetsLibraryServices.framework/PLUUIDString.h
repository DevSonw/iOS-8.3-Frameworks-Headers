//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface PLUUIDString : NSString
{
    unsigned char _uuid[16];
    char _uuidString[37];
}

+ (id)UUIDString;
- (id)initWithCFUUIDBytes:(CDStruct_bd2f613f)arg1;
- (CDStruct_bd2f613f)UUIDBytes;
- (id)initWithUUIDData:(id)arg1;
- (id)UUIDData;
- (id)initWithUUID:(unsigned char [16])arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (id)init;
- (BOOL)isEqualToString:(id)arg1;
- (const char *)UTF8String;
- (id)initWithCFUUID:(struct __CFUUID *)arg1;

@end

