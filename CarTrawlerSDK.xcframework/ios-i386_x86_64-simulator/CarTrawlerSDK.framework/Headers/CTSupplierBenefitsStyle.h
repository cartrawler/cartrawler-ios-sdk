//
//  CTSupplierBenefitsStyle.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 26/01/2022.
//  Copyright © 2022 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTSupplierBenefitsStyle : NSObject

// Optional Parameters
@property (nonatomic, strong, nullable) UIColor *bgColor;
@property (nonatomic, strong, nullable) UIColor *darkBgColor;
@property (nonatomic, strong, nullable) UIColor *textColor;
@property (nonatomic, strong, nullable) UIColor *darkTextColor;
@property (nonatomic, strong, nullable) UIColor *buttonBgColor;
@property (nonatomic, strong, nullable) UIColor *darkButtonBgColor;
@property (nonatomic, strong, nullable) UIColor *buttonTextColor;
@property (nonatomic, strong, nullable) UIColor *darkButtonTextColor;
@property (nonatomic, strong, nullable) UIImage *logoImage;
@property (nonatomic, strong, nullable) UIImage *darkLogoImage;
@property (nonatomic, strong, nullable) NSURL *logoURL;
@property (nonatomic, strong, nullable) NSURL *darkLogoURL;

@end

NS_ASSUME_NONNULL_END
