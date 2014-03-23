//
//  SNTAppDelegate.h
//  Snitch
//
//  Created by Alexander Davydov on 23.03.14.
//  Copyright (c) 2014 Alexander Davydov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SNTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
