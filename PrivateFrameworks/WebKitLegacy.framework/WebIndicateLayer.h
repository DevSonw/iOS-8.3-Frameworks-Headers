//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class WebView;

@interface WebIndicateLayer : CALayer
{
    WebView *_webView;
}

- (id)initWithWebView:(id)arg1;
- (void)layoutSublayers;
- (id)actionForKey:(id)arg1;

@end

