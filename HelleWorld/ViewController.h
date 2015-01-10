//
//  ViewController.h
//  HelleWorld
//
//  Created by kaiyuan duan on 15-1-9.
//  Copyright (c) 2015年 UChicago. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeGreeting:(id)sender;

@property (copy, nonatomic) NSString *userName;
@end

