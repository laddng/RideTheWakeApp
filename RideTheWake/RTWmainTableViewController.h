//
//  RTWmainTableViewController.h
//  RideTheWake
//
//  Created by Nick Ladd on 7/29/14.
//  Copyright (c) 2014 Nick Ladd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RTWmainTableViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentControlItem;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end