//
//  CTInPathVehicle.h
//  CartrawlerSDK
//
//  Created by Lee Maguire on 01/12/2016.
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CTExtraEquipment;
@class CTVehicleDetails;
@class CTVehicleCharge;
@class CTLoyalty;

@interface CTInPathVehicle : NSObject

@property (nonatomic, nullable, strong, readonly) NSString *firstName;
@property (nonatomic, nullable, strong, readonly) NSString *lastName;
@property (nonatomic, strong, readonly) NSString *vehicleName;
@property (nonatomic, nullable, strong, readonly) NSString *vehicleOrSimilar;
@property (nonatomic, strong, readonly) NSString *vendorName;
@property (nonatomic, strong, readonly) NSURL *vehicleImageURL;
@property (nonatomic, nullable, strong, readonly) NSURL *vendorImageURL;
@property (nonatomic, strong, readonly) NSString *pickupLocationName;
@property (nonatomic, strong, readonly) NSString *dropoffLocationName;
@property (nonatomic, strong, readonly) NSDate *pickupDate;
@property (nonatomic, strong, readonly) NSDate *dropoffDate;
@property (nonatomic, nullable, strong, readonly) NSArray <CTExtraEquipment *> *extrasIncludedForFree;
@property (nonatomic, nullable, strong, readonly) NSArray <CTExtraEquipment *> *extrasPayableNow;
@property (nonatomic, nullable, strong, readonly) NSArray <CTExtraEquipment *> *extrasPayableAtDesk;
@property (nonatomic, readonly) BOOL isBuyingInsurance;
@property (nonatomic, nullable, readonly) NSNumber *insuranceCost;
@property (nonatomic, nullable, readonly) NSNumber *totalCost;
@property (nonatomic, strong, readonly) NSString *refId;
@property (nonatomic, nullable, strong, readonly) CTVehicleDetails *vehicleDetails;
@property (nonatomic, nullable, strong, readonly) NSArray <CTVehicleCharge *> *vehicleCharges;
@property (nonatomic, nullable, strong, readonly) CTLoyalty *loyalty;
@property (nonatomic, nullable, strong, readonly) NSString *pickupDateString;
@property (nonatomic, nullable, strong, readonly) NSString *dropoffDateString;
@property (nonatomic, strong, readonly) NSString *language;
@property (nonatomic, strong, readonly) NSString *currency;
@property (nonatomic, strong, readonly) NSNumber *age;
@property (nonatomic, strong, readonly) NSString *residency;

/**
 *  The pay now price, this amount will be taken from the customers card at the time of booking. This price is made up from the deposit amount + insurance cost (if purchased)
 */
@property (nonatomic, readonly) NSNumber *payNowPrice;
/**
 *  The pay at desk price, this is the amount the customer will pay at the vendors desk when picking up the vehicle
 */
@property (nonatomic, readonly) NSNumber *payAtDeskPrice;
/**
 *  The later price, this is the amount that will be deducted from the customers payment card 14 days after the booking
 */
@property (nonatomic, readonly) NSNumber *payLaterPrice;
/**
 *  the booking fee for the rental
 */
@property (nonatomic, readonly) NSNumber *bookingFeePrice;

NS_ASSUME_NONNULL_END

@end
