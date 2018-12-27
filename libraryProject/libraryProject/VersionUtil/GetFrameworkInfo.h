//
//  GetFrameworkInfo.h
//  dummyLibraryProject
//
//  Created by abhinav rathore on 18/12/18.
//  Copyright © 2018 DeltaCap. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <AFNetworking.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <MyTargetSDK/MyTargetSDK.h>

@interface GetFrameworkInfo : NSObject

@property (nonatomic, strong) NSString* versionNumber;
@property (nonatomic, strong) NSString* afNetworkingVersionNumber;
@property (nonatomic, strong) NSString* adMobVersionNumber;
@property (nonatomic, strong) NSString* myTargetVersionNumber;
@property (nonatomic, strong) NSString* adColonyVersionNumber;

@end
