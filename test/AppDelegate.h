//
//  AppDelegate.h
//  test
//
//  Created by 张兴达 on 2017/12/18.
//  Copyright © 2017年 张兴达. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

