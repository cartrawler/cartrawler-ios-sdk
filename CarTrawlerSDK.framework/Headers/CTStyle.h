//
//  CTStyle.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 05/12/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTAppTheme) {
    CTAppThemeLight,
    CTAppThemeDark
};

@interface CTStyle : NSObject

// Mandatory parameters
@property (nonatomic, readonly) CTAppTheme appTheme;
@property (nonatomic, strong, readonly) UIColor *primaryColor;

// Optional Parameters
@property (nonatomic, strong) UIColor *primaryDarkColor;
@property (nonatomic, strong) UIColor *primaryLightColor;
@property (nonatomic, strong) UIColor *ctaColor;
@property (nonatomic, strong) UIColor *ctaFontColor;
@property (nonatomic, strong) UIColor *secondaryCtaColor;
@property (nonatomic, strong) UIColor *secondaryCtaFontColor;
@property (nonatomic, strong) UIColor *linkColor;

+ (instancetype)styleWithTheme:(CTAppTheme)appTheme
                  primaryColor:(nonnull UIColor *)primaryColor;

@end

NS_ASSUME_NONNULL_END
