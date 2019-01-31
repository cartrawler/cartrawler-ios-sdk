//
//  CTBestDailyRateParams.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 29/01/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CartrawlerSDK/CarTrawlerSDKDelegate.h>

@class CTPassenger;

NS_ASSUME_NONNULL_BEGIN

@interface CTBestDailyRateParams : NSObject

@property (nonatomic, weak) id <CarTrawlerSDKDelegate> delegate;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *currencyCode;
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic, strong) NSDate *pickupDate;
@property (nonatomic, strong) NSDate *dropOffDate;
@property (nonatomic, strong) NSString *IATACode;
@property (nonatomic, strong) NSString *pickupLocationID;
@property (nonatomic, strong) NSString *dropOffLocationID;
@property (nonatomic, strong) NSArray<CTPassenger *>* passengers;

+ (nonnull instancetype)bestDailyRateWithDelegate:(nonnull id <CarTrawlerSDKDelegate>)delegate
                                         clientID:(nonnull NSString *)clientID
                                      countryCode:(nonnull NSString *)countryCode
                                     currencyCode:(nonnull NSString *)currencyCode
                                     languageCode:(nonnull NSString *)languageCode
                                       pickupDate:(nonnull NSDate *)pickupDate
                                      dropOffDate:(nonnull NSDate *)dropOffDate
                                         IATACode:(nullable NSString *)IATACode
                                 pickupLocationID:(nullable NSString *)pickupLocationID
                                dropOffLocationID:(nullable NSString *)dropOffLocationID
                                       passengers:(nullable NSArray<CTPassenger *> *)passengers;


@end

NS_ASSUME_NONNULL_END
