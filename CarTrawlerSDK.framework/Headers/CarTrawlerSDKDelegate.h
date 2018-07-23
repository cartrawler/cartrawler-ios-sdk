//
//  CarTrawlerSDKDelegate.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 17/10/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import "CTInPathVehicle.h"

typedef NS_ENUM(NSInteger, CTAppType) {
    CTAppTypeRental,
    CTAppTypeGroundTransportation,
};

@protocol CarTrawlerSDKDelegate <NSObject>

@required

/**
 Called when the user chooses to add the vehicle to their basket
 
 @param request A dictionary containing information about the vehicle and the Cartrawler OTA payment request
 @param vehicle The vehicle that was selected
 */
- (void)didProduceInPathPaymentRequest:(nonnull NSDictionary *)request
                               vehicle:(nonnull CTInPathVehicle *)vehicle
                               appType:(CTAppType)appType
;

@optional

#pragma Mark - Rental

/**
 Called when the user taps on the cross sell card
 */
- (void)didTapCrossSellCard;

/**
 Called when the vehicles have been fetched and the best daily rate has been calculated
 
 @param price the best daily rate
 @param currency the currency
 */
- (void)didReceiveBestDailyRate:(nonnull NSNumber *)price
                       currency:(nonnull NSString *)currency;

/**
 Called when the call to fetch vehicles fails and the best daily rate cannot be calculated
 */
- (void)didFailToReceiveBestDailyRate;

#pragma Mark - GroundTransportation

/**
 Called when the user taps on the cross sell card
 */
- (void)didTapGroundTransportationCard;

/**
 Called when the vehicles have been fetched and the best daily rate has been calculated
 
 @param price the best daily rate
 @param currency the currency
 */
- (void)didReceiveGroundTransportationBestDailyRate:(nonnull NSNumber *)price
                                           currency:(nonnull NSString *)currency;

/**
 Called when the call to fetch vehicles fails and the best daily rate cannot be calculated
 */
- (void)didFailToReceiveGroundTransportationBestDailyRate;



@end
