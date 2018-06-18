//
//  CarTrawlerSDK.h
//  CarTrawlerSDK
//
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTStyle.h"
#import "CTPassenger.h"
#import "CarTrawlerSDKDelegate.h"
#import "CTInPathVehicle.h"
#import "CTInPathProtocol.h"

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

// MARK: Stand Alone

/**
 Presents the Standalone flow as a modal over the presenting view controller
 The SDK must be initialised before calling this method

 @param presentingViewController the presenting view controller
 @param clientID a client ID
 @param countryCode a country code
 @param currencyCode a currency code
 @param languageCode a language code
 */
- (void)presentStandAloneFromViewController:(nonnull UIViewController *)presentingViewController
                                   clientID:(nonnull NSString *)clientID
                                countryCode:(nullable NSString *)countryCode
                               currencyCode:(nullable NSString *)currencyCode
                               languageCode:(nullable NSString *)languageCode
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
                        flightNumber:(nullable NSString *)flightNumber
                          passengers:(nullable NSArray<CTPassenger *> *)passengers
                            delegate:(nullable id <CarTrawlerSDKDelegate>)delegate;

/**
 Present the Car Trawler InPath flow from the provided view controller
 The SDK must be initialised, and the In Path card added before calling this method
 */
- (void)presentInPathFromViewController:(nonnull UIViewController *)presentingViewController;

/**
 Adds InPath card to the provided container view
 */
- (void)addInPathCardToView:(nonnull UIView *)containerView;

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
 */
- (void)didReceiveBookingConfirmationID:(nonnull NSString *)confirmationID;

@end

