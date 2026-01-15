//
//  CTAddress.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 24/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTAddress : NSObject

@property (nonatomic, readonly, nonnull) NSString *addressLine;
@property (nonatomic, readonly, nonnull) NSString *countryNameCode;

@end

NS_ASSUME_NONNULL_END
