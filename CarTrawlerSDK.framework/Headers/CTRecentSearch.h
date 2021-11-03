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

@property (nonatomic, strong, readonly) NSString *pickupLocationName;
@property (nonatomic, strong, readonly) NSString *pickupCountryCode;
@property (nonatomic, strong, readonly) NSString *pickupAddressLine;
@property (nonatomic, strong, readonly) NSString *pickupLatitude;
@property (nonatomic, strong, readonly) NSString *pickupLongitude;
@property (nonatomic, strong, readonly) NSString *pickupCityName;

@property (nonatomic, strong, readonly) NSDate *pickupDate;
@property (nonatomic, strong, readonly) NSDate *pickupTime;
@property (nonatomic, strong, readonly) NSDate *derivedPickupDate;

@property (nonatomic, strong, readonly) NSString *dropoffLocationName;
@property (nonatomic, strong, readonly) NSString *dropoffCountryCode;
@property (nonatomic, strong, readonly) NSString *dropoffAddressLine;
@property (nonatomic, strong, readonly) NSString *dropoffLatitude;
@property (nonatomic, strong, readonly) NSString *dropoffLongitude;
@property (nonatomic, strong, readonly) NSString *dropoffCityName;

@property (nonatomic, strong, readonly) NSDate *dropoffDate;
@property (nonatomic, strong, readonly) NSDate *dropoffTime;
@property (nonatomic, strong, readonly) NSDate *derivedDropoffDate;

@end

NS_ASSUME_NONNULL_END
