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
#import "CTInPathProtocol.h"
#import "CTCustomer.h"
#import "CTFee.h"
#import "CTAPIQueryParams.h"
#import "CTContext.h"
#import "CTWidgetContainer.h"
#import "CTReservationDetails.h"
#import "CTVehicleCharge.h"
#import "CTRecentSearch.h"

FOUNDATION_EXPORT double CarTrawlerSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char CarTrawlerSDKVersionString[];

static NSString * _Nonnull const CTOrderId = @"orderID";
static NSString * _Nonnull const CTMyAccountID = @"myAccountId";
static NSString * _Nonnull const CTVisitorId = @"visitorId";

typedef void (^CTClearStorageCompletion)(NSError * _Nullable error);
typedef void (^CTReservationCompletion)(CTReservationDetails * _Nullable reservationDetails, NSError * _Nullable error);
typedef void (^CTRecentSearchesCompletion)(NSArray<CTRecentSearch *> * _Nullable recentSearches, NSError * _Nullable error);
typedef void (^CTRemoveRecentSearchesCompletion)(BOOL success, NSError * _Nullable error);

/**
 Please refer to cartrawler.github.io for full documentation
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

/**
 Set the context before presentation
 The SDK must be initialised before calling this method
 
 @param context the instance with initalisation properties
 */
- (nonnull instancetype)setContext:(nonnull CTContext *)context;

/**
 Presents a modal over the presenting view controller given the context
 The SDK must be initialised before calling this method
 
 @param viewController the presenting view controller
 @param context which gives the parameters to be presented
 */
- (void)presentFromViewController:(nonnull UIViewController *)viewController context:(nonnull CTContext *)context;

/**
 Present the Car Trawler InPath flow from the provided view controller
 The SDK must be initialised, and the In Path card added before calling this method
 */
- (void)presentInPathFromViewController:(nonnull UIViewController *)presentingViewController;


/**
 Returns Rental Card to the client
 */
- (nonnull UIView *)getRentalCard;

/**
 Returns Widget to the client
 */
- (nonnull CTWidgetContainer *)getWidgetWithStatus:(CTWidgetStatus)status
                                             style:(nullable CTWidgetStyle *)style
                                      withDelegate:(nullable id <CTWidgetContainerDelegate>)delegate NS_SWIFT_NAME(getWidget(status:style:delegate:));

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

/**
 This will trigger a request to retrieve a booking reservation matching the passed in booking ID, and the subsequent delegate callbacks
 The SDK must be initialised before calling this method
 */
- (void)requestReservationDetails:(nonnull CTAPIQueryParams *)params completion:(nonnull CTReservationCompletion)completion;

/**
 This will trigger a new best daily rate fetch, and the subsequent delegate callbacks
 The SDK must be initialised, and a CTAPIQueryParams object with the necessary parameters must be set before calling this method
 */
- (void)requestBestDailyRate:(nonnull CTAPIQueryParams *)params;

/**
 This will trigger a new vehicle request call
 The SDK must be initialised, and a CTAPIQueryParams object with the necessary parameters must be set before calling this method
 */
- (void)requestVehicles:(nonnull CTAPIQueryParams *)params;

/**
 This method returns the recent searches
 */
- (void)requestRecentSearches:(nonnull CTRecentSearchesCompletion)completion;

/**
 Remove a recent search
 */
- (void)removeRecentSearch:(nonnull CTRecentSearch *)recentSearch completion:(nonnull CTRemoveRecentSearchesCompletion)completion;

/**
 Remove all recent searches
 */
- (void)removeAllRecentSearches;

/**
 This will clear all storage
 */
- (void)clearStorage:(nonnull CTClearStorageCompletion)completion;

@end

