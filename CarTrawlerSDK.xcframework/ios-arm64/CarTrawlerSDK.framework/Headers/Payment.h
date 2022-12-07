//
//  Payment.h
//  CarTrawlerSDK
//
//  Created by Gareth Harte on 11/09/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Payment : NSObject

@property (nonatomic, readonly) NSNumber *authTotal;
@property (nonatomic, readonly) NSString *authCurrency;


- (nonnull instancetype)initWithAuthTotal:(nonnull NSNumber *)authTotal
                             authCurrency:(nonnull NSString *)authCurrency;

@end

NS_ASSUME_NONNULL_END
