//
//  CTWidgetVehicle.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 04/06/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTWidgetVehicle : NSObject

@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *orSimilar;
@property (nonatomic, readonly) NSString *supplierImageURL;
@property (nonatomic, readonly) NSString *vehicleImageURL;
@property (nonatomic, readonly) NSString *seats;
@property (nonatomic, readonly) NSString *bags;
@property (nonatomic, readonly) NSString *doors;
@property (nonatomic, readonly) NSString *transmission;
@property (nonatomic, readonly) NSString *price;

- (instancetype)initWithModelName:(NSString *)modelName
                        orSimilar:(NSString *)orSimilar
                 supplierImageURL:(NSString *)supplierImageURL
                  vehicleImageURL:(NSString *)vehicleImageURL
                            seats:(NSString *)seats
                             bags:(NSString *)bags
                            doors:(NSString *)doors
                     transmission:(NSString *)transmission
                            price:(NSString *)price;

@end

NS_ASSUME_NONNULL_END
