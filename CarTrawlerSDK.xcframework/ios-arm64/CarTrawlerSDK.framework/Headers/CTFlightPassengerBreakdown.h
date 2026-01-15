//
//  CTFlightPassengerBreakdown.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 02/10/2023.
//  Copyright © 2023 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTFlightPassengerBreakdown : NSObject

@property (nonatomic) NSUInteger adults;
@property (nonatomic) NSUInteger teens;
@property (nonatomic) NSUInteger children;
@property (nonatomic) NSUInteger infants;

- (nonnull instancetype)initWithAdults:(NSUInteger)adults teens:(NSUInteger)teens children:(NSUInteger)children infants:(NSUInteger)infants;
- (NSDictionary *)toDictionary;
- (NSNumber *)totalPax;
- (NSString *)pax;

@end

NS_ASSUME_NONNULL_END
