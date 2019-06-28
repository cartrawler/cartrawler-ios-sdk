//
//  CTVehicleDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 21/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTVehicleDetails : NSObject

@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSURL *vehicleImageURL;
@property (nonatomic, readonly) NSURL *supplierImageURL;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *supplier;
@property (nonatomic, readonly) NSString *pricePerDayWithCurrency;
@property (nonatomic, readonly) NSString *totalPriceWithCurrency;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSNumber *supplierRating;
@property (nonatomic, readonly) NSNumber *pricePerDay;
@property (nonatomic, readonly) NSNumber *totalPrice;
@property (nonatomic, readonly) NSNumber *seats;
@property (nonatomic, readonly) NSNumber *bags;
@property (nonatomic, readonly) NSNumber *doors;
@property (nonatomic, readonly) NSString *transmission;
@property (nonatomic, readonly) BOOL isAircon;

@end

NS_ASSUME_NONNULL_END
