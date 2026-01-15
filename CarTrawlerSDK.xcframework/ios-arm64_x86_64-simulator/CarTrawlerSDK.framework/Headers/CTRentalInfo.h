//
//  CTRentalInfo.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 24/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTRentalInfo : NSObject

@property (nonatomic, readonly) double cost;
@property (nonatomic, nonnull, readonly) NSString *currency;
@property (nonatomic, readonly) double customerCost;
@property (nonatomic, nonnull, readonly) NSString *customerCurrency;

@end

NS_ASSUME_NONNULL_END
