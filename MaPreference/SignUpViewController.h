//
//  SignUpViewController.h
//  MaPreference
//
//  Created by Oliver Andrews on 2015-06-03.
//  Copyright (c) 2015 Abegael Jackson & Oliver Andrews. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SignupViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;


- (IBAction)signup:(id)sender;


@end
