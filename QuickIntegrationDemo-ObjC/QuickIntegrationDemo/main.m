//
//  main.m
//  QuickIntegrationDemo
//
//  Created by Leo Natan on 2016-03-02.
//  Copyright © 2016 checkpoint. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

#import <CPMobileSDK/CPMobileSDK.h>

int main(int argc, char * argv[]) {
	@autoreleasepool {
		CPMobileSDKOptions* options = [CPMobileSDKOptions new];
		options.allowAppUsageWithoutCapsuleIntegration = YES;
		
		return CPMobileSDKApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]), options);
//	    return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
	}
}
