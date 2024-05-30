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
//  VehicleCharge.h
//  CarTrawler
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTVehicleChargeCalculation) {
    CTVehicleChargeCalculationAfterPickup,
    CTVehicleChargeCalculationBeforePickup,
};

typedef NS_ENUM(NSUInteger, CTPurposeCode) {
    CTPurposeCodeCollisionDamageWaiver,
    CTPurposeCodeLocalTaxes,
    CTPurposeCodeAdditionalDistance,
    CTPurposeCodeSnowChain,
    CTPurposeCodeAdditionalDriver,
    CTPurposeCodeYoungDriver,
    CTPurposeCodeSnowTyres,
    CTPurposeCodeSeniorDriver,
    CTPurposeCodeOutOfHoursPickup,
    CTPurposeCodeOutOfHoursDropOff,
    CTPurposeCodeTankOfFuel,
    CTPurposeCodeAirport,
    CTPurposeCodeExcessReimburseInsurance,
    CTPurposeCodeTheftProtection,
    CTPurposeCodeThirdPartyProtection,
    CTPurposeCodeTollPass,
    CTPurposeCodeOneWayRental,
    CTPurposeCodeBreakdown24Hour,
    CTPurposeCodeMisc,
    CTPurposeCodeMeetLate,
    CTPurposeCodeUnlimitedMileage,
    CTPurposeCodeDeliveryFee,
    CTPurposeCodeCollectionFee,
    CTPurposeCodeLimitedMileage,
    CTPurposeCodeFuelAdmin,
    CTPurposeCodeZeroExcess,
    CTPurposeCodeOtherFees,
    CTPurposeCodeTotalFeesAndCharges,
    CTPurposeCodeGeneric,
    CTPurposeCodeUnknown,
};

/**
 *  CTVehicleCharge
 */
@interface CTVehicleCharge : NSObject <NSCoding>

/**
 *  Description of charge
 */
@property (nonatomic, nonnull, readonly) NSString *chargeDescription;
/**
 *  Bool value if car is tax inclusive
 */
@property (nonatomic, readonly) BOOL isTaxInclusive;
/**
 *  Bool value if this charge is included in the rate
 */
@property (nonatomic, readonly) BOOL isIncludedInRate;
/**
 *  Amount value of the vehicle charge
 */
@property (nonatomic, nonnull, readonly) NSNumber *amount;
/**
 *  Currency code
 */
@property (nonatomic, nonnull, readonly) NSString *currencyCode;
/**
 *  Purpose of the charge
 */
@property (nonatomic, nonnull, readonly) NSString *purpose;
/**
 *  Applicability of vehicle charge
 */
@property (nonatomic, readonly) CTVehicleChargeCalculation calculation;
/**
 *  Amount value of the excess vehicle charge
 */
@property (nonatomic, nonnull, readonly) NSNumber *excessAmount;
/**
 *  Currency code of the excess vehicle charge
 */
@property (nonatomic, nonnull, readonly) NSString *excessCurrencyCode;
/**
 *  Mapped purpose code of the vehicle charge
 */
@property (nonatomic, readonly) CTPurposeCode purposeCode;

+ (CTPurposeCode)purposeCodeFromString:(NSString *)purposeCodeString;

@end

NS_ASSUME_NONNULL_END
