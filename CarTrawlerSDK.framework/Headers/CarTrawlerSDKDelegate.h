//
//  CarTrawlerSDKDelegate.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 17/10/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import "CTInPathVehicle.h"
#import "GTInPathVehicle.h"

typedef NS_ENUM(NSInteger, CTAppType) {
    CTAppTypeRental,
    CTAppTypeGroundTransportation,
};

static NSString * _Nonnull const CTPlaceholderSeriesCode = @"[SERIESCODE]";
static NSString * _Nonnull const CTPlaceholderCardNumber = @"[CARDNUMBER]";
static NSString * _Nonnull const CTPlaceholderExpireDate = @"[EXPIREDATE]";
static NSString * _Nonnull const CTPlaceholderCardCode = @"[CARDCODE]";
static NSString * _Nonnull const CTPlaceholderCardHolderName = @"[CARDHOLDERNAME]";
static NSString * _Nonnull const CTPlaceholderPassengerFirstName = @"[PASSENGERFIRSTNAME]";
static NSString * _Nonnull const CTPlaceholderPassengerSurname = @"[PASSENGERSURNAME]";
static NSString * _Nonnull const CTPlaceholderEmail = @"[EMAIL]";
static NSString * _Nonnull const CTPlaceholderTelephone = @"[TELEPHONE]";
static NSString * _Nonnull const CTPlaceholderPassengerCountryCode = @"[COUNTRYNAMECODE]";

@protocol CarTrawlerSDKDelegate <NSObject>

#pragma Mark - Rental

@required

/**
 Called when the user chooses to add the vehicle to their basket
 
 @param request A dictionary containing information about the vehicle and the Cartrawler OTA payment request
 @param vehicle The vehicle that was selected
 */
- (void)didProduceInPathPaymentRequest:(nonnull NSDictionary *)request
                               vehicle:(nonnull CTInPathVehicle *)vehicle;

/**
 Called when the call to fetch vehicles fails and the best daily rate cannot be calculated
 */
- (void)didFailToReceiveBestDailyRate:(nonnull NSError *)error NS_SWIFT_NAME(didFailToReceiveBestDailyRate(error:));

/**
 Called when the vehicles have been fetched and the best daily rate has been calculated
 
 @param price the best daily rate
 @param currency the currency
 */
- (void)didReceiveBestDailyRate:(nonnull NSNumber *)price
                       currency:(nonnull NSString *)currency;

@optional

/**
 Called when the user taps on the cross sell card
 */
- (void)didTapCrossSellCard;

#pragma Mark - GroundTransportation

/**
 Called when the user chooses to add the vehicle to their basket
 
 @param request A dictionary containing information about the vehicle and the Cartrawler OTA payment request
 @param vehicle The vehicle that was selected
 */
- (void)didProduceGTInPathPaymentRequest:(nonnull NSDictionary *)request
                                 vehicle:(nonnull GTInPathVehicle *)vehicle;

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
