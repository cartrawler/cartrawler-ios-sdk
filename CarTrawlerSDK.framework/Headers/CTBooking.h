//
// copyright 2014 Etrawler
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a nonnull of the License at
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
//  Booking.h
//  CarTrawler
//

#import <Foundation/Foundation.h>
#import "CTFee.h"
#import "CTCustomer.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  CTBooking
 */
@interface CTBooking : NSObject

@property (nonatomic, readonly) NSDictionary *rawData;

/**
 *  Returns bool value if vehicle has air con or not
 */
@property (nonatomic, readonly) BOOL vehIsAirConditioned;
/**
 *  Returns bool value if vehicle is at airport or not
 */
@property (nonatomic, readonly) BOOL isAtAirport;
/**
 *  The pickup date & time
 */
@property (nonatomic, nonnull, readonly) NSDate *puDateTime;
/**
 *  The drop off date & time
 */
@property (nonatomic, nonnull, readonly) NSDate *doDateTime;
/**
 *  The url for the vendor logo
 */
@property (nonatomic, nonnull, readonly) NSURL *vendorImageUrl;
/**
 *  The vendor booking reference
 */
@property (nonatomic, nonnull, readonly) NSString *vendorBookingRef;
/**
 *  The customers emil
 */
@property (nonatomic, nonnull, readonly) NSString *customerEmail;
/**
 *  The customers name title
 */
@property (nonatomic, nonnull, readonly) NSString *customerTitle;
/**
 *  The customers first name
 */
@property (nonatomic, nonnull, readonly) NSString *customerGivenName;
/**
 *  The customers surname
 */
@property (nonatomic, nonnull, readonly) NSString *customerSurname;
/**
 *  The booking confirmation type
 */
@property (nonatomic, nonnull, readonly) NSString *confType;
/**
 *  the booking confirmation ID
 */
@property (nonatomic, nonnull, readonly) NSString *confID;
/**
 *  The name of the vendor
 */
@property (nonatomic, nonnull, readonly) NSString *vendorName;
/**
 *  The vendors ID code
 */
@property (nonatomic, nonnull, readonly) NSString *vendorCode;
/**
 *  The pickup location code
 */
@property (nonatomic, nonnull, readonly) NSString *puLocationCode;
/**
 *  The drop off location code
 */
@property (nonatomic, nonnull, readonly) NSString *doLocationCode;
/**
 *  The pickup location name
 */
@property (nonatomic, nonnull, readonly) NSString *puLocationName;
/**
 *  The drop off location name
 */
@property (nonatomic, nonnull, readonly) NSString *doLocationName;
/**
 *  The vehicle transmisson type in string value
 */
@property (nonatomic, nonnull, readonly) NSString *vehTransmissionType;
/**
 *  The vehicle fuel type in string value
 */
@property (nonatomic, nonnull, readonly) NSString *vehFuelType;
/**
 *  The amount of passengers the vehicle can hold
 */
@property (nonatomic, nonnull, readonly) NSString *vehPassengerQty;
/**
 *  The amount of baggage the vehicle can hold
 */
@property (nonatomic, nonnull, readonly) NSString *vehBaggageQty;
/**
 *  The vehicles ID code
 */
@property (nonatomic, nonnull, readonly) NSString *vehCode;
/**
 *  The category of the vehicle
 */
@property (nonatomic, nonnull, readonly) NSString *vehCategory;
/**
 *  the vehicles door count
 */
@property (nonatomic, nonnull, readonly) NSString *vehDoorCount;
/**
 *  The size of the vehicle
 */
@property (nonatomic, nonnull, readonly) NSString *vehClassSize;
/**
 *  The make / model name of the vehicle
 */
@property (nonatomic, nonnull, readonly) NSString *vehMakeModelName;
/**
 *  The make / model code of the vehicle
 */
@property (nonatomic, nonnull, readonly) NSString *vehMakeModelCode;
/**
 *  Image url for the vehicle
 */
@property (nonatomic, nonnull, readonly) NSURL *vehPictureUrl;
/**
 *  The vehicles asset number
 */
@property (nonatomic, nonnull, readonly) NSString *vehAssetNumber;
/**
 *  The total charge for the booking
 */
@property (nonatomic, nonnull, readonly) NSString *totalChargeAmount;
/**
 *  The estimated charge for the booking
 */
@property (nonatomic, nonnull, readonly) NSString *estimatedTotalAmount;
/**
 *  The currency code of the booking
 */
@property (nonatomic, nonnull, readonly) NSString *currencyCode;
/**
 *  the TPA fee amount
 */
@property (nonatomic, nonnull, readonly) NSString *tpaFeeAmount;
/**
 *  TPA fee currency code
 */
@property (nonatomic, nonnull, readonly) NSString *tpaFeeCurrencyCode;
/**
 *  TPA fee purpose
 */
@property (nonatomic, nonnull, readonly) NSString *tpaFeePurpose;
/**
 *  TPA confirmation type
 */
@property (nonatomic, nonnull, readonly) NSString *tpaConfType;
/**
 *  TPA confirmation ID
 */
@property (nonatomic, nonnull, readonly) NSString *tpaConfID;
/**
 *  Payment rule type
 */
@property (nonatomic, nonnull, readonly) NSString *paymentRuleType;
/**
 *  Payment amount
 */
@property (nonatomic, nonnull, readonly) NSString *paymentAmount;
/**
 *  Payment currency code
 */
@property (nonatomic, nonnull, readonly) NSString *paymentCurrencyCode;
/**
 *  Rental payment transaction code
 */
@property (nonatomic, nonnull, readonly) NSString *rentalPaymentTransactionCode;
/**
 *  Rental payment card type
 */
@property (nonatomic, nonnull, readonly) NSString *rentalPaymentCardType;
/**
 *  Location code
 */
@property (nonatomic, nonnull, readonly) NSString *locationCode;
/**
 *  Location name
 */
@property (nonatomic, nonnull, readonly) NSString *locationName;
/**
 *  Location address
 */
@property (nonatomic, nonnull, readonly) NSString *locationAddress;
/**
 *  Location country name
 */
@property (nonatomic, nonnull, readonly) NSString *locationCountryName;
/**
 *  Location latitude
 */
@property (nonatomic, nonnull, readonly) NSString *locationLatitude;
/**
 *  Location longitude
 */
@property (nonatomic, nonnull, readonly) NSString *locationLongitude;
/**
 *  CTFee array
 */
@property (nonatomic, nonnull, readonly) NSArray<CTFee *> *fees;
/**
 *  Pickup location phone numbers
 */
@property (nonatomic, nonnull, readonly) NSArray<NSString *> *locationPhoneNumbers;

#pragma mark Vars below are only available when using Retrieve Booking
/**
 *  Bookng status
 */
@property (nonatomic, nonnull, readonly) NSString *status;
/**
 *  Booking cancelation policy
 */
@property (nonatomic, nonnull, readonly) NSString *cancelationPolicy;

- (instancetype)initFromRetrievedBookingDictionary:(NSDictionary *)vehReservationDictionary;
- (instancetype)initFromVehReservationDictionary:(NSDictionary *)vehReservationDictionary;

@end

NS_ASSUME_NONNULL_END
