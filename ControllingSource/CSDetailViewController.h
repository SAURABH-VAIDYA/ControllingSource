//
//  CSDetailViewController.h
//  ControllingSource
//
//  Created by Saurabh Vaidya on 8/12/2014.
//  Copyright (c) 2014 Regional Express. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
