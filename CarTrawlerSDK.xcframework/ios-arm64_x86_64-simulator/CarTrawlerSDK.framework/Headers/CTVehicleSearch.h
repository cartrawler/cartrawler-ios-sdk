//
//  CTVehicleSearch.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 03/09/2024.
//  Copyright © 2024 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTVehicleSearch : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (nonatomic, readonly) BOOL enableLocalNotification;
@property (nonatomic, strong, readonly) NSString *implementationID;
@property (nonatomic, strong, readonly) NSString *clientID;
@property (nonatomic, strong, readonly) NSString *pickupIATA;
@property (nonatomic, strong, readonly) NSString *dropoffIATA;

@property (nonatomic, strong, readonly) NSString *pickupLocationID;
@property (nonatomic, strong, readonly) NSString *dropoffLocationID;

@property (nonatomic, strong, readonly) NSString *age;
@property (nonatomic, strong, readonly) NSString *language;
@property (nonatomic, strong, readonly) NSString *countryCode;
@property (nonatomic, strong, readonly) NSString *currencyCode;

@property (nonatomic, strong, readonly) NSString *pinnedVehicleID;

@property (nonatomic, strong, readonly) NSDate *derivedPickupDate;
@property (nonatomic, strong, readonly) NSDate *derivedDropoffDate;

@property (nonatomic, assign, readonly) NSUInteger vehiclesCount;

@property (nonatomic, assign, readonly) BOOL isAtAirport;

@end

NS_ASSUME_NONNULL_END
