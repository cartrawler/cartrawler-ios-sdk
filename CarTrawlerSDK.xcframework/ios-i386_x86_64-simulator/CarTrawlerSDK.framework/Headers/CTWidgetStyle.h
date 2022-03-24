//
//  CTWidgetStyle.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 23/05/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTWidgetStatus) {
    CTWidgetStatusBestPrice,
    CTWidgetStatusVehicle,
    CTWidgetStatusSimple,
    CTWidgetStatusSimpleAddedCar
};

@interface CTWidgetStyle : NSObject

// Optional Parameters
@property (nonatomic, strong, nullable) UIImage *simpleWidgetImage;
@property (nonatomic, strong, nullable) UIImage *bestPriceWidgetImage;

@property (nonatomic, strong, nullable) NSString *title;
@property (nonatomic, strong, nullable) UIFont *titleFont;
@property (nonatomic, strong, nullable) UIColor *titleTextColor;

@property (nonatomic, strong, nullable) NSString *subTitle;
@property (nonatomic, strong, nullable) UIFont *subTitleFont;
@property (nonatomic, strong, nullable) UIColor *subTitleTextColor;

@property (nonatomic, strong, nullable) NSString *bestPriceTitle;
@property (nonatomic, strong, nullable) UIFont *bestPriceTitleFont;
@property (nonatomic, strong, nullable) UIColor *bestPriceTitleTextColor;

@property (nonatomic, strong, nullable) NSString *bestPriceSubTitle;
@property (nonatomic, strong, nullable) UIFont *bestPriceSubTitleFont;
@property (nonatomic, strong, nullable) UIColor *bestPriceSubTitleTextColor;

@property (nonatomic, strong, nullable) UIColor *cardAddedIconcolor;

@property (nonatomic, strong, nullable) NSString *carAddedTitle;
@property (nonatomic, strong, nullable) UIFont *carAddedTitleFont;
@property (nonatomic, strong, nullable) UIColor *carAddedTitleTextColor;

@property (nonatomic, strong, nullable) NSString *carRemoveButtonTitle;
@property (nonatomic, strong, nullable) UIFont *carRemoveButtonFont;
@property (nonatomic, strong, nullable) UIColor *carRemoveButtonTextColor;

@property (nonatomic, strong, nullable) NSString *priceTitle;
@property (nonatomic, strong, nullable) NSString *priceTotalTitle;
@property (nonatomic, strong, nullable) UIFont *priceTitleFont;
@property (nonatomic, strong, nullable) UIColor *priceTitleTextColor;

@property (nonatomic, strong, nullable) NSString *priceValue;
@property (nonatomic, strong, nullable) UIFont *priceValueFont;
@property (nonatomic, strong, nullable) UIColor *priceValueTextColor;

@property (nonatomic, strong, nullable) NSString *ctaTitle;
@property (nonatomic, strong, nullable) UIFont *ctaFont;
@property (nonatomic, strong, nullable) UIColor *ctaTextColor;
@property (nonatomic, strong, nullable) UIColor *ctaColor;

@property (nonatomic) CGFloat ctaCornerRadius;

@end


NS_ASSUME_NONNULL_END
