//
//  CTWidgetContainer.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 30/05/2019.
//  Copyright © 2019 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTWidgetStyle.h"
#import "CTVehicleDetails.h"

@protocol CTWidgetContainerDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface CTWidgetContainer : UIStackView

- (void)setStatus:(CTWidgetStatus)status;
- (void)setPrice:(NSString *)price;
- (void)setVehicle:(CTVehicleDetails *)vehicle;

@end

NS_ASSUME_NONNULL_END
