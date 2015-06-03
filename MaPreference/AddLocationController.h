//
//  AddLocationController.h
//  MaPreference
//
//  Created by Abegael Jackson on 2015-06-02.
//  Copyright (c) 2015 Abegael Jackson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddLocationController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *addLocationNameLabel;
@property (weak, nonatomic) IBOutlet UITextField *addLocationAddressLabel;
@property (weak, nonatomic) IBOutlet UITextView *addLocationReviewField;
@property (weak, nonatomic) IBOutlet UIButton *addLocationCancelButton;
@property (weak, nonatomic) IBOutlet UIButton *addLocationDoneButton;


@end