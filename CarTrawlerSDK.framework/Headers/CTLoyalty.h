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

@property (nonatomic, readonly) NSString *programName;
@property (nonatomic, readonly) NSNumber *points;

@end

NS_ASSUME_NONNULL_END
