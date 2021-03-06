//
//  PinAnnotation.m
//  MaPreference
//
//  Created by Abegael Jackson & Oliver Andrews on 2015-06-06.
//  Copyright (c) 2015 Abegael Jackson & Oliver Andrews. All rights reserved.
//

#import "PinAnnotation.h"
#import <Parse/Parse.h>


@implementation PinAnnotation


-(instancetype)initWithPFObject:(PinPFObject*)pinPFObject{
    self = [super init];
    if (self){
        _businessName = pinPFObject.businessName;
        _businessAddress = pinPFObject.addressString;
        _parseObject = pinPFObject;
        _reviews = [[NSMutableArray alloc]initWithArray:pinPFObject.reviews];    }
    return self;
}


@end
