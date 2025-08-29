//
//  CTRecentSearch.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 01/10/2021.
//  Copyright © 2021 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTRecentSearch : NSObject

@property (nonatomic, readonly) NSString *pickupLocationName;
@property (nonatomic, readonly) NSString *pickupCountryCode;
@property (nonatomic, readonly) NSString *pickupAddressLine;
@property (nonatomic, readonly) NSString *pickupLatitude;
@property (nonatomic, readonly) NSString *pickupLongitude;
@property (nonatomic, readonly) NSString *pickupCityName;

@property (nonatomic, readonly) NSDate *pickupDate;
@property (nonatomic, readonly) NSDate *pickupTime;
@property (nonatomic, readonly) NSDate *derivedPickupDate;

@property (nonatomic, readonly) NSString *dropoffLocationName;
@property (nonatomic, readonly) NSString *dropoffCountryCode;
@property (nonatomic, readonly) NSString *dropoffAddressLine;
@property (nonatomic, readonly) NSString *dropoffLatitude;
@property (nonatomic, readonly) NSString *dropoffLongitude;
@property (nonatomic, readonly) NSString *dropoffCityName;

@property (nonatomic, readonly) NSDate *dropoffDate;
@property (nonatomic, readonly) NSDate *dropoffTime;
@property (nonatomic, readonly) NSDate *derivedDropoffDate;

@property (nonatomic, assign, readonly) BOOL isAtAirport;

@end

NS_ASSUME_NONNULL_END
