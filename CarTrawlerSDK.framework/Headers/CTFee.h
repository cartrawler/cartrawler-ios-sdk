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
//  Fee.h
//  CarTrawler
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Card Type enum
 */
typedef NS_ENUM(NSUInteger, CTFeeType) {
    /**
     *  The booking fee
     */
    CTFeeTypeBooking,
    /**
     *  Partial payment of the booking
     */
    CTFeeTypePartialPayed,
    /**
     *  The pay now price of the vehicle
     */
    CTFeeTypePayNow,
    /**
     *  The pay at desk price of the vehicle
     */
    CTFeeTypePayAtDesk,
    /**
     *
     */
    CTFeeTypePriceMinusFee,
    /**
     *
     */
    CTFeeTypePayDaily,
    /**
     *
     */
    CTFeeTypePayWeekly,
    /**
     *
     */
    CTFeeTypePayMonthly,
    /**
     *
     */
    CTFeeTypePrepaidDepositFee,
    /**
     *
     */
    CTFeeTypePrepaidDepositTotalFee,
    /**
     *
     */
    CTFeeTypePrepaidDepositRemainderFee,
    /**
     *
     */
    CTFeeTypeUnknown
};


/**
 *  CTFee
 */
@interface CTFee : NSObject
/**
 *  The fee amount
 */
@property (nonatomic, nonnull, readonly) NSNumber *feeAmount;
/**
 *  Currency code associated with price
 */
@property (nonatomic, nonnull, readonly) NSString *feeCurrencyCode;
/**
 *  Purpose of the fee
 */
@property (nonatomic, readonly) CTFeeType feePurpose;
/**
 *  Determines young driver
 */
@property (nonatomic, readonly) BOOL isYoungDriver;
/**
 Initialise with dictionary from JSON

 @param feeDictionary the fee dictionary
 @param TPAFees the supplementary info on fees
 @param rentalCharges the rental charges which contain the title of young driver fee
 @return a CTFee
 */
- (instancetype)initFromFeeDictionary:(NSDictionary *)feeDictionary TPAFees:(NSArray *)TPAFees rentalCharges:(NSArray *)rentalCharges;

@end

NS_ASSUME_NONNULL_END
