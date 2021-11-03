//
//  CTVehicleDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 21/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CTVehicleDetails : NSObject

// OTA
@property (nonatomic, readonly, nonnull) NSString *referenceId;
@property (nonatomic, readonly, nullable) NSString *name;
@property (nonatomic, readonly, nullable) NSString *orSimilar;
@property (nonatomic, readonly, nullable) NSString *code;
@property (nonatomic, readonly, nullable) NSString *vehicleAssetNumber;
@property (nonatomic, readonly, nullable) NSURL *pictureURL;
@property (nonatomic, readonly) NSInteger passengerQuantity;
@property (nonatomic, readonly) NSInteger doorCount;
@property (nonatomic, readonly) NSInteger baggageQuantity;
@property (nonatomic, readonly, nullable) NSString *fuelType;
@property (nonatomic, readonly, nullable) NSString *driveType;
@property (nonatomic, readonly) BOOL airConditionInd;
@property (nonatomic, readonly, nullable) NSString *transmissionType;
@property (nonatomic, readonly, nullable) NSString *size;
@property (nonatomic, readonly, nullable) NSString *categoryText;
@property (nonatomic, readonly) BOOL isPreferredSupplier;

// Supplier
@property (nonatomic, readonly, nullable) NSString *supplier;
@property (nonatomic, readonly, nullable) NSNumber *supplierRating;
@property (nonatomic, readonly, nullable) NSURL *supplierImageURL;
@property (nonatomic, readonly, nullable) NSString *preferredSupplierText;
@property (nonatomic, readonly, nullable) UIColor *preferredSupplierTextColor;
@property (nonatomic, readonly, nullable) UIColor *preferredSupplierBorderColor;
@property (nonatomic, readonly, nullable) NSURL *preferredSupplierLogoURL;

// Widget localization
@property (nonatomic, readonly, nullable) NSString *passengersText;
@property (nonatomic, readonly, nullable) NSString *baggageText;
@property (nonatomic, readonly, nullable) NSString *doorsCountText;
@property (nonatomic, readonly, nullable) NSString *transmissionText;
@property (nonatomic, readonly, nullable) NSString *sizeText;

// Price
@property (nonatomic, readonly, nullable) NSNumber *price;
@property (nonatomic, readonly, nullable) NSNumber *pricePerDay;
@property (nonatomic, readonly, nullable) NSString *currencyCode;

@end

