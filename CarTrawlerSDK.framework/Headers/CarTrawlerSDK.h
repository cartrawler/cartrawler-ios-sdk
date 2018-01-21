//
//  CarTrawlerSDK.h
//  CarTrawlerSDK
//
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTStyle.h"

FOUNDATION_EXPORT double CarTrawlerSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char CarTrawlerSDKVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface CarTrawlerSDK : NSObject

/**
 Present the Car Trawler rental flow from the provided view controller

 @param presentingViewController the presenting view controller
 @param clientID a client ID
 @param production a boolean indicating if production or developmenr endpoints should be used
 @param language optional initial language code, defaults to EN if nil
 @param country optional initial country code, defaults to current locale country code if nil
 @param currency optional initial currency code, defaults to current locale currency code if nil
 @param style optional style object
 @param customAttributes a dictionary, to pass in custom parameters
 */
- (void)presentCarTrawler:(UIViewController *)presentingViewController
                 clientID:(NSString *)clientID
               production:(BOOL)production
                 language:(nullable NSString *)language
                  country:(nullable NSString *)country
                 currency:(nullable NSString *)currency
                    style:(nullable CTStyle *)style
         customAttributes:(nullable NSDictionary *)customAttributes;

@end

NS_ASSUME_NONNULL_END
