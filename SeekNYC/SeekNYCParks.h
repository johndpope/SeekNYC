//
//  SeekNYCParks.h
//  SeekNYC
//
//  Created by Christella on 11/22/15.
//  Copyright © 2015 Justine Kay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SeekNYCParks : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSString *address;
@property (nonatomic) NSString *categoryName;
@property (nonatomic) NSString *detail;

@property (nonatomic) float landmarkLat;
@property (nonatomic) float landmarkLng;

@property (nonatomic) NSString *imageURL;


- (instancetype)initWithJSON:(NSDictionary *)item;

@end
