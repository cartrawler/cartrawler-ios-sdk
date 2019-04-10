//
//  CarTrawlerSDK.h
//  CarTrawlerSDK
//
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTPassenger.h"
#import "CarTrawlerSDKDelegate.h"
#import "CTStyle.h"
#import "CTExtraEquipment.h"
#import "CTInPathModuleDelegate.h"
#import "CTInPathProtocol.h"
#import "CTCustomer.h"
#import "CTFee.h"
#import "CTBooking.h"
#import "CTBestDailyRateParams.h"
#import "CTConfig.h"

FOUNDATION_EXPORT double CarTrawlerSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char CarTrawlerSDKVersionString[];

static NSString * _Nonnull const CTOrderId = @"orderID";
static NSString * _Nonnull const CTMyAccountID = @"myAccountId";
static NSString * _Nonnull const CTVisitorId = @"visitorId";

/**
 Please refer to www.github.io/cartrawler for full documentation
 */

@interface CarTrawlerSDK : NSObject

// MARK: CarTrawlerSDK

/**
 Use this CarTrawlerSDK singleton for all interactions with the library
 */
+ (nonnull instancetype)sharedInstance;

/**
 Initialises the CartrawlerSDK

 @param style an optional style object
 @param customParameters an optional dictionary of custom parameters, see documentation for further details
 @param isProduction a boolean indicating if the SDK should point to the production or test endpoint
 */
- (void)initialiseSDKWithStyle:(nullable CTStyle *)style
              customParameters:(nullable NSDictionary *)customParameters
                    production:(BOOL)isProduction;


// MARK: Single point initialisation

// MARK: Stand Alone

/**
 Presents the Standalone flow as a modal over the presenting view controller
 The SDK must be initialised before calling this method

 @param presentingViewController the presenting view controller
 @param clientID a client ID
 @param countryCode a country code
 @param currencyCode a currency code
 @param languageCode a language code
 @param passengers a passengers array
 */
- (void)presentStandAloneFromViewController:(nonnull UIViewController *)presentingViewController
                                   clientID:(nonnull NSString *)clientID
                                countryCode:(nullable NSString *)countryCode
                               currencyCode:(nullable NSString *)currencyCode
                               languageCode:(nullable NSString *)languageCode
                                 passengers:(nullable NSArray<CTPassenger *> *)passengers;

/**
 Presents the Standalone flow as a modal over the presenting view controller
 The SDK must be initialised before calling this method
 
 @param presentingViewController the presenting view controller
 @param clientID a client ID
 @param countryCode a country code
 @param currencyCode a currency code
 @param languageCode a language code
 @param pickupDate a pickup date
 @param dropOffDate an optional return date, defaults to three days after pickup date if nil
 @param airportCode an airport code
 @param pickupLocationID a pickup location ID
 @param dropOffLocationID a drop off location ID
 @param pinnedVehicleID a vehicle reference ID
 @param passengers a passengers array
 */
- (void)presentStandAloneFromViewController:(nonnull UIViewController *)presentingViewController
                                   clientID:(nonnull NSString *)clientID
                                countryCode:(nullable NSString *)countryCode
                               currencyCode:(nullable NSString *)currencyCode
                               languageCode:(nullable NSString *)languageCode
                                 pickupDate:(nullable NSDate *)pickupDate
                                dropOffDate:(nullable NSDate *)dropOffDate
                                   IATACode:(nullable NSString *)airportCode
                           pickupLocationID:(nullable NSString *)pickupLocationID
                          dropOffLocationID:(nullable NSString *)dropOffLocationID
                            pinnedVehicleID:(nullable NSString *)pinnedVehicleID
                                 passengers:(nullable NSArray<CTPassenger *> *)passengers;

// MARK:  InPath

/**
 Initialises the In Path flow
 This triggers a fetch for best daily rate which will be passed back in the delegate
 The SDK must be initialised before calling this method

 @param clientID a client ID
 @param currencyCode a currency code
 @param countryCode a country code
 @param languageCode a language code
 @param airportCode an airport code
 @param pickupDate a pickup date
 @param returnDate an optional return date, defaults to three days after pickup date if nil
 @param flightNumber optional flight number
 @param passengers optional array of passengers
 @param delegate a delegate
 */
- (void)initialiseInPathWithClientID:(nonnull NSString *)clientID
                            currency:(nullable NSString *)currencyCode
                     customerCountry:(nullable NSString *)countryCode
                        languageCode:(nullable NSString *)languageCode
                            IATACode:(nullable NSString *)airportCode
                          pickupDate:(nonnull NSDate *)pickupDate
                          returnDate:(nullable NSDate *)returnDate
                     pinnedVehicleID:(nullable NSString *)pinnedVehicleID
                        flightNumber:(nullable NSString *)flightNumber
                          passengers:(nullable NSArray<CTPassenger *> *)passengers
                            delegate:(nullable id <CarTrawlerSDKDelegate>)delegate;

/**
 Present the Car Trawler InPath flow from the provided view controller
 The SDK must be initialised, and the In Path card added before calling this method
 */
- (void)presentInPathFromViewController:(nonnull UIViewController *)presentingViewController
                                appType:(CTAppType)appType;

/**
 Returns Rental Card to the client
 */
- (nonnull UIView *)getRentalCard;


/**
 Refreshes the in path search.
 This will trigger a new best daily rate fetch, and the subsequent delegate callbacks
 The SDK must be initialised, and the In Path card added before calling this method
 */
- (void)refreshInPath;

/**
 Removes an added vehicle if selected
 */
- (void)removeVehicle;

/**
 Call this method when a successful In Path payment has been completed.
 
 @param confirmationID The confirmation ID or 'Booking reference'
 @param appType If the confirmation booking is for GT or Rental Path.
 */
- (void)didReceiveBookingConfirmationID:(NSString *)confirmationID
                                appType:(CTAppType)appType;

/**
 This will trigger a new best daily rate fetch, and the subsequent delegate callbacks
 The SDK must be initialised, and a CTBestDailyRateParams object with the necessary parameters must be set before calling this method
 */
- (void)requestBestDailyRate:(CTBestDailyRateParams *)params;

@end

