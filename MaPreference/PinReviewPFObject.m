//
//  PinReviewPFObject.m
//  MaPreference
//
//  Created by Abegael Jackson & Oliver Andrews on 2015-06-05.
//  Copyright (c) 2015 Abegael Jackson & Oliver Andrews. All rights reserved.
//


#import "PinReviewPFObject.h"


@implementation PinReviewPFObject


@dynamic userReview;
@dynamic createdBy;
@dynamic pinObject;


+(void)load {
    [self registerSubclass];
}


+(NSString *)parseClassName {
    return @"Review";
}

@end
