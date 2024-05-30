//
//  CTCashDetails.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 17/04/2024.
//  Copyright © 2024 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTCashDetails : NSObject

@property (nonatomic, readonly, nullable) NSString *offerTitle;
@property (nonatomic, readonly, nullable) NSNumber *originalPrice;
@property (nonatomic, readonly, nullable) NSNumber *discountedPrice;
@property (nonatomic, readonly, nullable) NSNumber *discountAmount;
@property (nonatomic, readonly, nullable) NSString *discountPercentage;

@end

NS_ASSUME_NONNULL_END
