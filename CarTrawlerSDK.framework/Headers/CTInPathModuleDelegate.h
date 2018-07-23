//
//  CTInPathModuleDelegate.h
//  CarTrawlerSDK
//
//  Created by Alan Mathews on 06/06/2018.
//  Copyright © 2018 Cartrawler. All rights reserved.
//

@class CTVehicleAvailability, CTErrorResponse ,CTMatchedLocation;

@protocol CTInPathModuleDelegate <NSObject>

/**
 Called when the user taps on the cross sell card
 */
- (void)didTapCrossSellCard;

/**
 Called when the vehicles have been fetched and the best daily rate has been calculated
 
 @param price the best daily rate
 @param currency the currency
 */
- (void)didReceiveAvailability:(nonnull CTVehicleAvailability *)availability
                 bestDailyRate:(nonnull NSNumber *)price
                      currency:(nonnull NSString *)currency;

/**
 Called when the call to fetch vehicles fails and the best daily rate cannot be calculated
 */
- (void)didFailToReceiveBestDailyRate:(nonnull CTErrorResponse *)error;

/**
 Called when the in path location has been fetched

 @param matchedLocation matched location
 */
- (void)didReceiveMatchedLocation:(nonnull CTMatchedLocation *)matchedLocation;

@end

