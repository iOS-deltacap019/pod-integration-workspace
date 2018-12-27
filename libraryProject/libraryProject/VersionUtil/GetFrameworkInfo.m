//
//  GetFrameworkInfo.m
//  dummyLibraryProject
//
//  Created by abhinav rathore on 18/12/18.
//  Copyright © 2018 DeltaCap. All rights reserved.
//

#import "GetFrameworkInfo.h"

@implementation GetFrameworkInfo

- (instancetype)init
{
	self = [super init];
	if (self) {
		[self initVersionNumber];
	}
	return self;
}

- (void) initVersionNumber
{
	_versionNumber = @"1.0.0";
	_afNetworkingVersionNumber = @"n/a";
	_adMobVersionNumber = @"n/a";
	_myTargetVersionNumber = @"n/a";
	_adColonyVersionNumber = @"n/a";
	
	Class afNetworkingClass = NSClassFromString(@"AFHTTPSessionManager");
	if(afNetworkingClass){
		_afNetworkingVersionNumber = @"3.2.1";
	}
	
	Class adMobClass = NSClassFromString(@"GADAdLoader");
	if(adMobClass){
		_adMobVersionNumber = @"7.37.0";
	}
	
	Class myTargetClass = NSClassFromString(@"MTRGAdView");
	if(myTargetClass){
		_myTargetVersionNumber = @"4.8.8";
	}
	
	Class adColonyClass = NSClassFromString(@"AdColony");
	if(adColonyClass){
		_adColonyVersionNumber = @"10.0.0";
	}
	
}
@end
