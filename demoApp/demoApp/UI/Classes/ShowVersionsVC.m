//
//  ViewController.m
//  pod installation
//
//  Created by abhinav rathore on 18/12/18.
//  Copyright © 2018 DeltaCap. All rights reserved.
//

#import "ShowVersionsVC.h"

@interface ShowVersionsVC ()

@property (nonatomic, weak) UILabel *lblVerisonNo;

@end

@implementation ShowVersionsVC

- (void)viewDidLoad {
	[super viewDidLoad];
}

- (IBAction)getFrameWorksVersion:(UIButton *)sender {
	GetFrameworkInfo* frameWorkInfo = [[GetFrameworkInfo alloc] init];
	NSMutableString* versionNumber = [[NSMutableString alloc] init];
	
	[versionNumber appendString: @"Library version: "];
	[versionNumber appendString: frameWorkInfo.versionNumber];
 	[versionNumber appendString: @"\n"];
	
	[versionNumber appendString: @"AdMob Library version: "];
	[versionNumber appendString: frameWorkInfo.adMobVersionNumber];
	[versionNumber appendString: @"\n"];
	
	[versionNumber appendString: @"MyTarget Library version: "];
	[versionNumber appendString: frameWorkInfo.myTargetVersionNumber];
	[versionNumber appendString: @"\n"];
	
	[versionNumber appendString: @"AFNetworking Library version: "];
	[versionNumber appendString: frameWorkInfo.afNetworkingVersionNumber];
	[versionNumber appendString: @"\n"];
	
	[versionNumber appendString: @"AdColony Library version: "];
	[versionNumber appendString: frameWorkInfo.adColonyVersionNumber];
	[versionNumber appendString: @"\n"];
	
	_lblVerisonNo.text = versionNumber;
}


@end
