//
//  CTSpecialOfferDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 22/07/2024.
//  Copyright © 2024 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, CTOfferType) {
    CTOfferTypeMonetary,
    CTOfferTypePercentage,
};

@interface CTSpecialOfferDetails : NSObject

@property (nonatomic, readonly) CTOfferType type;
@property (nonatomic, readonly, nullable) NSString *shortText;
@property (nonatomic, readonly, nullable) NSString *text;
@property (nonatomic, readonly, nullable) NSNumber *discountAmount;
@property (nonatomic, readonly, nullable) NSNumber *discountedPrice;
@property (nonatomic, readonly, nullable) NSNumber *value;
@property (nonatomic, readonly, nullable) NSNumber *originalPrice;

@end

NS_ASSUME_NONNULL_END
