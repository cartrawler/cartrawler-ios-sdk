//
//  CTConfig.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 29/11/2018.
//  Copyright © 2018 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CTPassenger;

/**
 Enum referring to each flow supported
 */
typedef NS_ENUM(NSUInteger, CTFlowType) {
    CTFlowTypeStandAlone,
    CTFlowTypeInPath,
    CTFlowTypeGroundTransportation,
    CTFlowTypeNone
};

@interface CTConfig : NSObject

@property (nonatomic, strong, readonly) NSString *clientID;
@property (nonatomic, readonly) CTFlowType flowType;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *currencyCode;
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic, strong) NSDate *pickupDate;
@property (nonatomic, strong) NSDate *dropOffDate;
@property (nonatomic, strong) NSString *IATACode;
@property (nonatomic, strong) NSString *pickupIATACode;
@property (nonatomic, strong) NSString *dropOffIATACode;
@property (nonatomic, strong) NSString *flightNumber;
@property (nonatomic, strong) NSString *pickupLocationID;
@property (nonatomic, strong) NSString *dropOffLocationID;
@property (nonatomic, strong) NSString *pinnedVehicleID;
@property (nonatomic, strong) NSArray<CTPassenger *>* passengers;
@property (nonatomic, weak) id delegate;

- (instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithClientID:(nonnull NSString *)clientID andFlow:(CTFlowType)flowType;
- (nonnull instancetype)initWithClientID:(nonnull NSString *)clientID
                                    flow:(CTFlowType)flowType
                             countryCode:(nullable NSString *)countryCode
                            currencyCode:(nullable NSString *)currencyCode
                            languageCode:(nullable NSString *)languageCode
                              pickupDate:(nullable NSDate *)pickupDate
                             dropOffDate:(nullable NSDate *)dropOffDate
                                IATACode:(nullable NSString *)IATACode
                          pickupIATACode:(nullable NSString *)pickupIATACode
                         dropOffIATACode:(nullable NSString *)dropOffIATACode
                            flightNumber:(nullable NSString *)flightNumber
                        pickupLocationID:(nullable NSString *)pickupLocationID
                       dropOffLocationID:(nullable NSString *)dropOffLocationID
                         pinnedVehicleID:(nullable NSString *)pinnedVehicleID
                              passengers:(nullable NSArray<CTPassenger *> *)passengers
                                delegate:(nullable id)delegate;


@end
