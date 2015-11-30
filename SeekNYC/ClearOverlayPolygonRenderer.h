//
//  ClearOverlayPolygonRenderer.h
//  SeekNYC
//
//  Created by Justine Gartner on 11/29/15.
//  Copyright © 2015 Justine Kay. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface ClearOverlayPolygonRenderer : MKPolygonRenderer

@property (nonatomic, strong) UIColor *backgroundColor;

-(id)initWithPolygon:(MKPolygon *)polygon;

-(MKPolygon *)clearPolygon;

@end
