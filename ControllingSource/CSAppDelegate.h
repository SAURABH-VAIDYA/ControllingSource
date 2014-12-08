//
//  CSAppDelegate.h
//  ControllingSource
//
//  Created by Saurabh Vaidya on 8/12/2014.
//  Copyright (c) 2014 Regional Express. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
