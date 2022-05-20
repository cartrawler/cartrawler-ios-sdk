//
//  CarTrawlerSDKDelegate.h
//  CarTrawlerSDK
//
//  Created by Alan Pearson Mathews on 17/10/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import "CTInPathVehicle.h"
#import "CTVehicleDetails.h"
#import "CTWidgetContainer.h"
#import "Payment.h"

@class CTReservationDetails;

/**
 Enum referring to each flow supported
 */
typedef NS_ENUM(NSUInteger, CTFlowType) {
    CTFlowTypeStandAlone,
    CTFlowTypeInPath
};

static NSString * _Nonnull const CTPlaceholderSeriesCode = @"[SERIESCODE]";
static NSString * _Nonnull const CTPlaceholderCardNumber = @"[CARDNUMBER]";
static NSString * _Nonnull const CTPlaceholderExpireDate = @"[EXPIREDATE]";
static NSString * _Nonnull const CTPlaceholderCardCode = @"[CARDCODE]";
static NSString * _Nonnull const CTPlaceholderCardHolderName = @"[CARDHOLDERNAME]";
static NSString * _Nonnull const CTPlaceholderPassengerFirstName = @"[FIRSTNAME]";
static NSString * _Nonnull const CTPlaceholderPassengerSurname = @"[SURNAME]";
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
                               vehicle:(nonnull CTInPathVehicle *)vehicle
                               payment:(nonnull Payment *)payment;


@optional

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
- (void)didFailToReceiveBestDailyRate:(nonnull NSError *)error NS_SWIFT_NAME(didFailToReceiveBestDailyRate(error:));

/**
 Called when the vehicles have been fetched
 
 @param vehicles return based on params passed
 */
- (void)didReceiveVehicles:(nonnull NSArray <CTVehicleDetails *> *)vehicles;

/**
 Called when the call to fetch vehicles fails and the best daily rate cannot be calculated
 */
- (void)didFailToReceiveVehicles:(nonnull NSError *)error NS_SWIFT_NAME(didFailToReceiveVehicles(error:));

/**
 Called after stand alone flow booking payment has made
 
 @param reservationDetails the booking reservation details
 */
- (void)didReceiveReservationDetails:(nonnull CTReservationDetails *)reservationDetails;

/**
 Called when the user taps on the cross sell card
 */
- (void)didTapCrossSellCard;

@end


@protocol CTWidgetContainerDelegate <NSObject>

@optional
- (void)didTapView:(nonnull CTWidgetContainer *)container;
- (void)didTapAddCarHire:(nonnull CTWidgetContainer *)container;
- (void)didTapRemoveButton:(nonnull CTWidgetContainer *)container;
- (void)vehicleSelected:(nonnull CTVehicleDetails *)vehicle;

@end

