//
// Copyright 2014 Etrawler
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
//  ExtraEquipment.h
//  CarTrawler
//
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM (NSUInteger, CTExtraEquipmentType) {
    CTExtraEquipmentTypeMobilePhone,
    CTExtraEquipmentTypeLuggageRack,
    CTExtraEquipmentTypeSkiRack,
    CTExtraEquipmentTypeInfantSeat,
    CTExtraEquipmentTypeToddlerSeat,
    CTExtraEquipmentTypeBoosterSeat,
    CTExtraEquipmentTypeSnowChains,
    CTExtraEquipmentTypeNavigationSystem,
    CTExtraEquipmentTypeSnowTires,
    CTExtraEquipmentTypeWinterPackage,
    CTExtraEquipmentTypeNavigationalPhone,
    CTExtraEquipmentTypeSkiEquipped,
    CTExtraEquipmentTypeTollTag,
    CTExtraEquipmentTypeWifi,
    CTExtraEquipmentTypeAdditionalDriver,
    CTExtraEquipmentTypeGPS,
    CTExtraEquipmentTypeBreathalyser,
    CTExtraEquipmentTypeSnowCover,
    CTExtraEquipmentTypeAirCon,
    CTExtraEquipmentTypeGenericExtra
};

typedef NS_ENUM (NSUInteger, CTExtraEquipmentRateType) {
    CTExtraEquipmentRateTypePostPaid,
    CTExtraEquipmentRateTypePrePaid
};

/**
 *  CTExtraEquipment
 */
@interface CTExtraEquipment : NSObject <NSCoding, NSCopying>
/**
 *  The quantity of the equipment
 */
@property (nonatomic, assign) NSInteger qty;
/**
 *  Bool value if is included in rate
 */
@property (nonatomic, readonly) BOOL isIncludedInRate;
/**
 *  Bool value if a guarantee payment or hold is required.
 */
@property (nonatomic, readonly) BOOL isGuaranteedInd;
/**
 *  Bool value if equipment is tax inclusive
 */
@property (nonatomic, readonly) BOOL isTaxInclusive;
/**
 *  Cost of equipment
 */
@property (nonatomic, nonnull, readonly) NSNumber *chargeAmount;
/**
 *  Currency code of equipment
 */
@property (nonatomic, nonnull, readonly) NSString *currencyCode;
/**
 *  The raw equipment type code
 */
@property (nonatomic, nonnull, readonly) NSString *equipType;
/**
 *  The equipment type
 */
@property (nonatomic, readonly) CTExtraEquipmentType equipmentType;
/**
 *  Name of the equipment
 */
@property (nonatomic, nonnull, readonly) NSString *name;
/**
 *  Description of the equipment
 */
@property (nonatomic, nonnull, readonly) NSString *equipDescription;
/**
 *  The rate type
 */
@property (nonatomic, readwrite) CTExtraEquipmentRateType rateType;

@property (nonatomic, readonly) NSInteger maxQuantity;

/**
 *  The quantity of the equipment from VehRetRes response
 */
@property (nonatomic, nonnull, readonly) NSString *quantity;

- (instancetype)initFromDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
