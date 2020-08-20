//
//  CTLoyalty.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 31/07/2020.
//  Copyright © 2020 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTLoyalty : NSObject

@property (nonatomic, readonly) NSString *programId;
@property (nonatomic, readonly) NSNumber *points;
@property (nonatomic, readonly) NSString *number;

@end

NS_ASSUME_NONNULL_END
