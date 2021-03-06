//
//  CTInPathVehicle.h
//  CartrawlerSDK
//
//  Created by Lee Maguire on 01/12/2016.
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CTExtraEquipment;
@class CTVehicleDetails;
@class CTVehicleCharge;
@class CTLoyalty;

@interface CTInPathVehicle : NSObject

@property (nonatomic, strong, readonly) NSString *firstName;
@property (nonatomic, strong, readonly) NSString *lastName;
@property (nonatomic, strong, readonly) NSString *vehicleName;
@property (nonatomic, strong, readonly) NSString *vehicleOrSimilar;
@property (nonatomic, strong, readonly) NSString *vendorName;
@property (nonatomic, strong, readonly) NSURL *vehicleImageURL;
@property (nonatomic, strong, readonly) NSURL *vendorImageURL;
@property (nonatomic, strong, readonly) NSString *pickupLocationName;
@property (nonatomic, strong, readonly) NSString *dropoffLocationName;
@property (nonatomic, strong, readonly) NSDate *pickupDate;
@property (nonatomic, strong, readonly) NSDate *dropoffDate;
@property (nonatomic, strong, readonly) NSArray <CTExtraEquipment *> *extrasIncludedForFree;
@property (nonatomic, strong, readonly) NSArray <CTExtraEquipment *> *extrasPayableNow;
@property (nonatomic, strong, readonly) NSArray <CTExtraEquipment *> *extrasPayableAtDesk;
@property (nonatomic, readonly) BOOL isBuyingInsurance;
@property (nonatomic, readonly) NSNumber *insuranceCost;
@property (nonatomic, readonly) NSNumber *totalCost;
@property (nonatomic, strong, readonly) NSString *refId;
@property (nonatomic, strong, readonly) CTVehicleDetails *vehicleDetails;
@property (nonatomic, strong, readonly) NSArray <CTVehicleCharge *> *vehicleCharges;
@property (nonatomic, strong, readonly) CTLoyalty *loyalty;

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

@end
