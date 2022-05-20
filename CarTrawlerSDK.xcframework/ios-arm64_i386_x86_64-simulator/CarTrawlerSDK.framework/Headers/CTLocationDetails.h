//
//  CTLocationDetails.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 24/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTAddress.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTLocationDetails : NSObject

@property (nonatomic, readonly) BOOL atAirport;
@property (nonatomic, readonly, nonnull) NSString *code;
@property (nonatomic, readonly, nonnull) NSString *iataCode;
@property (nonatomic, readonly, nonnull) NSString *name;
@property (nonatomic, readonly, nonnull) CTAddress *address;
@property (nonatomic, readonly, nonnull) NSString *phoneNumber;

@end

NS_ASSUME_NONNULL_END
