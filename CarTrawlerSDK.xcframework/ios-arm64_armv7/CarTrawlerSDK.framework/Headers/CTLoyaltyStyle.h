//
//  CTLoyaltyStyle.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 28/07/2020.
//  Copyright © 2020 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTLoyaltyTheme) {
    CTLoyaltyThemeLight,
    CTLoyaltyThemeDark
};

typedef NS_ENUM(NSUInteger, CTChipSize) {
    CTChipSizeRegular = 28,
    CTChipSizeLarge = 36
};

@interface CTLoyaltyStyle : NSObject

// Mandatory parameters
@property (nonatomic, readonly) CTLoyaltyTheme theme;

// Optional Parameters
@property (nonatomic, strong) UIColor *primaryColor;
@property (nonatomic, strong) UIColor *primaryTextColor;
@property (nonatomic, strong) UIColor *secondaryColor;
@property (nonatomic, strong) UIColor *secondaryTextColor;
@property (nonatomic) CTChipSize chipSize;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)styleWithTheme:(CTLoyaltyTheme)loyaltyTheme;

@end

NS_ASSUME_NONNULL_END
