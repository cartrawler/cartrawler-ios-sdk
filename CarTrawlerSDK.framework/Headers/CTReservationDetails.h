//
//  CTReservationDetails.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 21/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTInsuranceDetails.h"
#import "CTLocationDetails.h"
#import "CTRentalInfo.h"

@class CTVehicleDetails;

NS_ASSUME_NONNULL_BEGIN

@interface CTReservationDetails : NSObject

@property (nonatomic, nonnull, readonly) NSString *status;
@property (nonatomic, nonnull, readonly) NSString *givenName;
@property (nonatomic, nonnull, readonly) NSString *surname;
@property (nonatomic, nonnull, readonly) NSString *resId;
@property (nonatomic, nonnull, readonly) NSString *resUid;
@property (nonatomic, nonnull, readonly) NSDate *pickUpDateTime;
@property (nonatomic, nonnull, readonly) NSDate *returnDateTime;
@property (nonatomic, nonnull, readonly) CTLocationDetails *pickUpLocation;
@property (nonatomic, nonnull, readonly) CTLocationDetails *returnLocation;
@property (nonatomic, nullable, readonly) CTInsuranceDetails *insurance;
@property (nonatomic, nonnull, readonly) CTRentalInfo *rentalInfo;
@property (nonatomic, nonnull, readonly) CTVehicleDetails *vehicleDetails;

@end

NS_ASSUME_NONNULL_END
