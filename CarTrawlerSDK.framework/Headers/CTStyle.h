//
//  CTStyle.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 05/12/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTStyle : NSObject

@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *accentColor;

@property (nonatomic, readonly) UIFont *regularFont;
@property (nonatomic, readonly) UIFont *boldFont;
@property (nonatomic, readonly) UIFont *italicFont;

- (instancetype)initWithPrimaryColor:(UIColor *)primaryColor
                      secondaryColor:(UIColor *)secondaryColor
                         accentColor:(UIColor *)accentColor
                         regularFont:(UIFont *)regularFont
                            boldFont:(UIFont *)boldFont
                          italicFont:(UIFont *)italicFont;

@end
