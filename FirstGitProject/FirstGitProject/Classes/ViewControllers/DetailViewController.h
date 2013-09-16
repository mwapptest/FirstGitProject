//
//  DetailViewController.h
//  FirstGitProject
//
//  Created by Manoj W on 16/09/13.
//  Copyright (c) 2013 M W. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
