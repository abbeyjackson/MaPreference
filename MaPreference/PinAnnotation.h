//
//  PinAnnotation.h
//  MaPreference
//
//  Created by Abegael Jackson & Oliver Andrews on 2015-06-06.
//  Copyright (c) 2015 Abegael Jackson & Oliver Andrews. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "PinPFObject.h"


@interface PinAnnotation : MKPointAnnotation


@property (strong, nonatomic) NSString *businessName;
@property (strong, nonatomic) NSString *businessAddress;
@property (nonatomic, strong) PinPFObject *parseObject;
@property (nonatomic, strong) NSMutableArray *reviews;
@property (assign) double distanceTo;


-(instancetype)initWithPFObject:(PinPFObject*)pinPFObject;


@end
