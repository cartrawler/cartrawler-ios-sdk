//
//  CTCashStyle.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 21/06/2021.
//  Copyright © 2021 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTCashStyle : NSObject

// Optional Parameters
@property (nonatomic, strong, nullable) UIColor *bgColor;
@property (nonatomic, strong, nullable) UIColor *darkBgColor;
@property (nonatomic, strong, nullable) UIColor *secondaryBgColor;
@property (nonatomic, strong, nullable) UIColor *darkSecondaryBgColor;
@property (nonatomic, strong, nullable) NSURL *logoURL;
@property (nonatomic, strong, nullable) NSURL *darkLogoURL;
@property (nonatomic, strong, nullable) NSURL *smallLogoURL;
@property (nonatomic, strong, nullable) NSURL *darkSmallLogoURL;
@property (nonatomic, strong, nullable) UIImage *logoImage;
@property (nonatomic, strong, nullable) UIImage *darkLogoImage;
@property (nonatomic, strong, nullable) UIImage *smallLogoImage;
@property (nonatomic, strong, nullable) UIImage *darkSmallLogoImage;
@property (nonatomic, strong, nullable) UIColor *textColor;
@property (nonatomic, strong, nullable) UIColor *darkTextColor;
@property (nonatomic, strong, nullable) UIColor *accentTextColor;
@property (nonatomic, strong, nullable) UIColor *darkAccentTextColor;

@end

NS_ASSUME_NONNULL_END
