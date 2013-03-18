//
//  DetailViewController.h
//  TaskApp2
//
//  Created by Nirav Amin on 2/17/13.
//  Copyright (c) 2013 Nirav Amin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
