//
//  CTFlightDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 02/10/2023.
//  Copyright © 2023 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CTFlightPassengerBreakdown.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTFlightDetails : NSObject

@property (nonatomic, strong) CTFlightPassengerBreakdown *passengerBreakdown;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *surName;
@property (nonatomic, strong) NSString *customerEmail;
@property (nonatomic, strong) NSString *flightOrigin;
@property (nonatomic, strong) NSString *flightReturn;
@property (nonatomic) BOOL marketingPreference;
@property (nonatomic, strong) NSString *marketingSegment;
@property (nonatomic, strong) NSString *fareClass;
@property (nonatomic) CGFloat flightFare;
@property (nonatomic) CGFloat basketAmount;
@property (nonatomic) NSUInteger bags;
@property (nonatomic) NSUInteger sportsEquipment;
@property (nonatomic, strong) NSDictionary<NSString *, NSNumber *> *sportsEquipmentBreakdown;
@property (nonatomic, strong) NSString *loyaltyNumber;
@property (nonatomic, strong) NSString *loyaltyTier;
@property (nonatomic, strong) NSString *membershipID;
@property (nonatomic) NSUInteger age;
@property (nonatomic, strong) NSString *tripType;
@property (nonatomic) NSUInteger tripDuration;
@property (nonatomic, strong) NSString *context;
@property (nonatomic, strong) NSString *pnr;
@property (nonatomic, strong) NSString *sessionID;
@property (nonatomic, strong) NSString *campaignID;
@property (nonatomic) BOOL oneWay;

- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END
