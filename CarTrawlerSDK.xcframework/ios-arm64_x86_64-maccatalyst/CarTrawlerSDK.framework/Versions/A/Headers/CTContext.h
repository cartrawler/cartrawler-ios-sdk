//
//  CTContext.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 29/11/2018.
//  Copyright © 2018 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CartrawlerSDK/CarTrawlerSDKDelegate.h>
#import "CTRecentSearch.h"
#import "CTFlightDetails.h"
#import "CTUTMParameters.h"

@class CTPassenger;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTDeeplink) {
    CTDeeplinkNone,
    CTDeeplinkSearchForm,
};

typedef NS_ENUM(NSUInteger, CTURLDeeplinkType) {
    CTURLDeeplinkTypeNone,
    CTURLDeeplinkTypeLanding,
    CTURLDeeplinkTypeSearchForm,
    CTURLDeeplinkTypeSearchResults,
};

typedef NS_ENUM(NSUInteger, CTSettingsIconType) {
    CTSettingsIconCog,
    CTSettingsIconUser,
    CTSettingsIconHamburger
};

@interface CTContext : NSObject

@property (nonatomic, strong, readonly, nonnull) NSString *implementationID;
@property (nonatomic, strong, readonly, nonnull) NSString *clientID;
@property (nonatomic, readonly) CTFlowType flowType;
@property (nonatomic, weak) id <CarTrawlerSDKDelegate> delegate;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *currencyCode;
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic, strong) NSDate *pickupDate;
@property (nonatomic, strong) NSDate *dropOffDate;
@property (nonatomic, strong) NSString *pickupLocation;
@property (nonatomic, strong) NSString *dropOffLocation;
@property (nonatomic, strong) NSString *flightNumber;
@property (nonatomic, strong) NSString *pickupLocationID;
@property (nonatomic, strong) NSString *dropOffLocationID;
@property (nonatomic, strong) NSString *pinnedVehicleID;
@property (nonatomic, strong) NSArray<CTPassenger *>* passengers;
@property (nonatomic, strong) NSString *loyaltyRegex;
@property (nonatomic, strong, nullable) NSString *clientUserIdentifier;
@property (nonatomic) BOOL customCashTreatment;
@property (nonatomic) CTDeeplink deeplink;
@property (nonatomic) CTURLDeeplinkType urlDeeplinkType;
@property (nonatomic, strong) NSString *promotionCode;
@property (nonatomic, strong) CTRecentSearch *recentSearch;
@property (nonatomic) BOOL supplierBenefitAutoApplied;
@property (nonatomic) CTSettingsIconType settingsIconType;
@property (nonatomic) CTFlightDetails *flightDetails;
@property (nonatomic) CTUTMParameters *utmParameters;

- (instancetype)init __attribute__((unavailable("Please use initWithImplementationID:clientID:flow")));
- (nonnull instancetype)initWithClientID:(nonnull NSString *)clientID flow:(CTFlowType)flowType __attribute__((unavailable("Please use initWithImplementationID:clientID:flow")));
- (nonnull instancetype)initWithImplementationID:(nonnull NSString *)implementationID
                                        clientID:(nonnull NSString *)clientID
                                            flow:(CTFlowType)flowType;
- (nonnull instancetype)initWithImplementationID:(nonnull NSString *)implementationID
                                  appDeeplinkURL:(nonnull NSString *)appDeeplinkURL;

@end

NS_ASSUME_NONNULL_END
