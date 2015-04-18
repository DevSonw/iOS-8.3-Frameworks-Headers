//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class GEOPDFlyover, MKMapView, UITapGestureRecognizer;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    BOOL _animationPaused;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}

- (void)setFlyover:(id)arg1;
- (id)flyover;
- (void)pause;
- (void).cxx_destruct;
- (void)present;
- (void)resume;
- (void)reset;
- (void)setFrame:(struct CGRect)arg1;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (void)_pauseTour;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (void)prepareForPresentation;

@end
