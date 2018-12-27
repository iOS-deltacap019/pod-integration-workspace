//
//  AppDelegate.h
//  pod installation
//
//  Created by abhinav rathore on 18/12/18.
//  Copyright © 2018 DeltaCap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

