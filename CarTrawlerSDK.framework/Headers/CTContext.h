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

@class CTPassenger;

NS_ASSUME_NONNULL_BEGIN

@interface CTContext : NSObject

@property (nonatomic, strong, readonly) NSString *clientID;
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

- (instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithClientID:(nonnull NSString *)clientID flow:(CTFlowType)flowType;

+ (CTContext *)initWithClientID:(nonnull NSString *)clientID
                    countryCode:(nullable NSString *)countryCode
                   currencyCode:(nullable NSString *)currencyCode
                   languageCode:(nullable NSString *)languageCode
                     passengers:(nullable NSArray<CTPassenger *> *)passengers;

+ (CTContext *)initWithFlowType:(CTFlowType)flowType
                       clientID:(nonnull NSString *)clientID
                    countryCode:(nullable NSString *)countryCode
                   currencyCode:(nullable NSString *)currencyCode
                   languageCode:(nullable NSString *)languageCode
                     pickupDate:(nullable NSDate *)pickupDate
                    dropOffDate:(nullable NSDate *)dropOffDate
                 pickupLocation:(nullable NSString *)pickupLocation
                dropOffLocation:(nullable NSString *)dropOffLocation
                   flightNumber:(nullable NSString *)flightNumber
               pickupLocationID:(nullable NSString *)pickupLocationID
              dropOffLocationID:(nullable NSString *)dropOffLocationID
                pinnedVehicleID:(nullable NSString *)pinnedVehicleID
                     passengers:(nullable NSArray<CTPassenger *> *)passengers
                       delegate:(nullable id <CarTrawlerSDKDelegate>)delegate;


@end

NS_ASSUME_NONNULL_END
