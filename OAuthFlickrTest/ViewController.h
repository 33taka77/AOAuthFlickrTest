//
//  ViewController.h
//  OAuthFlickrTest
//
//  Created by Aizawa Takashi on 2014/03/17.
//  Copyright (c) 2014年 Aizawa Takashi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTMOAuthViewControllerTouch.h"

@interface ViewController : UIViewController
{
    GTMOAuthAuthentication *mAuth;
    int mNetworkActivityCounter;
    
}
- (void)updateUI;

- (void)setAuthentication:(GTMOAuthAuthentication *)auth;
- (void)signInToService;
- (void)signOut;
- (BOOL)isSignedIn;

@end
