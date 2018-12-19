//
//  CTConfig.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 29/11/2018.
//  Copyright © 2018 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CTPassenger;

@interface CTConfig : NSObject

@property (nonatomic, strong, readonly) NSString *clientID;
@property (nonatomic, strong) NSString *countryCode;
@property (nonatomic, strong) NSString *currencyCode;
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic, strong) NSDate *pickupDate;
@property (nonatomic, strong) NSDate *dropOffDate;
@property (nonatomic, strong) NSString *pickupLocationID;
@property (nonatomic, strong) NSString *dropOffLocationID;
@property (nonatomic, strong) NSString *pinnedVehicleID;
@property (nonatomic, strong) NSArray<CTPassenger *>* passengers;

- (instancetype)init NS_UNAVAILABLE;
- (nonnull instancetype)initWithClientID:(nonnull NSString *)clientID NS_DESIGNATED_INITIALIZER;

@end
