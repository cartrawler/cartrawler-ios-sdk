//
//  CTStyle.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 05/12/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTLoyaltyStyle.h"
#import "CTCashStyle.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTAppTheme) {
    CTAppThemeLight,
    CTAppThemeDark
};

typedef NS_ENUM(NSInteger, CTUserInterfaceStyle) {
    CTUserInterfaceStyleSystem,
    CTUserInterfaceStyleLight,
    CTUserInterfaceStyleDark
};

@interface CTStyle : NSObject

// Mandatory parameters
@property (nonatomic, readonly) CTAppTheme appTheme;
@property (nonatomic, strong, readonly) UIColor *primaryColor;

// Optional Parameters
@property (nonatomic) CTUserInterfaceStyle userInterfaceStyle;
@property (nonatomic, strong) UIColor *primaryDarkColor;
@property (nonatomic, strong) UIColor *primaryLightColor;
@property (nonatomic, strong) UIColor *ctaColor;
@property (nonatomic, strong) UIColor *ctaFontColor;
@property (nonatomic, strong) UIColor *secondaryCtaColor;
@property (nonatomic, strong) UIColor *secondaryCtaFontColor;
@property (nonatomic, strong) UIColor *linkColor;

// Dark Mode colors
@property (nonatomic, strong) UIColor *dmPrimaryColor;
@property (nonatomic, strong) UIColor *dmPrimaryDarkColor;
@property (nonatomic, strong) UIColor *dmPrimaryLightColor;
@property (nonatomic, strong) UIColor *dmCtaColor;
@property (nonatomic, strong) UIColor *dmCtaFontColor;
@property (nonatomic, strong) UIColor *dmSecondaryCtaColor;
@property (nonatomic, strong) UIColor *dmSecondaryCtaFontColor;
@property (nonatomic, strong) UIColor *dmLinkColor;

// Fonts
@property (nonatomic, strong) UIFont *regularFont;
@property (nonatomic, strong) UIFont *boldFont;
@property (nonatomic, strong) UIFont *italicFont;

// Loyalty
@property (nonatomic, strong) CTLoyaltyStyle *loyaltyStyle;

// CarTrawler Cash
@property (nonatomic, strong) CTCashStyle *cashStyle;

+ (instancetype)styleWithTheme:(CTAppTheme)appTheme
                  primaryColor:(nonnull UIColor *)primaryColor;

@end

NS_ASSUME_NONNULL_END
