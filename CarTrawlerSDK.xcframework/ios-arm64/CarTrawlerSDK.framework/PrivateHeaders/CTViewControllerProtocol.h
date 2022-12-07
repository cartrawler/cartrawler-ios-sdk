//
//  CTViewControllerProtocol.h
//  CartrawlerSDK
//
//  Created by Alan Pearson Mathews on 7/19/17.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import "CTViewModelProtocol.h"
#import "CTAppController.h"
#import "CTBaseViewController.h"

/**
 A protocol which all view controllers and views can conform to for view model updates
 */
@protocol CTViewControllerProtocol <NSObject>

/**
 Updates all subviews with the view model properties
 
 @param viewModel a view model
 */
- (void)updateWithViewModel:(id <CTViewModelProtocol>)viewModel;

@optional

/**
 View controllers may delegate back to their containing view controllers, to keep them independent of architecture

 @param delegate a containing view controller
 */
- (void)setDelegate:(id <CTViewControllerProtocol>)delegate;

@end
