//
//  CTPassenger.h
//  CartrawlerSDK
//
//  Created by Lee Maguire on 20/03/2017.
//  Copyright © 2017 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTPassenger : NSObject

@property (nonatomic, readonly, nullable) NSString *firstName;
@property (nonatomic, readonly, nullable) NSString *lastName;
@property (nonatomic, readonly, nullable) NSString *addressLine1;
@property (nonatomic, readonly, nullable) NSString *addressLine2;
@property (nonatomic, readonly, nullable) NSString *city;
@property (nonatomic, readonly, nullable) NSString *postcode;
@property (nonatomic, readonly, nullable) NSString *countryCode;
@property (nonatomic, readonly, nonnull) NSNumber *age;
@property (nonatomic, readonly, nullable) NSString *email;
@property (nonatomic, readonly, nullable) NSString *phone;
@property (nonatomic, readonly, nullable) NSString *phoneCountryPrefix;
@property (nonatomic, readonly, nullable) NSString *loyaltyProgramNumber;
@property (nonatomic, readonly) BOOL isPrimaryDriver;


/**
 Designated initialiser for CTPassenger

 @param firstName The passengers first name
 @param lastName The passengers last name
 @param addressLine1 The passengers address
 @param addressLine2 The passengers address (cont. if available)
 @param city The passengers city of residence
 @param postcode The passengers postcode
 @param countryCode The passengers country code
 @param age the passengers age
 @param isPrimaryDriver Bool to state is the passenger is the lead driver
 @return CTPassenger
 */
- (nonnull instancetype)initWithFirstName:(nullable NSString *)firstName
                                 lastName:(nullable NSString *)lastName
                             addressLine1:(nullable NSString *)addressLine1
                             addressLine2:(nullable NSString *)addressLine2
                                     city:(nullable NSString *)city
                                 postcode:(nullable NSString *)postcode
                              countryCode:(nullable NSString *)countryCode
                                      age:(nonnull NSNumber *)age
                                    email:(nullable NSString *)email
                                    phone:(nullable NSString *)phone
                       phoneCountryPrefix:(nullable NSString *)phoneCountryPrefix
                     loyaltyProgramNumber:(nullable NSString *)loyaltyProgramNumber
                          isPrimaryDriver:(BOOL)isPrimaryDriver;

+ (nullable  CTPassenger *)primaryDriverFromPassengers:(nonnull NSArray *)passengers;

- (NSString * _Nullable)formattedPhoneNumber;

@end
