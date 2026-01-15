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
#import "CTLoyalty.h"
#import "CTVehicleDetails.h"
#import "CTSupplierBenefitDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTReservationDetails : NSObject

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *paymentStatus;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *surname;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *resId;
@property (nonatomic, readonly) NSString *resUid;
@property (nonatomic, readonly) NSDate *pickUpDateTime;
@property (nonatomic, readonly) NSDate *returnDateTime;
@property (nonatomic, readonly) CTLocationDetails *pickUpLocation;
@property (nonatomic, readonly) CTLocationDetails *returnLocation;
@property (nonatomic, nullable, readonly) CTInsuranceDetails *insurance;
@property (nonatomic, readonly) CTRentalInfo *rentalInfo;
@property (nonatomic, readonly) CTVehicleDetails *vehicleDetails;
@property (nonatomic, nullable, readonly) CTLoyalty *loyalty;
@property (nonatomic, nullable, readonly) NSArray <CTSupplierBenefitDetails *> *supplierBenefits;

@end

NS_ASSUME_NONNULL_END
