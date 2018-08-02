//
//  GTInPathVehicle.h
//  CarTrawlerSDK
//
//  Created by Alan Mathews on 31/07/2018.
//  Copyright © 2018 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GTInPathVehicle : NSObject

@property (nonatomic, readonly) NSNumber *totalCost;

- (instancetype)initWithTotalCost:(NSNumber *)totalCost;

@end
