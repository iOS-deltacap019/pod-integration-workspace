//
//  SplashScreenVVCCViewController.m
//  POD Installation Demo
//
//  Created by abhinav rathore on 19/12/18.
//  Copyright © 2018 DeltaCap. All rights reserved.
//

#import "SplashScreenVC.h"

@interface SplashScreenVC ()

@end

@implementation SplashScreenVC

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void) viewDidAppear:(BOOL)animated
{
	[self performSegueWithIdentifier:@"SeagueShowVersionInfo" sender:self];
//	[self.navigationController pushViewController:[self.storyboard instantiateViewControllerWithIdentifier:@"IDShowVersionsInfo"] animated:YES];
}

@end
