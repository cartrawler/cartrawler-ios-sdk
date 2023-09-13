//
//  CTBannerStyle.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 11/08/2023.
//  Copyright © 2023 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTBannerTemplate) {
    CTBannerTemplateDefault,
    CTBannerTemplateLogoAndText
};

typedef NS_ENUM(NSUInteger, CTBannerType) {
    CTBannerTypeLandingLoyalty,
};

@interface CTBannerStyle : NSObject

// Mandatory parameters
@property (nonatomic, readonly) CTBannerTemplate bannerTemplate;
@property (nonatomic, readonly) CTBannerType type;

// Optional Parameters
@property (nonatomic, strong, nullable) UIColor *bgColor;
@property (nonatomic, strong, nullable) UIColor *darkBgColor;
@property (nonatomic, strong, nullable) UIColor *secondaryBgColor;
@property (nonatomic, strong, nullable) UIColor *darkSecondaryBgColor;
@property (nonatomic, strong, nullable) UIImage *logoImage;
@property (nonatomic, strong, nullable) UIImage *darkLogoImage;
@property (nonatomic, strong, nullable) UIFont *textFont;
@property (nonatomic, strong, nullable) UIColor *textColor;
@property (nonatomic, strong, nullable) UIColor *darkTextColor;
@property (nonatomic, strong, nullable) UIColor *infoButtonColor;
@property (nonatomic, strong, nullable) UIColor *darkInfoButtonColor;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)styleWithType:(CTBannerType)type template:(CTBannerTemplate)template;

@end

NS_ASSUME_NONNULL_END
