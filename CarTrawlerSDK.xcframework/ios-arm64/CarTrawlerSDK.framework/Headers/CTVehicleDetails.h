//
//  CTVehicleDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 21/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CTCashDetails.h"
#import "CTSpecialOfferDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTVehicleDetails : NSObject

// OTA
@property (nonatomic, readonly) NSString *referenceId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, nullable) NSString *orSimilar;
@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *vehicleAssetNumber;
@property (nonatomic, readonly) NSURL *pictureURL;
@property (nonatomic, readonly) NSInteger passengerQuantity;
@property (nonatomic, readonly) NSInteger doorCount;
@property (nonatomic, readonly) NSInteger baggageQuantity;
@property (nonatomic, readonly) NSString *fuelType;
@property (nonatomic, readonly) NSString *driveType;
@property (nonatomic, readonly) BOOL airConditionInd;
@property (nonatomic, readonly) NSString *transmissionType;
@property (nonatomic, readonly) NSString *size;
@property (nonatomic, readonly) NSString *categoryText;
@property (nonatomic, readonly) BOOL isPreferredSupplier;

// Supplier
@property (nonatomic, readonly) NSString *supplier;
@property (nonatomic, readonly) NSNumber *supplierRating;
@property (nonatomic, readonly) NSURL *supplierImageURL;
@property (nonatomic, readonly) NSString *preferredSupplierText;
@property (nonatomic, readonly, nullable) UIColor *preferredSupplierTextColor;
@property (nonatomic, readonly, nullable) UIColor *preferredSupplierBorderColor;
@property (nonatomic, readonly) NSURL *preferredSupplierLogoURL;

// Widget localization
@property (nonatomic, readonly) NSString *passengersText;
@property (nonatomic, readonly) NSString *baggageText;
@property (nonatomic, readonly) NSString *doorsCountText;
@property (nonatomic, readonly) NSString *transmissionText;
@property (nonatomic, readonly) NSString *sizeText;

// Price
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSNumber *pricePerDay;
@property (nonatomic, readonly) NSString *currencyCode;

@property (nonatomic, readonly, nullable) CTCashDetails *ctCashDetails;
@property (nonatomic, readonly, nullable) NSArray <CTSpecialOfferDetails *> *specialOffers;


@end

NS_ASSUME_NONNULL_END
