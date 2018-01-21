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

@property (nonatomic, readonly) NSString *regularFontName;
@property (nonatomic, readonly) NSString *boldFontName;
@property (nonatomic, readonly) NSString *italicFontName;

- (instancetype)initWithPrimaryColor:(UIColor *)primaryColor
                      secondaryColor:(UIColor *)secondaryColor
                         accentColor:(UIColor *)accentColor
                     regularFontName:(NSString *)regularFontName
                        boldFontName:(NSString *)boldFontName
                      italicFontName:(NSString *)italicFontName;

@end
