//
//  CTStyle.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 05/12/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTStyle : NSObject

@property (nonatomic, strong, readonly) UIColor *primaryColor;
@property (nonatomic, strong, readonly) UIColor *primaryDarkColor;
@property (nonatomic, strong, readonly) UIColor *primaryLightColor;

@property (nonatomic, strong, readonly) UIColor *ctaColor;
@property (nonatomic, strong, readonly) UIColor *ctaFontColor;

@property (nonatomic, strong, readonly) UIColor *linkColor;
@property (nonatomic, strong, readonly) UIColor *backgroundColor;

/* Deprecated */
@property (nonatomic, strong, readonly) UIColor *secondaryColor DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong, readonly) UIColor *accentColor DEPRECATED_ATTRIBUTE;

@property (nonatomic) UIFont *regularFont DEPRECATED_ATTRIBUTE;
@property (nonatomic) UIFont *boldFont DEPRECATED_ATTRIBUTE;
@property (nonatomic) UIFont *italicFont DEPRECATED_ATTRIBUTE;

- (instancetype)initWithPrimaryColor:(UIColor *)primaryColor
                      secondaryColor:(UIColor *)secondaryColor
                         accentColor:(UIColor *)accentColor
                         regularFont:(nullable UIFont *)regularFont
                            boldFont:(nullable UIFont *)boldFont
                          italicFont:(nullable UIFont *)italicFont;

+ (instancetype)styleWithPrimaryColor:(UIColor *)primaryColor
                    primaryLightColor:(nullable UIColor *)primaryLightColor
                     primaryDarkColor:(nullable UIColor *)primaryDarkColor
                             ctaColor:(nullable UIColor *)color
                         ctaFontColor:(nullable UIColor *)ctaFontColor;

@end

NS_ASSUME_NONNULL_END
