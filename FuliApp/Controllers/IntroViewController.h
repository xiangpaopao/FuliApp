//
//  IntroViewController.h
//  FuliApp
//
//  Created by xiangpaopao on 14-4-21.
//  Copyright (c) 2014年 xiangpaopao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IntroViewController : UIViewController

@property(nonatomic,strong)IBOutlet UIImageView *img1;
@property(nonatomic,strong)IBOutlet UIImageView *img2;

@property(nonatomic,strong)IBOutlet UILabel *text1;

-(IBAction)telAct:(id)sender;


@end