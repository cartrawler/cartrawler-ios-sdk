//
//  CTInsuranceDetails.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 24/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTInsuranceDetails : NSObject

@property (nonatomic, readonly) BOOL upSell;
@property (nonatomic, readonly, nonnull) NSString *company;
@property (nonatomic, readonly, nonnull) NSString *insuranceID;
@property (nonatomic, readonly) double cost;
@property (nonatomic, readonly, nonnull) NSString *currency;
@property (nonatomic, readonly) double costCharge;
@property (nonatomic, readonly, nonnull) NSString *currencyCharge;
@property (nonatomic, readonly, nonnull) NSURL *companyLogo;
@property (nonatomic, readonly, nonnull) NSURL *companyPolicyURL;
@property (nonatomic, readonly, nonnull) NSString *text;

@end

NS_ASSUME_NONNULL_END
