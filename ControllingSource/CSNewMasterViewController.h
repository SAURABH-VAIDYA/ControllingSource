//
//  CSMasterViewController.h
//  ControllingSource
//
//  Created by Saurabh Vaidya on 8/12/2014.
//  Copyright (c) 2014 Regional Express. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface CSNewMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
